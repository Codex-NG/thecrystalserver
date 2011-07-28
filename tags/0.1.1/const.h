////////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
////////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////

#ifndef __CONST__
#define __CONST__
#include "definitions.h"

enum MagicEffect_t
{
	NM_ME_DRAW_BLOOD		= 0x00,
	NM_ME_LOSE_ENERGY		= 0x01,
	NM_ME_POFF				= 0x02,
	NM_ME_BLOCKHIT			= 0x03,
	NM_ME_EXPLOSION_AREA	= 0x04,
	NM_ME_EXPLOSION_DAMAGE	= 0x05,
	NM_ME_FIRE_AREA			= 0x06,
	NM_ME_YELLOW_RINGS		= 0x07,
	NM_ME_POISON_RINGS		= 0x08,
	NM_ME_HIT_AREA			= 0x09,
	NM_ME_TELEPORT			= 0x0A, //10
	NM_ME_ENERGY_DAMAGE		= 0x0B, //11
	NM_ME_WRAPS_BLUE		= 0x0C, //12
	NM_ME_WRAPS_RED			= 0x0D, //13
	NM_ME_WRAPS_GREEN		= 0x0E, //14
	NM_ME_HITBY_FIRE		= 0x0F, //15
	NM_ME_POISON			= 0x10, //16
	NM_ME_MORT_AREA			= 0x11, //17
	NM_ME_SOUND_GREEN		= 0x12, //18
	NM_ME_SOUND_RED			= 0x13, //19
	NM_ME_POISON_AREA		= 0x14, //20
	NM_ME_SOUND_YELLOW		= 0x15, //21
	NM_ME_SOUND_PURPLE		= 0x16, //22
	NM_ME_SOUND_BLUE		= 0x17, //23
	NM_ME_SOUND_WHITE		= 0x18, //24
	NM_ME_BUBBLES			= 0x19, //25
	NM_ME_CRAPS				= 0x1A, //26
	NM_ME_GIFT_WRAPS		= 0x1B, //27
	NM_ME_FIREWORK_YELLOW	= 0x1C, //28
	NM_ME_FIREWORK_RED		= 0x1D, //29
	NM_ME_FIREWORK_BLUE		= 0x1E, //30
	NM_ME_STUN				= 0x1F, //31
	NM_ME_SLEEP				= 0x20, //32
	NM_ME_WATERCREATURE		= 0x21, //33
	NM_ME_GROUNDSHAKER		= 0x22, //34
	NM_ME_HEARTS			= 0x23, //35
	NM_ME_FIREATTACK		= 0x24, //36
	NM_ME_ENERGY_AREA		= 0x25, //37
	NM_ME_SMALLCLOUDS		= 0x26, //38
	NM_ME_HOLYDAMAGE		= 0x27, //39
	NM_ME_BIGCLOUDS			= 0x28, //40
	NM_ME_ICEAREA			= 0x29, //41
	NM_ME_ICETORNADO		= 0x2A, //42
	NM_ME_ICEATTACK			= 0x2B, //43
	NM_ME_STONES			= 0x2C, //44
	NM_ME_SMALLPLANTS		= 0x2D, //45
	NM_ME_CARNIPHILA		= 0x2E, //46
	NM_ME_PURPLEENERGY		= 0x2F, //47
	NM_ME_YELLOWENERGY		= 0x30, //48
	NM_ME_HOLYAREA			= 0x31, //49
	NM_ME_BIGPLANTS			= 0x32, //50
	NM_ME_CAKE				= 0x33, //51
	NM_ME_GIANTICE			= 0x34, //52
	NM_ME_WATERSPLASH		= 0x35, //53
	NM_ME_PLANTATTACK		= 0x36, //54
	NM_ME_TUTORIALARROW		= 0x37, //55
	NM_ME_TUTORIALSQUARE	= 0x38, //56
	NM_ME_MIRRORHORIZONTAL	= 0x39, //57
	NM_ME_MIRRORVERTICAL	= 0x3A, //58
	NM_ME_SKULLHORIZONTAL	= 0x3B, //59
	NM_ME_SKULLVERTICAL		= 0x3C, //60
	NM_ME_ASSASSIN			= 0x3D, //61
	NM_ME_STEPSHORIZONTAL	= 0x3E, //62
	NM_ME_BLOODYSTEPS		= 0x3F, //63
	NM_ME_STEPSVERTICAL		= 0x40, //64
	NM_ME_YALAHARIGHOST		= 0x41, //65
	NM_ME_BATS				= 0x42, //66
	NM_ME_SMOKE				= 0x43, //67
	NM_ME_INSECTS			= 0x44, //68
	NM_ME_DRAGONHEAD		= 0x45, //69
	NM_ME_LAST				= NM_ME_DRAGONHEAD,

