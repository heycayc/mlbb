virtual bool openvip(VipLevel vl);
virtual bool requestPhoto();
virtual bool ping();
virtual bool sessionlogin(COM_LoginInfo& info);
virtual bool login(COM_LoginInfo& info);
virtual bool createPlayer(std::string& playername, U8 playerTmpId);
virtual bool deletePlayer(std::string& playername);
virtual bool enterGame(U32 playerInstId);
virtual bool requestBag();
virtual bool requestEmployees();
virtual bool requestStorage(StorageType tp);
virtual bool requestAchievement();
virtual bool initminig();
virtual bool requestCompound();
virtual bool move(F32 x, F32 z);
virtual bool moveToNpc(S32 npcid);
virtual bool moveToNpc2(NpcType type);
virtual bool moveToZone(S32 sceneId, S32 zoneId);
virtual bool autoBattle();
virtual bool stopAutoBattle();
virtual bool stopMove();
virtual bool exitCopy();
virtual bool transforScene(S32 sceneId);
virtual bool sceneLoaded();
virtual bool querySimplePlayerInst(U32 instId);
virtual bool logout();
virtual bool changProp(U32 guid, std::vector< COM_Addprop >& props);
virtual bool learnSkill(U32 skid);
virtual bool babyLearnSkill(U32 instId, U32 oldSkId, U32 newSkId, U32 newSkLv);
virtual bool forgetSkill(U32 skid);
virtual bool syncOrder(COM_Order& order);
virtual bool syncOrderTimeout();
virtual bool sendChat(COM_Chat& content, std::string& targetName);
virtual bool requestAudio(S32 audioId);
virtual bool publishItemInst(ItemContainerType type, U32 itemInstId, ChatKind chatType, std::string& playerName);
virtual bool queryItemInst(S32 showId);
virtual bool publishbabyInst(ChatKind type, U32 babyInstId, std::string& playerName);
virtual bool querybabyInst(S32 showId);
virtual bool useItem(U32 slot, U32 target, U32 stack);
virtual bool wearEquipment(U32 target, U32 itemInstId);
virtual bool delEquipment(U32 target, U32 itemInstId);
virtual bool setPlayerFront(bool isFront);
virtual bool setBattlebaby(U32 babyID, bool isBattle);
virtual bool changeBabyName(U32 babyID, std::string& name);
virtual bool intensifyBaby(U32 babyid);
virtual bool setBattleEmp(U32 empID, EmployeesBattleGroup group, bool isBattle);
virtual bool changeEmpBattleGroup(EmployeesBattleGroup group);
virtual bool requestEvolve(U32 empInstId);
virtual bool requestUpStar(U32 empInstId);
virtual bool requestDelEmp(U32 empInstId);
virtual bool delEmployee(std::vector< U32 >& emps);
virtual bool onekeyDelEmp();
virtual bool delEmployeeSoul(U32 instid, U32 soulNum);
virtual bool sortBagItem();
virtual bool sellBagItem(U32 instId, U32 stack);
virtual bool depositItemToStorage(U32 instid);
virtual bool depositBabyToStorage(U32 instid);
virtual bool storageItemToBag(U32 instid);
virtual bool storageBabyToPlayer(U32 instid);
virtual bool sortStorage(StorageType tp);
virtual bool delStorageBaby(U32 instid);
virtual bool jointLobby();
virtual bool exitLobby();
virtual bool createTeam(COM_CreateTeamInfo& cti);
virtual bool changeTeam(COM_CreateTeamInfo& info);
virtual bool kickTeamMember(U32 uuid);
virtual bool changeTeamLeader(U32 uuid);
virtual bool joinTeam(U32 teamId, std::string& pwd);
virtual bool exitTeam();
virtual bool changeTeamPassword(std::string& pwd);
virtual bool joinTeamRoom();
virtual bool inviteTeamMember(std::string& name);
virtual bool isjoinTeam(U32 teamId, bool isFlag);
virtual bool leaveTeam();
virtual bool backTeam();
virtual bool refuseBackTeam();
virtual bool teamCallMember(S32 playerId);
virtual bool requestJoinTeam(std::string& targetName);
virtual bool ratifyJoinTeam(std::string& sendName);
virtual bool drawLotteryBox(BoxType type, bool isFree);
virtual bool acceptQuest(S32 questId);
virtual bool submitQuest(S32 npcId, S32 questId);
virtual bool giveupQuest(S32 questId);
virtual bool requestContactInfoById(U32 instId);
virtual bool requestContactInfoByName(std::string& instName);
virtual bool requestFriendList();
virtual bool addFriend(U32 instId);
virtual bool delFriend(U32 instId);
virtual bool addBlacklist(U32 instId);
virtual bool delBlacklist(U32 instId);
virtual bool requestReferrFriend();
virtual bool mining(S32 gatherId, S32 times);
virtual bool compoundItem(S32 itemId, S32 gemId);
virtual bool bagItemSplit(S32 instId, S32 splitNum);
virtual bool requestChallenge(std::string& name);
virtual bool requestRival();
virtual bool requestMySelfJJCData();
virtual bool requestCheckMsg(std::string& name);
virtual bool requestMyAllbattleMsg();
virtual bool requestJJCRank();
virtual bool requestLevelRank();
virtual bool requestBabyRank();
virtual bool requestEmpRank();
virtual bool requestPlayerFFRank();
virtual bool queryOnlinePlayerbyName(std::string& name);
virtual bool queryPlayerbyName(std::string& name);
virtual bool queryBaby(U32 instId);
virtual bool queryEmployee(U32 instId);
virtual bool guideFinish(U64 guideIdx);
virtual bool enterBattle(S32 battleId);
virtual bool shopBuyItem(S32 id, S32 num);
virtual bool getFirstRechargeItem();
virtual bool requestLevelGift(S32 level);
virtual bool setCurrentTitle(S32 title);
virtual bool openBuyBox();
virtual bool requestAchaward(S32 achId);
virtual bool sign(S32 index);
virtual bool requestSignupReward7();
virtual bool requestSignupReward14();
virtual bool requestSignupReward28();
virtual bool requestActivityReward(S32 index);
virtual bool resetHundredTier();
virtual bool enterHundredScene(S32 level);
virtual bool delBaby(S32 instId);
virtual bool resetBaby(S32 instId);
virtual bool resetBabyProp(S32 instId);
virtual bool remouldBaby(S32 instid);
virtual bool empSkillLevelUp(U32 empId, S32 skillId);
virtual bool setOpenDoubleTimeFlag(bool isFlag);
virtual bool talkedNpc(S32 npcId);
virtual bool jjcBattleGo(U32 id);
virtual bool requestMyJJCTeamMsg();
virtual bool startMatching();
virtual bool stopMatching();
virtual bool exitPvpJJC();
virtual bool joinPvpLobby();
virtual bool exitPvpLobby();
virtual bool requestpvprank();
virtual bool joinWarriorchoose();
virtual bool warriorStart();
virtual bool warriorStop();
virtual bool sendMail(std::string& playername, std::string& title, std::string& content);
virtual bool readMail(S32 mailId);
virtual bool delMail(S32 mailId);
virtual bool getMailItem(S32 mailId);
virtual bool requestState();
virtual bool createGuild(std::string& guildName);
virtual bool delGuild(U32 guildId);
virtual bool requestJoinGuild(U32 guid);
virtual bool leaveGuild();
virtual bool kickOut(S32 guid);
virtual bool acceptRequestGuild(S32 playerId);
virtual bool refuseRequestGuild(S32 playerId);
virtual bool changeMemberPosition(S32 targetId, GuildJob job);
virtual bool transferPremier(S32 targetId);
virtual bool changeGuildNotice(std::string& notice);
virtual bool queryGuildList(S16 page);
virtual bool inviteJoinGuild(std::string& playerName);
virtual bool respondInviteJoinGuild(std::string& sendName);
virtual bool buyGuildItem(S32 tableId, S32 times);
virtual bool entryGuildBattle();
virtual bool transforGuildBattleScene();
virtual bool addGuildMoney(S32 money);
virtual bool updateGuildBuiling(GuildBuildingType gbt);
virtual bool refreshGuildShop();
virtual bool levelupGuildSkill(S32 skId);
virtual bool presentGuildItem(S32 num);
virtual bool progenitusAddExp(S32 monsterId, bool isSuper);
virtual bool setProgenitusPosition(S32 mId, S32 pos);
virtual bool guildsign();
virtual bool fetchSelling(COM_SearchContext& context);
virtual bool fetchSelling2(COM_SearchContext& context);
virtual bool selling(S32 iteminstid, S32 babyinstid, S32 price);
virtual bool unselling(S32 sellid);
virtual bool buy(S32 sellid);
virtual bool fixItem(S32 instId, FixType type);
virtual bool fixAllItem(std::vector< U32 >& items, FixType type);
virtual bool makeDebirsItem(S32 instId, S32 num);
virtual bool levelUpMagicItem(std::vector< U32 >& items);
virtual bool tupoMagicItem(S32 level);
virtual bool changeMagicJob(JobType job);
virtual bool requestPk(U32 playerId);
virtual bool uiBehavior(UIBehaviorType type);
virtual bool openZhuanpan();
virtual bool zhuanpanGo(U32 counter);
virtual bool redemptionSpree(std::string& code);
virtual bool sceneFilter(std::vector< SceneFilterType >& sfType);
virtual bool sendExamAnswer(U32 questionId, U8 answer);
virtual bool sendwishing(COM_Wishing& wish);
virtual bool requestWish();
virtual bool leaderCloseDialog();
virtual bool requestOnlineReward(U32 index);
virtual bool requestFundReward(U32 level);
virtual bool openCard(U16 index);
virtual bool resetCard();
virtual bool hotRoleBuy();
virtual bool requestSevenReward(U32 qid);
virtual bool vipreward();
virtual bool requestChargeTotalSingleReward(U32 index);
virtual bool requestChargeTotalReward(U32 index);
virtual bool requestChargeEverySingleReward(U32 index);
virtual bool requestChargeEveryReward(U32 index);
virtual bool requestLoginTotal(U32 index);
virtual bool buyDiscountStoreSingle(S32 itemId, S32 itemStack);
virtual bool buyDiscountStore(S32 itemId, S32 itemStack);
virtual bool requestEmployeeActivityReward(U32 index);
virtual bool requestmyselfrechargeleReward(U32 index);
virtual bool requestEverydayIntegral();
virtual bool buyIntegralItem(U32 id, U32 num);
virtual bool familyLoseLeader();
virtual bool verificationSMS(std::string& phoneNumber, std::string& code);
virtual bool lockItem(S32 instId, bool isLock);
virtual bool lockBaby(S32 instId, bool isLock);
virtual bool showBaby(S32 instId);
virtual bool wearFuwen(S32 itemInstId);
virtual bool takeoffFuwen(S32 slotId);
virtual bool compFuwen(S32 itemInstId);
virtual bool requestEmployeeQuest();
virtual bool acceptEmployeeQuest(S32 questId, std::vector< S32 >& employees);
virtual bool submitEmployeeQuest(S32 questId);
virtual bool crystalUpLevel();
virtual bool resetCrystalProp(std::vector< S32 >& locklist);
virtual bool magicItemOneKeyLevel();
virtual bool submitQuest2(S32 npcId, S32 questId, S32 instId);
