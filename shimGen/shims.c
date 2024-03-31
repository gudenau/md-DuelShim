static SetCardPropertyType SetCardProperty = NULL;
int32_t SetCardPropertyShim(int8_t* data, int32_t size) {
    shimLog("SetCardProperty(%p, %d) ", data, size);
    int32_t result = SetCardProperty(data, size);
    shimLog(" %d\n", result);
    return result;
}

static SetInternalIDType SetInternalID = NULL;
void SetInternalIDShim(int8_t* data) {
    shimLog("SetInternalID(%p)\n", data);
    SetInternalID(data);
}

static SetCardSameType SetCardSame = NULL;
void SetCardSameShim(int8_t* data, int32_t size) {
    shimLog("SetCardSame(%p, %d)\n", data, size);
    SetCardSame(data, size);
}

static SetCardNamedType SetCardNamed = NULL;
void SetCardNamedShim(int8_t* data) {
    shimLog("SetCardNamed(%p)\n", data);
    SetCardNamed(data);
}

static SetCardLinkType SetCardLink = NULL;
void SetCardLinkShim(int8_t* data, int32_t size) {
    shimLog("SetCardLink(%p, %d)\n", data, size);
    SetCardLink(data, size);
}

static SetCardGenreType SetCardGenre = NULL;
void SetCardGenreShim(int8_t* data) {
    shimLog("SetCardGenre(%p)\n", data);
    SetCardGenre(data);
}