	//for internal use, dont send to client
	NM_ME_NONE				= 0xFF,
	NM_ME_UNKNOWN			= 0xFFFF
};

enum ShootEffect_t
{
	NM_SHOOT_SPEAR			= 0x00,
	NM_SHOOT_BOLT			= 0x01,
	NM_SHOOT_ARROW			= 0x02,
	NM_SHOOT_FIRE			= 0x03,
	NM_SHOOT_ENERGY			= 0x04,
	NM_SHOOT_POISONARROW	= 0x05,
	NM_SHOOT_BURSTARROW		= 0x06,
	NM_SHOOT_THROWINGSTAR	= 0x07,
	NM_SHOOT_THROWINGKNIFE	= 0x08,
	NM_SHOOT_SMALLSTONE		= 0x09,
	NM_SHOOT_DEATH			= 0x0A, //10
	NM_SHOOT_LARGEROCK		= 0x0B, //11
	NM_SHOOT_SNOWBALL		= 0x0C, //12
	NM_SHOOT_POWERBOLT		= 0x0D, //13
	NM_SHOOT_POISONFIELD	= 0x0E, //14
	NM_SHOOT_INFERNALBOLT	= 0x0F, //15
	NM_SHOOT_HUNTINGSPEAR	= 0x10, //16
	NM_SHOOT_ENCHANTEDSPEAR	= 0x11, //17
	NM_SHOOT_REDSTAR		= 0x12, //18
	NM_SHOOT_GREENSTAR		= 0x13, //19
	NM_SHOOT_ROYALSPEAR		= 0x14, //20
	NM_SHOOT_SNIPERARROW	= 0x15, //21
	NM_SHOOT_ONYXARROW		= 0x16, //22
	NM_SHOOT_PIERCINGBOLT	= 0x17, //23
	NM_SHOOT_WHIRLWINDSWORD	= 0x18, //24
	NM_SHOOT_WHIRLWINDAXE	= 0x19, //25
	NM_SHOOT_WHIRLWINDCLUB	= 0x1A, //26
	NM_SHOOT_ETHEREALSPEAR	= 0x1B, //27
	NM_SHOOT_ICE			= 0x1C, //28
	NM_SHOOT_EARTH			= 0x1D, //29
	NM_SHOOT_HOLY			= 0x1E, //30
	NM_SHOOT_SUDDENDEATH	= 0x1F, //31
	NM_SHOOT_FLASHARROW		= 0x20, //32
	NM_SHOOT_FLAMMINGARROW	= 0x21, //33
	NM_SHOOT_SHIVERARROW	= 0x22, //34
	NM_SHOOT_ENERGYBALL		= 0x23, //35
	NM_SHOOT_SMALLICE		= 0x24, //36
	NM_SHOOT_SMALLHOLY		= 0x25, //37
	NM_SHOOT_SMALLEARTH		= 0x26, //38
	NM_SHOOT_EARTHARROW		= 0x27, //39
	NM_SHOOT_EXPLOSION		= 0x28, //40
	NM_SHOOT_CAKE			= 0x29, //41
	NM_SHOOT_LAST			= NM_SHOOT_CAKE,

	//for internal use, dont send to client
	NM_SHOOT_WEAPONTYPE		= 0xFE, //254
	NM_SHOOT_NONE			= 0xFF,
	NM_SHOOT_UNKNOWN		= 0xFFFF
};

enum SpeakClasses
{
	SPEAK_CLASS_NONE	= 0x00,
	SPEAK_CLASS_FIRST 	= 0x01,
	SPEAK_SAY			= SPEAK_CLASS_FIRST,
	SPEAK_WHISPER		= 0x02,
	SPEAK_YELL			= 0x03,
	SPEAK_PRIVATE_PN	= 0x04,
	SPEAK_PRIVATE_NP	= 0x05,
	SPEAK_PRIVATE		= 0x06,
	SPEAK_CHANNEL_Y		= 0x07,
	SPEAK_CHANNEL_W		= 0x08,
	SPEAK_BROADCAST		= 0x09,
	SPEAK_CHANNEL_RN	= 0x0A,
	SPEAK_PRIVATE_RED	= 0x0B,
	SPEAK_CHANNEL_O		= 0x0C,
	SPEAK_MONSTER_SAY	= 0x0D,
	SPEAK_MONSTER_YELL	= 0x0E,
	SPEAK_CLASS_LAST 	= SPEAK_MONSTER_YELL,

	// removed from game
	SPEAK_CHANNEL_RA	= 0xFF + 4
};

