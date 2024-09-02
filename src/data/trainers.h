const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NULL,
	},

    [TRAINER_MAGGIE] =
    {
        .trainerClass = TRAINER_CLASS_WITCH,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_maggie,
        .trainerName = _("Maggie"),
        .items = {ITEM_BREAD, ITEM_BREAD, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Maggie),
    },

    [TRAINER_GOBLIN_1_ROUTE1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Wartfoot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin1_Route1),
    },

    [TRAINER_GOBLIN_2_ROUTE1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Frogface"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin2_Route1),
    },

    [TRAINER_RSN_ROUTE1] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("Bob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Trainer1_Route1),
    },

    [TRAINER_GOBLIN_3_ROUTE1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Mudbeard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin3),
    },

    [TRAINER_GOBLIN_4_ROUTE1] = 
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Feetfingers"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE1_Goblin4),
    },

    // MILL LANE MILL
    [TRAINER_TRAINER1_MILLLANEMILL] =
	{
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_hunter_f,
        .trainerName = _("Kebbie"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TRAINER1_MILLLANEMILL),
    },

    [TRAINER_TRAINER2_MILLLANEMILL] =
	{
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Hops"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TRAINER2_MILLLANEMILL),
    },

    [TRAINER_TRAINER3_MILLLANEMILL] =
	{
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Cassidy"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TRAINER3_MILLLANEMILL),
    },

    [TRAINER_TRAINER4_MILLLANEMILL] =
	{
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Dixie"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TRAINER4_MILLLANEMILL),
    },

    [TRAINER_MILLIE_MILLER_MILLLANEMILL] =
	{
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Millie"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MILLIE_MILLER_MILLLANEMILL),
    },
    //----------------------------------------------------------------------------------------------------------------------

    [TRAINER_FARMER_ROUTE1] =
    {
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("John"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Farmer_Route1),
    },

    [TRAINER_MUGGER_ROUTE4] =
	{
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Miles"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Mugger_Route4),
    },

    [TRAINER_FARMER_ROUTE4] =
    {
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Leeroy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Farmer_Route4),
    },

    [TRAINER_SCAMMER_ROUTE4] =
	{
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Scammer_Route4),
    },
    // ROUTE 6
    [TRAINER_MUGGER_ROUTE6] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Leo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Mugger_Route6),
    },

    [TRAINER_GOBLIN_4_ROUTE12] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Wormtongue"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin4),
    },

    [TRAINER_GOBLIN_5_ROUTE12] =
	{
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Feethands"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin5),
    },

    [TRAINER_GOBLIN_6_ROUTE12] =
	{
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Eyemonger"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin6),
    },

    [TRAINER_GOBLIN_7_ROUTE12] =
	{
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Smellyback"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Goblin7),
    },

    [TRAINER_RSN_ROUTE12] =
	{
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("N0tAN0Ob37"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Rsn_Route12),
    },

    // Lumrbidge Gym
    [TRAINER_LUMBRIDGE_GYM1] =
	{
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Anabell"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Lumbridge_Gym1),

    },

    [TRAINER_LUMBRIDGE_GYM2] =
	{
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Gideon"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Lumbridge_Gym2),
    },

    [TRAINER_LUMBRIDGE_GYM3] =
	{
        .trainerClass = TRAINER_CLASS_MILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Jesse"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Lumbridge_Gym3),
    },

    [TRAINER_LUMBRIDGE_GYM4] =
	{
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Jericho"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Lumbridge_Gym4),
    },

    [TRAINER_RSN_LUM_SWAMP] =
	{
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Slimethighs"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Rsn_Lum_Swamp),
    },

    [TRAINER_MUGGER_LUM_SWAMP] =
	{
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Robin"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Mugger_Lum_Swamp),
    },

    [TRAINER_SKELETON_LUM_SWAMP] =
	{
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Brittlebone"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Skeleton_Lum_Swamp),
    },

    [TRAINER_LUM_SWAMP_GRASSTEETH] =
	{
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Grassteeth"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Lum_Swamp_GrassTeeth),
    },
    //MITHRILMAN
    [TRAINER_MITHRILMAN1] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN1),
    },

    [TRAINER_MITHRILMAN2] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN2),
    },

    [TRAINER_MITHRILMAN3] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN3),
    },

    [TRAINER_MITHRILMAN4] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN4),
    },

    [TRAINER_MITHRILMAN5] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN5),
    },

    [TRAINER_MITHRILMAN6] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN6),
    },

    [TRAINER_MITHRILMAN7] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN7),
    },

    [TRAINER_MITHRILMAN8] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN8),
    },

    [TRAINER_MITHRILMAN9] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN9),
    },

    [TRAINER_MITHRILMAN10] =
	{
        .trainerClass = TRAINER_CLASS_MITHRILMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mithrilman,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MITHRILMAN10),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_ADMIN_PATTY] =
	{
        .trainerClass = TRAINER_CLASS_HAM_BOSS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("PATTY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_ADMIN_PATTY),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_1),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_2] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_2),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_3] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_3),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_4] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_4),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_5] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_5),
    },

    [TRAINER_KARAMJAVOLCANO_HAM_GRUNT_6] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_HAM_GRUNT_6),
    },

    [TRAINER_KARAMJAVOLCANO_SKELETON_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Humurus"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KaramjaVolcano_SKELETON_1),
    },

    // DRAYNOR MANOR
    [TRAINER_DRAYNOR_MANOR_COUNT_DRAYNOR] =
    {
        .trainerClass = TRAINER_CLASS_COUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_count_draynor,
        .trainerName = _("DRAYNOR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_COUNT_DRAYNOR),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Vertebrae"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_1),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("McBoneFace"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_2),
    },

    [TRAINER_DRAYNOR_MANOR_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_TRAINER_3),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_4] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Tarsus"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_4),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_5] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Sternum"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_5),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_6] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Collar"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_6),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_7] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Pelvis"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_7),
    },

    [TRAINER_DRAYNOR_MANOR_SKELETON_8] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Ribs"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNOR_MANOR_SKELETON_8),
    },

    // ROUTE 2
    [TRAINER_ROUTE2_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("H0w2Typ3"),
        .items = {ITEM_BREAD, ITEM_BREAD, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_1),
    },

    [TRAINER_ROUTE2_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("Tam McGrubor"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_2),
    },

    [TRAINER_ROUTE2_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("Anne Chovii"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_3),
    },

    [TRAINER_ROUTE2_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("SlimyTem"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_4),
    },

    [TRAINER_ROUTE2_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_5),
    },

    [TRAINER_ROUTE2_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_6),
    },

    [TRAINER_ROUTE2_TRAINER_7] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_woodcutting,
        .trainerName = _("110111l1110"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE2_TRAINER_7),
    },

    // WIZARDS TOWER
    [TRAINER_WIZARDSTOWER_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_WIZARDSTOWER_TRAINER_1),
    },

    [TRAINER_WIZARDSTOWER_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("Goldberg"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_WIZARDSTOWER_TRAINER_2),
    },

    [TRAINER_WIZARDSTOWER_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_WIZARDSTOWER_TRAINER_3),
    },

    [TRAINER_WIZARDSTOWER_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_WIZARDSTOWER_TRAINER_4),
    },

    [TRAINER_WIZARDSTOWER_TRAINER_MYRTLE] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_f,
        .trainerName = _("Myrtle"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_WIZARDSTOWER_TRAINER_MYRTLE),
    },

    // ROUTE 3
    [TRAINER_ROUTE3_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("IPWNSKILLS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE3_TRAINER_1),
    },

    [TRAINER_ROUTE5_CAPTAINTOCK] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _("CPT. TOCK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE5_CAPTIANTOCK),
    },

    [TRAINER_ROUTE5_WOODCUTTER] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("CHOPSALOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE5_WOODCUTTER),
    },

    [TRAINER_ROUTE10_MONK] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE10_MONK),
    },

    [TRAINER_ROUTE10_GOBLIN_1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("FEETSTMPER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE10_GOBLIN_1),
    },

    [TRAINER_ROUTE10_GOBLIN_2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("WNDBRSTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE10_GOBLIN_2),
    },

    [TRAINER_ROUTE8_THIEF] =
    {
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_THIEF),
    },

    [TRAINER_ROUTE8_NOOB] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_NOOB),
    },

    [TRAINER_ROUTE8_DnD] =
    {
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dnd,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_DnD),
    },

    [TRAINER_ROUTE8_MINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_MINER_1),
    },

    [TRAINER_ROUTE8_WOODCUTTER] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WOODCUTTER),
    },

    [TRAINER_ROUTE8_MINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_MINER_2),
    },

    [TRAINER_ROUTE8_WIZARD_AIR] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("AIR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WIZARD_AIR),
    },

    [TRAINER_ROUTE8_WIZARD_WATER] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WATER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WIZARD_WATER),
    },

    [TRAINER_ROUTE8_WIZARD_EARTH] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("EARTH"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WIZARD_EARTH),
    },

    [TRAINER_ROUTE8_WIZARD_FIRE] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("FIRE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WIZARD_FIRE),
    },

    [TRAINER_ROUTE8_WIZARD_MALIGNIUS_MORTIFER] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("MALIGNIUS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE8_WIZARD_MALIGNIUS_MORTIFER),
    },

    // ROUTE 9
    [TRAINER_ROUTE9_GOBLIN_1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("HOBS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_GOBLIN_1),
    },

    [TRAINER_ROUTE9_GOBLIN_2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_GOBLIN_2),
    },

    [TRAINER_ROUTE9_GOBLIN_3] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SNOWTOES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_GOBLIN_3),
    },

    [TRAINER_ROUTE9_GOBLIN_4] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_GOBLIN_4),
    },

    [TRAINER_ROUTE9_CHEF] =
    {
        .trainerClass = TRAINER_CLASS_CHEF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_CHEF),
    },

    [TRAINER_ROUTE9_MUGGER] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_MUGGER),
    },

    [TRAINER_ROUTE9_GUTHIX_WIZARD] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guthix_wizard,
        .trainerName = _("GUTHIX"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_GUTHIX_WIZARD),
    },

    [TRAINER_ROUTE9_MINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_MINER_1),
    },

    [TRAINER_ROUTE9_MINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE9_MINER_2),
    },
    // ROUTE 11

    [TRAINER_ROUTE11_QUESTER] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE11_QUESTER),
    },

    [TRAINER_ROUTE11_PIRATE] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE11_PIRATE),
    },

    [TRAINER_ROUTE11_SAILOR] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_sailor,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE11_SAILOR),
    },

    [TRAINER_ROUTE11_PvMer] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE11_PvMer),
    },

    [TRAINER_ROUTE11_GRACEFUL] =
    {
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _("ERKEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE11_GRACEFUL),
    },

    [TRAINER_FALADOR_MODTIMBO] =
	{
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("TIMBO"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_FALADOR_MODTIMBO),
    },

    //LUMBRIDGE SWAMP CAVES
    [TRAINER_LUMBRIDGESWAMPCAVE_FISHERMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("EelFr0g330"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_FISHERMAN_1),
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_SKELETON_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Crispybones"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_SKELETON_1),
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_PVMER_1] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("B00MER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_PVMER_1),
    },

    [TRAINER_DRAYNORSEWERS_SKELETON_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Skully"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNORSEWERS_SKELETON_1),
    },

    [TRAINER_DRAYNORSEWERS_SKELETON_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Tibia"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DRAYNORSEWERS_SKELETON_2),
    },

    [TRAINER_ROUTE6_FIREMAKER] =
    {
        .trainerClass = TRAINER_CLASS_FIREMAKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_firemaking,
        .trainerName = _("LitKindler5"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE6_FIREMAKER),
    },
    //ASGANIRNA DUNGEON
    [TRAINER_AsgarnianDungeon_MUGGER_1] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("IWill4StealU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_MUGGER_1),
    },

    [TRAINER_AsgarnianDungeon_PIRATE_1] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PIRATE_1),
    },

    [TRAINER_AsgarnianDungeon_PIRATE_2] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PIRATE_2),
    },

    [TRAINER_AsgarnianDungeon_PIRATE_3] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PIRATE_3),
    },

    [TRAINER_AsgarnianDungeon_PIRATE_4] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PIRATE_4),
    },

    [TRAINER_AsgarnianDungeon_GOBLIN_1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("GRUNTKNEE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_GOBLIN_1),
    },

    [TRAINER_AsgarnianDungeon_GOBLIN_2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("SHVRKNEES"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_GOBLIN_2),
    },

    [TRAINER_AsgarnianDungeon_QUESTER] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_QUESTER),
    },

    [TRAINER_AsgarnianDungeon_PVM_1] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PVM_1),
    },

    [TRAINER_AsgarnianDungeon_PVM_2] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AsgarnianDungeon_PVM_2),
    },

    [TRAINER_ROUTE6_GUARD_1] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_falador,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE6_GUARD_1),
    },

    //DWARVEN MINES
    [TRAINER_DWARVENMINES_BLACKKNIGHT] =
	{
        .trainerClass = TRAINER_CLASS_BLACK_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_black_knight_m,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_BLACKKNIGHT),
    },

    [TRAINER_DWARVENMINES_HAM] =
	{
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_HAM),
    },

    [TRAINER_DWARVENMINES_SKILLER] =
	{
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("TREET0PS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_SKILLER),
    },

    [TRAINER_DWARVENMINES_MINER] =
	{
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("D33PD1V3"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_MINER),
    },

    [TRAINER_DWARVENMINES_DWARF_1] =
	{
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("SVERRE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_DWARF_1),
    },

    [TRAINER_DWARVENMINES_DWARF_2] =
	{
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("STEINAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_DWARF_2),
    },

    [TRAINER_DWARVENMINES_DWARF_3] =
	{
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("VALDEMAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_DWARF_3),
    },

    [TRAINER_DWARVENMINES_DWARF_4] =
	{
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("DROBAK"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DWARVENMINES_DWARF_4),
    },

    // FALADOR GYM
    [TRAINER_FALADOR_GYM_1] = 
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR THEO"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_1),
    },

    [TRAINER_FALADOR_GYM_2] =
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR EMONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_2),
    },

    [TRAINER_FALADOR_GYM_3] =
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR PRYCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_3),
    },

    [TRAINER_FALADOR_GYM_4] =
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_4),
    },

    [TRAINER_FALADOR_GYM_AMIKVARZE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_sir_amik_varze,
        .trainerName = _("AMIK VARZE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_AMIKVARZE),
    },

    [TRAINER_FALADOR_HAIRDRESSER] =
    {
        .trainerClass = TRAINER_CLASS_LEGEND,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_hairdresser,
        .trainerName = _("HAIRDRSSER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_HAIRDRESSER),
    },

    [TRAINER_ROUTE24_MUGGER] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_MUGGER),
    },

    [TRAINER_ROUTE24_WOODCUTTER_1] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_WOODCUTTER_1),
    },

    [TRAINER_ROUTE24_WOODCUTTER_2] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_WOODCUTTER_2),
    },

    [TRAINER_ROUTE24_GOBLIN_1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_GOBLIN_1),
    },

    [TRAINER_ROUTE24_GOBLIN_2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_GOBLIN_2),
    },

    [TRAINER_ROUTE24_GOBLIN_3] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_GOBLIN_3),
    },

    [TRAINER_ROUTE24_GOBLIN_4] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE24_GOBLIN_4),
    },

    // MUDSKIPPER POINT
    [TRAINER_MUDSKIPPERPOINT_SLAYER] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUDSKIPPERPOINT_SLAYER),
    },

    [TRAINER_MUDSKIPPERPOINT_FISHERMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUDSKIPPERPOINT_FISHERMAN_1),
    },

    [TRAINER_MUDSKIPPERPOINT_FISHERMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUDSKIPPERPOINT_FISHERMAN_2),
    },

    [TRAINER_DEMONHEADGE] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_demonheadge,
        .trainerName = _("Demonheadge"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Demonheadge),
    },

    [TRAINER_ROUTE40_DIVINER] =
    {
        .trainerClass = TRAINER_CLASS_DIVINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_divination,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE40_DIVINER),
    },

    [TRAINER_PUB_SARIM_1] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_PUB_SARIM_1),
    },

    [TRAINER_PUB_SARIM_2] =
    {
        .trainerClass = TRAINER_CLASS_PIRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_pirate,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_PUB_SARIM_2),
    },

    [TRAINER_PUB_SARIM_3] =
    {
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_PUB_SARIM_3),
    },

    [TRAINER_RimmingtonMines_Miner] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_Miner),
    },

    [TRAINER_RimmingtonMines_Ironman] =
    {
        .trainerClass = TRAINER_CLASS_IRONMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ironman,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_Ironman),
    },

    [TRAINER_RimmingtonMines_Slayer] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_Slayer),
    },

    [TRAINER_ROUTE23_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE23_TRAINER_1),
    },

    [TRAINER_ROUTE23_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE23_TRAINER_2),
    },

    [TRAINER_ROUTE23_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_f,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE23_TRAINER_3),
    },

    [TRAINER_ROUTE23_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE23_TRAINER_4),
    },

    [TRAINER_ROUTE23_TRAINER_COUPLE] =
    {
        .trainerClass = TRAINER_CLASS_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_duo,
        .trainerName = _("SARA & TRV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE23_TRAINER_COUPLE),
    },

    [TRAINER_RimmingtonMines_DRAGONBOT_1] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_DRAGONBOT_1),
    },

    [TRAINER_RimmingtonMines_DRAGONBOT_2] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_DRAGONBOT_2),
    },

    [TRAINER_RimmingtonMines_Slayer_1] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_RimmingtonMines_Slayer_1),
    },

    [TRAINER_Varrock_Max] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("MAX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Varrock_Max),
    },

    [TRAINER_Soffan_and_Quo] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("SOFN & QUO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Soffan_and_Quo),
    },

    // ROUTE 18
    [TRAINER_ROUTE18_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER1),
    },

    [TRAINER_ROUTE18_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_canada_grrl,
        .trainerName = _("CAN GRL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER2),
    },

    [TRAINER_ROUTE18_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER4),
    },

    [TRAINER_ROUTE18_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER5),
    },

    [TRAINER_ROUTE18_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER3),
    },

    [TRAINER_ROUTE18_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER6),
    },

    [TRAINER_ROUTE18_TRAINER_7] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE18_TRAINER7),
    },

    // ROUTE20
    [TRAINER_ROUTE20_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE20_TRAINER_1),
    },

    [TRAINER_ROUTE20_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE20_TRAINER_2),
    },

    [TRAINER_ROUTE20_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE20_TRAINER_3),
    },

    [TRAINER_ROUTE20_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE20_TRAINER_4),
    },

    [TRAINER_ROUTE20_DUO] =
    {
        .trainerClass = TRAINER_CLASS_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook_fm_duo,
        .trainerName = _(" & "),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE20_DUO),
    },

    [TRAINER_ROUTE19_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_CHEF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_cook,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE19_TRAINER_1),
    },

    //BARBARIAN GYM
    [TRAINER_BARBARIAN_GYM_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_BARBARIAN_GYM_TRAINER_1),
    },

    [TRAINER_BARBARIAN_GYM_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_f,
        .trainerName = _("LITARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_BARBARIAN_GYM_TRAINER_2),
    },

    [TRAINER_BARBARIAN_GYM_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("HAAKON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_BARBARIAN_GYM_TRAINER_3),
    },

    [TRAINER_BARBARIAN_GYM_GUNTHOR] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_gunthor,
        .trainerName = _("GUNTHOR"),
        .items = {ITEM_BREAD, ITEM_CAKE, ITEM_BLUEBERRY_SPECIAL, ITEM_POTION_ATT},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_BARBARIAN_GYM_GUNTHOR),
    },

    // ROUTE13
    [TRAINER_ROUTE13_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_1),
    },

    [TRAINER_ROUTE13_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_2),
    },

    [TRAINER_ROUTE13_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_3),
    },

    [TRAINER_ROUTE13_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_4),
    },

    [TRAINER_ROUTE13_TRAINER_5] = //FINAL WIZARD, EVENT WITH DELRITH?
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_5),
    },

    [TRAINER_ROUTE13_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_6),
    },

    [TRAINER_ROUTE13_TRAINER_7] =
    {
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_7),
    },

    [TRAINER_ROUTE13_TRAINER_8] =
    {
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_8),
    },

    [TRAINER_ROUTE13_TRAINER_9] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE13_TRAINER_9),
    },

    // ROUTE14
    [TRAINER_ROUTE14_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE14_TRAINER_1),
    },

    [TRAINER_ROUTE14_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE14_TRAINER_2),
    },

    // ROUTE16
    [TRAINER_ROUTE16_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_1),
    },

    [TRAINER_ROUTE16_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_2),
    },

    [TRAINER_ROUTE16_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_3),
    },

    [TRAINER_ROUTE16_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_DIVINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_divination,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_4),
    },

    [TRAINER_ROUTE16_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_AGILE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_graceful,
        .trainerName = _("SP33DMACH1NE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_5),
    },

    [TRAINER_ROUTE16_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE16_TRAINER_6),
    },

    [TRAINER_ROUTE17_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter_alt,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE17_TRAINER_1),
    },

    [TRAINER_ROUTE17_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE17_TRAINER_2),
    },

    [TRAINER_PREZLEEK] =
    {
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_prezleek,
        .trainerName = _("Prezleek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Prezleek),
    },

    [TRAINER_NYCHANNEL] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("NYCHANNEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_NYCHANNEL),
    },

    [TRAINER_GERTRUDE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_gertrude,
        .trainerName = _("GERTRUDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_GERTRUDE),
    },

    //LUMBRIDGE FOREST
    [TRAINER_LUMBRIDGEFOREST_WOODCUTTER1] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("Ch0ppa1"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGEFOREST_WOODCUTTER1),
    },

    [TRAINER_LUMBRIDGEFOREST_BOT1] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("alhgkj73"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGEFOREST_BOT1),
    },

    [TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WARRIOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_SINKHOLE_NPC_FORGOTTENWARRIOR_1),
    },

    [TRAINER_LUMBRIDGEFOREST_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Cr1mAnEl"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGEFOREST_TRAINER_1),
    },

    [TRAINER_LUMBRIDGEFOREST_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Foulblood"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGEFOREST_TRAINER_2),
    },

    [TRAINER_LUMBRIDGEFOREST_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Toadtoes"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGEFOREST_TRAINER_3),
    },

    // ROUTE 28
    [TRAINER_ROUTE28_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird,
        .trainerName = _("AL KHARID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE28_TRAINER_1),
    },

    [TRAINER_ROUTE28_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_lukien,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE28_TRAINER_2),
    },

    [TRAINER_ROUTE28_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird,
        .trainerName = _("AL KHARID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE28_TRAINER_3),
    },

    [TRAINER_ROUTE28_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE28_TRAINER_4),
    },

    [TRAINER_ROUTE28_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE28_TRAINER_5),
    },

    // ROUTE 29
    [TRAINER_ROUTE29_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_1),
    },

    [TRAINER_ROUTE29_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_2),
    },

    [TRAINER_ROUTE29_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_4),
    },

    [TRAINER_ROUTE29_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_SKILLER,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_3),
    },

    [TRAINER_ROUTE29_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Brothers"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_5),
    },

    // ROUTE33
    [TRAINER_ROUTE33_GOBLIN1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE33_GOBLIN1),
    },

    [TRAINER_ROUTE33_GOBLIN2] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE33_GOBLIN2),
    },

    [TRAINER_ROUTE33_ZAMORAK1] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("WIZARD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE33_ZAMORAK1),
    },

    //VARROCK GYM
    [TRAINER_VARROCK_GYM_KINGROALD] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_king_roald,
        .trainerName = _("KING ROALD"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_VARROCK_GYM_KINGROALD),
    },

    [TRAINER_VARROCK_GYM_1] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_GYM_1),
    },

    [TRAINER_VARROCK_GYM_2] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_GYM_2),
    },

    [TRAINER_VARROCK_GYM_3] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_guard_varrock,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_GYM_3),
    },

    [TRAINER_VARROCK_GYM_4] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_GYM_4),
    },

    // ROUTE 15
    [TRAINER_ROUTE15_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_1),
    },

    [TRAINER_ROUTE15_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_2),
    },

    [TRAINER_ROUTE15_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_3),
    },

    [TRAINER_ROUTE15_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_4),
    },

    [TRAINER_ROUTE15_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_lukien,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_5),
    },

    [TRAINER_ROUTE15_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE15_TRAINER_6),
    },

    //Alkharid Gym
    [TRAINER_ALKHARID_GYM_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_5),
    },

    [TRAINER_ALKHARID_GYM_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_5),
    },

    [TRAINER_ALKHARID_GYM_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_5),
    },

    [TRAINER_ALKHARID_GYM_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guard_alkhaird_duo,
        .trainerName = _("Ali & Ali"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ROUTE29_TRAINER_5),
    },

    [TRAINER_ALKHARID_GYM_PRINCE_ALI] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_prince_ali,
        .trainerName = _("PRINCE ALI"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ALKHARID_GYM_PRINCE_ALI),
    },

    [TRAINER_BARROWS_GUTHAN] =
    {
        .trainerClass = TRAINER_CLASS_BARROWS_BROTHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_guthan_osrs,
        .trainerName = _("GUTHAN"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BARROWS_GUTHAN),
    },

    [TRAINER_MOD_SARNIE] =
	{
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("SARNIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MOD_SARNIE),
    },

    /// ROUTE 27
    [TRAINER_ROUTE27_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE27_TRAINER_1),
    },

    [TRAINER_ROUTE27_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE27_TRAINER_2),
    },

    [TRAINER_ROUTE27_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE27_TRAINER_3),
    },

    [TRAINER_ROUTE27_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE27_TRAINER_4),
    },

    // ROUTE30
    [TRAINER_ROUTE30_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE30_TRAINER_1),
    },

    [TRAINER_ROUTE30_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE30_TRAINER_2),
    },

    [TRAINER_ROUTE30_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE30_TRAINER_3),
    },

    [TRAINER_ROUTE30_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE30_TRAINER_4),
    },
    
    // ROUTE25
    [TRAINER_ROUTE25_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE25_TRAINER_1),
    },

    [TRAINER_ROUTE25_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE25_TRAINER_2),
    },

    [TRAINER_ROUTE25_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE25_TRAINER_3),
    },

    // ROUTE39
    [TRAINER_ROUTE39_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_1),
    },

    [TRAINER_ROUTE39_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_2),
    },

    [TRAINER_ROUTE39_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_3),
    },

    [TRAINER_ROUTE39_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_4),
    },

    [TRAINER_ROUTE39_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_5),
    },

    [TRAINER_ROUTE39_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_6),
    },

    [TRAINER_ROUTE39_TRAINER_7] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_7),
    },

    [TRAINER_ROUTE39_TRAINER_8] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE39_TRAINER_8),
    },
    //swamp cave
    [TRAINER_LUMBRIDGESWAMPCAVE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_4),
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_5),
    },

    [TRAINER_LUMBRIDGESWAMPCAVE_6] =
    {
        .trainerClass = TRAINER_CLASS_POKESCAPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_SoffanQuo,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUMBRIDGESWAMPCAVE_6),
    },

    //Musa Point
    [TRAINER_MUSA_POINT_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUSA_POINT_TRAINER_1),
    },

    [TRAINER_MUSA_POINT_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUSA_POINT_TRAINER_2),
    },

    [TRAINER_MUSA_POINT_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUSA_POINT_TRAINER_3),
    },

    [TRAINER_MUSA_POINT_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("CUPHOLDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MUSA_POINT_TRAINER_4),
    },

    [TRAINER_SCAPEINK] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("ScapeInk"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_SCAPEINK),
    },

    //GYM LEADERS
    [TRAINER_LEADER_DUKE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHOOB,
        .trainerPic = TRAINER_PIC_duke_horacio,
        .trainerName = _("HORACIO"),
        .items = {ITEM_BREAD, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LEADER_DUKE_1), 
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_1),
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_1F_TRAINER_2),
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_jmod_f,
        .trainerName = _("cbow4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_1F_TRAINER_3),
    },

    [TRAINER_VARROCK_SEWERS_1F_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_m,
        .trainerName = _("IceBRG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_1F_TRAINER_4),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Skelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_1),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _("D3dF1sh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_2),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Ankledeep"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_3),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_IRONMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ironman,
        .trainerName = _("4xedM4ng4"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_4),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_5),
    },

    [TRAINER_VARROCK_SEWERS_2F_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("B0nd M0n3y"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_2F_TRAINER_6),
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Treesbee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_3F_TRAINER_1),
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Yggdraugr"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_3F_TRAINER_2),
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Barklee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_3F_TRAINER_3),
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_MUGGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_mugger,
        .trainerName = _("Clinton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_3F_TRAINER_4),
    },

    [TRAINER_VARROCK_SEWERS_3F_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_SEWERS_3F_TRAINER_5),
    },
