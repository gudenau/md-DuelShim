#include "shims.h"

#include <windows.h>
#include "detours.h"

#include <stdio.h> //TODO Delete and replace printf with hookLog

void hookLog(const char* format, ...);

static SetCardPropertyType SetCardProperty = NULL;
int32_t SetCardPropertyShim(int8_t* data, int32_t size) {
    hookLog("SetCardProperty(%p, %d)", data, size);
    int32_t result = SetCardProperty(data, size);
    hookLog(" %d\n", result);
    return result;
}

static SetInternalIDType SetInternalID = NULL;
void SetInternalIDShim(int8_t* data) {
    hookLog("SetInternalID(%p)\n", data);
    SetInternalID(data);
}

static SetCardSameType SetCardSame = NULL;
void SetCardSameShim(int8_t* data, int32_t size) {
    hookLog("SetCardSame(%p, %d)\n", data, size);
    SetCardSame(data, size);
}

static SetCardNamedType SetCardNamed = NULL;
void SetCardNamedShim(int8_t* data) {
    hookLog("SetCardNamed(%p)\n", data);
    SetCardNamed(data);
}

static SetCardLinkType SetCardLink = NULL;
void SetCardLinkShim(int8_t* data, int32_t size) {
    hookLog("SetCardLink(%p, %d)\n", data, size);
    SetCardLink(data, size);
}

static SetCardGenreType SetCardGenre = NULL;
void SetCardGenreShim(int8_t* data) {
    hookLog("SetCardGenre(%p)\n", data);
    SetCardGenre(data);
}