enum MessageClasses
{
    MSG_CLASS_FIRST             = 0x01, //Yellow message in console
    MSG_STATUS_CONSOLE_YELLOW   = MSG_CLASS_FIRST,
    MSG_STATUS_CONSOLE_TEAL     = 0x06, // Teal message in console
	MSG_EVENT_ORANGE			= 0x0D, /*Orange message in the console*/
	MSG_STATUS_CONSOLE_ORANGE	= 0x0E, /*Orange message in the console*/
	MSG_STATUS_WARNING			= 0x0F, /*Red message in game window and in the console*/
	MSG_EVENT_ADVANCE			= 0x10, /*White message in game window and in the console*/
	MSG_EVENT_DEFAULT			= 0x11, /*White message at the bottom of the game window and in the console*/
	MSG_STATUS_DEFAULT			= 0x12, /*White message at the bottom of the game window and in the console*/
	MSG_INFO_DESCR				= 0x13, /*Green message in game window and in the console*/
	MSG_STATUS_SMALL			= 0x14, /*White message at the bottom of the game window"*/
	MSG_STATUS_CONSOLE_BLUE		= 0x15, /*Blue message in the console*/
	MSG_STATUS_CONSOLE_RED		= 0x16, /*Red message in the console*/
	MSG_CLASS_LAST				= MSG_STATUS_CONSOLE_RED
};

enum MapMarks_t
{
	MAPMARK_TICK		= 0x00,
	MAPMARK_QUESTION	= 0x01,
	MAPMARK_EXCLAMATION	= 0x02,
	MAPMARK_STAR		= 0x03,
	MAPMARK_CROSS		= 0x04,
	MAPMARK_TEMPLE		= 0x05,
	MAPMARK_KISS		= 0x06,
	MAPMARK_SHOVEL		= 0x07,
	MAPMARK_SWORD		= 0x08,
	MAPMARK_FLAG		= 0x09,
	MAPMARK_LOCK		= 0x0A,
	MAPMARK_BAG		= 0x0B,
	MAPMARK_SKULL		= 0x0C,
	MAPMARK_DOLLAR		= 0x0D,
	MAPMARK_REDNORTH	= 0x0E,
	MAPMARK_REDSOUTH	= 0x0F,
	MAPMARK_REDEAST		= 0x10,
	MAPMARK_REDWEST		= 0x11,
	MAPMARK_GREENNORTH	= 0x12,
	MAPMARK_GREENSOUTH	= 0x13
};

enum FluidColors_t
{
	FLUID_EMPTY	= 0x00,
	FLUID_BLUE	= 0x01,
	FLUID_RED	= 0x02,
	FLUID_BROWN	= 0x03,
	FLUID_GREEN	= 0x04,
	FLUID_YELLOW	= 0x05,
	FLUID_WHITE	= 0x06,
	FLUID_PURPLE	= 0x07
};

enum FluidTypes_t
{
	FLUID_NONE		= FLUID_EMPTY,
	FLUID_WATER		= FLUID_BLUE,
	FLUID_BLOOD		= FLUID_RED,
	FLUID_BEER		= FLUID_BROWN,
	FLUID_SLIME		= FLUID_GREEN,
	FLUID_LEMONADE		= FLUID_YELLOW,
	FLUID_MILK		= FLUID_WHITE,
	FLUID_MANA		= FLUID_PURPLE,

	FLUID_LIFE		= FLUID_RED + 8,
	FLUID_OIL		= FLUID_BROWN + 8,
	FLUID_URINE		= FLUID_YELLOW + 8,
	FLUID_COCONUTMILK	= FLUID_WHITE + 8,
	FLUID_WINE		= FLUID_PURPLE + 8,

	FLUID_MUD		= FLUID_BROWN + 16,
	FLUID_FRUITJUICE	= FLUID_YELLOW + 16,

	FLUID_LAVA		= FLUID_RED + 24,
	FLUID_RUM		= FLUID_BROWN + 24,
	FLUID_SWAMP		= FLUID_GREEN + 24,

	FLUID_TEA               = FLUID_BROWN + 32,
	FLUID_MEAD              = FLUID_BROWN + 40
};

const uint8_t reverseFluidMap[] =
{
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_MANA,
	FLUID_BEER,
	FLUID_EMPTY,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_EMPTY,
	FLUID_LEMONADE,
	FLUID_MILK
};

enum ClientFluidTypes_t
{
	CLIENTFLUID_EMPTY	= 0x00,
	CLIENTFLUID_BLUE	= 0x01,
	CLIENTFLUID_PURPLE	= 0x02,
	CLIENTFLUID_BROWN_1	= 0x03,
	CLIENTFLUID_BROWN_2	= 0x04,
	CLIENTFLUID_RED		= 0x05,
	CLIENTFLUID_GREEN	= 0x06,
	CLIENTFLUID_BROWN	= 0x07,
	CLIENTFLUID_YELLOW	= 0x08,
	CLIENTFLUID_WHITE	= 0x09
};