//TzHaar Caves 1
    [TRAINER_TZHAAR_CAVES_1_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Ket-Jeh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_1),
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Ket-Ak"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_2),
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Hok"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_3),
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Gek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_4),
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Xil-Xox"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_5),
    },

    [TRAINER_TZHAAR_CAVES_1_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tzhaar,
        .trainerName = _("Mej-Kal"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_6),
    },

    [TRAINER_TZHAAR_CAVES_1_JAD] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_tokhaar,
        .trainerName = _("Hok"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_TZHAAR_CAVES_1_TRAINER_JAD),
    },
//Route 35
    [TRAINER_ROUTE_35_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Jethro"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_35_TRAINER_1),
    },

    [TRAINER_ROUTE_35_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("St4r Min3r"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_35_TRAINER_2),
    },
//Route 38
    [TRAINER_ROUTE_38_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("Wow4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_38_TRAINER_1),
    },

    [TRAINER_ROUTE_38_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("Guide4lyf"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_38_TRAINER_2),
    },

    [TRAINER_ROUTE_38_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("St4r Min3r"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_38_TRAINER_3),
    },

    [TRAINER_ROUTE_38_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("Miner Leoh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_38_TRAINER_4),
    },

    [TRAINER_ROUTE_38_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Bernard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_38_TRAINER_5),
    },
//Route 41
    [TRAINER_ROUTE_41_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("jfgbs7645"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_41_TRAINER_1),
    },

    [TRAINER_ROUTE_41_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_BOT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_bot_dragon_slayer,
        .trainerName = _("kzlys9278"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_41_TRAINER_2),
    },

    [TRAINER_ROUTE_41_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_noob_rune,
        .trainerName = _("Wari0000"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_41_TRAINER_3),
    },

    [TRAINER_ROUTE_41_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_f,
        .trainerName = _("M4g3lit3"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_41_TRAINER_4),
    },
//Route 42
    [TRAINER_ROUTE_42_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_dh,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_42_TRAINER_1),
    },

    [TRAINER_ROUTE_42_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("Frogre4l"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_42_TRAINER_2),
    },

    [TRAINER_ROUTE_42_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("B0nediddly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_42_TRAINER_3),
    },

    [TRAINER_ROUTE_42_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Pecs"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_42_TRAINER_4),
    },
//Route 43
    [TRAINER_ROUTE_43_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Rattle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_43_TRAINER_1),
    },

    [TRAINER_ROUTE_43_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_43_TRAINER_2),
    },

    [TRAINER_ROUTE_43_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Tonton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_43_TRAINER_3),
    },

    [TRAINER_ROUTE_43_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Funorb"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_43_TRAINER_4),
    },