static CardGetInternalIDType CardGetInternalID = NULL;
int32_t CardGetInternalIDShim(int32_t cardId) {
    hookLog("CardGetInternalID(%d)", cardId);
    int32_t result = CardGetInternalID(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetTypeType CardGetType = NULL;
int32_t CardGetTypeShim(int32_t cardId) {
    hookLog("CardGetType(%d)", cardId);
    int32_t result = CardGetType(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetAttrType CardGetAttr = NULL;
int32_t CardGetAttrShim(int32_t cardId) {
    hookLog("CardGetAttr(%d)", cardId);
    int32_t result = CardGetAttr(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetStarType CardGetStar = NULL;
int32_t CardGetStarShim(int32_t cardId) {
    hookLog("CardGetStar(%d)", cardId);
    int32_t result = CardGetStar(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetLevelType CardGetLevel = NULL;
int32_t CardGetLevelShim(int32_t cardId) {
    hookLog("CardGetLevel(%d)", cardId);
    int32_t result = CardGetLevel(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetRankType CardGetRank = NULL;
int32_t CardGetRankShim(int32_t cardId) {
    hookLog("CardGetRank(%d)", cardId);
    int32_t result = CardGetRank(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetScaleLType CardGetScaleL = NULL;
int32_t CardGetScaleLShim(int32_t cardId) {
    hookLog("CardGetScaleL(%d)", cardId);
    int32_t result = CardGetScaleL(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetScaleRType CardGetScaleR = NULL;
int32_t CardGetScaleRShim(int32_t cardId) {
    hookLog("CardGetScaleR(%d)", cardId);
    int32_t result = CardGetScaleR(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetLinkNumType CardGetLinkNum = NULL;
int32_t CardGetLinkNumShim(int32_t cardId) {
    hookLog("CardGetLinkNum(%d)", cardId);
    int32_t result = CardGetLinkNum(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetLinkMaskType CardGetLinkMask = NULL;
int32_t CardGetLinkMaskShim(int32_t cardId) {
    hookLog("CardGetLinkMask(%d)", cardId);
    int32_t result = CardGetLinkMask(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetIconType CardGetIcon = NULL;
int32_t CardGetIconShim(int32_t cardId) {
    hookLog("CardGetIcon(%d)", cardId);
    int32_t result = CardGetIcon(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetFrameType CardGetFrame = NULL;
int32_t CardGetFrameShim(int32_t cardId) {
    hookLog("CardGetFrame(%d)", cardId);
    int32_t result = CardGetFrame(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetKindType CardGetKind = NULL;
int32_t CardGetKindShim(int32_t cardId) {
    hookLog("CardGetKind(%d)", cardId);
    int32_t result = CardGetKind(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetAtkType CardGetAtk = NULL;
int32_t CardGetAtkShim(int32_t cardId) {
    hookLog("CardGetAtk(%d)", cardId);
    int32_t result = CardGetAtk(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetDefType CardGetDef = NULL;
int32_t CardGetDefShim(int32_t cardId) {
    hookLog("CardGetDef(%d)", cardId);
    int32_t result = CardGetDef(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetAtk2Type CardGetAtk2 = NULL;
int32_t CardGetAtk2Shim(int32_t cardId) {
    hookLog("CardGetAtk2(%d)", cardId);
    int32_t result = CardGetAtk2(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetDef2Type CardGetDef2 = NULL;
int32_t CardGetDef2Shim(int32_t cardId) {
    hookLog("CardGetDef2(%d)", cardId);
    int32_t result = CardGetDef2(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetLimitationType CardGetLimitation = NULL;
int32_t CardGetLimitationShim(int32_t cardId) {
    hookLog("CardGetLimitation(%d)", cardId);
    int32_t result = CardGetLimitation(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardIsThisCardGenreType CardIsThisCardGenre = NULL;
int32_t CardIsThisCardGenreShim(int32_t cardId, int32_t genreId) {
    hookLog("CardIsThisCardGenre(%d, %d)", cardId, genreId);
    int32_t result = CardIsThisCardGenre(cardId, genreId);
    hookLog(" %d\n", result);
    return result;
}

static CardIsThisSameCardType CardIsThisSameCard = NULL;
int32_t CardIsThisSameCardShim(int32_t cardA, int32_t cardB) {
    hookLog("CardIsThisSameCard(%d, %d)", cardA, cardB);
    int32_t result = CardIsThisSameCard(cardA, cardB);
    hookLog(" %d\n", result);
    return result;
}

static CardGetOriginalIDType CardGetOriginalID = NULL;
int32_t CardGetOriginalIDShim(int32_t cardId) {
    hookLog("CardGetOriginalID(%d)", cardId);
    int32_t result = CardGetOriginalID(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetOriginalID2Type CardGetOriginalID2 = NULL;
int32_t CardGetOriginalID2Shim(int32_t cardId) {
    hookLog("CardGetOriginalID2(%d)", cardId);
    int32_t result = CardGetOriginalID2(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetAlterIDType CardGetAlterID = NULL;
int32_t CardGetAlterIDShim(int32_t cardId) {
    hookLog("CardGetAlterID(%d)", cardId);
    int32_t result = CardGetAlterID(cardId);
    hookLog(" %d\n", result);
    return result;
}

static CardGetAltCardIDType CardGetAltCardID = NULL;
int32_t CardGetAltCardIDShim(int32_t cardId, int32_t alterID) {
    hookLog("CardGetAltCardID(%d, %d)", cardId, alterID);
    int32_t result = CardGetAltCardID(cardId, alterID);
    hookLog(" %d\n", result);
    return result;
}

static CardCheckNameType CardCheckName = NULL;
int32_t CardCheckNameShim(int32_t cardId, int32_t nameType) {
    hookLog("CardCheckName(%d, %d)", cardId, nameType);
    int32_t result = CardCheckName(cardId, nameType);
    hookLog(" %d\n", result);
    return result;
}

static CardGetLinkCardsType CardGetLinkCards = NULL;
int32_t CardGetLinkCardsShim(int32_t cardId, void* pLinkID) {
    hookLog("CardGetLinkCards(%d, %p)", cardId, pLinkID);
    int32_t result = CardGetLinkCards(cardId, pLinkID);
    hookLog(" %d\n", result);
    return result;
}

static CardGetBasicValType CardGetBasicVal = NULL;
int32_t CardGetBasicValShim(int32_t cardId, DuelBasicVal* pVal) {
    hookLog("CardGetBasicVal(%d, %p)", cardId, pVal);
    int32_t result = CardGetBasicVal(cardId, pVal);
    hookLog(" %d\n", result);
    return result;
}

static CardIsThisTunerMonsterType CardIsThisTunerMonster = NULL;
int32_t CardIsThisTunerMonsterShim(int32_t cardId) {
    hookLog("CardIsThisTunerMonster(%d)", cardId);
    int32_t result = CardIsThisTunerMonster(cardId);
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixNumType DuelDlgGetMixNum = NULL;
int32_t DuelDlgGetMixNumShim(void) {
    hookLog("DuelDlgGetMixNum()");
    int32_t result = DuelDlgGetMixNum();
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixTypeType DuelDlgGetMixType = NULL;
int32_t DuelDlgGetMixTypeShim(int32_t index) {
    hookLog("DuelDlgGetMixType(%d)", index);
    int32_t result = DuelDlgGetMixType(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixDataType DuelDlgGetMixData = NULL;
int32_t DuelDlgGetMixDataShim(int32_t index) {
    hookLog("DuelDlgGetMixData(%d)", index);
    int32_t result = DuelDlgGetMixData(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgSetResultType DuelDlgSetResult = NULL;
void DuelDlgSetResultShim(uint32_t result) {
    hookLog("DuelDlgSetResult(%d)\n", result);
    DuelDlgSetResult(result);
}

static DuelDlgCanYesNoSkipType DuelDlgCanYesNoSkip = NULL;
int32_t DuelDlgCanYesNoSkipShim(void) {
    hookLog("DuelDlgCanYesNoSkip()");
    int32_t result = DuelDlgCanYesNoSkip();
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetPosMaskOfThisSummonType DuelDlgGetPosMaskOfThisSummon = NULL;
int32_t DuelDlgGetPosMaskOfThisSummonShim(void) {
    hookLog("DuelDlgGetPosMaskOfThisSummon()");
    int32_t result = DuelDlgGetPosMaskOfThisSummon();
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemNumType DuelDlgGetSelectItemNum = NULL;
int32_t DuelDlgGetSelectItemNumShim(void) {
    hookLog("DuelDlgGetSelectItemNum()");
    int32_t result = DuelDlgGetSelectItemNum();
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemStrType DuelDlgGetSelectItemStr = NULL;
int32_t DuelDlgGetSelectItemStrShim(int32_t index) {
    hookLog("DuelDlgGetSelectItemStr(%d)", index);
    int32_t result = DuelDlgGetSelectItemStr(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemEnableType DuelDlgGetSelectItemEnable = NULL;
int32_t DuelDlgGetSelectItemEnableShim(int32_t index) {
    hookLog("DuelDlgGetSelectItemEnable(%d)", index);
    int32_t result = DuelDlgGetSelectItemEnable(index);
    hookLog(" %d\n", result);
    return result;
}

static DlgProcGetSummoningMonsterUniqueIDType DlgProcGetSummoningMonsterUniqueID = NULL;
int32_t DlgProcGetSummoningMonsterUniqueIDShim(void) {
    hookLog("DlgProcGetSummoningMonsterUniqueID()");
    int32_t result = DlgProcGetSummoningMonsterUniqueID();
    hookLog(" %d\n", result);
    return result;
}

static GetRevisionType GetRevision = NULL;
int32_t GetRevisionShim(void) {
    hookLog("GetRevision()");
    int32_t result = GetRevision();
    hookLog(" %d\n", result);
    return result;
}

static GetBinHashType GetBinHash = NULL;
int32_t GetBinHashShim(int32_t iIndex) {
    hookLog("GetBinHash(%d)", iIndex);
    int32_t result = GetBinHash(iIndex);
    hookLog(" %d\n", result);
    return result;
}

static SetWorkMemoryType SetWorkMemory = NULL;
int32_t SetWorkMemoryShim(void* pWork) {
    hookLog("SetWorkMemory(%p)", pWork);
    int32_t result = SetWorkMemory(pWork);
    hookLog(" %d\n", result);
    return result;
}

static DuelSysInitRushType DuelSysInitRush = NULL;
int32_t DuelSysInitRushShim(void) {
    hookLog("DuelSysInitRush()");
    int32_t result = DuelSysInitRush();
    hookLog(" %d\n", result);
    return result;
}

static DuelSysInitQuestionType DuelSysInitQuestion = NULL;
int32_t DuelSysInitQuestionShim(void* pScript) {
    hookLog("DuelSysInitQuestion(%p)", pScript);
    int32_t result = DuelSysInitQuestion(pScript);
    hookLog(" %d\n", result);
    return result;
}

static DuelSysInitCustomType DuelSysInitCustom = NULL;
int32_t DuelSysInitCustomShim(int32_t fDuelType, DuelBool tag, int32_t life0, int32_t life1, int32_t hand0, int32_t hand1, DuelBool shuf) {
    hookLog("DuelSysInitCustom(%d, %s, %d, %d, %d, %d, %s)", fDuelType, tag ? "true" : "false", life0, life1, hand0, hand1, shuf ? "true" : "false");
    int32_t result = DuelSysInitCustom(fDuelType, tag, life0, life1, hand0, hand1, shuf);
    hookLog(" %d\n", result);
    return result;
}

static DuelSysActType DuelSysAct = NULL;
int32_t DuelSysActShim(void) {
    hookLog("DuelSysAct()");
    int32_t result = DuelSysAct();
    hookLog(" %d\n", result);
    return result;
}

static DuelSysClearWorkType DuelSysClearWork = NULL;
void DuelSysClearWorkShim(void) {
    hookLog("DuelSysClearWork()\n");
    DuelSysClearWork();
}

static DuelSysSetDeck2Type DuelSysSetDeck2 = NULL;
void DuelSysSetDeck2Shim(int32_t player, int32_t* mainDeck, int32_t mainNum, int32_t* extraDeck, int32_t extraNum, int32_t* sideDeck, int32_t sideNum) {
    hookLog("DuelSysSetDeck2(%d, %p, %d, %p, %d, %p, %d)\n", player, mainDeck, mainNum, extraDeck, extraNum, sideDeck, sideNum);
    DuelSysSetDeck2(player, mainDeck, mainNum, extraDeck, extraNum, sideDeck, sideNum);
}

static DuelSetRandomSeedType DuelSetRandomSeed = NULL;
void DuelSetRandomSeedShim(uint32_t seed) {
    hookLog("DuelSetRandomSeed(%d)\n", seed);
    DuelSetRandomSeed(seed);
}

static DuelSetMyPlayerNumType DuelSetMyPlayerNum = NULL;
void DuelSetMyPlayerNumShim(int32_t player) {
    hookLog("DuelSetMyPlayerNum(%d)\n", player);
    DuelSetMyPlayerNum(player);
}

static DuelSetPlayerTypeType DuelSetPlayerType = NULL;
void DuelSetPlayerTypeShim(int32_t player, int32_t type) {
    hookLog("DuelSetPlayerType(%d, %d)\n", player, type);
    DuelSetPlayerType(player, type);
}

static DuelIsHumanType DuelIsHuman = NULL;
int32_t DuelIsHumanShim(int32_t player) {
    hookLog("DuelIsHuman(%d)", player);
    int32_t result = DuelIsHuman(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelMyselfType DuelMyself = NULL;
int32_t DuelMyselfShim(void) {
    hookLog("DuelMyself()");
    int32_t result = DuelMyself();
    hookLog(" %d\n", result);
    return result;
}

static DuelRivalType DuelRival = NULL;
int32_t DuelRivalShim(void) {
    hookLog("DuelRival()");
    int32_t result = DuelRival();
    hookLog(" %d\n", result);
    return result;
}

static DuelIsMyselfType DuelIsMyself = NULL;
int32_t DuelIsMyselfShim(int32_t player) {
    hookLog("DuelIsMyself(%d)", player);
    int32_t result = DuelIsMyself(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsRivalType DuelIsRival = NULL;
int32_t DuelIsRivalShim(int32_t player) {
    hookLog("DuelIsRival(%d)", player);
    int32_t result = DuelIsRival(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelSetCpuParamType DuelSetCpuParam = NULL;
void DuelSetCpuParamShim(int32_t player, uint32_t param) {
    hookLog("DuelSetCpuParam(%d, %d)\n", player, param);
    DuelSetCpuParam(player, param);
}

static DuelSetFirstPlayerType DuelSetFirstPlayer = NULL;
void DuelSetFirstPlayerShim(int32_t player) {
    hookLog("DuelSetFirstPlayer(%d)\n", player);
    DuelSetFirstPlayer(player);
}

static DuelGetDuelResultType DuelGetDuelResult = NULL;
int32_t DuelGetDuelResultShim(void) {
    hookLog("DuelGetDuelResult()");
    int32_t result = DuelGetDuelResult();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetDuelFinishType DuelGetDuelFinish = NULL;
int32_t DuelGetDuelFinishShim(void) {
    hookLog("DuelGetDuelFinish()");
    int32_t result = DuelGetDuelFinish();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetDuelFinishCardIDType DuelGetDuelFinishCardID = NULL;
int32_t DuelGetDuelFinishCardIDShim(void) {
    hookLog("DuelGetDuelFinishCardID()");
    int32_t result = DuelGetDuelFinishCardID();
    hookLog(" %d\n", result);
    return result;
}

static DuelSetDuelLimitedTypeType DuelSetDuelLimitedType = NULL;
void DuelSetDuelLimitedTypeShim(uint32_t limitedType) {
    hookLog("DuelSetDuelLimitedType(%d)\n", limitedType);
    DuelSetDuelLimitedType(limitedType);
}

static SetEffectDelegateType SetEffectDelegate = NULL;
void SetEffectDelegateShim(DuelThreadRunEffectDeleg runEffct, DuelThreadIsBusyEffectDeleg isBusyEffect) {
    hookLog("SetEffectDelegate(%p, %p)\n", runEffct, isBusyEffect);
    SetEffectDelegate(runEffct, isBusyEffect);
}

static DuelIsThisQuickDuelType DuelIsThisQuickDuel = NULL;
int32_t DuelIsThisQuickDuelShim(void) {
    hookLog("DuelIsThisQuickDuel()");
    int32_t result = DuelIsThisQuickDuel();
    hookLog(" %d\n", result);
    return result;
}

static SetCardExistWorkType SetCardExistWork = NULL;
void SetCardExistWorkShim(void* pWork, int32_t size, int32_t count) {
    hookLog("SetCardExistWork(%p, %d, %d)\n", pWork, size, count);
    SetCardExistWork(pWork, size, count);
}

static GetCardExistNumType GetCardExistNum = NULL;
int32_t GetCardExistNumShim(void) {
    hookLog("GetCardExistNum()");
    int32_t result = GetCardExistNum();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetLPType DuelGetLP = NULL;
int32_t DuelGetLPShim(int32_t player) {
    hookLog("DuelGetLP(%d)", player);
    int32_t result = DuelGetLP(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelWhichTurnNowType DuelWhichTurnNow = NULL;
int32_t DuelWhichTurnNowShim(void) {
    hookLog("DuelWhichTurnNow()");
    int32_t result = DuelWhichTurnNow();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCurrentPhaseType DuelGetCurrentPhase = NULL;
uint32_t DuelGetCurrentPhaseShim(void) {
    hookLog("DuelGetCurrentPhase()");
    uint32_t result = DuelGetCurrentPhase();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCurrentStepType DuelGetCurrentStep = NULL;
uint32_t DuelGetCurrentStepShim(void) {
    hookLog("DuelGetCurrentStep()");
    uint32_t result = DuelGetCurrentStep();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCurrentDmgStepType DuelGetCurrentDmgStep = NULL;
uint32_t DuelGetCurrentDmgStepShim(void) {
    hookLog("DuelGetCurrentDmgStep()");
    uint32_t result = DuelGetCurrentDmgStep();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetTurnNumType DuelGetTurnNum = NULL;
uint32_t DuelGetTurnNumShim(void) {
    hookLog("DuelGetTurnNum()");
    uint32_t result = DuelGetTurnNum();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardPropByUniqueIDType DuelGetCardPropByUniqueID = NULL;
void* DuelGetCardPropByUniqueIDShim(int32_t uniqueId) {
    hookLog("DuelGetCardPropByUniqueID(%d)", uniqueId);
    void* result = DuelGetCardPropByUniqueID(uniqueId);
    hookLog(" %p\n", result);
    return result;
}

static DuelGetCardUniqueIDType DuelGetCardUniqueID = NULL;
int32_t DuelGetCardUniqueIDShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelGetCardUniqueID(%d, %d, %d)", player, position, index);
    int32_t result = DuelGetCardUniqueID(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardTurnType DuelGetCardTurn = NULL;
int32_t DuelGetCardTurnShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelGetCardTurn(%d, %d, %d)", player, position, index);
    int32_t result = DuelGetCardTurn(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardFaceType DuelGetCardFace = NULL;
int32_t DuelGetCardFaceShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelGetCardFace(%d, %d, %d)", player, position, index);
    int32_t result = DuelGetCardFace(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardNumType DuelGetCardNum = NULL;
int32_t DuelGetCardNumShim(int32_t player, int32_t locate) {
    hookLog("DuelGetCardNum(%d, %d)", player, locate);
    int32_t result = DuelGetCardNum(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetTopCardIndexType DuelGetTopCardIndex = NULL;
int32_t DuelGetTopCardIndexShim(int32_t player, int32_t locate) {
    hookLog("DuelGetTopCardIndex(%d, %d)", player, locate);
    int32_t result = DuelGetTopCardIndex(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetHandCardOpenType DuelGetHandCardOpen = NULL;
DuelBool DuelGetHandCardOpenShim(int32_t player, int32_t index) {
    hookLog("DuelGetHandCardOpen(%d, %d)", player, index);
    DuelBool result = DuelGetHandCardOpen(player, index);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelSearchCardByUniqueIDType DuelSearchCardByUniqueID = NULL;
uint32_t DuelSearchCardByUniqueIDShim(int32_t uniqueId) {
    hookLog("DuelSearchCardByUniqueID(%d)", uniqueId);
    uint32_t result = DuelSearchCardByUniqueID(uniqueId);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardIDByUniqueID2Type DuelGetCardIDByUniqueID2 = NULL;
uint32_t DuelGetCardIDByUniqueID2Shim(int32_t uniqueId) {
    hookLog("DuelGetCardIDByUniqueID2(%d)", uniqueId);
    uint32_t result = DuelGetCardIDByUniqueID2(uniqueId);
    hookLog(" %d\n", result);
    return result;
}

static DuelCanIDoPutMonsterType DuelCanIDoPutMonster = NULL;
uint32_t DuelCanIDoPutMonsterShim(int32_t player) {
    hookLog("DuelCanIDoPutMonster(%d)", player);
    uint32_t result = DuelCanIDoPutMonster(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelCanIDoSummonMonsterType DuelCanIDoSummonMonster = NULL;
DuelBool DuelCanIDoSummonMonsterShim(int32_t player) {
    hookLog("DuelCanIDoSummonMonster(%d)", player);
    DuelBool result = DuelCanIDoSummonMonster(player);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelCanIDoSpecialSummonType DuelCanIDoSpecialSummon = NULL;
DuelBool DuelCanIDoSpecialSummonShim(int32_t player) {
    hookLog("DuelCanIDoSpecialSummon(%d)", player);
    DuelBool result = DuelCanIDoSpecialSummon(player);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelGetCardInHandType DuelGetCardInHand = NULL;
uint32_t DuelGetCardInHandShim(int32_t player) {
    hookLog("DuelGetCardInHand(%d)", player);
    uint32_t result = DuelGetCardInHand(player);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetCardBasicValType DuelGetCardBasicVal = NULL;
void DuelGetCardBasicValShim(int32_t player, int32_t pos, int32_t index, DuelBasicVal* pVal) {
    hookLog("DuelGetCardBasicVal(%d, %d, %d, %p)\n", player, pos, index, pVal);
    DuelGetCardBasicVal(player, pos, index, pVal);
}

static DuelGetTrapMonstBasicValType DuelGetTrapMonstBasicVal = NULL;
int32_t DuelGetTrapMonstBasicValShim(int32_t cardId, DuelBasicVal* pVal) {
    hookLog("DuelGetTrapMonstBasicVal(%d, %p)", cardId, pVal);
    int32_t result = DuelGetTrapMonstBasicVal(cardId, pVal);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardOverlayNumType DuelGetThisCardOverlayNum = NULL;
int32_t DuelGetThisCardOverlayNumShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardOverlayNum(%d, %d)", player, locate);
    int32_t result = DuelGetThisCardOverlayNum(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static FusionGetMaterialListType FusionGetMaterialList = NULL;
int32_t FusionGetMaterialListShim(int32_t uniqueId, void* list) {
    hookLog("FusionGetMaterialList(%d, %p)", uniqueId, list);
    int32_t result = FusionGetMaterialList(uniqueId, list);
    hookLog(" %d\n", result);
    return result;
}

static FusionIsThisTunedMonsterInTuningType FusionIsThisTunedMonsterInTuning = NULL;
int32_t FusionIsThisTunedMonsterInTuningShim(int32_t wUniqueID) {
    hookLog("FusionIsThisTunedMonsterInTuning(%d)", wUniqueID);
    int32_t result = FusionIsThisTunedMonsterInTuning(wUniqueID);
    hookLog(" %d\n", result);
    return result;
}

static FusionGetMonsterLevelInTuningType FusionGetMonsterLevelInTuning = NULL;
int32_t FusionGetMonsterLevelInTuningShim(int32_t wUniqueID) {
    hookLog("FusionGetMonsterLevelInTuning(%d)", wUniqueID);
    int32_t result = FusionGetMonsterLevelInTuning(wUniqueID);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisCardExistType DuelIsThisCardExist = NULL;
int32_t DuelIsThisCardExistShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisCardExist(%d, %d)", player, locate);
    int32_t result = DuelIsThisCardExist(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectIDAtChainType DuelGetThisCardEffectIDAtChain = NULL;
int32_t DuelGetThisCardEffectIDAtChainShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardEffectIDAtChain(%d, %d)", player, locate);
    int32_t result = DuelGetThisCardEffectIDAtChain(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetAttackTargetMaskType DuelGetAttackTargetMask = NULL;
int32_t DuelGetAttackTargetMaskShim(int32_t player, int32_t locate) {
    hookLog("DuelGetAttackTargetMask(%d, %d)", player, locate);
    int32_t result = DuelGetAttackTargetMask(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardDirectFlagType DuelGetThisCardDirectFlag = NULL;
int32_t DuelGetThisCardDirectFlagShim(int32_t player, int32_t index) {
    hookLog("DuelGetThisCardDirectFlag(%d, %d)", player, index);
    int32_t result = DuelGetThisCardDirectFlag(player, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldAffectIconType DuelGetFldAffectIcon = NULL;
void DuelGetFldAffectIconShim(int32_t player, int32_t locate, void* ptr, int32_t view_player) {
    hookLog("DuelGetFldAffectIcon(%d, %d, %p, %d)\n", player, locate, ptr, view_player);
    DuelGetFldAffectIcon(player, locate, ptr, view_player);
}

static DuelGetThisCardCounterType DuelGetThisCardCounter = NULL;
int32_t DuelGetThisCardCounterShim(int32_t player, int32_t locate, int32_t counter) {
    hookLog("DuelGetThisCardCounter(%d, %d, %d)", player, locate, counter);
    int32_t result = DuelGetThisCardCounter(player, locate, counter);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardTurnCounterType DuelGetThisCardTurnCounter = NULL;
int32_t DuelGetThisCardTurnCounterShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardTurnCounter(%d, %d)", player, locate);
    int32_t result = DuelGetThisCardTurnCounter(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisTunerMonsterType DuelIsThisTunerMonster = NULL;
int32_t DuelIsThisTunerMonsterShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisTunerMonster(%d, %d)", player, locate);
    int32_t result = DuelIsThisTunerMonster(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisNormalMonsterType DuelIsThisNormalMonster = NULL;
int32_t DuelIsThisNormalMonsterShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisNormalMonster(%d, %d)", player, locate);
    int32_t result = DuelIsThisNormalMonster(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisEffectiveMonsterType DuelIsThisEffectiveMonster = NULL;
DuelBool DuelIsThisEffectiveMonsterShim(int32_t player, int32_t index) {
    hookLog("DuelIsThisEffectiveMonster(%d, %d)", player, index);
    DuelBool result = DuelIsThisEffectiveMonster(player, index);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DeulIsThisEffectiveMonsterWithDualType DeulIsThisEffectiveMonsterWithDual = NULL;
DuelBool DeulIsThisEffectiveMonsterWithDualShim(int32_t player, int32_t index) {
    hookLog("DeulIsThisEffectiveMonsterWithDual(%d, %d)", player, index);
    DuelBool result = DeulIsThisEffectiveMonsterWithDual(player, index);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelIsThisNormalMonsterInGraveType DuelIsThisNormalMonsterInGrave = NULL;
DuelBool DuelIsThisNormalMonsterInGraveShim(int32_t player, int32_t index) {
    hookLog("DuelIsThisNormalMonsterInGrave(%d, %d)", player, index);
    DuelBool result = DuelIsThisNormalMonsterInGrave(player, index);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelIsThisNormalMonsterInHandType DuelIsThisNormalMonsterInHand = NULL;
DuelBool DuelIsThisNormalMonsterInHandShim(int32_t wCardID) {
    hookLog("DuelIsThisNormalMonsterInHand(%d)", wCardID);
    DuelBool result = DuelIsThisNormalMonsterInHand(wCardID);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelIsThisTrapMonsterType DuelIsThisTrapMonster = NULL;
int32_t DuelIsThisTrapMonsterShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisTrapMonster(%d, %d)", player, locate);
    int32_t result = DuelIsThisTrapMonster(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectFlagsType DuelGetThisCardEffectFlags = NULL;
int32_t DuelGetThisCardEffectFlagsShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardEffectFlags(%d, %d)", player, locate);
    int32_t result = DuelGetThisCardEffectFlags(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgLevelType DuelGetFldMonstOrgLevel = NULL;
int32_t DuelGetFldMonstOrgLevelShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldMonstOrgLevel(%d, %d)", player, locate);
    int32_t result = DuelGetFldMonstOrgLevel(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgTypeType DuelGetFldMonstOrgType = NULL;
int32_t DuelGetFldMonstOrgTypeShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldMonstOrgType(%d, %d)", player, locate);
    int32_t result = DuelGetFldMonstOrgType(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldPendScaleType DuelGetFldPendScale = NULL;
int32_t DuelGetFldPendScaleShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldPendScale(%d, %d)", player, locate);
    int32_t result = DuelGetFldPendScale(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldPendOrgScaleType DuelGetFldPendOrgScale = NULL;
int32_t DuelGetFldPendOrgScaleShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldPendOrgScale(%d, %d)", player, locate);
    int32_t result = DuelGetFldPendOrgScale(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstRankType DuelGetFldMonstRank = NULL;
int32_t DuelGetFldMonstRankShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldMonstRank(%d, %d)", player, locate);
    int32_t result = DuelGetFldMonstRank(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgRankType DuelGetFldMonstOrgRank = NULL;
int32_t DuelGetFldMonstOrgRankShim(int32_t player, int32_t locate) {
    hookLog("DuelGetFldMonstOrgRank(%d, %d)", player, locate);
    int32_t result = DuelGetFldMonstOrgRank(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisZoneAvailableType DuelIsThisZoneAvailable = NULL;
int32_t DuelIsThisZoneAvailableShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisZoneAvailable(%d, %d)", player, locate);
    int32_t result = DuelIsThisZoneAvailable(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisZoneAvailable2Type DuelIsThisZoneAvailable2 = NULL;
int32_t DuelIsThisZoneAvailable2Shim(int32_t player, int32_t locate, DuelBool visibleOnly) {
    hookLog("DuelIsThisZoneAvailable2(%d, %d, %s)", player, locate, visibleOnly ? "true" : "false");
    int32_t result = DuelIsThisZoneAvailable2(player, locate, visibleOnly);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardShowParameterType DuelGetThisCardShowParameter = NULL;
int32_t DuelGetThisCardShowParameterShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardShowParameter(%d, %d)", player, locate);
    int32_t result = DuelGetThisCardShowParameter(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardParameterType DuelGetThisCardParameter = NULL;
uint32_t DuelGetThisCardParameterShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisCardParameter(%d, %d)", player, locate);
    uint32_t result = DuelGetThisCardParameter(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectListType DuelGetThisCardEffectList = NULL;
uint32_t DuelGetThisCardEffectListShim(int32_t player, int32_t locate, void* list) {
    hookLog("DuelGetThisCardEffectList(%d, %d, %p)", player, locate, list);
    uint32_t result = DuelGetThisCardEffectList(player, locate, list);
    hookLog(" %d\n", result);
    return result;
}

static DUELCOMGetPosMaskOfThisHandType DUELCOMGetPosMaskOfThisHand = NULL;
uint32_t DUELCOMGetPosMaskOfThisHandShim(int32_t player, int32_t index, int32_t commandId) {
    hookLog("DUELCOMGetPosMaskOfThisHand(%d, %d, %d)", player, index, commandId);
    uint32_t result = DUELCOMGetPosMaskOfThisHand(player, index, commandId);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisContinuousCardType DuelIsThisContinuousCard = NULL;
int32_t DuelIsThisContinuousCardShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisContinuousCard(%d, %d)", player, locate);
    int32_t result = DuelIsThisContinuousCard(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisEquipCardType DuelIsThisEquipCard = NULL;
int32_t DuelIsThisEquipCardShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisEquipCard(%d, %d)", player, locate);
    int32_t result = DuelIsThisEquipCard(player, locate);
    hookLog(" %d\n", result);
    return result;
}

static DuelIsThisMagicType DuelIsThisMagic = NULL;
DuelBool DuelIsThisMagicShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisMagic(%d, %d)", player, locate);
    DuelBool result = DuelIsThisMagic(player, locate);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelIsThisTrapType DuelIsThisTrap = NULL;
DuelBool DuelIsThisTrapShim(int32_t player, int32_t locate) {
    hookLog("DuelIsThisTrap(%d, %d)", player, locate);
    DuelBool result = DuelIsThisTrap(player, locate);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelGetThisMonsterFightableOnEffectType DuelGetThisMonsterFightableOnEffect = NULL;
DuelBool DuelGetThisMonsterFightableOnEffectShim(int32_t player, int32_t locate) {
    hookLog("DuelGetThisMonsterFightableOnEffect(%d, %d)", player, locate);
    DuelBool result = DuelGetThisMonsterFightableOnEffect(player, locate);
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DUELCOMGetRecommendSideType DUELCOMGetRecommendSide = NULL;
int32_t DUELCOMGetRecommendSideShim(void) {
    hookLog("DUELCOMGetRecommendSide()");
    int32_t result = DUELCOMGetRecommendSide();
    hookLog(" %d\n", result);
    return result;
}

static DuelGetDuelFlagDeckReverseType DuelGetDuelFlagDeckReverse = NULL;
DuelBool DuelGetDuelFlagDeckReverseShim(void) {
    hookLog("DuelGetDuelFlagDeckReverse()");
    DuelBool result = DuelGetDuelFlagDeckReverse();
    hookLog(" %s\n", result ? "true" : "false");
    return result;
}

static DuelComGetCommandMaskType DuelComGetCommandMask = NULL;
uint32_t DuelComGetCommandMaskShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelComGetCommandMask(%d, %d, %d)", player, position, index);
    uint32_t result = DuelComGetCommandMask(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelComGetTextIDOfThisCommandType DuelComGetTextIDOfThisCommand = NULL;
uint32_t DuelComGetTextIDOfThisCommandShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelComGetTextIDOfThisCommand(%d, %d, %d)", player, position, index);
    uint32_t result = DuelComGetTextIDOfThisCommand(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelComGetTextIDOfThisSummonType DuelComGetTextIDOfThisSummon = NULL;
uint32_t DuelComGetTextIDOfThisSummonShim(int32_t player, int32_t position, int32_t index) {
    hookLog("DuelComGetTextIDOfThisSummon(%d, %d, %d)", player, position, index);
    uint32_t result = DuelComGetTextIDOfThisSummon(player, position, index);
    hookLog(" %d\n", result);
    return result;
}

static DuelComDoCommandType DuelComDoCommand = NULL;
void DuelComDoCommandShim(int32_t player, int32_t position, int32_t index, int32_t commandId) {
    hookLog("DuelComDoCommand(%d, %d, %d, %d)\n", player, position, index, commandId);
    DuelComDoCommand(player, position, index, commandId);
}

static DuelComCancelCommand2Type DuelComCancelCommand2 = NULL;
int32_t DuelComCancelCommand2Shim(DuelBool decide) {
    hookLog("DuelComCancelCommand2(%s)", decide ? "true" : "false");
    int32_t result = DuelComCancelCommand2(decide);
    hookLog(" %d\n", result);
    return result;
}

static DuelComDefaultLocationType DuelComDefaultLocation = NULL;
void DuelComDefaultLocationShim(void) {
    hookLog("DuelComDefaultLocation()\n");
    DuelComDefaultLocation();
}

static DuelComGetMovablePhaseType DuelComGetMovablePhase = NULL;
uint32_t DuelComGetMovablePhaseShim(void) {
    hookLog("DuelComGetMovablePhase()");
    uint32_t result = DuelComGetMovablePhase();
    hookLog(" %d\n", result);
    return result;
}

static DuelComMovePhaseType DuelComMovePhase = NULL;
void DuelComMovePhaseShim(int32_t phase) {
    hookLog("DuelComMovePhase(%d)\n", phase);
    DuelComMovePhase(phase);
}

static DuelComDebugCommandType DuelComDebugCommand = NULL;
void DuelComDebugCommandShim(void) {
    hookLog("DuelComDebugCommand()\n");
    DuelComDebugCommand();
}

static CardRareGetBufferSizeType CardRareGetBufferSize = NULL;
uint32_t CardRareGetBufferSizeShim(void) {
    hookLog("CardRareGetBufferSize()");
    uint32_t result = CardRareGetBufferSize();
    hookLog(" %d\n", result);
    return result;
}

static CardRareSetRareType CardRareSetRare = NULL;
void CardRareSetRareShim(void* pBuf, void* rare0, void* rare1, void* rare2, void* rare3) {
    hookLog("CardRareSetRare(%p, %p, %p, %p, %p)\n", pBuf, rare0, rare1, rare2, rare3);
    CardRareSetRare(pBuf, rare0, rare1, rare2, rare3);
}

static CardRareGetRareByUniqueIDType CardRareGetRareByUniqueID = NULL;
int32_t CardRareGetRareByUniqueIDShim(int32_t uniqueId) {
    hookLog("CardRareGetRareByUniqueID(%d)", uniqueId);
    int32_t result = CardRareGetRareByUniqueID(uniqueId);
    hookLog(" %d\n", result);
    return result;
}

static CardRareSetBufferType CardRareSetBuffer = NULL;
void CardRareSetBufferShim(void* pBuf) {
    hookLog("CardRareSetBuffer(%p)\n", pBuf);
    CardRareSetBuffer(pBuf);
}

static DuelResultGetMemoType DuelResultGetMemo = NULL;
int32_t DuelResultGetMemoShim(int32_t player, void* dst) {
    hookLog("DuelResultGetMemo(%d, %p)", player, dst);
    int32_t result = DuelResultGetMemo(player, dst);
    hookLog(" %d\n", result);
    return result;
}

static DuelResultGetDataType DuelResultGetData = NULL;
int32_t DuelResultGetDataShim(int32_t player, void* dst) {
    hookLog("DuelResultGetData(%d, %p)", player, dst);
    int32_t result = DuelResultGetData(player, dst);
    hookLog(" %d\n", result);
    return result;
}

static SetAddRecordDelegateType SetAddRecordDelegate = NULL;
void SetAddRecordDelegateShim(DuelAddRecord addRecord) {
    hookLog("SetAddRecordDelegate(%p)\n", addRecord);
    SetAddRecordDelegate(addRecord);
}

static SetPlayRecordDelegateType SetPlayRecordDelegate = NULL;
void SetPlayRecordDelegateShim(DuelNowRecord nowRecord, DuelRecordNext recordNext, DuelRecordBegin recordBegin, DuelIsRecordEnd isRecordEnd) {
    hookLog("SetPlayRecordDelegate(%p, %p, %p, %p)\n", nowRecord, recordNext, recordBegin, isRecordEnd);
    SetPlayRecordDelegate(nowRecord, recordNext, recordBegin, isRecordEnd);
}

static DuelIsReplayModeType DuelIsReplayMode = NULL;
int32_t DuelIsReplayModeShim(void) {
    hookLog("DuelIsReplayMode()");
    int32_t result = DuelIsReplayMode();
    hookLog(" %d\n", result);
    return result;
}

static SetDuelChallengeType SetDuelChallenge = NULL;
void SetDuelChallengeShim(int32_t flagbit) {
    hookLog("SetDuelChallenge(%d)\n", flagbit);
    SetDuelChallenge(flagbit);
}

static SetDuelChallenge2Type SetDuelChallenge2 = NULL;
void SetDuelChallenge2Shim(int32_t player, int32_t flagbit) {
    hookLog("SetDuelChallenge2(%d, %d)\n", player, flagbit);
    SetDuelChallenge2(player, flagbit);
}

static DuelListIsMultiModeType DuelListIsMultiMode = NULL;
int32_t DuelListIsMultiModeShim(void) {
    hookLog("DuelListIsMultiMode()");
    int32_t result = DuelListIsMultiMode();
    hookLog(" %d\n", result);
    return result;
}

static DuelListInitStringType DuelListInitString = NULL;
void DuelListInitStringShim(void) {
    hookLog("DuelListInitString()\n");
    DuelListInitString();
}

static DuelListGetSelectMaxType DuelListGetSelectMax = NULL;
int32_t DuelListGetSelectMaxShim(void) {
    hookLog("DuelListGetSelectMax()");
    int32_t result = DuelListGetSelectMax();
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetSelectMinType DuelListGetSelectMin = NULL;
int32_t DuelListGetSelectMinShim(void) {
    hookLog("DuelListGetSelectMin()");
    int32_t result = DuelListGetSelectMin();
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemMaxType DuelListGetItemMax = NULL;
int32_t DuelListGetItemMaxShim(void) {
    hookLog("DuelListGetItemMax()");
    int32_t result = DuelListGetItemMax();
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemIDType DuelListGetItemID = NULL;
int32_t DuelListGetItemIDShim(int32_t index) {
    hookLog("DuelListGetItemID(%d)", index);
    int32_t result = DuelListGetItemID(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemUniqueIDType DuelListGetItemUniqueID = NULL;
int32_t DuelListGetItemUniqueIDShim(int32_t index) {
    hookLog("DuelListGetItemUniqueID(%d)", index);
    int32_t result = DuelListGetItemUniqueID(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemFromType DuelListGetItemFrom = NULL;
int32_t DuelListGetItemFromShim(int32_t index) {
    hookLog("DuelListGetItemFrom(%d)", index);
    int32_t result = DuelListGetItemFrom(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemMsgType DuelListGetItemMsg = NULL;
int32_t DuelListGetItemMsgShim(int32_t index) {
    hookLog("DuelListGetItemMsg(%d)", index);
    int32_t result = DuelListGetItemMsg(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetItemAttributeType DuelListGetItemAttribute = NULL;
int32_t DuelListGetItemAttributeShim(int32_t index) {
    hookLog("DuelListGetItemAttribute(%d)", index);
    int32_t result = DuelListGetItemAttribute(index);
    hookLog(" %d\n", result);
    return result;
}

static DuelListGetCardAttributeType DuelListGetCardAttribute = NULL;
int32_t DuelListGetCardAttributeShim(int32_t iLookPlayer, int32_t wUniqueID) {
    hookLog("DuelListGetCardAttribute(%d, %d)", iLookPlayer, wUniqueID);
    int32_t result = DuelListGetCardAttribute(iLookPlayer, wUniqueID);
    hookLog(" %d\n", result);
    return result;
}

static DuelListSetIndexType DuelListSetIndex = NULL;
void DuelListSetIndexShim(int32_t index) {
    hookLog("DuelListSetIndex(%d)\n", index);
    DuelListSetIndex(index);
}

static DuelListSetCardExDataType DuelListSetCardExData = NULL;
void DuelListSetCardExDataShim(int32_t index, int32_t data) {
    hookLog("DuelListSetCardExData(%d, %d)\n", index, data);
    DuelListSetCardExData(index, data);
}

static DuelListGetItemTargetUniqueIDType DuelListGetItemTargetUniqueID = NULL;
int32_t DuelListGetItemTargetUniqueIDShim(int32_t index) {
    hookLog("DuelListGetItemTargetUniqueID(%d)", index);
    int32_t result = DuelListGetItemTargetUniqueID(index);
    hookLog(" %d\n", result);
    return result;
}

static HANDLE DuelHandle = NULL;
#define bindFunc(func) do { \
        func = ( func ## Type ) GetProcAddress(DuelHandle, "DLL_" #func ); \
        if( func == NULL) return 1; \
    } while(0)

int bind(void) {
    DuelHandle = LoadLibrary(TEXT("masterduel_Data\\Plugins\\x86_64\\duel.dll"));
    if(DuelHandle == NULL) {
        return 1;
    }

    bindFunc(SetCardProperty);
    bindFunc(SetInternalID);
    bindFunc(SetCardSame);
    bindFunc(SetCardNamed);
    bindFunc(SetCardLink);
    bindFunc(SetCardGenre);
    bindFunc(CardGetInternalID);
    bindFunc(CardGetType);
    bindFunc(CardGetAttr);
    bindFunc(CardGetStar);
    bindFunc(CardGetLevel);
    bindFunc(CardGetRank);
    bindFunc(CardGetScaleL);
    bindFunc(CardGetScaleR);
    bindFunc(CardGetLinkNum);
    bindFunc(CardGetLinkMask);
    bindFunc(CardGetIcon);
    bindFunc(CardGetFrame);
    bindFunc(CardGetKind);
    bindFunc(CardGetAtk);
    bindFunc(CardGetDef);
    bindFunc(CardGetAtk2);
    bindFunc(CardGetDef2);
    bindFunc(CardGetLimitation);
    bindFunc(CardIsThisCardGenre);
    bindFunc(CardIsThisSameCard);
    bindFunc(CardGetOriginalID);
    bindFunc(CardGetOriginalID2);
    bindFunc(CardGetAlterID);
    bindFunc(CardGetAltCardID);
    bindFunc(CardCheckName);
    bindFunc(CardGetLinkCards);
    bindFunc(CardGetBasicVal);
    bindFunc(CardIsThisTunerMonster);
    bindFunc(DuelDlgGetMixNum);
    bindFunc(DuelDlgGetMixType);
    bindFunc(DuelDlgGetMixData);
    bindFunc(DuelDlgSetResult);
    bindFunc(DuelDlgCanYesNoSkip);
    bindFunc(DuelDlgGetPosMaskOfThisSummon);
    bindFunc(DuelDlgGetSelectItemNum);
    bindFunc(DuelDlgGetSelectItemStr);
    bindFunc(DuelDlgGetSelectItemEnable);
    bindFunc(DlgProcGetSummoningMonsterUniqueID);
    bindFunc(GetRevision);
    bindFunc(GetBinHash);
    bindFunc(SetWorkMemory);
    bindFunc(DuelSysInitRush);
    bindFunc(DuelSysInitQuestion);
    bindFunc(DuelSysInitCustom);
    bindFunc(DuelSysAct);
    bindFunc(DuelSysClearWork);
    bindFunc(DuelSysSetDeck2);
    bindFunc(DuelSetRandomSeed);
    bindFunc(DuelSetMyPlayerNum);
    bindFunc(DuelSetPlayerType);
    bindFunc(DuelIsHuman);
    bindFunc(DuelMyself);
    bindFunc(DuelRival);
    bindFunc(DuelIsMyself);
    bindFunc(DuelIsRival);
    bindFunc(DuelSetCpuParam);
    bindFunc(DuelSetFirstPlayer);
    bindFunc(DuelGetDuelResult);
    bindFunc(DuelGetDuelFinish);
    bindFunc(DuelGetDuelFinishCardID);
    bindFunc(DuelSetDuelLimitedType);
    bindFunc(SetEffectDelegate);
    bindFunc(DuelIsThisQuickDuel);
    bindFunc(SetCardExistWork);
    bindFunc(GetCardExistNum);
    bindFunc(DuelGetLP);
    bindFunc(DuelWhichTurnNow);
    bindFunc(DuelGetCurrentPhase);
    bindFunc(DuelGetCurrentStep);
    bindFunc(DuelGetCurrentDmgStep);
    bindFunc(DuelGetTurnNum);
    bindFunc(DuelGetCardPropByUniqueID);
    bindFunc(DuelGetCardUniqueID);
    bindFunc(DuelGetCardTurn);
    bindFunc(DuelGetCardFace);
    bindFunc(DuelGetCardNum);
    bindFunc(DuelGetTopCardIndex);
    bindFunc(DuelGetHandCardOpen);
    bindFunc(DuelSearchCardByUniqueID);
    bindFunc(DuelGetCardIDByUniqueID2);
    bindFunc(DuelCanIDoPutMonster);
    bindFunc(DuelCanIDoSummonMonster);
    bindFunc(DuelCanIDoSpecialSummon);
    bindFunc(DuelGetCardInHand);
    bindFunc(DuelGetCardBasicVal);
    bindFunc(DuelGetTrapMonstBasicVal);
    bindFunc(DuelGetThisCardOverlayNum);
    bindFunc(FusionGetMaterialList);
    bindFunc(FusionIsThisTunedMonsterInTuning);
    bindFunc(FusionGetMonsterLevelInTuning);
    bindFunc(DuelIsThisCardExist);
    bindFunc(DuelGetThisCardEffectIDAtChain);
    bindFunc(DuelGetAttackTargetMask);
    bindFunc(DuelGetThisCardDirectFlag);
    bindFunc(DuelGetFldAffectIcon);
    bindFunc(DuelGetThisCardCounter);
    bindFunc(DuelGetThisCardTurnCounter);
    bindFunc(DuelIsThisTunerMonster);
    bindFunc(DuelIsThisNormalMonster);
    bindFunc(DuelIsThisEffectiveMonster);
    bindFunc(DeulIsThisEffectiveMonsterWithDual);
    bindFunc(DuelIsThisNormalMonsterInGrave);
    bindFunc(DuelIsThisNormalMonsterInHand);
    bindFunc(DuelIsThisTrapMonster);
    bindFunc(DuelGetThisCardEffectFlags);
    bindFunc(DuelGetFldMonstOrgLevel);
    bindFunc(DuelGetFldMonstOrgType);
    bindFunc(DuelGetFldPendScale);
    bindFunc(DuelGetFldPendOrgScale);
    bindFunc(DuelGetFldMonstRank);
    bindFunc(DuelGetFldMonstOrgRank);
    bindFunc(DuelIsThisZoneAvailable);
    bindFunc(DuelIsThisZoneAvailable2);
    bindFunc(DuelGetThisCardShowParameter);
    bindFunc(DuelGetThisCardParameter);
    bindFunc(DuelGetThisCardEffectList);
    bindFunc(DUELCOMGetPosMaskOfThisHand);
    bindFunc(DuelIsThisContinuousCard);
    bindFunc(DuelIsThisEquipCard);
    bindFunc(DuelIsThisMagic);
    bindFunc(DuelIsThisTrap);
    bindFunc(DuelGetThisMonsterFightableOnEffect);
    bindFunc(DUELCOMGetRecommendSide);
    bindFunc(DuelGetDuelFlagDeckReverse);
    bindFunc(DuelComGetCommandMask);
    bindFunc(DuelComGetTextIDOfThisCommand);
    bindFunc(DuelComGetTextIDOfThisSummon);
    bindFunc(DuelComDoCommand);
    bindFunc(DuelComCancelCommand2);
    bindFunc(DuelComDefaultLocation);
    bindFunc(DuelComGetMovablePhase);
    bindFunc(DuelComMovePhase);
    bindFunc(DuelComDebugCommand);
    bindFunc(CardRareGetBufferSize);
    bindFunc(CardRareSetRare);
    bindFunc(CardRareGetRareByUniqueID);
    bindFunc(CardRareSetBuffer);
    bindFunc(DuelResultGetMemo);
    bindFunc(DuelResultGetData);
    bindFunc(SetAddRecordDelegate);
    bindFunc(SetPlayRecordDelegate);
    bindFunc(DuelIsReplayMode);
    bindFunc(SetDuelChallenge);
    bindFunc(SetDuelChallenge2);
    bindFunc(DuelListIsMultiMode);
    bindFunc(DuelListInitString);
    bindFunc(DuelListGetSelectMax);
    bindFunc(DuelListGetSelectMin);
    bindFunc(DuelListGetItemMax);
    bindFunc(DuelListGetItemID);
    bindFunc(DuelListGetItemUniqueID);
    bindFunc(DuelListGetItemFrom);
    bindFunc(DuelListGetItemMsg);
    bindFunc(DuelListGetItemAttribute);
    bindFunc(DuelListGetCardAttribute);
    bindFunc(DuelListSetIndex);
    bindFunc(DuelListSetCardExData);
    bindFunc(DuelListGetItemTargetUniqueID);

    return 0;
}

int hook(void) {
    DetourRestoreAfterWith();

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach((void**) &SetCardProperty, &SetCardPropertyShim);
    DetourAttach((void**) &SetInternalID, &SetInternalIDShim);
    DetourAttach((void**) &SetCardSame, &SetCardSameShim);
    DetourAttach((void**) &SetCardNamed, &SetCardNamedShim);
    DetourAttach((void**) &SetCardLink, &SetCardLinkShim);
    DetourAttach((void**) &SetCardGenre, &SetCardGenreShim);
    DetourAttach((void**) &CardGetInternalID, &CardGetInternalIDShim);
    DetourAttach((void**) &CardGetType, &CardGetTypeShim);
    DetourAttach((void**) &CardGetAttr, &CardGetAttrShim);
    DetourAttach((void**) &CardGetStar, &CardGetStarShim);
    DetourAttach((void**) &CardGetLevel, &CardGetLevelShim);
    DetourAttach((void**) &CardGetRank, &CardGetRankShim);
    DetourAttach((void**) &CardGetScaleL, &CardGetScaleLShim);
    DetourAttach((void**) &CardGetScaleR, &CardGetScaleRShim);
    DetourAttach((void**) &CardGetLinkNum, &CardGetLinkNumShim);
    DetourAttach((void**) &CardGetLinkMask, &CardGetLinkMaskShim);
    DetourAttach((void**) &CardGetIcon, &CardGetIconShim);
    DetourAttach((void**) &CardGetFrame, &CardGetFrameShim);
    DetourAttach((void**) &CardGetKind, &CardGetKindShim);
    DetourAttach((void**) &CardGetAtk, &CardGetAtkShim);
    DetourAttach((void**) &CardGetDef, &CardGetDefShim);
    DetourAttach((void**) &CardGetAtk2, &CardGetAtk2Shim);
    DetourAttach((void**) &CardGetDef2, &CardGetDef2Shim);
    DetourAttach((void**) &CardGetLimitation, &CardGetLimitationShim);
    DetourAttach((void**) &CardIsThisCardGenre, &CardIsThisCardGenreShim);
    DetourAttach((void**) &CardIsThisSameCard, &CardIsThisSameCardShim);
    DetourAttach((void**) &CardGetOriginalID, &CardGetOriginalIDShim);
    DetourAttach((void**) &CardGetOriginalID2, &CardGetOriginalID2Shim);
    DetourAttach((void**) &CardGetAlterID, &CardGetAlterIDShim);
    DetourAttach((void**) &CardGetAltCardID, &CardGetAltCardIDShim);
    DetourAttach((void**) &CardCheckName, &CardCheckNameShim);
    DetourAttach((void**) &CardGetLinkCards, &CardGetLinkCardsShim);
    DetourAttach((void**) &CardGetBasicVal, &CardGetBasicValShim);
    DetourAttach((void**) &CardIsThisTunerMonster, &CardIsThisTunerMonsterShim);
    DetourAttach((void**) &DuelDlgGetMixNum, &DuelDlgGetMixNumShim);
    DetourAttach((void**) &DuelDlgGetMixType, &DuelDlgGetMixTypeShim);
    DetourAttach((void**) &DuelDlgGetMixData, &DuelDlgGetMixDataShim);
    DetourAttach((void**) &DuelDlgSetResult, &DuelDlgSetResultShim);
    DetourAttach((void**) &DuelDlgCanYesNoSkip, &DuelDlgCanYesNoSkipShim);
    DetourAttach((void**) &DuelDlgGetPosMaskOfThisSummon, &DuelDlgGetPosMaskOfThisSummonShim);
    DetourAttach((void**) &DuelDlgGetSelectItemNum, &DuelDlgGetSelectItemNumShim);
    DetourAttach((void**) &DuelDlgGetSelectItemStr, &DuelDlgGetSelectItemStrShim);
    DetourAttach((void**) &DuelDlgGetSelectItemEnable, &DuelDlgGetSelectItemEnableShim);
    DetourAttach((void**) &DlgProcGetSummoningMonsterUniqueID, &DlgProcGetSummoningMonsterUniqueIDShim);
    DetourAttach((void**) &GetRevision, &GetRevisionShim);
    DetourAttach((void**) &GetBinHash, &GetBinHashShim);
    DetourAttach((void**) &SetWorkMemory, &SetWorkMemoryShim);
    DetourAttach((void**) &DuelSysInitRush, &DuelSysInitRushShim);
    DetourAttach((void**) &DuelSysInitQuestion, &DuelSysInitQuestionShim);
    DetourAttach((void**) &DuelSysInitCustom, &DuelSysInitCustomShim);
    DetourAttach((void**) &DuelSysAct, &DuelSysActShim);
    DetourAttach((void**) &DuelSysClearWork, &DuelSysClearWorkShim);
    DetourAttach((void**) &DuelSysSetDeck2, &DuelSysSetDeck2Shim);
    DetourAttach((void**) &DuelSetRandomSeed, &DuelSetRandomSeedShim);
    DetourAttach((void**) &DuelSetMyPlayerNum, &DuelSetMyPlayerNumShim);
    DetourAttach((void**) &DuelSetPlayerType, &DuelSetPlayerTypeShim);
    DetourAttach((void**) &DuelIsHuman, &DuelIsHumanShim);
    DetourAttach((void**) &DuelMyself, &DuelMyselfShim);
    DetourAttach((void**) &DuelRival, &DuelRivalShim);
    DetourAttach((void**) &DuelIsMyself, &DuelIsMyselfShim);
    DetourAttach((void**) &DuelIsRival, &DuelIsRivalShim);
    DetourAttach((void**) &DuelSetCpuParam, &DuelSetCpuParamShim);
    DetourAttach((void**) &DuelSetFirstPlayer, &DuelSetFirstPlayerShim);
    DetourAttach((void**) &DuelGetDuelResult, &DuelGetDuelResultShim);
    DetourAttach((void**) &DuelGetDuelFinish, &DuelGetDuelFinishShim);
    DetourAttach((void**) &DuelGetDuelFinishCardID, &DuelGetDuelFinishCardIDShim);
    DetourAttach((void**) &DuelSetDuelLimitedType, &DuelSetDuelLimitedTypeShim);
    DetourAttach((void**) &SetEffectDelegate, &SetEffectDelegateShim);
    DetourAttach((void**) &DuelIsThisQuickDuel, &DuelIsThisQuickDuelShim);
    DetourAttach((void**) &SetCardExistWork, &SetCardExistWorkShim);
    DetourAttach((void**) &GetCardExistNum, &GetCardExistNumShim);
    DetourAttach((void**) &DuelGetLP, &DuelGetLPShim);
    DetourAttach((void**) &DuelWhichTurnNow, &DuelWhichTurnNowShim);
    DetourAttach((void**) &DuelGetCurrentPhase, &DuelGetCurrentPhaseShim);
    DetourAttach((void**) &DuelGetCurrentStep, &DuelGetCurrentStepShim);
    DetourAttach((void**) &DuelGetCurrentDmgStep, &DuelGetCurrentDmgStepShim);
    DetourAttach((void**) &DuelGetTurnNum, &DuelGetTurnNumShim);
    DetourAttach((void**) &DuelGetCardPropByUniqueID, &DuelGetCardPropByUniqueIDShim);
    DetourAttach((void**) &DuelGetCardUniqueID, &DuelGetCardUniqueIDShim);
    DetourAttach((void**) &DuelGetCardTurn, &DuelGetCardTurnShim);
    DetourAttach((void**) &DuelGetCardFace, &DuelGetCardFaceShim);
    DetourAttach((void**) &DuelGetCardNum, &DuelGetCardNumShim);
    DetourAttach((void**) &DuelGetTopCardIndex, &DuelGetTopCardIndexShim);
    DetourAttach((void**) &DuelGetHandCardOpen, &DuelGetHandCardOpenShim);
    DetourAttach((void**) &DuelSearchCardByUniqueID, &DuelSearchCardByUniqueIDShim);
    DetourAttach((void**) &DuelGetCardIDByUniqueID2, &DuelGetCardIDByUniqueID2Shim);
    DetourAttach((void**) &DuelCanIDoPutMonster, &DuelCanIDoPutMonsterShim);
    DetourAttach((void**) &DuelCanIDoSummonMonster, &DuelCanIDoSummonMonsterShim);
    DetourAttach((void**) &DuelCanIDoSpecialSummon, &DuelCanIDoSpecialSummonShim);
    DetourAttach((void**) &DuelGetCardInHand, &DuelGetCardInHandShim);
    DetourAttach((void**) &DuelGetCardBasicVal, &DuelGetCardBasicValShim);
    DetourAttach((void**) &DuelGetTrapMonstBasicVal, &DuelGetTrapMonstBasicValShim);
    DetourAttach((void**) &DuelGetThisCardOverlayNum, &DuelGetThisCardOverlayNumShim);
    DetourAttach((void**) &FusionGetMaterialList, &FusionGetMaterialListShim);
    DetourAttach((void**) &FusionIsThisTunedMonsterInTuning, &FusionIsThisTunedMonsterInTuningShim);
    DetourAttach((void**) &FusionGetMonsterLevelInTuning, &FusionGetMonsterLevelInTuningShim);
    DetourAttach((void**) &DuelIsThisCardExist, &DuelIsThisCardExistShim);
    DetourAttach((void**) &DuelGetThisCardEffectIDAtChain, &DuelGetThisCardEffectIDAtChainShim);
    DetourAttach((void**) &DuelGetAttackTargetMask, &DuelGetAttackTargetMaskShim);
    DetourAttach((void**) &DuelGetThisCardDirectFlag, &DuelGetThisCardDirectFlagShim);
    DetourAttach((void**) &DuelGetFldAffectIcon, &DuelGetFldAffectIconShim);
    DetourAttach((void**) &DuelGetThisCardCounter, &DuelGetThisCardCounterShim);
    DetourAttach((void**) &DuelGetThisCardTurnCounter, &DuelGetThisCardTurnCounterShim);
    DetourAttach((void**) &DuelIsThisTunerMonster, &DuelIsThisTunerMonsterShim);
    DetourAttach((void**) &DuelIsThisNormalMonster, &DuelIsThisNormalMonsterShim);
    DetourAttach((void**) &DuelIsThisEffectiveMonster, &DuelIsThisEffectiveMonsterShim);
    DetourAttach((void**) &DeulIsThisEffectiveMonsterWithDual, &DeulIsThisEffectiveMonsterWithDualShim);
    DetourAttach((void**) &DuelIsThisNormalMonsterInGrave, &DuelIsThisNormalMonsterInGraveShim);
    DetourAttach((void**) &DuelIsThisNormalMonsterInHand, &DuelIsThisNormalMonsterInHandShim);
    DetourAttach((void**) &DuelIsThisTrapMonster, &DuelIsThisTrapMonsterShim);
    DetourAttach((void**) &DuelGetThisCardEffectFlags, &DuelGetThisCardEffectFlagsShim);
    DetourAttach((void**) &DuelGetFldMonstOrgLevel, &DuelGetFldMonstOrgLevelShim);
    DetourAttach((void**) &DuelGetFldMonstOrgType, &DuelGetFldMonstOrgTypeShim);
    DetourAttach((void**) &DuelGetFldPendScale, &DuelGetFldPendScaleShim);
    DetourAttach((void**) &DuelGetFldPendOrgScale, &DuelGetFldPendOrgScaleShim);
    DetourAttach((void**) &DuelGetFldMonstRank, &DuelGetFldMonstRankShim);
    DetourAttach((void**) &DuelGetFldMonstOrgRank, &DuelGetFldMonstOrgRankShim);
    DetourAttach((void**) &DuelIsThisZoneAvailable, &DuelIsThisZoneAvailableShim);
    DetourAttach((void**) &DuelIsThisZoneAvailable2, &DuelIsThisZoneAvailable2Shim);
    DetourAttach((void**) &DuelGetThisCardShowParameter, &DuelGetThisCardShowParameterShim);
    DetourAttach((void**) &DuelGetThisCardParameter, &DuelGetThisCardParameterShim);
    DetourAttach((void**) &DuelGetThisCardEffectList, &DuelGetThisCardEffectListShim);
    DetourAttach((void**) &DUELCOMGetPosMaskOfThisHand, &DUELCOMGetPosMaskOfThisHandShim);
    DetourAttach((void**) &DuelIsThisContinuousCard, &DuelIsThisContinuousCardShim);
    DetourAttach((void**) &DuelIsThisEquipCard, &DuelIsThisEquipCardShim);
    DetourAttach((void**) &DuelIsThisMagic, &DuelIsThisMagicShim);
    DetourAttach((void**) &DuelIsThisTrap, &DuelIsThisTrapShim);
    DetourAttach((void**) &DuelGetThisMonsterFightableOnEffect, &DuelGetThisMonsterFightableOnEffectShim);
    DetourAttach((void**) &DUELCOMGetRecommendSide, &DUELCOMGetRecommendSideShim);
    DetourAttach((void**) &DuelGetDuelFlagDeckReverse, &DuelGetDuelFlagDeckReverseShim);
    DetourAttach((void**) &DuelComGetCommandMask, &DuelComGetCommandMaskShim);
    DetourAttach((void**) &DuelComGetTextIDOfThisCommand, &DuelComGetTextIDOfThisCommandShim);
    DetourAttach((void**) &DuelComGetTextIDOfThisSummon, &DuelComGetTextIDOfThisSummonShim);
    DetourAttach((void**) &DuelComDoCommand, &DuelComDoCommandShim);
    DetourAttach((void**) &DuelComCancelCommand2, &DuelComCancelCommand2Shim);
    DetourAttach((void**) &DuelComDefaultLocation, &DuelComDefaultLocationShim);
    DetourAttach((void**) &DuelComGetMovablePhase, &DuelComGetMovablePhaseShim);
    DetourAttach((void**) &DuelComMovePhase, &DuelComMovePhaseShim);
    DetourAttach((void**) &DuelComDebugCommand, &DuelComDebugCommandShim);
    DetourAttach((void**) &CardRareGetBufferSize, &CardRareGetBufferSizeShim);
    DetourAttach((void**) &CardRareSetRare, &CardRareSetRareShim);
    DetourAttach((void**) &CardRareGetRareByUniqueID, &CardRareGetRareByUniqueIDShim);
    DetourAttach((void**) &CardRareSetBuffer, &CardRareSetBufferShim);
    DetourAttach((void**) &DuelResultGetMemo, &DuelResultGetMemoShim);
    DetourAttach((void**) &DuelResultGetData, &DuelResultGetDataShim);
    DetourAttach((void**) &SetAddRecordDelegate, &SetAddRecordDelegateShim);
    DetourAttach((void**) &SetPlayRecordDelegate, &SetPlayRecordDelegateShim);
    DetourAttach((void**) &DuelIsReplayMode, &DuelIsReplayModeShim);
    DetourAttach((void**) &SetDuelChallenge, &SetDuelChallengeShim);
    DetourAttach((void**) &SetDuelChallenge2, &SetDuelChallenge2Shim);
    DetourAttach((void**) &DuelListIsMultiMode, &DuelListIsMultiModeShim);
    DetourAttach((void**) &DuelListInitString, &DuelListInitStringShim);
    DetourAttach((void**) &DuelListGetSelectMax, &DuelListGetSelectMaxShim);
    DetourAttach((void**) &DuelListGetSelectMin, &DuelListGetSelectMinShim);
    DetourAttach((void**) &DuelListGetItemMax, &DuelListGetItemMaxShim);
    DetourAttach((void**) &DuelListGetItemID, &DuelListGetItemIDShim);
    DetourAttach((void**) &DuelListGetItemUniqueID, &DuelListGetItemUniqueIDShim);
    DetourAttach((void**) &DuelListGetItemFrom, &DuelListGetItemFromShim);
    DetourAttach((void**) &DuelListGetItemMsg, &DuelListGetItemMsgShim);
    DetourAttach((void**) &DuelListGetItemAttribute, &DuelListGetItemAttributeShim);
    DetourAttach((void**) &DuelListGetCardAttribute, &DuelListGetCardAttributeShim);
    DetourAttach((void**) &DuelListSetIndex, &DuelListSetIndexShim);
    DetourAttach((void**) &DuelListSetCardExData, &DuelListSetCardExDataShim);
    DetourAttach((void**) &DuelListGetItemTargetUniqueID, &DuelListGetItemTargetUniqueIDShim);
    DetourTransactionCommit();

    return 0;
}