static CardGetInternalIDType CardGetInternalID = NULL;
int32_t CardGetInternalIDShim(int32_t cardId) {
    shimLog("CardGetInternalID(%d) ", cardId);
    int32_t result = CardGetInternalID(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetTypeType CardGetType = NULL;
int32_t CardGetTypeShim(int32_t cardId) {
    shimLog("CardGetType(%d) ", cardId);
    int32_t result = CardGetType(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetAttrType CardGetAttr = NULL;
int32_t CardGetAttrShim(int32_t cardId) {
    shimLog("CardGetAttr(%d) ", cardId);
    int32_t result = CardGetAttr(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetStarType CardGetStar = NULL;
int32_t CardGetStarShim(int32_t cardId) {
    shimLog("CardGetStar(%d) ", cardId);
    int32_t result = CardGetStar(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetLevelType CardGetLevel = NULL;
int32_t CardGetLevelShim(int32_t cardId) {
    shimLog("CardGetLevel(%d) ", cardId);
    int32_t result = CardGetLevel(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetRankType CardGetRank = NULL;
int32_t CardGetRankShim(int32_t cardId) {
    shimLog("CardGetRank(%d) ", cardId);
    int32_t result = CardGetRank(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetScaleLType CardGetScaleL = NULL;
int32_t CardGetScaleLShim(int32_t cardId) {
    shimLog("CardGetScaleL(%d) ", cardId);
    int32_t result = CardGetScaleL(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetScaleRType CardGetScaleR = NULL;
int32_t CardGetScaleRShim(int32_t cardId) {
    shimLog("CardGetScaleR(%d) ", cardId);
    int32_t result = CardGetScaleR(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetLinkNumType CardGetLinkNum = NULL;
int32_t CardGetLinkNumShim(int32_t cardId) {
    shimLog("CardGetLinkNum(%d) ", cardId);
    int32_t result = CardGetLinkNum(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetLinkMaskType CardGetLinkMask = NULL;
int32_t CardGetLinkMaskShim(int32_t cardId) {
    shimLog("CardGetLinkMask(%d) ", cardId);
    int32_t result = CardGetLinkMask(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetIconType CardGetIcon = NULL;
int32_t CardGetIconShim(int32_t cardId) {
    shimLog("CardGetIcon(%d) ", cardId);
    int32_t result = CardGetIcon(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetFrameType CardGetFrame = NULL;
int32_t CardGetFrameShim(int32_t cardId) {
    shimLog("CardGetFrame(%d) ", cardId);
    int32_t result = CardGetFrame(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetKindType CardGetKind = NULL;
int32_t CardGetKindShim(int32_t cardId) {
    shimLog("CardGetKind(%d) ", cardId);
    int32_t result = CardGetKind(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetAtkType CardGetAtk = NULL;
int32_t CardGetAtkShim(int32_t cardId) {
    shimLog("CardGetAtk(%d) ", cardId);
    int32_t result = CardGetAtk(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetDefType CardGetDef = NULL;
int32_t CardGetDefShim(int32_t cardId) {
    shimLog("CardGetDef(%d) ", cardId);
    int32_t result = CardGetDef(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetAtk2Type CardGetAtk2 = NULL;
int32_t CardGetAtk2Shim(int32_t cardId) {
    shimLog("CardGetAtk2(%d) ", cardId);
    int32_t result = CardGetAtk2(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetDef2Type CardGetDef2 = NULL;
int32_t CardGetDef2Shim(int32_t cardId) {
    shimLog("CardGetDef2(%d) ", cardId);
    int32_t result = CardGetDef2(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetLimitationType CardGetLimitation = NULL;
int32_t CardGetLimitationShim(int32_t cardId) {
    shimLog("CardGetLimitation(%d) ", cardId);
    int32_t result = CardGetLimitation(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardIsThisCardGenreType CardIsThisCardGenre = NULL;
int32_t CardIsThisCardGenreShim(int32_t cardId, int32_t genreId) {
    shimLog("CardIsThisCardGenre(%d, %d) ", cardId, genreId);
    int32_t result = CardIsThisCardGenre(cardId, genreId);
    shimLog(" %d\n", result);
    return result;
}

static CardIsThisSameCardType CardIsThisSameCard = NULL;
int32_t CardIsThisSameCardShim(int32_t cardA, int32_t cardB) {
    shimLog("CardIsThisSameCard(%d, %d) ", cardA, cardB);
    int32_t result = CardIsThisSameCard(cardA, cardB);
    shimLog(" %d\n", result);
    return result;
}

static CardGetOriginalIDType CardGetOriginalID = NULL;
int32_t CardGetOriginalIDShim(int32_t cardId) {
    shimLog("CardGetOriginalID(%d) ", cardId);
    int32_t result = CardGetOriginalID(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetOriginalID2Type CardGetOriginalID2 = NULL;
int32_t CardGetOriginalID2Shim(int32_t cardId) {
    shimLog("CardGetOriginalID2(%d) ", cardId);
    int32_t result = CardGetOriginalID2(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetAlterIDType CardGetAlterID = NULL;
int32_t CardGetAlterIDShim(int32_t cardId) {
    shimLog("CardGetAlterID(%d) ", cardId);
    int32_t result = CardGetAlterID(cardId);
    shimLog(" %d\n", result);
    return result;
}

static CardGetAltCardIDType CardGetAltCardID = NULL;
int32_t CardGetAltCardIDShim(int32_t cardId, int32_t alterID) {
    shimLog("CardGetAltCardID(%d, %d) ", cardId, alterID);
    int32_t result = CardGetAltCardID(cardId, alterID);
    shimLog(" %d\n", result);
    return result;
}

static CardCheckNameType CardCheckName = NULL;
int32_t CardCheckNameShim(int32_t cardId, int32_t nameType) {
    shimLog("CardCheckName(%d, %d) ", cardId, nameType);
    int32_t result = CardCheckName(cardId, nameType);
    shimLog(" %d\n", result);
    return result;
}

static CardGetLinkCardsType CardGetLinkCards = NULL;
int32_t CardGetLinkCardsShim(int32_t cardId, void* pLinkID) {
    shimLog("CardGetLinkCards(%d, %p) ", cardId, pLinkID);
    int32_t result = CardGetLinkCards(cardId, pLinkID);
    shimLog(" %d\n", result);
    return result;
}

static CardGetBasicValType CardGetBasicVal = NULL;
int32_t CardGetBasicValShim(int32_t cardId, DuelBasicVal* pVal) {
    shimLog("CardGetBasicVal(%d, %p) ", cardId, pVal);
    int32_t result = CardGetBasicVal(cardId, pVal);
    shimLog(" %d\n", result);
    return result;
}

static CardIsThisTunerMonsterType CardIsThisTunerMonster = NULL;
int32_t CardIsThisTunerMonsterShim(int32_t cardId) {
    shimLog("CardIsThisTunerMonster(%d) ", cardId);
    int32_t result = CardIsThisTunerMonster(cardId);
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixNumType DuelDlgGetMixNum = NULL;
int32_t DuelDlgGetMixNumShim(void) {
    shimLog("DuelDlgGetMixNum() ");
    int32_t result = DuelDlgGetMixNum();
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixTypeType DuelDlgGetMixType = NULL;
int32_t DuelDlgGetMixTypeShim(int32_t index) {
    shimLog("DuelDlgGetMixType(%d) ", index);
    int32_t result = DuelDlgGetMixType(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetMixDataType DuelDlgGetMixData = NULL;
int32_t DuelDlgGetMixDataShim(int32_t index) {
    shimLog("DuelDlgGetMixData(%d) ", index);
    int32_t result = DuelDlgGetMixData(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgSetResultType DuelDlgSetResult = NULL;
void DuelDlgSetResultShim(uint32_t result) {
    shimLog("DuelDlgSetResult(%d)\n", result);
    DuelDlgSetResult(result);
}

static DuelDlgCanYesNoSkipType DuelDlgCanYesNoSkip = NULL;
int32_t DuelDlgCanYesNoSkipShim(void) {
    shimLog("DuelDlgCanYesNoSkip() ");
    int32_t result = DuelDlgCanYesNoSkip();
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetPosMaskOfThisSummonType DuelDlgGetPosMaskOfThisSummon = NULL;
int32_t DuelDlgGetPosMaskOfThisSummonShim(void) {
    shimLog("DuelDlgGetPosMaskOfThisSummon() ");
    int32_t result = DuelDlgGetPosMaskOfThisSummon();
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemNumType DuelDlgGetSelectItemNum = NULL;
int32_t DuelDlgGetSelectItemNumShim(void) {
    shimLog("DuelDlgGetSelectItemNum() ");
    int32_t result = DuelDlgGetSelectItemNum();
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemStrType DuelDlgGetSelectItemStr = NULL;
int32_t DuelDlgGetSelectItemStrShim(int32_t index) {
    shimLog("DuelDlgGetSelectItemStr(%d) ", index);
    int32_t result = DuelDlgGetSelectItemStr(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelDlgGetSelectItemEnableType DuelDlgGetSelectItemEnable = NULL;
int32_t DuelDlgGetSelectItemEnableShim(int32_t index) {
    shimLog("DuelDlgGetSelectItemEnable(%d) ", index);
    int32_t result = DuelDlgGetSelectItemEnable(index);
    shimLog(" %d\n", result);
    return result;
}

static DlgProcGetSummoningMonsterUniqueIDType DlgProcGetSummoningMonsterUniqueID = NULL;
int32_t DlgProcGetSummoningMonsterUniqueIDShim(void) {
    shimLog("DlgProcGetSummoningMonsterUniqueID() ");
    int32_t result = DlgProcGetSummoningMonsterUniqueID();
    shimLog(" %d\n", result);
    return result;
}

static GetRevisionType GetRevision = NULL;
int32_t GetRevisionShim(void) {
    shimLog("GetRevision() ");
    int32_t result = GetRevision();
    shimLog(" %d\n", result);
    return result;
}

static GetBinHashType GetBinHash = NULL;
int32_t GetBinHashShim(int32_t iIndex) {
    shimLog("GetBinHash(%d) ", iIndex);
    int32_t result = GetBinHash(iIndex);
    shimLog(" %d\n", result);
    return result;
}

static SetWorkMemoryType SetWorkMemory = NULL;
int32_t SetWorkMemoryShim(void* pWork) {
    shimLog("SetWorkMemory(%p) ", pWork);
    int32_t result = SetWorkMemory(pWork);
    shimLog(" %d\n", result);
    return result;
}

static DuelSysInitRushType DuelSysInitRush = NULL;
int32_t DuelSysInitRushShim(void) {
    shimLog("DuelSysInitRush() ");
    int32_t result = DuelSysInitRush();
    shimLog(" %d\n", result);
    return result;
}

static DuelSysInitQuestionType DuelSysInitQuestion = NULL;
int32_t DuelSysInitQuestionShim(void* pScript) {
    shimLog("DuelSysInitQuestion(%p) ", pScript);
    int32_t result = DuelSysInitQuestion(pScript);
    shimLog(" %d\n", result);
    return result;
}

static DuelSysInitCustomType DuelSysInitCustom = NULL;
int32_t DuelSysInitCustomShim(int32_t fDuelType, DuelBool tag, int32_t life0, int32_t life1, int32_t hand0, int32_t hand1, DuelBool shuf) {
    shimLog("DuelSysInitCustom(%d, %s, %d, %d, %d, %d, %s) ", fDuelType, tag, life0, life1, hand0, hand1, shuf);
    int32_t result = DuelSysInitCustom(fDuelType, tag, life0, life1, hand0, hand1, shuf);
    shimLog(" %d\n", result);
    return result;
}

static DuelSysActType DuelSysAct = NULL;
int32_t DuelSysActShim(void) {
    shimLog("DuelSysAct() ");
    int32_t result = DuelSysAct();
    shimLog(" %d\n", result);
    return result;
}

static DuelSysClearWorkType DuelSysClearWork = NULL;
void DuelSysClearWorkShim(void) {
    shimLog("DuelSysClearWork()\n");
    DuelSysClearWork();
}

static DuelSysSetDeck2Type DuelSysSetDeck2 = NULL;
void DuelSysSetDeck2Shim(int32_t player, int32_t* mainDeck, int32_t mainNum, int32_t* extraDeck, int32_t extraNum, int32_t* sideDeck, int32_t sideNum) {
    shimLog("DuelSysSetDeck2(%d, %p, %d, %p, %d, %p, %d)\n", player, mainDeck, mainNum, extraDeck, extraNum, sideDeck, sideNum);
    DuelSysSetDeck2(player, mainDeck, mainNum, extraDeck, extraNum, sideDeck, sideNum);
}

static DuelSetRandomSeedType DuelSetRandomSeed = NULL;
void DuelSetRandomSeedShim(uint32_t seed) {
    shimLog("DuelSetRandomSeed(%d)\n", seed);
    DuelSetRandomSeed(seed);
}

static DuelSetMyPlayerNumType DuelSetMyPlayerNum = NULL;
void DuelSetMyPlayerNumShim(int32_t player) {
    shimLog("DuelSetMyPlayerNum(%d)\n", player);
    DuelSetMyPlayerNum(player);
}

static DuelSetPlayerTypeType DuelSetPlayerType = NULL;
void DuelSetPlayerTypeShim(int32_t player, int32_t type) {
    shimLog("DuelSetPlayerType(%d, %d)\n", player, type);
    DuelSetPlayerType(player, type);
}

static DuelIsHumanType DuelIsHuman = NULL;
int32_t DuelIsHumanShim(int32_t player) {
    shimLog("DuelIsHuman(%d) ", player);
    int32_t result = DuelIsHuman(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelMyselfType DuelMyself = NULL;
int32_t DuelMyselfShim(void) {
    shimLog("DuelMyself() ");
    int32_t result = DuelMyself();
    shimLog(" %d\n", result);
    return result;
}

static DuelRivalType DuelRival = NULL;
int32_t DuelRivalShim(void) {
    shimLog("DuelRival() ");
    int32_t result = DuelRival();
    shimLog(" %d\n", result);
    return result;
}

static DuelIsMyselfType DuelIsMyself = NULL;
int32_t DuelIsMyselfShim(int32_t player) {
    shimLog("DuelIsMyself(%d) ", player);
    int32_t result = DuelIsMyself(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsRivalType DuelIsRival = NULL;
int32_t DuelIsRivalShim(int32_t player) {
    shimLog("DuelIsRival(%d) ", player);
    int32_t result = DuelIsRival(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelSetCpuParamType DuelSetCpuParam = NULL;
void DuelSetCpuParamShim(int32_t player, uint32_t param) {
    shimLog("DuelSetCpuParam(%d, %d)\n", player, param);
    DuelSetCpuParam(player, param);
}

static DuelSetFirstPlayerType DuelSetFirstPlayer = NULL;
void DuelSetFirstPlayerShim(int32_t player) {
    shimLog("DuelSetFirstPlayer(%d)\n", player);
    DuelSetFirstPlayer(player);
}

static DuelGetDuelResultType DuelGetDuelResult = NULL;
int32_t DuelGetDuelResultShim(void) {
    shimLog("DuelGetDuelResult() ");
    int32_t result = DuelGetDuelResult();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetDuelFinishType DuelGetDuelFinish = NULL;
int32_t DuelGetDuelFinishShim(void) {
    shimLog("DuelGetDuelFinish() ");
    int32_t result = DuelGetDuelFinish();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetDuelFinishCardIDType DuelGetDuelFinishCardID = NULL;
int32_t DuelGetDuelFinishCardIDShim(void) {
    shimLog("DuelGetDuelFinishCardID() ");
    int32_t result = DuelGetDuelFinishCardID();
    shimLog(" %d\n", result);
    return result;
}

static DuelSetDuelLimitedTypeType DuelSetDuelLimitedType = NULL;
void DuelSetDuelLimitedTypeShim(uint32_t limitedType) {
    shimLog("DuelSetDuelLimitedType(%d)\n", limitedType);
    DuelSetDuelLimitedType(limitedType);
}

static SetEffectDelegateType SetEffectDelegate = NULL;
void SetEffectDelegateShim(DuelThreadRunEffectDeleg runEffct, DuelThreadIsBusyEffectDeleg isBusyEffect) {
    shimLog("SetEffectDelegate(%p, %p)\n", runEffct, isBusyEffect);
    SetEffectDelegate(runEffct, isBusyEffect);
}

static DuelIsThisQuickDuelType DuelIsThisQuickDuel = NULL;
int32_t DuelIsThisQuickDuelShim(void) {
    shimLog("DuelIsThisQuickDuel() ");
    int32_t result = DuelIsThisQuickDuel();
    shimLog(" %d\n", result);
    return result;
}

static SetCardExistWorkType SetCardExistWork = NULL;
void SetCardExistWorkShim(void* pWork, int32_t size, int32_t count) {
    shimLog("SetCardExistWork(%p, %d, %d)\n", pWork, size, count);
    SetCardExistWork(pWork, size, count);
}

static GetCardExistNumType GetCardExistNum = NULL;
int32_t GetCardExistNumShim(void) {
    shimLog("GetCardExistNum() ");
    int32_t result = GetCardExistNum();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetLPType DuelGetLP = NULL;
int32_t DuelGetLPShim(int32_t player) {
    shimLog("DuelGetLP(%d) ", player);
    int32_t result = DuelGetLP(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelWhichTurnNowType DuelWhichTurnNow = NULL;
int32_t DuelWhichTurnNowShim(void) {
    shimLog("DuelWhichTurnNow() ");
    int32_t result = DuelWhichTurnNow();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCurrentPhaseType DuelGetCurrentPhase = NULL;
uint32_t DuelGetCurrentPhaseShim(void) {
    shimLog("DuelGetCurrentPhase() ");
    uint32_t result = DuelGetCurrentPhase();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCurrentStepType DuelGetCurrentStep = NULL;
uint32_t DuelGetCurrentStepShim(void) {
    shimLog("DuelGetCurrentStep() ");
    uint32_t result = DuelGetCurrentStep();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCurrentDmgStepType DuelGetCurrentDmgStep = NULL;
uint32_t DuelGetCurrentDmgStepShim(void) {
    shimLog("DuelGetCurrentDmgStep() ");
    uint32_t result = DuelGetCurrentDmgStep();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetTurnNumType DuelGetTurnNum = NULL;
uint32_t DuelGetTurnNumShim(void) {
    shimLog("DuelGetTurnNum() ");
    uint32_t result = DuelGetTurnNum();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardPropByUniqueIDType DuelGetCardPropByUniqueID = NULL;
void* DuelGetCardPropByUniqueIDShim(int32_t uniqueId) {
    shimLog("DuelGetCardPropByUniqueID(%d) ", uniqueId);
    void* result = DuelGetCardPropByUniqueID(uniqueId);
    shimLog(" %p\n", result);
    return result;
}

static DuelGetCardUniqueIDType DuelGetCardUniqueID = NULL;
int32_t DuelGetCardUniqueIDShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelGetCardUniqueID(%d, %d, %d) ", player, position, index);
    int32_t result = DuelGetCardUniqueID(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardTurnType DuelGetCardTurn = NULL;
int32_t DuelGetCardTurnShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelGetCardTurn(%d, %d, %d) ", player, position, index);
    int32_t result = DuelGetCardTurn(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardFaceType DuelGetCardFace = NULL;
int32_t DuelGetCardFaceShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelGetCardFace(%d, %d, %d) ", player, position, index);
    int32_t result = DuelGetCardFace(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardNumType DuelGetCardNum = NULL;
int32_t DuelGetCardNumShim(int32_t player, int32_t locate) {
    shimLog("DuelGetCardNum(%d, %d) ", player, locate);
    int32_t result = DuelGetCardNum(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetTopCardIndexType DuelGetTopCardIndex = NULL;
int32_t DuelGetTopCardIndexShim(int32_t player, int32_t locate) {
    shimLog("DuelGetTopCardIndex(%d, %d) ", player, locate);
    int32_t result = DuelGetTopCardIndex(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetHandCardOpenType DuelGetHandCardOpen = NULL;
DuelBool DuelGetHandCardOpenShim(int32_t player, int32_t index) {
    shimLog("DuelGetHandCardOpen(%d, %d) ", player, index);
    DuelBool result = DuelGetHandCardOpen(player, index);
    shimLog(" %s\n", result);
    return result;
}

static DuelSearchCardByUniqueIDType DuelSearchCardByUniqueID = NULL;
uint32_t DuelSearchCardByUniqueIDShim(int32_t uniqueId) {
    shimLog("DuelSearchCardByUniqueID(%d) ", uniqueId);
    uint32_t result = DuelSearchCardByUniqueID(uniqueId);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardIDByUniqueID2Type DuelGetCardIDByUniqueID2 = NULL;
uint32_t DuelGetCardIDByUniqueID2Shim(int32_t uniqueId) {
    shimLog("DuelGetCardIDByUniqueID2(%d) ", uniqueId);
    uint32_t result = DuelGetCardIDByUniqueID2(uniqueId);
    shimLog(" %d\n", result);
    return result;
}

static DuelCanIDoPutMonsterType DuelCanIDoPutMonster = NULL;
uint32_t DuelCanIDoPutMonsterShim(int32_t player) {
    shimLog("DuelCanIDoPutMonster(%d) ", player);
    uint32_t result = DuelCanIDoPutMonster(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelCanIDoSummonMonsterType DuelCanIDoSummonMonster = NULL;
DuelBool DuelCanIDoSummonMonsterShim(int32_t player) {
    shimLog("DuelCanIDoSummonMonster(%d) ", player);
    DuelBool result = DuelCanIDoSummonMonster(player);
    shimLog(" %s\n", result);
    return result;
}

static DuelCanIDoSpecialSummonType DuelCanIDoSpecialSummon = NULL;
DuelBool DuelCanIDoSpecialSummonShim(int32_t player) {
    shimLog("DuelCanIDoSpecialSummon(%d) ", player);
    DuelBool result = DuelCanIDoSpecialSummon(player);
    shimLog(" %s\n", result);
    return result;
}

static DuelGetCardInHandType DuelGetCardInHand = NULL;
uint32_t DuelGetCardInHandShim(int32_t player) {
    shimLog("DuelGetCardInHand(%d) ", player);
    uint32_t result = DuelGetCardInHand(player);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetCardBasicValType DuelGetCardBasicVal = NULL;
void DuelGetCardBasicValShim(int32_t player, int32_t pos, int32_t index, DuelBasicVal* pVal) {
    shimLog("DuelGetCardBasicVal(%d, %d, %d, %p)\n", player, pos, index, pVal);
    DuelGetCardBasicVal(player, pos, index, pVal);
}

static DuelGetTrapMonstBasicValType DuelGetTrapMonstBasicVal = NULL;
int32_t DuelGetTrapMonstBasicValShim(int32_t cardId, DuelBasicVal* pVal) {
    shimLog("DuelGetTrapMonstBasicVal(%d, %p) ", cardId, pVal);
    int32_t result = DuelGetTrapMonstBasicVal(cardId, pVal);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardOverlayNumType DuelGetThisCardOverlayNum = NULL;
int32_t DuelGetThisCardOverlayNumShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardOverlayNum(%d, %d) ", player, locate);
    int32_t result = DuelGetThisCardOverlayNum(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static FusionGetMaterialListType FusionGetMaterialList = NULL;
int32_t FusionGetMaterialListShim(int32_t uniqueId, void* list) {
    shimLog("FusionGetMaterialList(%d, %p) ", uniqueId, list);
    int32_t result = FusionGetMaterialList(uniqueId, list);
    shimLog(" %d\n", result);
    return result;
}

static FusionIsThisTunedMonsterInTuningType FusionIsThisTunedMonsterInTuning = NULL;
int32_t FusionIsThisTunedMonsterInTuningShim(int32_t wUniqueID) {
    shimLog("FusionIsThisTunedMonsterInTuning(%d) ", wUniqueID);
    int32_t result = FusionIsThisTunedMonsterInTuning(wUniqueID);
    shimLog(" %d\n", result);
    return result;
}

static FusionGetMonsterLevelInTuningType FusionGetMonsterLevelInTuning = NULL;
int32_t FusionGetMonsterLevelInTuningShim(int32_t wUniqueID) {
    shimLog("FusionGetMonsterLevelInTuning(%d) ", wUniqueID);
    int32_t result = FusionGetMonsterLevelInTuning(wUniqueID);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisCardExistType DuelIsThisCardExist = NULL;
int32_t DuelIsThisCardExistShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisCardExist(%d, %d) ", player, locate);
    int32_t result = DuelIsThisCardExist(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectIDAtChainType DuelGetThisCardEffectIDAtChain = NULL;
int32_t DuelGetThisCardEffectIDAtChainShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardEffectIDAtChain(%d, %d) ", player, locate);
    int32_t result = DuelGetThisCardEffectIDAtChain(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetAttackTargetMaskType DuelGetAttackTargetMask = NULL;
int32_t DuelGetAttackTargetMaskShim(int32_t player, int32_t locate) {
    shimLog("DuelGetAttackTargetMask(%d, %d) ", player, locate);
    int32_t result = DuelGetAttackTargetMask(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardDirectFlagType DuelGetThisCardDirectFlag = NULL;
int32_t DuelGetThisCardDirectFlagShim(int32_t player, int32_t index) {
    shimLog("DuelGetThisCardDirectFlag(%d, %d) ", player, index);
    int32_t result = DuelGetThisCardDirectFlag(player, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldAffectIconType DuelGetFldAffectIcon = NULL;
void DuelGetFldAffectIconShim(int32_t player, int32_t locate, void* ptr, int32_t view_player) {
    shimLog("DuelGetFldAffectIcon(%d, %d, %p, %d)\n", player, locate, ptr, view_player);
    DuelGetFldAffectIcon(player, locate, ptr, view_player);
}

static DuelGetThisCardCounterType DuelGetThisCardCounter = NULL;
int32_t DuelGetThisCardCounterShim(int32_t player, int32_t locate, int32_t counter) {
    shimLog("DuelGetThisCardCounter(%d, %d, %d) ", player, locate, counter);
    int32_t result = DuelGetThisCardCounter(player, locate, counter);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardTurnCounterType DuelGetThisCardTurnCounter = NULL;
int32_t DuelGetThisCardTurnCounterShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardTurnCounter(%d, %d) ", player, locate);
    int32_t result = DuelGetThisCardTurnCounter(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisTunerMonsterType DuelIsThisTunerMonster = NULL;
int32_t DuelIsThisTunerMonsterShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisTunerMonster(%d, %d) ", player, locate);
    int32_t result = DuelIsThisTunerMonster(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisNormalMonsterType DuelIsThisNormalMonster = NULL;
int32_t DuelIsThisNormalMonsterShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisNormalMonster(%d, %d) ", player, locate);
    int32_t result = DuelIsThisNormalMonster(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisEffectiveMonsterType DuelIsThisEffectiveMonster = NULL;
DuelBool DuelIsThisEffectiveMonsterShim(int32_t player, int32_t index) {
    shimLog("DuelIsThisEffectiveMonster(%d, %d) ", player, index);
    DuelBool result = DuelIsThisEffectiveMonster(player, index);
    shimLog(" %s\n", result);
    return result;
}

static DeulIsThisEffectiveMonsterWithDualType DeulIsThisEffectiveMonsterWithDual = NULL;
DuelBool DeulIsThisEffectiveMonsterWithDualShim(int32_t player, int32_t index) {
    shimLog("DeulIsThisEffectiveMonsterWithDual(%d, %d) ", player, index);
    DuelBool result = DeulIsThisEffectiveMonsterWithDual(player, index);
    shimLog(" %s\n", result);
    return result;
}

static DuelIsThisNormalMonsterInGraveType DuelIsThisNormalMonsterInGrave = NULL;
DuelBool DuelIsThisNormalMonsterInGraveShim(int32_t player, int32_t index) {
    shimLog("DuelIsThisNormalMonsterInGrave(%d, %d) ", player, index);
    DuelBool result = DuelIsThisNormalMonsterInGrave(player, index);
    shimLog(" %s\n", result);
    return result;
}

static DuelIsThisNormalMonsterInHandType DuelIsThisNormalMonsterInHand = NULL;
DuelBool DuelIsThisNormalMonsterInHandShim(int32_t wCardID) {
    shimLog("DuelIsThisNormalMonsterInHand(%d) ", wCardID);
    DuelBool result = DuelIsThisNormalMonsterInHand(wCardID);
    shimLog(" %s\n", result);
    return result;
}

static DuelIsThisTrapMonsterType DuelIsThisTrapMonster = NULL;
int32_t DuelIsThisTrapMonsterShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisTrapMonster(%d, %d) ", player, locate);
    int32_t result = DuelIsThisTrapMonster(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectFlagsType DuelGetThisCardEffectFlags = NULL;
int32_t DuelGetThisCardEffectFlagsShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardEffectFlags(%d, %d) ", player, locate);
    int32_t result = DuelGetThisCardEffectFlags(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgLevelType DuelGetFldMonstOrgLevel = NULL;
int32_t DuelGetFldMonstOrgLevelShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldMonstOrgLevel(%d, %d) ", player, locate);
    int32_t result = DuelGetFldMonstOrgLevel(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgTypeType DuelGetFldMonstOrgType = NULL;
int32_t DuelGetFldMonstOrgTypeShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldMonstOrgType(%d, %d) ", player, locate);
    int32_t result = DuelGetFldMonstOrgType(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldPendScaleType DuelGetFldPendScale = NULL;
int32_t DuelGetFldPendScaleShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldPendScale(%d, %d) ", player, locate);
    int32_t result = DuelGetFldPendScale(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldPendOrgScaleType DuelGetFldPendOrgScale = NULL;
int32_t DuelGetFldPendOrgScaleShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldPendOrgScale(%d, %d) ", player, locate);
    int32_t result = DuelGetFldPendOrgScale(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstRankType DuelGetFldMonstRank = NULL;
int32_t DuelGetFldMonstRankShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldMonstRank(%d, %d) ", player, locate);
    int32_t result = DuelGetFldMonstRank(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetFldMonstOrgRankType DuelGetFldMonstOrgRank = NULL;
int32_t DuelGetFldMonstOrgRankShim(int32_t player, int32_t locate) {
    shimLog("DuelGetFldMonstOrgRank(%d, %d) ", player, locate);
    int32_t result = DuelGetFldMonstOrgRank(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisZoneAvailableType DuelIsThisZoneAvailable = NULL;
int32_t DuelIsThisZoneAvailableShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisZoneAvailable(%d, %d) ", player, locate);
    int32_t result = DuelIsThisZoneAvailable(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisZoneAvailable2Type DuelIsThisZoneAvailable2 = NULL;
int32_t DuelIsThisZoneAvailable2Shim(int32_t player, int32_t locate, DuelBool visibleOnly) {
    shimLog("DuelIsThisZoneAvailable2(%d, %d, %s) ", player, locate, visibleOnly);
    int32_t result = DuelIsThisZoneAvailable2(player, locate, visibleOnly);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardShowParameterType DuelGetThisCardShowParameter = NULL;
int32_t DuelGetThisCardShowParameterShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardShowParameter(%d, %d) ", player, locate);
    int32_t result = DuelGetThisCardShowParameter(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardParameterType DuelGetThisCardParameter = NULL;
uint32_t DuelGetThisCardParameterShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisCardParameter(%d, %d) ", player, locate);
    uint32_t result = DuelGetThisCardParameter(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelGetThisCardEffectListType DuelGetThisCardEffectList = NULL;
uint32_t DuelGetThisCardEffectListShim(int32_t player, int32_t locate, void* list) {
    shimLog("DuelGetThisCardEffectList(%d, %d, %p) ", player, locate, list);
    uint32_t result = DuelGetThisCardEffectList(player, locate, list);
    shimLog(" %d\n", result);
    return result;
}

static DUELCOMGetPosMaskOfThisHandType DUELCOMGetPosMaskOfThisHand = NULL;
uint32_t DUELCOMGetPosMaskOfThisHandShim(int32_t player, int32_t index, int32_t commandId) {
    shimLog("DUELCOMGetPosMaskOfThisHand(%d, %d, %d) ", player, index, commandId);
    uint32_t result = DUELCOMGetPosMaskOfThisHand(player, index, commandId);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisContinuousCardType DuelIsThisContinuousCard = NULL;
int32_t DuelIsThisContinuousCardShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisContinuousCard(%d, %d) ", player, locate);
    int32_t result = DuelIsThisContinuousCard(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisEquipCardType DuelIsThisEquipCard = NULL;
int32_t DuelIsThisEquipCardShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisEquipCard(%d, %d) ", player, locate);
    int32_t result = DuelIsThisEquipCard(player, locate);
    shimLog(" %d\n", result);
    return result;
}

static DuelIsThisMagicType DuelIsThisMagic = NULL;
DuelBool DuelIsThisMagicShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisMagic(%d, %d) ", player, locate);
    DuelBool result = DuelIsThisMagic(player, locate);
    shimLog(" %s\n", result);
    return result;
}

static DuelIsThisTrapType DuelIsThisTrap = NULL;
DuelBool DuelIsThisTrapShim(int32_t player, int32_t locate) {
    shimLog("DuelIsThisTrap(%d, %d) ", player, locate);
    DuelBool result = DuelIsThisTrap(player, locate);
    shimLog(" %s\n", result);
    return result;
}

static DuelGetThisMonsterFightableOnEffectType DuelGetThisMonsterFightableOnEffect = NULL;
DuelBool DuelGetThisMonsterFightableOnEffectShim(int32_t player, int32_t locate) {
    shimLog("DuelGetThisMonsterFightableOnEffect(%d, %d) ", player, locate);
    DuelBool result = DuelGetThisMonsterFightableOnEffect(player, locate);
    shimLog(" %s\n", result);
    return result;
}

static DUELCOMGetRecommendSideType DUELCOMGetRecommendSide = NULL;
int32_t DUELCOMGetRecommendSideShim(void) {
    shimLog("DUELCOMGetRecommendSide() ");
    int32_t result = DUELCOMGetRecommendSide();
    shimLog(" %d\n", result);
    return result;
}

static DuelGetDuelFlagDeckReverseType DuelGetDuelFlagDeckReverse = NULL;
DuelBool DuelGetDuelFlagDeckReverseShim(void) {
    shimLog("DuelGetDuelFlagDeckReverse() ");
    DuelBool result = DuelGetDuelFlagDeckReverse();
    shimLog(" %s\n", result);
    return result;
}

static DuelComGetCommandMaskType DuelComGetCommandMask = NULL;
uint32_t DuelComGetCommandMaskShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelComGetCommandMask(%d, %d, %d) ", player, position, index);
    uint32_t result = DuelComGetCommandMask(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelComGetTextIDOfThisCommandType DuelComGetTextIDOfThisCommand = NULL;
uint32_t DuelComGetTextIDOfThisCommandShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelComGetTextIDOfThisCommand(%d, %d, %d) ", player, position, index);
    uint32_t result = DuelComGetTextIDOfThisCommand(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelComGetTextIDOfThisSummonType DuelComGetTextIDOfThisSummon = NULL;
uint32_t DuelComGetTextIDOfThisSummonShim(int32_t player, int32_t position, int32_t index) {
    shimLog("DuelComGetTextIDOfThisSummon(%d, %d, %d) ", player, position, index);
    uint32_t result = DuelComGetTextIDOfThisSummon(player, position, index);
    shimLog(" %d\n", result);
    return result;
}

static DuelComDoCommandType DuelComDoCommand = NULL;
void DuelComDoCommandShim(int32_t player, int32_t position, int32_t index, int32_t commandId) {
    shimLog("DuelComDoCommand(%d, %d, %d, %d)\n", player, position, index, commandId);
    DuelComDoCommand(player, position, index, commandId);
}

static DuelComCancelCommand2Type DuelComCancelCommand2 = NULL;
int32_t DuelComCancelCommand2Shim(DuelBool decide) {
    shimLog("DuelComCancelCommand2(%s) ", decide);
    int32_t result = DuelComCancelCommand2(decide);
    shimLog(" %d\n", result);
    return result;
}

static DuelComDefaultLocationType DuelComDefaultLocation = NULL;
void DuelComDefaultLocationShim(void) {
    shimLog("DuelComDefaultLocation()\n");
    DuelComDefaultLocation();
}

static DuelComGetMovablePhaseType DuelComGetMovablePhase = NULL;
uint32_t DuelComGetMovablePhaseShim(void) {
    shimLog("DuelComGetMovablePhase() ");
    uint32_t result = DuelComGetMovablePhase();
    shimLog(" %d\n", result);
    return result;
}

static DuelComMovePhaseType DuelComMovePhase = NULL;
void DuelComMovePhaseShim(int32_t phase) {
    shimLog("DuelComMovePhase(%d)\n", phase);
    DuelComMovePhase(phase);
}

static DuelComDebugCommandType DuelComDebugCommand = NULL;
void DuelComDebugCommandShim(void) {
    shimLog("DuelComDebugCommand()\n");
    DuelComDebugCommand();
}

static CardRareGetBufferSizeType CardRareGetBufferSize = NULL;
uint32_t CardRareGetBufferSizeShim(void) {
    shimLog("CardRareGetBufferSize() ");
    uint32_t result = CardRareGetBufferSize();
    shimLog(" %d\n", result);
    return result;
}

static CardRareSetRareType CardRareSetRare = NULL;
void CardRareSetRareShim(void* pBuf, void* rare0, void* rare1, void* rare2, void* rare3) {
    shimLog("CardRareSetRare(%p, %p, %p, %p, %p)\n", pBuf, rare0, rare1, rare2, rare3);
    CardRareSetRare(pBuf, rare0, rare1, rare2, rare3);
}

static CardRareGetRareByUniqueIDType CardRareGetRareByUniqueID = NULL;
int32_t CardRareGetRareByUniqueIDShim(int32_t uniqueId) {
    shimLog("CardRareGetRareByUniqueID(%d) ", uniqueId);
    int32_t result = CardRareGetRareByUniqueID(uniqueId);
    shimLog(" %d\n", result);
    return result;
}

static CardRareSetBufferType CardRareSetBuffer = NULL;
void CardRareSetBufferShim(void* pBuf) {
    shimLog("CardRareSetBuffer(%p)\n", pBuf);
    CardRareSetBuffer(pBuf);
}

static DuelResultGetMemoType DuelResultGetMemo = NULL;
int32_t DuelResultGetMemoShim(int32_t player, void* dst) {
    shimLog("DuelResultGetMemo(%d, %p) ", player, dst);
    int32_t result = DuelResultGetMemo(player, dst);
    shimLog(" %d\n", result);
    return result;
}

static DuelResultGetDataType DuelResultGetData = NULL;
int32_t DuelResultGetDataShim(int32_t player, void* dst) {
    shimLog("DuelResultGetData(%d, %p) ", player, dst);
    int32_t result = DuelResultGetData(player, dst);
    shimLog(" %d\n", result);
    return result;
}

static SetAddRecordDelegateType SetAddRecordDelegate = NULL;
void SetAddRecordDelegateShim(DuelAddRecord addRecord) {
    shimLog("SetAddRecordDelegate(%p)\n", addRecord);
    SetAddRecordDelegate(addRecord);
}

static SetPlayRecordDelegateType SetPlayRecordDelegate = NULL;
void SetPlayRecordDelegateShim(DuelNowRecord nowRecord, DuelRecordNext recordNext, DuelRecordBegin recordBegin, DuelIsRecordEnd isRecordEnd) {
    shimLog("SetPlayRecordDelegate(%p, %p, %p, %p)\n", nowRecord, recordNext, recordBegin, isRecordEnd);
    SetPlayRecordDelegate(nowRecord, recordNext, recordBegin, isRecordEnd);
}

static DuelIsReplayModeType DuelIsReplayMode = NULL;
int32_t DuelIsReplayModeShim(void) {
    shimLog("DuelIsReplayMode() ");
    int32_t result = DuelIsReplayMode();
    shimLog(" %d\n", result);
    return result;
}

static SetDuelChallengeType SetDuelChallenge = NULL;
void SetDuelChallengeShim(int32_t flagbit) {
    shimLog("SetDuelChallenge(%d)\n", flagbit);
    SetDuelChallenge(flagbit);
}

static SetDuelChallenge2Type SetDuelChallenge2 = NULL;
void SetDuelChallenge2Shim(int32_t player, int32_t flagbit) {
    shimLog("SetDuelChallenge2(%d, %d)\n", player, flagbit);
    SetDuelChallenge2(player, flagbit);
}

static DuelListIsMultiModeType DuelListIsMultiMode = NULL;
int32_t DuelListIsMultiModeShim(void) {
    shimLog("DuelListIsMultiMode() ");
    int32_t result = DuelListIsMultiMode();
    shimLog(" %d\n", result);
    return result;
}

static DuelListInitStringType DuelListInitString = NULL;
void DuelListInitStringShim(void) {
    shimLog("DuelListInitString()\n");
    DuelListInitString();
}

static DuelListGetSelectMaxType DuelListGetSelectMax = NULL;
int32_t DuelListGetSelectMaxShim(void) {
    shimLog("DuelListGetSelectMax() ");
    int32_t result = DuelListGetSelectMax();
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetSelectMinType DuelListGetSelectMin = NULL;
int32_t DuelListGetSelectMinShim(void) {
    shimLog("DuelListGetSelectMin() ");
    int32_t result = DuelListGetSelectMin();
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemMaxType DuelListGetItemMax = NULL;
int32_t DuelListGetItemMaxShim(void) {
    shimLog("DuelListGetItemMax() ");
    int32_t result = DuelListGetItemMax();
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemIDType DuelListGetItemID = NULL;
int32_t DuelListGetItemIDShim(int32_t index) {
    shimLog("DuelListGetItemID(%d) ", index);
    int32_t result = DuelListGetItemID(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemUniqueIDType DuelListGetItemUniqueID = NULL;
int32_t DuelListGetItemUniqueIDShim(int32_t index) {
    shimLog("DuelListGetItemUniqueID(%d) ", index);
    int32_t result = DuelListGetItemUniqueID(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemFromType DuelListGetItemFrom = NULL;
int32_t DuelListGetItemFromShim(int32_t index) {
    shimLog("DuelListGetItemFrom(%d) ", index);
    int32_t result = DuelListGetItemFrom(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemMsgType DuelListGetItemMsg = NULL;
int32_t DuelListGetItemMsgShim(int32_t index) {
    shimLog("DuelListGetItemMsg(%d) ", index);
    int32_t result = DuelListGetItemMsg(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetItemAttributeType DuelListGetItemAttribute = NULL;
int32_t DuelListGetItemAttributeShim(int32_t index) {
    shimLog("DuelListGetItemAttribute(%d) ", index);
    int32_t result = DuelListGetItemAttribute(index);
    shimLog(" %d\n", result);
    return result;
}

static DuelListGetCardAttributeType DuelListGetCardAttribute = NULL;
int32_t DuelListGetCardAttributeShim(int32_t iLookPlayer, int32_t wUniqueID) {
    shimLog("DuelListGetCardAttribute(%d, %d) ", iLookPlayer, wUniqueID);
    int32_t result = DuelListGetCardAttribute(iLookPlayer, wUniqueID);
    shimLog(" %d\n", result);
    return result;
}

static DuelListSetIndexType DuelListSetIndex = NULL;
void DuelListSetIndexShim(int32_t index) {
    shimLog("DuelListSetIndex(%d)\n", index);
    DuelListSetIndex(index);
}

static DuelListSetCardExDataType DuelListSetCardExData = NULL;
void DuelListSetCardExDataShim(int32_t index, int32_t data) {
    shimLog("DuelListSetCardExData(%d, %d)\n", index, data);
    DuelListSetCardExData(index, data);
}

static DuelListGetItemTargetUniqueIDType DuelListGetItemTargetUniqueID = NULL;
int32_t DuelListGetItemTargetUniqueIDShim(int32_t index) {
    shimLog("DuelListGetItemTargetUniqueID(%d) ", index);
    int32_t result = DuelListGetItemTargetUniqueID(index);
    shimLog(" %d\n", result);
    return result;
}