//Route 44
    [TRAINER_ROUTE_44_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Fibulala"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_44_TRAINER_1),
    },

    [TRAINER_ROUTE_44_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("C Specs"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_47_TRAINER_2),
    },

//Route 46
    [TRAINER_ROUTE_46_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _("Stan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_46_TRAINER_1),
    },

    [TRAINER_ROUTE_46_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_slayer,
        .trainerName = _("Le Me"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_46_TRAINER_2),
    },

//Route 47
    [TRAINER_ROUTE_47_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("Magnus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_47_TRAINER_1),
    },

    [TRAINER_ROUTE_47_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_DARK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("Mognus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_47_TRAINER_2),
    },

//Route 31
    [TRAINER_ROUTE_31_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_1),
    },

    [TRAINER_ROUTE_31_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer_and_victim,
        .trainerName = _("Skru & Eli"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_2),
    },

    [TRAINER_ROUTE_31_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_dh,
        .trainerName = _("Derrguun"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_3),
    },

    [TRAINER_ROUTE_31_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_SKILLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skiller,
        .trainerName = _("Cb4inP2P"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_4),
    },

    [TRAINER_ROUTE_31_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _("NoManSky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_5),
    },

    [TRAINER_ROUTE_31_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_SCAMMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_scammer,
        .trainerName = _("WarauSales"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_6),
    },

    [TRAINER_ROUTE_31_TRAINER_7] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Cranium"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_31_TRAINER_7),
    },
//LIGHTHOUSE
    [TRAINER_LIGHTHOUSE_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Dave"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_TRAINER_1),
    },

    [TRAINER_LIGHTHOUSE_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Darren"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_TRAINER_2),
    },
//LIGHTHOUSE 2F
    [TRAINER_LIGHTHOUSE_2F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_2F_TRAINER_1),
    },

    [TRAINER_LIGHTHOUSE_2F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_JAILER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_draynor,
        .trainerName = _("Denis"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_2F_TRAINER_2),
    },
//LIGHTHOUSE 3F
    [TRAINER_LIGHTHOUSE_3F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_3F_TRAINER_1),
    },

    [TRAINER_LIGHTHOUSE_3F_HAM_ADMIN_PATTY] =
    {
        .trainerClass = TRAINER_CLASS_HAM_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_patty,
        .trainerName = _("PATTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LIGHTHOUSE_3F_HAM_ADMIN_PATTY),
    },

    [TRAINER_MELZARSMAZE_HAM_ADMIN_BABE] =
    {
        .trainerClass = TRAINER_CLASS_HAM_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_babe,
        .trainerName = _("BABE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARSMAZE_HAM_ADMIN_BABE),
    },

    [TRAINER_MELZARSMAZE_MELZAR_THE_MAD] =
    {
        .trainerClass = TRAINER_CLASS_NECROMANCER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_wizard_dark,
        .trainerName = _("MELZAR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MELZARSMAZE_MELZAR_THE_MAD),
    },
//CRANDOR
    [TRAINER_CRANDOR_SKELETON_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Parietta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_SKELETON_1),
    },

    [TRAINER_CRANDOR_SKELETON_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Ulna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_SKELETON_2),
    },

    [TRAINER_CRANDOR_SKELETON_3] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Sacroom"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_SKELETON_3),
    },

    [TRAINER_CRANDOR_MOSS_GIANT_1] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Arenga"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_MOSS_GIANT_1),
    },

    [TRAINER_CRANDOR_MOSS_GIANT_2] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Cercis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_MOSS_GIANT_2),
    },

    [TRAINER_CRANDOR_MOSS_GIANT_3] =
    {
        .trainerClass = TRAINER_CLASS_MOSS_GIANT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_moss_giant,
        .trainerName = _("Nyssa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CRANDOR_MOSS_GIANT_3),
    },
//Route 50
    [TRAINER_ROUTE_50_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Androe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_50_TRAINER_1),
    },

    [TRAINER_ROUTE_50_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MONK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_monk,
        .trainerName = _("Omad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_50_TRAINER_2),
    },

    [TRAINER_ROUTE_50_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_DnDer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dnd,
        .trainerName = _("Lady Pingu"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_50_TRAINER_3),
    },

    [TRAINER_ROUTE_50_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("Tirith"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_50_TRAINER_4),
    },

    [TRAINER_ROUTE_50_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_50_TRAINER_5),
    },