const uint8_t fluidMap[] =
{
	CLIENTFLUID_EMPTY,
	CLIENTFLUID_BLUE,
	CLIENTFLUID_RED,
	CLIENTFLUID_BROWN_1,
	CLIENTFLUID_GREEN,
	CLIENTFLUID_YELLOW,
	CLIENTFLUID_WHITE,
	CLIENTFLUID_PURPLE
};

enum Color_t
{
	COLOR_BLACK		= 0,
	COLOR_BLUE		= 5,
	COLOR_GREEN		= 18,
	COLOR_LIGHTGREEN	= 66,
	COLOR_DARKBROWN		= 78,
	COLOR_LIGHTBLUE		= 89,
	COLOR_DARKRED		= 108,
	COLOR_DARKPURPLE	= 112,
	COLOR_BROWN		= 120,
	COLOR_GREY		= 129,
	COLOR_TEAL		= 143,
	COLOR_DARKPINK		= 152,
	COLOR_PURPLE		= 154,
	COLOR_DARKORANGE	= 156,
	COLOR_RED		= 180,
	COLOR_PINK		= 190,
	COLOR_ORANGE		= 192,
	COLOR_DARKYELLOW	= 205,
	COLOR_YELLOW		= 210,
	COLOR_WHITE		= 215,

	COLOR_NONE		= 255,
	COLOR_UNKNOWN		= 256
};

enum Icons_t
{
	ICON_NONE       = 0,
	ICON_POISON     = 1,
	ICON_BURN       = 2,
	ICON_ENERGY     = 4,
	ICON_DRUNK      = 8,
	ICON_MANASHIELD = 16,
	ICON_PARALYZE   = 32,
	ICON_HASTE      = 64,
	ICON_SWORDS     = 128,
	ICON_DROWNING   = 256,
	ICON_FREEZING   = 512,
	ICON_DAZZLED    = 1024,
	ICON_CURSED     = 2048,
	ICON_PARTY_BUFF = 4096,
	ICON_PZBLOCK    = 8192,
	ICON_PZ         = 16384,
	ICON_BLEEDING   = 32768
};

enum WeaponType_t
{
	WEAPON_NONE = 0,
	WEAPON_SWORD,
	WEAPON_CLUB,
	WEAPON_AXE,
	WEAPON_DIST,
	WEAPON_SHIELD,
	WEAPON_FIST,
	WEAPON_WAND,
	WEAPON_AMMO
};

enum Ammo_t
{
	AMMO_NONE = 0,
	AMMO_BOLT,
	AMMO_ARROW,
	AMMO_SPEAR,
	AMMO_THROWINGSTAR,
	AMMO_THROWINGKNIFE,
	AMMO_STONE,
	AMMO_SNOWBALL
};

enum AmmoAction_t
{
	AMMOACTION_NONE = 0,
	AMMOACTION_REMOVECOUNT,
	AMMOACTION_REMOVECHARGE,
	AMMOACTION_MOVE,
	AMMOACTION_MOVEBACK
};

enum WieldInfo_t
{
	WIELDINFO_LEVEL = 1,
	WIELDINFO_MAGLV = 2,
	WIELDINFO_VOCREQ = 4,
	WIELDINFO_PREMIUM = 8
};

enum Skulls_t
{
	SKULL_NONE = 0,
	SKULL_YELLOW,
	SKULL_GREEN,
	SKULL_WHITE,
	SKULL_RED,
	SKULL_BLACK,
	SKULL_ORANGE,
	SKULL_LAST = SKULL_ORANGE
};

enum PartyShields_t
{
	SHIELD_NONE = 0,
	SHIELD_WHITEYELLOW,
	SHIELD_WHITEBLUE,
	SHIELD_BLUE,
	SHIELD_YELLOW,
	SHIELD_BLUE_SHAREDEXP,
	SHIELD_YELLOW_SHAREDEXP,
	SHIELD_BLUE_NOSHAREDEXP_BLINK,
	SHIELD_YELLOW_NOSHAREDEXP_BLINK,
	SHIELD_BLUE_NOSHAREDEXP,
	SHIELD_YELLOW_NOSHAREDEXP,
	SHIELD_LAST = SHIELD_YELLOW_NOSHAREDEXP
};

enum GuildEmblems_t
{
	EMBLEM_NONE = 0,
	EMBLEM_GREEN,
	EMBLEM_RED,
	EMBLEM_BLUE
};

enum item_t
{
	ITEM_FIREFIELD		= 1492,
	ITEM_FIREFIELD_SAFE	= 1500,

