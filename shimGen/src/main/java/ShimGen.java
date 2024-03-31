import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class ShimGen {
    record Type(String name, String format, String type) {
        static Map<String, Type> TYPES = Set.of(
            new Type("int", "%d", "int32_t"),
            new Type("byte[]", "%p", "int8_t*"),
            new Type("IntPtr", "%p", "void*"),
            new Type("void", null, "void"),
            new Type("ref Engine.BasicVal", "%p", "DuelBasicVal*"),
            new Type("uint", "%d", "uint32_t"),
            new Type("int[]", "%p", "int32_t*"),
            new Type("Engine.ThreadRunEffectDeleg", "%p", "DuelThreadRunEffectDeleg"),
            new Type("Engine.ThreadIsBusyEffectDeleg", "%p", "DuelThreadIsBusyEffectDeleg"),
            new Type("Engine.AddRecord", "%p", "DuelAddRecord"),
            new Type("Engine.NowRecord", "%p", "DuelNowRecord"),
            new Type("Engine.RecordNext", "%p", "DuelRecordNext"),
            new Type("Engine.RecordBegin", "%p", "DuelRecordBegin"),
            new Type("Engine.IsRecordEnd", "%p", "DuelIsRecordEnd"),
            new Type("bool", "%s", "DuelBool")
        ).stream().collect(Collectors.toUnmodifiableMap(Type::name, Function.identity()));

        public static Type get(String string) {
            var result = TYPES.get(string);
            if(result == null) {
                System.out.println(string);
                System.exit(0);
            }
            return result;
        }
    }

    record Argument(Type type, String name) {}

    static final class Shim {
        private final String name;
        private final Type result;
        private final Argument[] args;

        Shim(String line) {
            // void DLL_DuelSysSetDeck2(int player, int[] mainDeck, int mainNum, int[] extraDeck, int extraNum, int[] sideDeck, int sideNum)
            var split = line.split(" ", 2);
            result = Type.get(split[0]);
            split = split[1].split("\\(");
            name = split[0].substring(4);
            var argString = split[1].substring(0, split[1].length() - 1);
            if(argString.isBlank()) {
                args = new Argument[0];
            } else {
                split = argString.split(", ");
                args = Stream.of(split)
                    .map((arg) -> {
                        var index = arg.lastIndexOf(' ');
                        return new Argument(Type.get(arg.substring(0, index)), arg.substring(index + 1));
                    })
                    .toArray(Argument[]::new);
            }
        }

        public void write(BufferedWriter writer) {
            /*
            static CardGetAttrType CardGetAttr = NULL;
            int32_t CardGetAttrShim(int32_t cardId) {
                shimLog("CardGetAttrShim(%d)", cardId);
                int32_t result = CardGetAttr(cardId);
                shimLog(" %d\n", result);
                return result;
            }
             */
            try {
                writer.write("static " + name + "Type " + name + " = NULL;\n");
                writer.write(result.type + " " + name + "Shim(");
                if(args.length != 0) {
                    int i;
                    for (i = 0; i < args.length - 1; i++) {
                        var arg = args[i];
                        writer.write(arg.type.type + " " + arg.name + ", ");
                    }
                    var arg = args[i];
                    writer.write(arg.type.type + " " + arg.name);
                } else {
                    writer.write("void");
                }
                writer.write(") {\n");

                writer.write("    shimLog(\"" + name + "(");
                if(args.length != 0) {
                    int i;
                    for (i = 0; i < args.length - 1; i++) {
                        var arg = args[i];
                        writer.write(arg.type.format + ", ");
                    }
                    var arg = args[i];
                    writer.write(arg.type.format);
                }
                writer.write(")");

                if(result.format == null) {
                    writer.write("\\n");
                } else {
                    writer.write(" ");
                }
                writer.write("\"");

                for (Argument arg : args) {
                    writer.write(", " + arg.name);
                }
                writer.write(");\n");

                writer.write("    ");
                if(result.format != null) {
                    writer.write(result.type + " result = ");
                }
                writer.write(name + "(");
                if(args.length != 0) {
                    int i;
                    for(i = 0; i < args.length - 1; i++) {
                        writer.write(args[i].name + ", ");
                    }
                    writer.write(args[i].name);
                }
                writer.write(");\n");
                if(result.format != null) {
                    writer.write("    shimLog(\" " + result.format + "\\n\", result);\n");
                    writer.write("    return result;\n");
                }

                writer.write("}\n");
                writer.newLine();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }

        public String name() {
            return name;
        }

        public Type result() {
            return result;
        }

        public Argument[] args() {
            return args;
        }
    }

    public static void main(String[] args) throws Throwable {
        try(
            var reader = Files.newBufferedReader(Path.of("functions.txt"));
            var writer = Files.newBufferedWriter(Path.of("shims.c"))
        ) {
            reader.lines()
                .map(Shim::new)
                .forEachOrdered((shim) -> shim.write(writer));
        }
    }
}