//Route 51
    [TRAINER_ROUTE_51_EFFIGY] =
    {
        .trainerClass = TRAINER_CLASS_SUMMONER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_summoner,
        .trainerName = _("Effigy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_51_EFFIGY),
    },

    [TRAINER_ROUTE_51_GUNS] =
    {
        .trainerClass = TRAINER_CLASS_UNKNOWN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("'The Guns'"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_51_GUNS),
    },

//Route 52
    [TRAINER_ROUTE_52_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("C0alH3ad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_52_TRAINER_1),
    },

    [TRAINER_ROUTE_52_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("AfkL00t"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_52_TRAINER_2),
    },

    [TRAINER_ROUTE_52_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hunter_m,
        .trainerName = _("Quaffle8"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_52_TRAINER_3),
    },

    [TRAINER_ROUTE_52_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_HUNTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_hunter_f,
        .trainerName = _("dnops"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_52_TRAINER_4),
    },

//Route 53
    [TRAINER_ROUTE_53_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_WOODCUTTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_woodcutter,
        .trainerName = _("F0rstrGal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_53_TRAINER_1),
    },

    [TRAINER_ROUTE_53_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_GUARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_guard_khazard,
        .trainerName = _("Terrence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_53_TRAINER_2),
    },

//Route 54
    [TRAINER_ROUTE_54_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_fisher,
        .trainerName = _("AnglerLyfe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_54_TRAINER_1),
    },

    [TRAINER_ROUTE_54_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_NOOB,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_noob_default,
        .trainerName = _("AFK2MAXCB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_54_TRAINER_2),
    },

//Route 55
    [TRAINER_ROUTE_55_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_GOBLIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_goblin,
        .trainerName = _("Slimenose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_55_TRAINER_1),
    },

    [TRAINER_ROUTE_55_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miller,
        .trainerName = _("Daisy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_55_TRAINER_2),
    },

    [TRAINER_ROUTE_55_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_FARMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_farmer,
        .trainerName = _("Jeremy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE_55_TRAINER_3),
    },

//Melzars Maze 1F
    [TRAINER_MELZARS_1F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_1F_TRAINER_1),
    },

    [TRAINER_MELZARS_1F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Nuxor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_1F_TRAINER_2),
    },

    [TRAINER_MELZARS_1F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Clavica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_1F_TRAINER_3),
    },

//Melzars Maze 2F
    [TRAINER_MELZARS_2F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Talus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_1),
    },

    [TRAINER_MELZARS_2F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Patella"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_2),
    },

    [TRAINER_MELZARS_2F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_3),
    },

    [TRAINER_MELZARS_2F_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("Spe3dRunr"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_4),
    },

    [TRAINER_MELZARS_2F_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_m,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_5),
    },

    [TRAINER_MELZARS_2F_TRAINER_6] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Astelazar"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_2F_TRAINER_6),
    },

//Melzars Maze 3F
    [TRAINER_MELZARS_3F_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_WIZARD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_necromancer,
        .trainerName = _("Ichethik"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_3F_TRAINER_1),
    },

    [TRAINER_MELZARS_3F_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_SKELETON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_skeleton,
        .trainerName = _("Maxilla"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_3F_TRAINER_2),
    },

    [TRAINER_MELZARS_3F_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_HAM_GRUNT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_ham_grunt_f,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_MELZARS_3F_TRAINER_3),
    },

    [TRAINER_JMOD_OWLY] =
	{
        .trainerClass = TRAINER_CLASS_JMOD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HAM,
        .trainerPic = TRAINER_PIC_jmod_m,
        .trainerName = _("OWLY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_JMOD_OWLY),
    },


//Route 26
    [TRAINER_ROUTE26_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("Omril"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE26_TRAINER_1),
    },

    [TRAINER_ROUTE26_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_DWARF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_dwarf_m,
        .trainerName = _("Elkot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE26_TRAINER_2),
    },

    [TRAINER_ROUTE26_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_QUESTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_quester,
        .trainerName = _("4TheL0re"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE26_TRAINER_3),
    },

    [TRAINER_ROUTE26_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_ARCHAEOLOGIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_Archaeologist,
        .trainerName = _("Gerald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE26_TRAINER_4),
    },

    [TRAINER_FALADOR_GYM_5] =
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("SIR VING"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_5),
    },

//Route 0 - Daemonheim Outskirts
    [TRAINER_ROUTE0_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("RockS0lid"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE0_TRAINER_1),
    },

    [TRAINER_ROUTE0_TRAINER_2] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("Torbit"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE0_TRAINER_2),
    },

    [TRAINER_ROUTE0_TRAINER_3] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("Geir"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE0_TRAINER_3),
    },

    [TRAINER_ROUTE0_TRAINER_4] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_barbarian_m,
        .trainerName = _("Cupholder"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE0_TRAINER_4),
    },

    [TRAINER_ROUTE0_TRAINER_5] =
    {
        .trainerClass = TRAINER_CLASS_BARBARIAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_barbarian_duo,
        .trainerName = _("Knoll&Tott"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_ROUTE0_TRAINER_5),
    },
    
    [TRAINER_LUM_SWAMP_TRAINER_5] =
	{
        .trainerClass = TRAINER_CLASS_MINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_miner,
        .trainerName = _("0rey0"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_LUM_SWAMP_TRAINER_5),
    },

    [TRAINER_FALADOR_GYM_6] =
    {
        .trainerClass = TRAINER_CLASS_WHITE_KNIGHT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_white_knight_m,
        .trainerName = _("Sir ???"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_FALADOR_GYM_6),
    },

    [TRAINER_RIVAL_WISE_OLD_MAN_1] =
    {
        .trainerClass = TRAINER_CLASS_WISE_OLD_MAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_WiseOldMan_1,
        .trainerName = _("???"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_WISE_OLD_MAN_1),
    },

    [TRAINER_RIVAL_WISE_OLD_MAN_2] =
    {
        .trainerClass = TRAINER_CLASS_WISE_OLD_MAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_WiseOldMan_1,
        .trainerName = _("Dionysius"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_WISE_OLD_MAN_2),
    },

    [TRAINER_RIVAL_WISE_OLD_MAN_3] =
    {
        .trainerClass = TRAINER_CLASS_WISE_OLD_MAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NOOB,
        .trainerPic = TRAINER_PIC_WiseOldMan_1,
        .trainerName = _("Dionysius"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_WISE_OLD_MAN_3),
    },

    [TRAINER_VARROCK_TRAINING_ROOM_RUSHER] =
    {
        .trainerClass = TRAINER_CLASS_PKer,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_pk_rusher,
        .trainerName = _("2Qu1ck 4U"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_VARROCK_TRAINING_ROOM_RUSHER),
    },

    [TRAINER_DAEMONHEIM_GYM_THOK] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_thok,
        .trainerName = _("THOK"),
        .items = {ITEM_CHOCOLATE_CAKE, ITEM_CHOCOLATE_CAKE, ITEM_POTION_SPDEF, ITEM_BLUEBERRY_SPECIAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DAEMONHEIM_GYM_THOK),
    },

    [TRAINER_DAEMONHEIM_GYM_TRAINER_1] =
    {
        .trainerClass = TRAINER_CLASS_FORGOTTEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PKER,
        .trainerPic = TRAINER_PIC_a_nub_tot,
        .trainerName = _("Telmomarque"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_DAEMONHEIM_GYM_THOK),
    },







};