	ITEM_POISONFIELD	= 1496,
	ITEM_POISONFIELD_SAFE	= 1503,

	ITEM_ENERGYFIELD	= 1495,
	ITEM_ENERGYFIELD_SAFE	= 1504,

	ITEM_MAGICWALL		= 1497,
	ITEM_MAGICWALL_SAFE	= 11098,

	ITEM_WILDGROWTH		= 1499,
	ITEM_WILDGROWTH_SAFE	= 11099,

	ITEM_DEPOT		= 2594,
	ITEM_LOCKER		= 2589,

	ITEM_MALE_CORPSE	= 6080,
	ITEM_FEMALE_CORPSE	= 6081,

	ITEM_FULLSPLASH		= 2016,
	ITEM_SMALLSPLASH	= 2019,

	ITEM_PARCEL		= 2595,
	ITEM_PARCEL_STAMPED	= 2596,
	ITEM_LETTER		= 2597,
	ITEM_LETTER_STAMPED	= 2598,
	ITEM_LABEL		= 2599,

	ITEM_WATERBALL_SPLASH	= 7711,
	ITEM_WATERBALL		= 7956,

	ITEM_HOUSE_TRANSFER	= 1968 //read-only
};

enum PlayerFlags
{
	PlayerFlag_CannotUseCombat = 0,			//2^0 = 1
	PlayerFlag_CannotAttackPlayer,			//2^1 = 2
	PlayerFlag_CannotAttackMonster,			//2^2 = 4
	PlayerFlag_CannotBeAttacked,			//2^3 = 8
	PlayerFlag_CanConvinceAll,			//2^4 = 16
	PlayerFlag_CanSummonAll,			//2^5 = 32
	PlayerFlag_CanIllusionAll,			//2^6 = 64
	PlayerFlag_CanSenseInvisibility,		//2^7 = 128
	PlayerFlag_IgnoredByMonsters,			//2^8 = 256
	PlayerFlag_NotGainInFight,			//2^9 = 512
	PlayerFlag_HasInfiniteMana,			//2^10 = 1024
	PlayerFlag_HasInfiniteSoul,			//2^11 = 2048
	PlayerFlag_HasNoExhaustion,			//2^12 = 4096
	PlayerFlag_CannotUseSpells,			//2^13 = 8192
	PlayerFlag_CannotPickupItem,			//2^14 = 16384
	PlayerFlag_CanAlwaysLogin,			//2^15 = 32768
	PlayerFlag_CanBroadcast,			//2^16 = 65536
	PlayerFlag_CanEditHouses,			//2^17 = 131072
	PlayerFlag_CannotBeBanned,			//2^18 = 262144
	PlayerFlag_CannotBePushed,			//2^19 = 524288
	PlayerFlag_HasInfiniteCapacity,			//2^20 = 1048576
	PlayerFlag_CanPushAllCreatures,			//2^21 = 2097152
	PlayerFlag_CanTalkRedPrivate,			//2^22 = 4194304
	PlayerFlag_CanTalkRedChannel,			//2^23 = 8388608
	PlayerFlag_TalkOrangeHelpChannel,		//2^24 = 16777216
	PlayerFlag_NotGainExperience,			//2^25 = 33554432
	PlayerFlag_NotGainMana,				//2^26 = 67108864
	PlayerFlag_NotGainHealth,			//2^27 = 134217728
	PlayerFlag_NotGainSkill,			//2^28 = 268435456
	PlayerFlag_SetMaxSpeed,				//2^29 = 536870912
	PlayerFlag_SpecialVIP,				//2^30 = 1073741824
	PlayerFlag_NotGenerateLoot,			//2^31 = 2147483648
	PlayerFlag_CanTalkRedChannelAnonymous,		//2^32 = 4294967296
	PlayerFlag_IgnoreProtectionZone,		//2^33 = 8589934592
	PlayerFlag_IgnoreSpellCheck,			//2^34 = 17179869184
	PlayerFlag_IgnoreEquipCheck,			//2^35 = 34359738368
	PlayerFlag_CannotBeMuted,			//2^36 = 68719476736
	PlayerFlag_IsAlwaysPremium,			//2^37 = 137438953472
	PlayerFlag_38,						//2^38 = 274877906944
	PlayerFlag_39,	//ignore			//2^39 = 549755813888 //not used by us
	PlayerFlag_ShowGroupNameInsteadOfVocation,	//2^40 = 1099511627776
	PlayerFlag_HasInfiniteStamina,			//2^41 = 2199023255552
	PlayerFlag_CannotMoveItems,			//2^42 = 4398046511104
	PlayerFlag_CannotMoveCreatures,			//2^43 = 8796093022208
	PlayerFlag_CanReportBugs,			//2^44 = 17592186044416
	PlayerFlag_45,	//ignore			//2^45 = 35184372088832 //not used by us
	PlayerFlag_CannotBeSeen,			//2^46 = 70368744177664
	PlayerFlag_HideHealth,				//2^47 = 140737488355328
	PlayerFlag_CanPassThroughAllCreatures,	//2^48 = 281474976710656

	PlayerFlag_LastFlag
};

enum PlayerCustomFlags
{
	PlayerCustomFlag_AllowIdle = 0,				//2^0 = 1
	PlayerCustomFlag_CanSeePosition,			//2^1 = 2
	PlayerCustomFlag_CanSeeItemDetails,			//2^2 = 4
	PlayerCustomFlag_CanSeeCreatureDetails,			//2^3 = 8
	PlayerCustomFlag_NotSearchable,				//2^4 = 16
	PlayerCustomFlag_GamemasterPrivileges,			//2^5 = 32
	PlayerCustomFlag_CanThrowAnywhere,			//2^6 = 64
	PlayerCustomFlag_CanPushAllItems,			//2^7 = 128
	PlayerCustomFlag_CanMoveAnywhere,			//2^8 = 256
	PlayerCustomFlag_CanMoveFromFar,			//2^9 = 512
	PlayerCustomFlag_CanLoginMultipleCharacters,		//2^10 = 1024 (account flag)
	PlayerCustomFlag_HasFullLight,				//2^11 = 2048
	PlayerCustomFlag_CanLogoutAnytime,			//2^12 = 4096 (account flag)
	PlayerCustomFlag_HideLevel,				//2^13 = 8192
	PlayerCustomFlag_IsProtected,				//2^14 = 16384
	PlayerCustomFlag_IsImmune,				//2^15 = 32768
	PlayerCustomFlag_NotGainSkull,				//2^16 = 65536
	PlayerCustomFlag_NotGainUnjustified,			//2^17 = 131072
	PlayerCustomFlag_IgnorePacification,			//2^18 = 262144
	PlayerCustomFlag_IgnoreLoginDelay,			//2^19 = 524288
	PlayerCustomFlag_CanStairhop,				//2^20 = 1048576
	PlayerCustomFlag_CanTurnhop,				//2^21 = 2097152
	PlayerCustomFlag_IgnoreHouseRent,			//2^22 = 4194304
	PlayerCustomFlag_CanWearAllAddons,			//2^23 = 8388608
	PlayerCustomFlag_IsWalkable,				//2^24 = 16777216
	PlayerCustomFlag_CanWalkthrough,			//2^25 = 33554432
	PlayerCustomFlag_CanUseAllMounts,			//2^26 = 67108864

	PlayerCustomFlag_LastFlag
};

enum Spells_t
{
	SPELL_NONE                    = 0x00,
	SPELL_LIGHT_HEALING           = 0x01,
	SPELL_INTENSE_HEALING         = 0x02,
	SPELL_ULTIMATE_HEALING        = 0x03,
	SPELL_INTENSE_HEALING_RUNE    = 0x04,
	SPELL_ULTIMATE_HEALING_RUNE   = 0x05,
	SPELL_HASTE                   = 0x06,
	SPELL_LIGHT_MAGIC_MISSILE     = 0x07,
	SPELL_HEAVY_MAGIC_MISSILE     = 0x08,
	SPELL_SUMMON_CREATURE         = 0x09,
	SPELL_LIGHT                   = 0x0A,
	SPELL_GREAT_LIGHT             = 0x0B,
	SPELL_CONVINCE_CREATURE       = 0x0C,
	SPELL_ENERGY_WAVE             = 0x0D,
	SPELL_CHAMELEON               = 0x0E,
	SPELL_FIREBALL                = 0x0F,
	SPELL_GREAT_FIREBALL          = 0x10,
	SPELL_FIREBOMB                = 0x11,
	SPELL_EXPLOSION               = 0x12,
	SPELL_FIRE_WAVE               = 0x13,
	SPELL_FIND_PERSON             = 0x14,
	SPELL_SUDDEN_DEATH            = 0x15,
	SPELL_ENERGY_BEAM             = 0x16,
	SPELL_GREAT_ENERGY_BEAM       = 0x17,
	SPELL_HELLS_CORE              = 0x18,
	SPELL_FIRE_FIELD              = 0x19,
	SPELL_POISON_FIELD            = 0x1A,
	SPELL_ENERGY_FIELD            = 0x1B,
	SPELL_FIRE_WALL               = 0x1C,
	SPELL_CURE_POISON             = 0x1D,
	SPELL_DESTROY_FIELD           = 0x1E,
	SPELL_ANTIDOTE_RUNE           = 0x1F,
	SPELL_POISON_WALL             = 0x20,
	SPELL_ENERGY_WALL             = 0x21,
	SPELL_UNKNOWN_1               = 0x22,
	SPELL_UNKNOWN_2               = 0x23,
	SPELL_SALVATION               = 0x24,
	SPELL_MOVE                    = 0x25,
	SPELL_CREATURE_ILLUSION       = 0x26,
	SPELL_STRONG_HASTE            = 0x27,
	SPELL_UNKNOWN_3               = 0x28,
	SPELL_UNKNOWN_4               = 0x29,
	SPELL_FOOD                    = 0x2A,
	SPELL_STRONG_ICE_WAVE         = 0x2B,
	SPELL_MAGIC_SHIELD            = 0x2C,
	SPELL_INVISIBLE               = 0x2D,
	SPELL_UNKNOWN_5               = 0x2E,
	SPELL_UNKNOWN_6               = 0x2F,
	SPELL_POISONED_ARROW          = 0x30,
	SPELL_EXPLOSIVE_ARROW         = 0x31,
	SPELL_SOULFIRE                = 0x32,
	SPELL_CONJURE_ARROW           = 0x33,
	SPELL_RETRIEVE_FRIEND         = 0x34,
	SPELL_UNKNOWN_7               = 0x35,
	SPELL_PARALYZE                = 0x36,
	SPELL_ENERGYBOMB              = 0x37,
	SPELL_WRATH_OF_NATURE         = 0x38,
	SPELL_STRONG_ETHEREAL_SPEAR   = 0x39,
	SPELL_UNKNOWN_8               = 0x3A,
	SPELL_FRONT_SWEEP             = 0x3B,
	SPELL_UNKNOWN_9               = 0x3C,
	SPELL_BRUTAL_STRIKE           = 0x3D,
	SPELL_ANNIHILATION            = 0x3E,
	SPELL_UNKNOWN_10              = 0x3F,
	SPELL_UNKNOWN_11              = 0x40,
	SPELL_UNKNOWN_12              = 0x41,
	SPELL_UNKNOWN_13              = 0x42,
	SPELL_UNKNOWN_14              = 0x43,
	SPELL_UNKNOWN_15              = 0x44,
	SPELL_UNKNOWN_16              = 0x45,
	SPELL_UNKNOWN_17              = 0x46,
	SPELL_INVITE_GUESTS           = 0x47,
	SPELL_INVITE_SUBOWNERS        = 0x48,
	SPELL_KICK_GUEST              = 0x49,
	SPELL_EDIT_DOOR               = 0x4A,
	SPELL_ULTIMATE_LIGHT          = 0x4B,
	SPELL_MAGIC_ROPE              = 0x4C,
	SPELL_STALAGMITE              = 0x4D,
	SPELL_DESINTEGRATE            = 0x4E,
	SPELL_CONJURE_BOLT            = 0x4F,
	SPELL_BERSERK                 = 0x50,
	SPELL_LEVITATE                = 0x51,
	SPELL_MASS_HEALING            = 0x52,
	SPELL_ANIMATE_DEAD            = 0x53,
	SPELL_HEAL_FRIEND             = 0x54,
	SPELL_UNDEAD_LEGION           = 0x55,
	SPELL_MAGIC_WALL              = 0x56,
	SPELL_DEATH_STRIKE            = 0x57,
	SPELL_ENERGY_STRIKE           = 0x58,
	SPELL_FLAME_STRIKE            = 0x59,
	SPELL_CANCEL_INVISIBILITY     = 0x5A,
	SPELL_POISONBOMB              = 0x5B,
	SPELL_ENCHANT_STAFF           = 0x5C,
	SPELL_CHALLENGE               = 0x5D,
	SPELL_WILD_GROWTH             = 0x5E,
	SPELL_POWER_BOLT              = 0x5F,
	SPELL_UNKNOWN_18              = 0x60,
	SPELL_UNKNOWN_19              = 0x61,
	SPELL_UNKNOWN_20              = 0x62,
	SPELL_UNKNOWN_21              = 0x63,
	SPELL_UNKNOWN_22              = 0x64,
	SPELL_UNKNOWN_23              = 0x65,
	SPELL_UNKNOWN_24              = 0x66,
	SPELL_UNKNOWN_25              = 0x67,
	SPELL_UNKNOWN_26              = 0x68,
	SPELL_FIERCE_BERSERK          = 0x69,
	SPELL_GROUNDSHAKER            = 0x6A,
	SPELL_WHIRLWIND_THROW         = 0x6B,
	SPELL_SNIPER_ARROW            = 0x6C,
	SPELL_PIERCING_BOLT           = 0x6D,
	SPELL_ENCHANT_SPEAR           = 0x6E,
	SPELL_ETHEREAL_SPEAR          = 0x6F,
	SPELL_ICE_STRIKE              = 0x70,
	SPELL_TERRA_STRIKE            = 0x71,
	SPELL_ICICLE                  = 0x72,
	SPELL_AVALANCHE               = 0x73,
	SPELL_STONE_SHOWER            = 0x74,
	SPELL_THUNDERSTORM            = 0x75,
	SPELL_ETERNAL_WINTER          = 0x76,
	SPELL_RAGE_OF_THE_SKIES       = 0x77,
	SPELL_TERRA_WAVE              = 0x78,
	SPELL_ICE_WAVE                = 0x79,
	SPELL_DIVINE_MISSILE          = 0x7A,
	SPELL_WOUND_CLEANSING         = 0x7B,
	SPELL_DIVINE_CALDERA          = 0x7C,
	SPELL_DIVINE_HEALING          = 0x7D,
	SPELL_TRAIN_PARTY             = 0x7E,
	SPELL_PROTECT_PARTY           = 0x7F,
	SPELL_HEAL_PARTY              = 0x80,
	SPELL_ENCHANT_PARTY           = 0x81,
	SPELL_HOLY_MISSILE            = 0x82,
	SPELL_CHARGE                  = 0x83,
	SPELL_PROTECTOR               = 0x84,
	SPELL_BLOOD_RAGE              = 0x85,
	SPELL_SWIFT_FOOT              = 0x86,
	SPELL_SHARPSHOOTER            = 0x87,
	SPELL_UNKNOWN_27              = 0x88,
	SPELL_UNKNOWN_28              = 0x89,
	SPELL_IGNITE                  = 0x8A,
	SPELL_CURSE                   = 0x8B,
	SPELL_ELECTRIFY               = 0x8C,
	SPELL_INFLICT_WOUND           = 0x8D,
	SPELL_ENVENOM                 = 0x8E,
	SPELL_HOLY_FLASH              = 0x8F,
	SPELL_CURE_BLEEDING           = 0x90,
	SPELL_CURE_BURNING            = 0x91,
	SPELL_CURE_ELECTRIFICATION    = 0x92,
	SPELL_CURE_CURSE              = 0x93,
	SPELL_PHYSICAL_STRIKE         = 0x94,
	SPELL_LIGHTNING               = 0x95,
	SPELL_STRONG_FLAME_STRIKE     = 0x96,
	SPELL_STRONG_ENERGY_STRIKE    = 0x97,
	SPELL_STRONG_ICE_STRIKE       = 0x98,
	SPELL_STRONG_TERRA_STRIKE     = 0x99,
	SPELL_ULTIMATE_FLAME_STRIKE   = 0x9A,
	SPELL_ULTIMATE_ENERGY_STRIKE  = 0x9B,
	SPELL_ULTIMATE_ICE_STRIKE     = 0x9C,
	SPELL_ULTIMATE_TERRA_STRIKE   = 0x9D,
	SPELL_INTENSE_WOUND_CLEANSING = 0x9E,
	SPELL_RECOVERY                = 0x9F,
	SPELL_INTENSE_RECOVERY        = 0xA0
};

//Reserved player storage key ranges
//[10000000 - 20000000]
#define PSTRG_RESERVED_RANGE_START	10000000
#define PSTRG_RESERVED_RANGE_SIZE	10000000

//[1000 - 1500]
#define PSTRG_OUTFITS_RANGE_START	(PSTRG_RESERVED_RANGE_START + 1000)
#define PSTRG_OUTFITS_RANGE_SIZE	500

//[1500 - 2000]
#define PSTRG_OUTFITSID_RANGE_START	(PSTRG_RESERVED_RANGE_START + 1500)
#define PSTRG_OUTFITSID_RANGE_SIZE	500

//[2001 - 2011]
#define PSTRG_MOUNTS_RANGE_START   (PSTRG_RESERVED_RANGE_START + 2000)
#define PSTRG_MOUNTS_RANGE_SIZE    10
#define PSTRG_MOUNTS_CURRENTMOUNT (PSTRG_MOUNTS_RANGE_START + PSTRG_MOUNTS_RANGE_SIZE)

#define NETWORK_CRYPTOHEADER_SIZE 8
#define NETWORK_RETRY_TIMEOUT 5000
#define NETWORK_DEFAULT_SIZE 4096
#define NETWORK_HEADER_SIZE 2
#define NETWORK_MAX_SIZE 15360

#define IPBAN_FLAG 128
#define LOCALHOST 2130706433

#define IS_IN_KEYRANGE(key, range) (key >= PSTRG_##range##_START && ((key - PSTRG_##range##_START) < PSTRG_##range##_SIZE))
#endif
