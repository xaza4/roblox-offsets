#pragma once
#include <cstdint>
#include <array>

#ifndef REBASE
#define REBASE(x) (x)
#endif

namespace Offsets
{
    inline constexpr const char* architecture = "arm64";
    inline constexpr const char* luau = "0.746.0.7461264";
    inline constexpr const char* build = "version-2fc79d515be6449d";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x25e7150);
        inline const uintptr_t luaM_freegco = REBASE(0x25e729c);
        inline const uintptr_t luaM_newgco = REBASE(0x25e673c);
        inline const uintptr_t luaM_toobig = REBASE(0x25e6418);
        inline const uintptr_t luaM_visitgco = REBASE(0x25e7d54);
        inline const uintptr_t newblock = REBASE(0x25e6528);
        inline const uintptr_t newclasspage = REBASE(0x25e7f30);
        inline const uintptr_t newpage = REBASE(0x25e68b4);
    }

    namespace Luau {
        inline const uintptr_t loadsafe = REBASE(0x25f4fa0);
        inline const uintptr_t luaA_pushvalue = REBASE(0x25cb4d8);
        inline const uintptr_t luaA_toobject = REBASE(0x25cb474);
        inline const uintptr_t luaC_step = REBASE(0x25df33c);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x25dd078);
        inline const uintptr_t luaD_throw = REBASE(0x25dd138);
        inline const uintptr_t luaF_newLclosure = REBASE(0x25decdc);
        inline const uintptr_t luaF_newUpval = REBASE(0x25dee84);
        inline const uintptr_t luaF_newproto = REBASE(0x25de870);
        inline const uintptr_t luaG_runerror = REBASE(0x25dbe4c);
        inline const uintptr_t luaH_clone = REBASE(0x25f0418);
        inline const uintptr_t luaH_dummynode = REBASE(0x5c7fb00);
        inline const uintptr_t luaH_new = REBASE(0x25eeb60);
        inline const uintptr_t luaL_argerrorL = REBASE(0x25d0c84);
        inline const uintptr_t luaL_checklstring = REBASE(0x25d10e8);
        inline const uintptr_t luaL_checktype = REBASE(0x25d133c);
        inline const uintptr_t luaL_errorL = REBASE(0x25d0d84);
        inline const uintptr_t luaL_findtable = REBASE(0x25d19c0);
        inline const uintptr_t luaL_getmetafield = REBASE(0x25d1778);
        inline const uintptr_t luaL_register = REBASE(0x25d1878);
        inline const uintptr_t luaL_tagerror = REBASE(0x25d12b4);
        inline const uintptr_t luaL_typeerrorL = REBASE(0x25d0dd0);
        inline const uintptr_t luaO_chunkid = REBASE(0x25e8b98);
        inline const uintptr_t luaO_nilobject = REBASE(0x5c7f9e8);
        inline const uintptr_t luaO_pushfstring = REBASE(0x25e8b70);
        inline const uintptr_t luaO_pushvfstring = REBASE(0x25e8aac);
        inline const uintptr_t luaO_str2d = REBASE(0x25e88f0);
        inline const uintptr_t luaT_init = REBASE(0x25f2ab8);
        inline const uintptr_t luaT_objtypename = REBASE(0x25f2d2c);
        inline const uintptr_t luaV_equal = REBASE(0x25f7930);
        inline const uintptr_t luaV_gettable = REBASE(0x25f6d5c);
        inline const uintptr_t luaV_lessthan = REBASE(0x25f7720);
        inline const uintptr_t luaV_settable = REBASE(0x25f7234);
        inline const uintptr_t lua_checkstack = REBASE(0x25cb550);
        inline const uintptr_t lua_eception = REBASE(0x25dd178);
        inline const uintptr_t lua_error = REBASE(0x25cb60c);
        inline const uintptr_t lua_gettop = REBASE(0x25cb9bc);
        inline const uintptr_t lua_namecallatom = REBASE(0x25cc984);
        inline const uintptr_t lua_newstate = REBASE(0x25e98d0);
        inline const uintptr_t lua_pushfstringL = REBASE(0x25cd444);
        inline const uintptr_t lua_pushvfstring = REBASE(0x25cd3d8);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x25cb6a0);
        inline const uintptr_t lua_resetthread = REBASE(0x25e974c);
        inline const uintptr_t lua_type = REBASE(0x25cbe68);
        inline const uintptr_t lua_yield = REBASE(0x25de1f8);
        inline const uintptr_t luaopen_base = REBASE(0x25d2558);
        inline const uintptr_t luaopen_bit32 = REBASE(0x25d34a0);
        inline const uintptr_t luaopen_buffer = REBASE(0x25d3d2c);
        inline const uintptr_t luaopen_class = REBASE(0x25d9c38);
        inline const uintptr_t luaopen_coroutine = REBASE(0x25d9d44);
        inline const uintptr_t luaopen_debug = REBASE(0x25db398);
        inline const uintptr_t luaopen_integer = REBASE(0x25e409c);
        inline const uintptr_t luaopen_math = REBASE(0x25e51bc);
        inline const uintptr_t luaopen_os = REBASE(0x25e8ccc);
        inline const uintptr_t luaopen_string = REBASE(0x25ea564);
        inline const uintptr_t luaopen_table = REBASE(0x25f0ffc);
        inline const uintptr_t luaopen_utf8 = REBASE(0x25f2e7c);
        inline const uintptr_t luaopen_vector = REBASE(0x25f37a0);
        inline const uintptr_t luau_execute = REBASE(0x25f8fb4);
        inline const uintptr_t pseudo2addr = REBASE(0x25d0ba4);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x25d29a8);
        inline const uintptr_t luaB_error = REBASE(0x25d2a2c);
        inline const uintptr_t luaB_gcinfo = REBASE(0x25d2a9c);
        inline const uintptr_t luaB_getfenv = REBASE(0x25d2ad4);
        inline const uintptr_t luaB_getmetatable = REBASE(0x25d2b38);
        inline const uintptr_t luaB_newproxy = REBASE(0x25d2b90);
        inline const uintptr_t luaB_next = REBASE(0x25d2494);
        inline const uintptr_t luaB_pcall = REBASE(0x25d27d0);
        inline const uintptr_t luaB_pcallrun = REBASE(0x25d280c);
        inline const uintptr_t luaB_print = REBASE(0x25d2c38);
        inline const uintptr_t luaB_rawequal = REBASE(0x25d2d08);
        inline const uintptr_t luaB_rawget = REBASE(0x25d2d58);
        inline const uintptr_t luaB_rawlen = REBASE(0x25d2e04);
        inline const uintptr_t luaB_rawset = REBASE(0x25d2da8);
        inline const uintptr_t luaB_select = REBASE(0x25d2e84);
        inline const uintptr_t luaB_setfenv = REBASE(0x25d2f4c);
        inline const uintptr_t luaB_setmetatable = REBASE(0x25d3040);
        inline const uintptr_t luaB_tonumber = REBASE(0x25d3114);
        inline const uintptr_t luaB_tostring = REBASE(0x25d3244);
        inline const uintptr_t luaB_type = REBASE(0x25d327c);
        inline const uintptr_t luaB_typeof = REBASE(0x25d32c8);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x28280a4);
        inline const uintptr_t luaF_freeproto = REBASE(0x25df00c);
        inline const uintptr_t luaF_newCclosure = REBASE(0x25dee00);
        inline const uintptr_t luaL_tostring = REBASE(0x25d222c);
        inline const uintptr_t luaS_newlstr = REBASE(0x25ea160);
        inline const uintptr_t lua_clock = REBASE(0x25e9404);
        inline const uintptr_t lua_pushstring = REBASE(0x25cd390);
        inline const uintptr_t lua_setfield = REBASE(0x25ce22c);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x140377c);
        inline const uintptr_t GetIdentityContext = REBASE(0x14880b4);
        inline const uintptr_t GetRequireBypass = REBASE(0x148b490);
        inline const uintptr_t GetScriptContextFromLuaState = REBASE(0x1489b4c);
        inline const uintptr_t IdentityCapabilitiesTable = REBASE(0x5aa3d80);
        inline const uintptr_t IdentityToCaps = REBASE(0x16257b8);
        inline const uintptr_t IsLegalSendEvent = REBASE(0x4d4a1a0);
        inline const uintptr_t ModuleScriptIsCoreScript = REBASE(0x142c034);
        inline const uintptr_t PrintIdentity = REBASE(0x1420058);
        inline const uintptr_t ScriptContextRequire = REBASE(0x14ca170);
        inline const uintptr_t ScriptContextResume = REBASE(0x149b180);
        inline const uintptr_t ScriptContextResumeInternal = REBASE(0x149b970);
    }

    namespace ScriptContextFields {
        inline constexpr uintptr_t RequireBypass = 0xae1;
    }

    namespace ModuleScriptFields {
        inline constexpr uintptr_t IsCoreScript = 0x138;
        inline constexpr uint64_t IsCoreScriptMask = 1;
    }

    namespace FFlag {
        inline const uintptr_t BooleanType = REBASE(0x69832f0);
        inline const uintptr_t FLogDataBank = REBASE(0x6e00dd8);
        inline const uintptr_t GetFFlag = REBASE(0x2a57c70);
        inline const uintptr_t GetFFlagByName = REBASE(0x2a65358);
        inline const uintptr_t GetFFlagLocked = REBASE(0x2a5bb0c);
        inline const uintptr_t RegisterBoolean = REBASE(0x2a64be8);
        inline const uintptr_t SetFFlag = REBASE(0x2a572fc);
    }

    namespace FlagStorage {
        inline const uintptr_t AnimGraphServerAuthorityNodeIndices = REBASE(0x72ef6e4);
        inline const uintptr_t DebugMacDisableUpdates = REBASE(0x6acc058);
        inline const uintptr_t EnableLoadModule = REBASE(0x6b19628);
        inline const uintptr_t RenderAdvSkyGroup = REBASE(0x6b81878);
    }

    namespace Scheduler {
        inline const uintptr_t TaskSchedulerConstructor = REBASE(0x29fa3a8);
        inline const uintptr_t TaskSchedulerPTR = REBASE(0x6df9168);
    }

    namespace Reflection {
        inline const uintptr_t GetProperty = REBASE(0x13f6a7c);
        inline const uintptr_t GetPropertyData = REBASE(0x161eb68);
        inline const uintptr_t GetPropertyEntry = REBASE(0x13f6a28);
    }

    namespace Instance {
        inline const uintptr_t InstanceFindFirstAncestor = REBASE(0x114a0ac);
        inline const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x114a15c);
        inline const uintptr_t InstanceFindFirstChild = REBASE(0x114a4b0);
        inline const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x28c9ad0);
        inline const uintptr_t InstanceGetAttribute = REBASE(0x28d2ce0);
        inline const uintptr_t InstanceGetAttributes = REBASE(0x1153410);
        inline const uintptr_t InstanceGetChildren = REBASE(0x114a2c4);
        inline const uintptr_t InstanceNew = REBASE(0x13edf10);
    }

    namespace Remote {
        inline const uintptr_t FireAllClients = REBASE(0x3fc98ec);
        inline const uintptr_t FireClient = REBASE(0x3fc9524);
        inline const uintptr_t FireServer = REBASE(0x3fc9148);
        inline const uintptr_t InvokeClient = REBASE(0x4065d04);
        inline const uintptr_t InvokeServer = REBASE(0x40652e8);
    }

    namespace WorldRoot {
        inline const uintptr_t BlockCast = REBASE(0x1117b6c);
        inline const uintptr_t ShapeCast = REBASE(0x1118a6c);
        inline const uintptr_t SphereCast = REBASE(0x11177cc);
        inline const uintptr_t WorldRootRaycast = REBASE(0x11174ac);
    }

    namespace Raycast {
        inline constexpr uintptr_t FunctionPointerOffset = 0xa8;
        inline const uintptr_t RaycastBoundDesc = REBASE(0x6d87b00);
        inline const uintptr_t RaycastFn = REBASE(0x11174ac);
    }

    namespace Rendering {
        inline const uintptr_t CubeTextures = REBASE(0x264da20);
        inline const uintptr_t DrawSkyEnv = REBASE(0x418dcd8);
        inline const uintptr_t FastClusterEntityVTable = REBASE(0x6a421d0);
        inline const uintptr_t SkyThread = REBASE(0x418b018);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x4676fa0);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x4677b58);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x4677c5c);
        inline const uintptr_t FireProximityPrompt = REBASE(0x3deb0a8);
        inline const uintptr_t FireRightMouseClick = REBASE(0x4677130);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x4d46ae8);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x28a5d10);
        inline const uintptr_t RakPeerProcessNetworkPacket = REBASE(0x28ac000);
        inline const uintptr_t RakPeerReceive = REBASE(0x289c968);
        inline const uintptr_t RakPeerVirtualTable = REBASE(0x697a6d0);
        inline const uintptr_t RaknetReceive = REBASE(0x28b8e58);
        inline const uintptr_t ReportNetworkError = REBASE(0x4d466c0);
        inline const uintptr_t Send = REBASE(0x28ac000);
        inline const uintptr_t SendPacketsToSelf = REBASE(0x289b0ac);
        inline const uintptr_t UpdateNetworkLoop = REBASE(0x289b2b4);
    }

    namespace RbxTransport {
        inline const uintptr_t AppClose = REBASE(0x2119f84);
        inline const uintptr_t AppDeletingDestructor = REBASE(0x2119b10);
        inline const uintptr_t AppDestructor = REBASE(0x2119b0c);
        inline const uintptr_t AppReceive = REBASE(0x211b18c);
        inline const uintptr_t AppReceiveMaxBytes = REBASE(0x211b844);
        inline const uintptr_t AppSend = REBASE(0x211aa10);
        inline const uintptr_t AppTypeInfo = REBASE(0x69477b0);
        inline const uintptr_t AppVTable = REBASE(0x69476b0);
        inline const uintptr_t ClientDeletingDestructor = REBASE(0x45158f4);
        inline const uintptr_t ClientDestructor = REBASE(0x4515898);
        inline const uintptr_t ClientOpenChannels = REBASE(0x4514d74);
        inline const uintptr_t ClientReceive = REBASE(0x4514c34);
        inline const uintptr_t ClientTypeInfo = REBASE(0x6a4a300);
        inline const uintptr_t ClientVTable = REBASE(0x6a4a210);
        inline const uintptr_t FailureFallbackToRbxTransport = REBASE(0x6ba3e80);
        inline const uintptr_t GenerateRetryToken = REBASE(0x2206ee8);
        inline const uintptr_t RetryTokenDecrypt = REBASE(0x2205474);
        inline const uintptr_t RetryTokenEncrypt = REBASE(0x220530c);
        inline const uintptr_t UseRbxTransportClient = REBASE(0x6b866c0);
        inline const uintptr_t VerifyRetryToken = REBASE(0x2207240);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1429274);
        inline const uintptr_t defer = REBASE(0x14288f8);
        inline const uintptr_t delay = REBASE(0x1428ef0);
        inline const uintptr_t desynchronize = REBASE(0x142877c);
        inline const uintptr_t spawn = REBASE(0x1428d6c);
        inline const uintptr_t synchronize = REBASE(0x14285fc);
        inline const uintptr_t task_lib_init = REBASE(0x1428370);
        inline const uintptr_t wait = REBASE(0x1429108);
    }

    namespace MathLib {
        inline const uintptr_t lua_math_abs = REBASE(0x25e533c);
        inline const uintptr_t lua_math_acos = REBASE(0x25e5370);
        inline const uintptr_t lua_math_asin = REBASE(0x25e53a4);
        inline const uintptr_t lua_math_atan = REBASE(0x25e542c);
        inline const uintptr_t lua_math_atan2 = REBASE(0x25e53d8);
        inline const uintptr_t lua_math_ceil = REBASE(0x25e5460);
        inline const uintptr_t lua_math_clamp = REBASE(0x25e6104);
        inline const uintptr_t lua_math_cos = REBASE(0x25e54c8);
        inline const uintptr_t lua_math_cosh = REBASE(0x25e5494);
        inline const uintptr_t lua_math_deg = REBASE(0x25e54fc);
        inline const uintptr_t lua_math_exp = REBASE(0x25e5538);
        inline const uintptr_t lua_math_floor = REBASE(0x25e556c);
        inline const uintptr_t lua_math_fmod = REBASE(0x25e55a0);
        inline const uintptr_t lua_math_frexp = REBASE(0x25e55f4);
        inline const uintptr_t lua_math_isfinite = REBASE(0x25e63a8);
        inline const uintptr_t lua_math_isinf = REBASE(0x25e6364);
        inline const uintptr_t lua_math_isnan = REBASE(0x25e632c);
        inline const uintptr_t lua_math_ldexp = REBASE(0x25e5640);
        inline const uintptr_t lua_math_lerp = REBASE(0x25e62bc);
        inline const uintptr_t lua_math_log = REBASE(0x25e56c4);
        inline const uintptr_t lua_math_log10 = REBASE(0x25e5690);
        inline const uintptr_t lua_math_map = REBASE(0x25e6224);
        inline const uintptr_t lua_math_max = REBASE(0x25e5778);
        inline const uintptr_t lua_math_min = REBASE(0x25e57fc);
        inline const uintptr_t lua_math_modf = REBASE(0x25e5880);
        inline const uintptr_t lua_math_noise = REBASE(0x25e5cf0);
        inline const uintptr_t lua_math_pow = REBASE(0x25e58dc);
        inline const uintptr_t lua_math_rad = REBASE(0x25e5930);
        inline const uintptr_t lua_math_random = REBASE(0x25e596c);
        inline const uintptr_t lua_math_randomseed = REBASE(0x25e5b94);
        inline const uintptr_t lua_math_round = REBASE(0x25e61f0);
        inline const uintptr_t lua_math_sign = REBASE(0x25e61a8);
        inline const uintptr_t lua_math_sin = REBASE(0x25e5c20);
        inline const uintptr_t lua_math_sinh = REBASE(0x25e5bec);
        inline const uintptr_t lua_math_sqrt = REBASE(0x25e5c54);
        inline const uintptr_t lua_math_tan = REBASE(0x25e5cbc);
        inline const uintptr_t lua_math_tanh = REBASE(0x25e5c88);
    }

    namespace OsLib {
        inline const uintptr_t lua_os_clock = REBASE(0x25e8cf4);
        inline const uintptr_t lua_os_date = REBASE(0x25e8d20);
        inline const uintptr_t lua_os_difftime = REBASE(0x25e9080);
        inline const uintptr_t lua_os_time = REBASE(0x25e90d0);
    }

    namespace StringLib {
        inline const uintptr_t lua_string_byte = REBASE(0x25ea60c);
        inline const uintptr_t lua_string_char = REBASE(0x25ea728);
        inline const uintptr_t lua_string_find = REBASE(0x25ea818);
        inline const uintptr_t lua_string_format = REBASE(0x25ea820);
        inline const uintptr_t lua_string_gmatch = REBASE(0x25eaf18);
        inline const uintptr_t lua_string_gsub = REBASE(0x25eaf88);
        inline const uintptr_t lua_string_len = REBASE(0x25eb3d0);
        inline const uintptr_t lua_string_lower = REBASE(0x25eb410);
        inline const uintptr_t lua_string_match = REBASE(0x25eb4c8);
        inline const uintptr_t lua_string_pack = REBASE(0x25ebb70);
        inline const uintptr_t lua_string_packsize = REBASE(0x25ec018);
        inline const uintptr_t lua_string_rep = REBASE(0x25eb4d0);
        inline const uintptr_t lua_string_reverse = REBASE(0x25eb62c);
        inline const uintptr_t lua_string_split = REBASE(0x25eb850);
        inline const uintptr_t lua_string_sub = REBASE(0x25eb6d4);
        inline const uintptr_t lua_string_unpack = REBASE(0x25ec128);
        inline const uintptr_t lua_string_upper = REBASE(0x25eb798);
    }

    namespace TableLib {
        inline const uintptr_t lua_table_clear = REBASE(0x25f1d34);
        inline const uintptr_t lua_table_clone = REBASE(0x25f1e90);
        inline const uintptr_t lua_table_concat = REBASE(0x25f11cc);
        inline const uintptr_t lua_table_create = REBASE(0x25f1a6c);
        inline const uintptr_t lua_table_find = REBASE(0x25f1b2c);
        inline const uintptr_t lua_table_foreach = REBASE(0x25f1314);
        inline const uintptr_t lua_table_foreachi = REBASE(0x25f13c4);
        inline const uintptr_t lua_table_freeze = REBASE(0x25f1d7c);
        inline const uintptr_t lua_table_getn = REBASE(0x25f148c);
        inline const uintptr_t lua_table_insert = REBASE(0x25f15a0);
        inline const uintptr_t lua_table_isfrozen = REBASE(0x25f1e4c);
        inline const uintptr_t lua_table_maxn = REBASE(0x25f14d0);
        inline const uintptr_t lua_table_move = REBASE(0x25f1898);
        inline const uintptr_t lua_table_pack = REBASE(0x25f17f0);
        inline const uintptr_t lua_table_remove = REBASE(0x25f1680);
        inline const uintptr_t lua_table_sort = REBASE(0x25f1734);
        inline const uintptr_t lua_table_unpack = REBASE(0x25f1064);
    }

    namespace IntegerLib {
        inline const uintptr_t lua_integer_add = REBASE(0x25e41e0);
        inline const uintptr_t lua_integer_arshift = REBASE(0x25e4c70);
        inline const uintptr_t lua_integer_band = REBASE(0x25e47ec);
        inline const uintptr_t lua_integer_bnot = REBASE(0x25e48cc);
        inline const uintptr_t lua_integer_bor = REBASE(0x25e485c);
        inline const uintptr_t lua_integer_bswap = REBASE(0x25e50b0);
        inline const uintptr_t lua_integer_btest = REBASE(0x25e4fd0);
        inline const uintptr_t lua_integer_bxor = REBASE(0x25e4900);
        inline const uintptr_t lua_integer_clamp = REBASE(0x25e4748);
        inline const uintptr_t lua_integer_countlz = REBASE(0x25e507c);
        inline const uintptr_t lua_integer_countrz = REBASE(0x25e5044);
        inline const uintptr_t lua_integer_create = REBASE(0x25e4110);
        inline const uintptr_t lua_integer_div = REBASE(0x25e42ac);
        inline const uintptr_t lua_integer_extract = REBASE(0x25e4d8c);
        inline const uintptr_t lua_integer_fromstring = REBASE(0x25e50e4);
        inline const uintptr_t lua_integer_ge = REBASE(0x25e4ad8);
        inline const uintptr_t lua_integer_gt = REBASE(0x25e4a90);
        inline const uintptr_t lua_integer_idiv = REBASE(0x25e44e4);
        inline const uintptr_t lua_integer_le = REBASE(0x25e49b8);
        inline const uintptr_t lua_integer_lrotate = REBASE(0x25e4cdc);
        inline const uintptr_t lua_integer_lshift = REBASE(0x25e4bb0);
        inline const uintptr_t lua_integer_lt = REBASE(0x25e4970);
        inline const uintptr_t lua_integer_max = REBASE(0x25e43d4);
        inline const uintptr_t lua_integer_min = REBASE(0x25e435c);
        inline const uintptr_t lua_integer_mod = REBASE(0x25e46a0);
        inline const uintptr_t lua_integer_mul = REBASE(0x25e4268);
        inline const uintptr_t lua_integer_neg = REBASE(0x25e41ac);
        inline const uintptr_t lua_integer_rem = REBASE(0x25e444c);
        inline const uintptr_t lua_integer_replace = REBASE(0x25e4ea0);
        inline const uintptr_t lua_integer_rrotate = REBASE(0x25e4d34);
        inline const uintptr_t lua_integer_rshift = REBASE(0x25e4c10);
        inline const uintptr_t lua_integer_sub = REBASE(0x25e4224);
        inline const uintptr_t lua_integer_tonumber = REBASE(0x25e4178);
        inline const uintptr_t lua_integer_udiv = REBASE(0x25e45ac);
        inline const uintptr_t lua_integer_uge = REBASE(0x25e4b68);
        inline const uintptr_t lua_integer_ugt = REBASE(0x25e4b20);
        inline const uintptr_t lua_integer_ule = REBASE(0x25e4a48);
        inline const uintptr_t lua_integer_ult = REBASE(0x25e4a00);
        inline const uintptr_t lua_integer_urem = REBASE(0x25e4624);
    }

    namespace Bit32Lib {
        inline const uintptr_t lua_bit32_arshift = REBASE(0x25d34c8);
        inline const uintptr_t lua_bit32_band = REBASE(0x25d3550);
        inline const uintptr_t lua_bit32_bnot = REBASE(0x25d3580);
        inline const uintptr_t lua_bit32_bor = REBASE(0x25d35b4);
        inline const uintptr_t lua_bit32_btest = REBASE(0x25d3694);
        inline const uintptr_t lua_bit32_bxor = REBASE(0x25d3624);
        inline const uintptr_t lua_bit32_byteswap = REBASE(0x25d39b8);
        inline const uintptr_t lua_bit32_countlz = REBASE(0x25d3928);
        inline const uintptr_t lua_bit32_countrz = REBASE(0x25d3970);
        inline const uintptr_t lua_bit32_extract = REBASE(0x25d36c8);
        inline const uintptr_t lua_bit32_lrotate = REBASE(0x25d372c);
        inline const uintptr_t lua_bit32_lshift = REBASE(0x25d377c);
        inline const uintptr_t lua_bit32_replace = REBASE(0x25d37e0);
        inline const uintptr_t lua_bit32_rrotate = REBASE(0x25d386c);
        inline const uintptr_t lua_bit32_rshift = REBASE(0x25d38c4);
    }

    namespace BufferLib {
        inline const uintptr_t lua_buffer_copy = REBASE(0x25d4a3c);
        inline const uintptr_t lua_buffer_create = REBASE(0x25d3d70);
        inline const uintptr_t lua_buffer_fill = REBASE(0x25d4b7c);
        inline const uintptr_t lua_buffer_fromstring = REBASE(0x25d3ddc);
        inline const uintptr_t lua_buffer_len = REBASE(0x25d49f4);
        inline const uintptr_t lua_buffer_readbits = REBASE(0x25d4c64);
        inline const uintptr_t lua_buffer_readf32 = REBASE(0x25d41e0);
        inline const uintptr_t lua_buffer_readf64 = REBASE(0x25d4274);
        inline const uintptr_t lua_buffer_readi16 = REBASE(0x25d3f90);
        inline const uintptr_t lua_buffer_readi32 = REBASE(0x25d40b8);
        inline const uintptr_t lua_buffer_readi8 = REBASE(0x25d3e78);
        inline const uintptr_t lua_buffer_readstring = REBASE(0x25d47f8);
        inline const uintptr_t lua_buffer_readu16 = REBASE(0x25d4024);
        inline const uintptr_t lua_buffer_readu32 = REBASE(0x25d414c);
        inline const uintptr_t lua_buffer_readu8 = REBASE(0x25d3f04);
        inline const uintptr_t lua_buffer_tostring = REBASE(0x25d3e30);
        inline const uintptr_t lua_buffer_writebits = REBASE(0x25d4d94);
        inline const uintptr_t lua_buffer_writef32 = REBASE(0x25d46b4);
        inline const uintptr_t lua_buffer_writef64 = REBASE(0x25d4758);
        inline const uintptr_t lua_buffer_writei16 = REBASE(0x25d4434);
        inline const uintptr_t lua_buffer_writei32 = REBASE(0x25d4574);
        inline const uintptr_t lua_buffer_writei8 = REBASE(0x25d4304);
        inline const uintptr_t lua_buffer_writestring = REBASE(0x25d48d0);
        inline const uintptr_t lua_buffer_writeu16 = REBASE(0x25d44d4);
        inline const uintptr_t lua_buffer_writeu32 = REBASE(0x25d4614);
        inline const uintptr_t lua_buffer_writeu8 = REBASE(0x25d439c);
    }

    namespace VectorLib {
        inline const uintptr_t lua_vector_abs = REBASE(0x25f3c58);
        inline const uintptr_t lua_vector_angle = REBASE(0x25f3ac8);
        inline const uintptr_t lua_vector_ceil = REBASE(0x25f3c14);
        inline const uintptr_t lua_vector_clamp = REBASE(0x25f3d04);
        inline const uintptr_t lua_vector_create = REBASE(0x25f38b8);
        inline const uintptr_t lua_vector_cross = REBASE(0x25f39ec);
        inline const uintptr_t lua_vector_dot = REBASE(0x25f3a60);
        inline const uintptr_t lua_vector_floor = REBASE(0x25f3bd0);
        inline const uintptr_t lua_vector_lerp = REBASE(0x25f3f98);
        inline const uintptr_t lua_vector_magnitude = REBASE(0x25f3934);
        inline const uintptr_t lua_vector_max = REBASE(0x25f3e40);
        inline const uintptr_t lua_vector_min = REBASE(0x25f3eec);
        inline const uintptr_t lua_vector_normalize = REBASE(0x25f3988);
        inline const uintptr_t lua_vector_sign = REBASE(0x25f3c9c);
    }

    namespace Utf8Lib {
        inline const uintptr_t lua_utf8_char = REBASE(0x25f3254);
        inline const uintptr_t lua_utf8_codepoint = REBASE(0x25f30c0);
        inline const uintptr_t lua_utf8_codes = REBASE(0x25f34a4);
        inline const uintptr_t lua_utf8_len = REBASE(0x25f3338);
        inline const uintptr_t lua_utf8_offset = REBASE(0x25f2ed8);
    }

    namespace DebugLib {
        inline const uintptr_t lua_debug_info = REBASE(0x25db3c0);
        inline const uintptr_t lua_debug_traceback = REBASE(0x25db6c4);
    }

    namespace CoroutineLib {
        inline const uintptr_t lua_coroutine_close = REBASE(0x25dadec);
        inline const uintptr_t lua_coroutine_create = REBASE(0x25da3f0);
        inline const uintptr_t lua_coroutine_finally = REBASE(0x25da568);
        inline const uintptr_t lua_coroutine_isyieldable = REBASE(0x25da538);
        inline const uintptr_t lua_coroutine_resume = REBASE(0x25d9e18);
        inline const uintptr_t lua_coroutine_running = REBASE(0x25da434);
        inline const uintptr_t lua_coroutine_status = REBASE(0x25da464);
        inline const uintptr_t lua_coroutine_wrap = REBASE(0x25da4e4);
        inline const uintptr_t lua_coroutine_yield = REBASE(0x25da528);
    }

    namespace ClassLib {
        inline const uintptr_t lua_class_classof = REBASE(0x25d9ce0);
        inline const uintptr_t lua_class_isinstance = REBASE(0x25d9c60);
    }

    namespace LuauAliases {
        inline const uintptr_t luaB_pcallcont = REBASE(0x25d280c);
        inline const uintptr_t luaB_pcally = REBASE(0x25d27d0);
        inline const uintptr_t luaL_tolstring = REBASE(0x25d222c);
        inline const uintptr_t luaM_free_ = REBASE(0x25e7150);
        inline const uintptr_t luaM_freegco_ = REBASE(0x25e729c);
        inline const uintptr_t luaM_newgco_ = REBASE(0x25e673c);
        inline const uintptr_t luaO_nilobject_ = REBASE(0x5c7f9e8);
        inline const uintptr_t luaV_equalval = REBASE(0x25f7930);
    }

    namespace LuauApi {
        inline const uintptr_t lua_absindex = REBASE(0x25cb990);
        inline const uintptr_t lua_addfinalizer = REBASE(0x25cef8c);
        inline const uintptr_t lua_break = REBASE(0x25de25c);
        inline const uintptr_t lua_call = REBASE(0x25ce864);
        inline const uintptr_t lua_callbacks = REBASE(0x25d0a60);
        inline const uintptr_t lua_callyieldable = REBASE(0x25ceb28);
        inline const uintptr_t lua_cleartable = REBASE(0x25d08e0);
        inline const uintptr_t lua_clonetable = REBASE(0x25d0958);
        inline const uintptr_t lua_close = REBASE(0x25e9c5c);
        inline const uintptr_t lua_concat = REBASE(0x25cf648);
        inline const uintptr_t lua_costatus = REBASE(0x25ceccc);
        inline const uintptr_t lua_cpcall = REBASE(0x25cea50);
        inline const uintptr_t lua_createtable = REBASE(0x25cdd48);
        inline const uintptr_t lua_equal = REBASE(0x25cc1c8);
        inline const uintptr_t lua_gc = REBASE(0x25cf14c);
        inline const uintptr_t lua_getcoverage = REBASE(0x25dc8c4);
        inline const uintptr_t lua_getfenv = REBASE(0x25ce0a4);
        inline const uintptr_t lua_getfield = REBASE(0x25cd870);
        inline const uintptr_t lua_getinfo = REBASE(0x25dbabc);
        inline const uintptr_t lua_getlocal = REBASE(0x25db8dc);
        inline const uintptr_t lua_getmetatable = REBASE(0x25cdf54);
        inline const uintptr_t lua_getreadonly = REBASE(0x25cde8c);
        inline const uintptr_t lua_gettable = REBASE(0x25cd7cc);
        inline const uintptr_t lua_getthreaddata = REBASE(0x54b700);
        inline const uintptr_t lua_getupvalue = REBASE(0x25cfab0);
        inline const uintptr_t lua_getweakref = REBASE(0x25d0398);
        inline const uintptr_t lua_insert = REBASE(0x25cbb9c);
        inline const uintptr_t lua_iscfunction = REBASE(0x25cbef4);
        inline const uintptr_t lua_isnumber = REBASE(0x25cbfe4);
        inline const uintptr_t lua_isstring = REBASE(0x25cc064);
        inline const uintptr_t lua_isuserdata = REBASE(0x25cc084);
        inline const uintptr_t lua_isyieldable = REBASE(0x25de2b4);
        inline const uintptr_t lua_lessthan = REBASE(0x25cc2bc);
        inline const uintptr_t lua_lightuserdatatag = REBASE(0x25ccddc);
        inline const uintptr_t lua_mainthread = REBASE(0x25cb984);
        inline const uintptr_t lua_newbuffer = REBASE(0x25cf9f0);
        inline const uintptr_t lua_newthread = REBASE(0x25cb8b0);
        inline const uintptr_t lua_newuserdatadtor = REBASE(0x25cf914);
        inline const uintptr_t lua_newuserdatatagged = REBASE(0x25cf75c);
        inline const uintptr_t lua_next = REBASE(0x25cf3c0);
        inline const uintptr_t lua_objlen = REBASE(0x25cca54);
        inline const uintptr_t lua_pcall = REBASE(0x25ce910);
        inline const uintptr_t lua_pcallyieldable = REBASE(0x25ceb8c);
        inline const uintptr_t lua_pushboolean = REBASE(0x25cd620);
        inline const uintptr_t lua_pushcclosurek = REBASE(0x25cd4b8);
        inline const uintptr_t lua_pushinteger = REBASE(0x25cd0b4);
        inline const uintptr_t lua_pushinteger64 = REBASE(0x25cd134);
        inline const uintptr_t lua_pushlightuserdatatagged = REBASE(0x25cd6a4);
        inline const uintptr_t lua_pushlstring = REBASE(0x25cd2c4);
        inline const uintptr_t lua_pushnil = REBASE(0x25ccfc4);
        inline const uintptr_t lua_pushnumber = REBASE(0x25cd030);
        inline const uintptr_t lua_pushthread = REBASE(0x25cd72c);
        inline const uintptr_t lua_pushunsigned = REBASE(0x25cd1b0);
        inline const uintptr_t lua_pushvalue = REBASE(0x25cbd8c);
        inline const uintptr_t lua_pushvector = REBASE(0x25cd230);
        inline const uintptr_t lua_rawequal = REBASE(0x25cc0e8);
        inline const uintptr_t lua_rawget = REBASE(0x25cdaa8);
        inline const uintptr_t lua_rawgetfield = REBASE(0x25cd994);
        inline const uintptr_t lua_rawgeti = REBASE(0x25cdb50);
        inline const uintptr_t lua_rawgetptagged = REBASE(0x25cdc48);
        inline const uintptr_t lua_rawiter = REBASE(0x25cf4b0);
        inline const uintptr_t lua_rawset = REBASE(0x25ce3f4);
        inline const uintptr_t lua_rawsetfield = REBASE(0x25ce2f0);
        inline const uintptr_t lua_rawseti = REBASE(0x25ce4d0);
        inline const uintptr_t lua_rawsetptagged = REBASE(0x25ce5b0);
        inline const uintptr_t lua_ref = REBASE(0x25d0018);
        inline const uintptr_t lua_remove = REBASE(0x25cbb0c);
        inline const uintptr_t lua_replace = REBASE(0x25cbc50);
        inline const uintptr_t lua_resume = REBASE(0x25ddc38);
        inline const uintptr_t lua_resumeerror = REBASE(0x25ddfe4);
        inline const uintptr_t lua_setembeddergc = REBASE(0x25d0224);
        inline const uintptr_t lua_setfenv = REBASE(0x25ce7a8);
        inline const uintptr_t lua_setlocal = REBASE(0x25db9bc);
        inline const uintptr_t lua_setmetatable = REBASE(0x25ce6a0);
        inline const uintptr_t lua_setreadonly = REBASE(0x25cde14);
        inline const uintptr_t lua_setsafeenv = REBASE(0x25cdee4);
        inline const uintptr_t lua_settable = REBASE(0x25ce1a4);
        inline const uintptr_t lua_settop = REBASE(0x25cb9cc);
        inline const uintptr_t lua_setupvalue = REBASE(0x25cfc5c);
        inline const uintptr_t lua_status = REBASE(0x25cecc4);
        inline const uintptr_t lua_toboolean = REBASE(0x25cc580);
        inline const uintptr_t lua_tobuffer = REBASE(0x25cceb4);
        inline const uintptr_t lua_tointeger64 = REBASE(0x25cc5fc);
        inline const uintptr_t lua_tointegerx = REBASE(0x25cc440);
        inline const uintptr_t lua_tolightuserdata = REBASE(0x25ccb74);
        inline const uintptr_t lua_tolightuserdatatagged = REBASE(0x25ccbe0);
        inline const uintptr_t lua_tolstring = REBASE(0x25cc688);
        inline const uintptr_t lua_tonumberx = REBASE(0x25cc3a0);
        inline const uintptr_t lua_topointer = REBASE(0x25ccf3c);
        inline const uintptr_t lua_tothread = REBASE(0x25cce48);
        inline const uintptr_t lua_tounsignedx = REBASE(0x25cc4e0);
        inline const uintptr_t lua_touserdata = REBASE(0x25ccc64);
        inline const uintptr_t lua_touserdatatagged = REBASE(0x25ccce4);
        inline const uintptr_t lua_tovector = REBASE(0x25cc9f4);
        inline const uintptr_t lua_typename = REBASE(0x25cbed0);
        inline const uintptr_t lua_unref = REBASE(0x25d0134);
        inline const uintptr_t lua_userdatatag = REBASE(0x25ccd6c);
        inline const uintptr_t lua_weakref = REBASE(0x25d0230);
        inline const uintptr_t lua_weakunref = REBASE(0x25d0344);
        inline const uintptr_t lua_xmove = REBASE(0x25cb6fc);
        inline const uintptr_t lua_xpush = REBASE(0x25cb7c8);
    }

    namespace LuauAux {
        inline const uintptr_t luaL_addlstring = REBASE(0x25d1d68);
        inline const uintptr_t luaL_addvalue = REBASE(0x25d1fd0);
        inline const uintptr_t luaL_addvalueany = REBASE(0x25d2064);
        inline const uintptr_t luaL_buffinit = REBASE(0x25d1d54);
        inline const uintptr_t luaL_buffinitsize = REBASE(0x25d1e90);
        inline const uintptr_t luaL_callmeta = REBASE(0x25d17ec);
        inline const uintptr_t luaL_checkany = REBASE(0x25d1384);
        inline const uintptr_t luaL_checkboolean = REBASE(0x25d1480);
        inline const uintptr_t luaL_checkbuffer = REBASE(0x25d127c);
        inline const uintptr_t luaL_checkinteger = REBASE(0x25d1518);
        inline const uintptr_t luaL_checkinteger64 = REBASE(0x25d1560);
        inline const uintptr_t luaL_checknumber = REBASE(0x25d13e4);
        inline const uintptr_t luaL_checkstack = REBASE(0x25d12e0);
        inline const uintptr_t luaL_checkudata = REBASE(0x25d11a0);
        inline const uintptr_t luaL_checkunsigned = REBASE(0x25d1650);
        inline const uintptr_t luaL_checkvector = REBASE(0x25d16ec);
        inline const uintptr_t luaL_newmetatable = REBASE(0x25d1120);
        inline const uintptr_t luaL_openlibs = REBASE(0x25e3db0);
        inline const uintptr_t luaL_optinteger64 = REBASE(0x25d15fc);
        inline const uintptr_t luaL_optlstring = REBASE(0x25d1070);
        inline const uintptr_t luaL_optnumber = REBASE(0x25d142c);
        inline const uintptr_t luaL_optvector = REBASE(0x25d1724);
        inline const uintptr_t luaL_prepbuffsize = REBASE(0x25d1dcc);
        inline const uintptr_t luaL_pushresult = REBASE(0x25d1dec);
        inline const uintptr_t luaL_pushresultsize = REBASE(0x25d2484);
        inline const uintptr_t luaL_sandbox = REBASE(0x25e3e8c);
        inline const uintptr_t luaL_sandboxthread = REBASE(0x25e3fac);
        inline const uintptr_t luaL_traceback = REBASE(0x25d1b20);
        inline const uintptr_t luaL_typename = REBASE(0x25d1ae0);
        inline const uintptr_t luaL_where = REBASE(0x25d0ed8);
    }

    namespace LuauData {
        inline const uintptr_t luaT_eventname = REBASE(0x6960bc8);
        inline const uintptr_t luaT_typenames = REBASE(0x6960b58);
    }

    namespace LuauHelpers {
        inline const uintptr_t luau_lapi_aux_upvalue = REBASE(0x25cfbb4);
        inline const uintptr_t luau_lapi_f_Ccall = REBASE(0x25cea8c);
        inline const uintptr_t luau_lapi_f_call = REBASE(0x25cea40);
        inline const uintptr_t luau_lapi_runfinalizercont = REBASE(0x25cef78);
        inline const uintptr_t luau_lapi_runfinalizery = REBASE(0x25cee1c);
        inline const uintptr_t luau_laux_currfuncname = REBASE(0x25d0d08);
        inline const uintptr_t luau_laux_extendstrbuf = REBASE(0x25d1ec4);
        inline const uintptr_t luau_lbaselib_auxopen = REBASE(0x25d26d0);
        inline const uintptr_t luau_lbaselib_getfunc = REBASE(0x25d3308);
        inline const uintptr_t luau_lbitlib_andaux = REBASE(0x25d39ec);
        inline const uintptr_t luau_lbitlib_fieldargs = REBASE(0x25d3a50);
        inline const uintptr_t luau_lcorolib_auxresumecont = REBASE(0x25dad40);
        inline const uintptr_t luau_lcorolib_coclosecont = REBASE(0x25da3a0);
        inline const uintptr_t luau_lcorolib_coclosey = REBASE(0x25da208);
        inline const uintptr_t luau_lcorolib_coresumecont = REBASE(0x25d9eec);
        inline const uintptr_t luau_lcorolib_coresumefinish = REBASE(0x25db334);
        inline const uintptr_t luau_ldblib_getthread = REBASE(0x25db774);
        inline const uintptr_t luau_ldebug_pusherror = REBASE(0x25dc218);
        inline const uintptr_t luau_ldo_restore_stack_limit = REBASE(0x25de4c8);
        inline const uintptr_t luau_ldo_resume = REBASE(0x25dddac);
        inline const uintptr_t luau_ldo_resume_finish = REBASE(0x25ddea8);
        inline const uintptr_t luau_ldo_resume_handle = REBASE(0x25de09c);
        inline const uintptr_t luau_ldo_resume_start = REBASE(0x25ddcd0);
        inline const uintptr_t luau_lgc_reallymarkobject = REBASE(0x25e03f0);
        inline const uintptr_t luau_lmem_freeblock = REBASE(0x25e7204);
        inline const uintptr_t luau_loslib_getfield = REBASE(0x25e935c);
        inline const uintptr_t luau_lstate_close_state = REBASE(0x25e9be4);
        inline const uintptr_t luau_lstrlib_add_value = REBASE(0x25ed374);
        inline const uintptr_t luau_lstrlib_classend = REBASE(0x25eccf8);
        inline const uintptr_t luau_lstrlib_getnum = REBASE(0x25edd98);
        inline const uintptr_t luau_lstrlib_getnumlimit = REBASE(0x25edd28);
        inline const uintptr_t luau_lstrlib_getoption = REBASE(0x25eda54);
        inline const uintptr_t luau_lstrlib_gmatch_aux = REBASE(0x25ed27c);
        inline const uintptr_t luau_lstrlib_match = REBASE(0x25ec738);
        inline const uintptr_t luau_lstrlib_push_captures = REBASE(0x25ecbec);
        inline const uintptr_t luau_lstrlib_push_onecapture = REBASE(0x25ed1ac);
        inline const uintptr_t luau_lstrlib_str_find_aux = REBASE(0x25ec4d8);
        inline const uintptr_t luau_lstrlib_unpackint = REBASE(0x25ede44);
        inline const uintptr_t luau_ltable_resize = REBASE(0x25ee638);
        inline const uintptr_t luau_ltable_setarrayvector = REBASE(0x25eec20);
        inline const uintptr_t luau_ltablib_addfield = REBASE(0x25f1f38);
        inline const uintptr_t luau_ltablib_moveelements = REBASE(0x25f2014);
        inline const uintptr_t luau_ltablib_sort_rec = REBASE(0x25f24b4);
        inline const uintptr_t luau_lutf8lib_buffutfchar = REBASE(0x25f35c8);
        inline const uintptr_t luau_lutf8lib_iter_aux = REBASE(0x25f36a8);
        inline const uintptr_t luau_lutf8lib_utf8_decode = REBASE(0x25f3504);
        inline const uintptr_t luau_lvmutils_callTMres = REBASE(0x25f6f8c);
        inline const uintptr_t luau_lvmutils_call_orderTM = REBASE(0x25f778c);
        inline const uintptr_t luau_lvmutils_get_compTM = REBASE(0x25f7ae0);
    }

    namespace LuauInternals {
        inline const uintptr_t luaA_pushclass = REBASE(0x25cb61c);
        inline const uintptr_t luaB_inext = REBASE(0x25d24ec);
        inline const uintptr_t luaB_ipairs = REBASE(0x25d2734);
        inline const uintptr_t luaB_newbuffer = REBASE(0x25d3b3c);
        inline const uintptr_t luaB_pairs = REBASE(0x25d2784);
        inline const uintptr_t luaB_xpcallcont = REBASE(0x25d2928);
        inline const uintptr_t luaB_xpcally = REBASE(0x25d28b8);
        inline const uintptr_t luaC_allocationrate = REBASE(0x25e0638);
        inline const uintptr_t luaC_barrierf = REBASE(0x25e03bc);
        inline const uintptr_t luaC_barriertable = REBASE(0x25e0580);
        inline const uintptr_t luaC_enumheap = REBASE(0x25e27c0);
        inline const uintptr_t luaD_call = REBASE(0x25dd86c);
        inline const uintptr_t luaD_growCI = REBASE(0x25dd3fc);
        inline const uintptr_t luaD_growstack = REBASE(0x25dd3d8);
        inline const uintptr_t luaD_pcall = REBASE(0x25de2dc);
        inline const uintptr_t luaD_preparefinalize = REBASE(0x25dda38);
        inline const uintptr_t luaD_preparefinalizestate = REBASE(0x25dd9b0);
        inline const uintptr_t luaD_reallocCI = REBASE(0x25dd35c);
        inline const uintptr_t luaD_reallocstack = REBASE(0x25dd17c);
        inline const uintptr_t luaD_runfinalizers = REBASE(0x25ddad8);
        inline const uintptr_t luaD_seterrorobj = REBASE(0x25dd928);
        inline const uintptr_t luaE_newthread = REBASE(0x25e94c0);
        inline const uintptr_t luaF_close = REBASE(0x25def68);
        inline const uintptr_t luaF_getlocal = REBASE(0x25df1b0);
        inline const uintptr_t luaG_aritherror = REBASE(0x25dbf54);
        inline const uintptr_t luaG_indexerror = REBASE(0x25dc088);
        inline const uintptr_t luaG_missingmembererror = REBASE(0x25dc130);
        inline const uintptr_t luaG_ordererror = REBASE(0x25dbffc);
        inline const uintptr_t luaG_pusherror = REBASE(0x25dc318);
        inline const uintptr_t luaG_readonlyerror = REBASE(0x25dc1e8);
        inline const uintptr_t luaG_typeerrorL = REBASE(0x25dbe04);
        inline const uintptr_t luaH_clear = REBASE(0x25f055c);
        inline const uintptr_t luaH_get = REBASE(0x25ef094);
        inline const uintptr_t luaH_getn = REBASE(0x25f02c4);
        inline const uintptr_t luaH_getnum = REBASE(0x25eeee4);
        inline const uintptr_t luaH_getreadonly = REBASE(0x25f08f4);
        inline const uintptr_t luaH_getstr = REBASE(0x25eefa8);
        inline const uintptr_t luaH_newkey = REBASE(0x25ef69c);
        inline const uintptr_t luaH_set = REBASE(0x25ef634);
        inline const uintptr_t luaH_setnum = REBASE(0x25f0148);
        inline const uintptr_t luaH_setreadonly = REBASE(0x25f0670);
        inline const uintptr_t luaH_setstr = REBASE(0x25f01d8);
        inline const uintptr_t luaM_new_ = REBASE(0x25e6448);
        inline const uintptr_t luaM_realloc_ = REBASE(0x25e7a3c);
        inline const uintptr_t luaO_rawequalKey = REBASE(0x25e8818);
        inline const uintptr_t luaO_rawequalObj = REBASE(0x25e8744);
        inline const uintptr_t luaR_addclassmember = REBASE(0x25d9190);
        inline const uintptr_t luaR_defaultcreateobject = REBASE(0x25d9628);
        inline const uintptr_t luaR_inheritclass = REBASE(0x25d8d58);
        inline const uintptr_t luaR_setupconstructor = REBASE(0x25d8bd8);
        inline const uintptr_t luaU_newudata = REBASE(0x25f2d44);
        inline const uintptr_t luaV_callTM = REBASE(0x25f7420);
        inline const uintptr_t luaV_dolen = REBASE(0x25f89bc);
        inline const uintptr_t luaV_lessequal = REBASE(0x25f785c);
        inline const uintptr_t luaV_strcmp = REBASE(0x25f76b4);
        inline const uintptr_t luaV_tonumber = REBASE(0x25f6c3c);
        inline const uintptr_t luauF_tinsert = REBASE(0x25d65b8);
        inline const uintptr_t luau_precall = REBASE(0x2602c14);
    }

    namespace ObjectFields {
        namespace AirProperties {
            inline constexpr uintptr_t AirDensity = 0x10;
            inline constexpr uintptr_t GlobalWind = 0x34;
        }
        namespace AnimationTrack {
            inline constexpr uintptr_t Animation = 0xa0;
            inline constexpr uintptr_t IsPlaying = 0xcc;
            inline constexpr uintptr_t Speed = 0xbc;
            inline constexpr uintptr_t TimePosition = 0xc0;
        }
        namespace Animator {
            inline constexpr uintptr_t ActiveAnimations = 0x8d0;
        }
        namespace Atmosphere {
            inline constexpr uintptr_t Color = 0xa0;
            inline constexpr uintptr_t Decay = 0xac;
            inline constexpr uintptr_t Density = 0xb8;
            inline constexpr uintptr_t Glare = 0xbc;
            inline constexpr uintptr_t Haze = 0xc0;
            inline constexpr uintptr_t Offset = 0xc4;
        }
        namespace Attachment {
            inline constexpr uintptr_t Position = 0xac;
        }
        namespace BasePart {
            inline constexpr uintptr_t CastShadow = 0x118;
            inline constexpr uintptr_t Locked = 0x119;
            inline constexpr uintptr_t Massless = 0x11a;
            inline constexpr uintptr_t Primitive = 0x168;
            inline constexpr uintptr_t Reflectance = 0xec;
            inline constexpr uintptr_t Shape = 0x190;
            inline constexpr uintptr_t Transparency = 0x110;
        }
        namespace Beam {
            inline constexpr uintptr_t Attachment0 = 0x140;
            inline constexpr uintptr_t Attachment1 = 0x150;
            inline constexpr uintptr_t Brightness = 0x160;
            inline constexpr uintptr_t CurveSize0 = 0x164;
            inline constexpr uintptr_t CurveSize1 = 0x168;
            inline constexpr uintptr_t LightEmission = 0x16c;
            inline constexpr uintptr_t LightInfluence = 0x170;
            inline constexpr uintptr_t Texture = 0x118;
            inline constexpr uintptr_t TextureLength = 0x17c;
            inline constexpr uintptr_t TextureSpeed = 0x184;
            inline constexpr uintptr_t Width0 = 0x188;
            inline constexpr uintptr_t Width1 = 0x18c;
            inline constexpr uintptr_t ZOffset = 0x190;
        }
        namespace BloomEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t Intensity = 0x98;
            inline constexpr uintptr_t Size = 0x9c;
            inline constexpr uintptr_t Threshold = 0xa0;
        }
        namespace BlurEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t Size = 0x98;
        }
        namespace CachedItem {
            inline constexpr uintptr_t FileMeshData = 0x20;
        }
        namespace Camera {
            inline constexpr uintptr_t CameraSubject = 0xa8;
            inline constexpr uintptr_t CameraType = 0x118;
        }
        namespace CharacterMesh {
            inline constexpr uintptr_t BodyPart = 0x118;
        }
        namespace ClickDetector {
            inline constexpr uintptr_t MaxActivationDistance = 0xc8;
            inline constexpr uintptr_t MouseIcon = 0xa0;
        }
        namespace Clothing {
            inline constexpr uintptr_t Color3 = 0xf8;
        }
        namespace ColorCorrectionEffect {
            inline constexpr uintptr_t Brightness = 0xa4;
            inline constexpr uintptr_t Contrast = 0xa8;
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t TintColor = 0x98;
        }
        namespace ColorGradingEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t TonemapperPreset = 0x98;
        }
        namespace DataModel {

            inline constexpr uintptr_t InstanceOffset = 0x1f0;
            inline constexpr uintptr_t CreatorId = 0x350;
            inline constexpr uintptr_t GameId = 0x358;
            inline constexpr uintptr_t GameLoaded = 0x5d0;
            inline constexpr uintptr_t JobId = 0x2f8;
            inline constexpr uintptr_t PlaceId = 0x360;
            inline constexpr uintptr_t PlaceVersion = 0x37c;
            inline constexpr uintptr_t Workspace = 0x328;
        }
        namespace DepthOfFieldEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t FarIntensity = 0x98;
            inline constexpr uintptr_t FocusDistance = 0x9c;
            inline constexpr uintptr_t InFocusRadius = 0xa0;
            inline constexpr uintptr_t NearIntensity = 0xa4;
        }
        namespace DragDetector {
            inline constexpr uintptr_t ActivatedCursorIcon = 0x170;
            inline constexpr uintptr_t CursorIcon = 0xa0;
            inline constexpr uintptr_t MaxActivationDistance = 0xc8;
            inline constexpr uintptr_t MaxDragAngle = 0x260;
            inline constexpr uintptr_t MaxDragTranslation = 0x224;
            inline constexpr uintptr_t MaxForce = 0x264;
            inline constexpr uintptr_t MaxTorque = 0x268;
            inline constexpr uintptr_t MinDragAngle = 0x26c;
            inline constexpr uintptr_t MinDragTranslation = 0x230;
            inline constexpr uintptr_t ReferenceInstance = 0x1a8;
            inline constexpr uintptr_t Responsiveness = 0x278;
        }
        namespace GuiObject {
            inline constexpr uintptr_t BackgroundColor3 = 0x510;
            inline constexpr uintptr_t BackgroundTransparency = 0x534;
            inline constexpr uintptr_t BorderColor3 = 0x51c;
            inline constexpr uintptr_t LayoutOrder = 0x54c;
            inline constexpr uintptr_t Position = 0x4e0;
            inline constexpr uintptr_t Rotation = 0x564;
            inline constexpr uintptr_t ScreenGui_Enabled = 0x498;
            inline constexpr uintptr_t Size = 0x500;
            inline constexpr uintptr_t Visible = 0x57d;
            inline constexpr uintptr_t ZIndex = 0x574;
        }
        namespace Humanoid {
            inline constexpr uintptr_t AutoJumpEnabled = 0x1b8;
            inline constexpr uintptr_t AutoRotate = 0x1b9;
            inline constexpr uintptr_t AutomaticScalingEnabled = 0x1ba;
            inline constexpr uintptr_t BreakJointsOnDeath = 0x1bc;
            inline constexpr uintptr_t CameraOffset = 0x100;
            inline constexpr uintptr_t DisplayDistanceType = 0x164;
            inline constexpr uintptr_t DisplayName = 0xa0;
            inline constexpr uintptr_t EvaluateStateMachine = 0x1bd;
            inline constexpr uintptr_t Health = 0x174;
            inline constexpr uintptr_t HealthDisplayDistance = 0x16c;
            inline constexpr uintptr_t HealthDisplayType = 0x170;
            inline constexpr uintptr_t HipHeight = 0x178;
            inline constexpr uintptr_t Jump = 0x1c0;
            inline constexpr uintptr_t JumpHeight = 0x184;
            inline constexpr uintptr_t JumpPower = 0x188;
            inline constexpr uintptr_t MaxHealth = 0x18c;
            inline constexpr uintptr_t MaxSlopeAngle = 0x190;
            inline constexpr uintptr_t MoveDirection = 0x124;
            inline constexpr uintptr_t MoveToPart = 0xf0;
            inline constexpr uintptr_t MoveToPoint = 0x148;
            inline constexpr uintptr_t NameDisplayDistance = 0x194;
            inline constexpr uintptr_t NameOcclusion = 0x198;
            inline constexpr uintptr_t PlatformStand = 0x1c2;
            inline constexpr uintptr_t RequiresNeck = 0x1c3;
            inline constexpr uintptr_t RigType = 0x1a4;
            inline constexpr uintptr_t SeatPart = 0xe0;
            inline constexpr uintptr_t Sit = 0x1c4;
            inline constexpr uintptr_t TargetPoint = 0x130;
            inline constexpr uintptr_t UseJumpPower = 0x1c6;
            inline constexpr uintptr_t Walkspeed = 0x1b4;
        }
        namespace Instance {
            inline constexpr uintptr_t Name = 0x68;
            inline constexpr uintptr_t Parent = 0x60;
        }
        namespace LRUNode {
            inline constexpr uintptr_t AssetID = 0x10;
            inline constexpr uintptr_t CachedItem = 0x30;
            inline constexpr uintptr_t Next = 0x8;
        }
        namespace Lighting {
            inline constexpr uintptr_t Ambient = 0xb8;
            inline constexpr uintptr_t Brightness = 0x100;
            inline constexpr uintptr_t ColorShift_Bottom = 0xc4;
            inline constexpr uintptr_t ColorShift_Top = 0xd0;
            inline constexpr uintptr_t EnvironmentDiffuseScale = 0x104;
            inline constexpr uintptr_t EnvironmentSpecularScale = 0x108;
            inline constexpr uintptr_t ExposureCompensation = 0x10c;
            inline constexpr uintptr_t FogColor = 0xdc;
            inline constexpr uintptr_t FogEnd = 0x114;
            inline constexpr uintptr_t FogStart = 0x118;
            inline constexpr uintptr_t GeographicLatitude = 0x11c;
            inline constexpr uintptr_t GlobalShadows = 0x12c;
            inline constexpr uintptr_t OutdoorAmbient = 0xe8;
        }
        namespace LocalScript {
            inline constexpr uintptr_t GUID = 0xb8;
            inline constexpr uintptr_t Hash = 0x178;
            inline constexpr uintptr_t Source = 0x160;
            inline constexpr uintptr_t Disabled = 0x10c;
            inline constexpr uintptr_t RunContext = 0x108;
            inline constexpr uintptr_t LinkedSource = 0xe8;
        }
        namespace MaterialColors {
            inline constexpr uintptr_t Asphalt = 0x30;
            inline constexpr uintptr_t Basalt = 0x27;
            inline constexpr uintptr_t Brick = 0xf;
            inline constexpr uintptr_t Cobblestone = 0x33;
            inline constexpr uintptr_t Concrete = 0xc;
            inline constexpr uintptr_t CrackedLava = 0x2d;
            inline constexpr uintptr_t Glacier = 0x1b;
            inline constexpr uintptr_t Grass = 0x6;
            inline constexpr uintptr_t Ground = 0x2a;
            inline constexpr uintptr_t Ice = 0x36;
            inline constexpr uintptr_t LeafyGrass = 0x39;
            inline constexpr uintptr_t Limestone = 0x3f;
            inline constexpr uintptr_t Mud = 0x24;
            inline constexpr uintptr_t Pavement = 0x42;
            inline constexpr uintptr_t Rock = 0x18;
            inline constexpr uintptr_t Salt = 0x3c;
            inline constexpr uintptr_t Sand = 0x12;
            inline constexpr uintptr_t Sandstone = 0x21;
            inline constexpr uintptr_t Slate = 0x9;
            inline constexpr uintptr_t Snow = 0x1e;
            inline constexpr uintptr_t WoodPlanks = 0x15;
        }
        namespace MemEnforcedLRUCache {
            inline constexpr uintptr_t Head = 0x10;
        }
        namespace MeshContentProvider {
            inline constexpr uintptr_t LRUHolder = 0xc0;
        }
        namespace MeshPart {
            inline constexpr uintptr_t MeshId = 0x2d0;
            inline constexpr uintptr_t Texture = 0x2f8;
        }
        namespace Misc {
            inline constexpr uintptr_t AnimationId = 0x98;
        }
        namespace Model {
            inline constexpr uintptr_t PrimaryPart = 0x200;
            inline constexpr uintptr_t Scale = 0x124;
        }
        namespace ModuleScript {
            inline constexpr uintptr_t GUID = 0xb8;
            inline constexpr uintptr_t Hash = 0x120;
            inline constexpr uintptr_t IsCoreScript = 0x138;
            inline constexpr uint64_t IsCoreScript_Mask = 0x1;
            inline constexpr uintptr_t Source = 0x108;
            inline constexpr uintptr_t LinkedSource = 0xe8;
            inline constexpr uintptr_t CachedRemoteSource = 0xa0;
            inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd0;
            inline constexpr uintptr_t VMStateStorage = 0x138;
            inline constexpr uint64_t VMStateStorage_Mask = 0xfffffffffffffff8;
            inline constexpr uintptr_t ReloadRequested = 0x138;
            inline constexpr uint64_t ReloadRequested_Mask = 0x2;
            inline constexpr uintptr_t FirstVMState = 0x140;
            inline constexpr uintptr_t AdditionalVMStates = 0x168;
            inline constexpr uint64_t AdditionalVMStates_Mask = 0xfffffffffffffff8;
        }
        namespace ParticleEmitter {
            inline constexpr uintptr_t Acceleration = 0x1c0;
            inline constexpr uintptr_t Brightness = 0x1fc;
            inline constexpr uintptr_t Drag = 0x200;
            inline constexpr uintptr_t Lifetime = 0x1d4;
            inline constexpr uintptr_t LightEmission = 0x218;
            inline constexpr uintptr_t LightInfluence = 0x21c;
            inline constexpr uintptr_t Rate = 0x228;
            inline constexpr uintptr_t RotSpeed = 0x1dc;
            inline constexpr uintptr_t Rotation = 0x1e4;
            inline constexpr uintptr_t Speed = 0x1ec;
            inline constexpr uintptr_t SpreadAngle = 0x1f4;
            inline constexpr uintptr_t Texture = 0x198;
            inline constexpr uintptr_t TimeScale = 0x23c;
            inline constexpr uintptr_t VelocityInheritance = 0x240;
            inline constexpr uintptr_t ZOffset = 0x244;
        }
        namespace Player {
            inline constexpr uintptr_t AccountAge = 0x31c;
            inline constexpr uintptr_t CameraMode = 0x330;
            inline constexpr uintptr_t DisplayName = 0x108;
            inline constexpr uintptr_t HealthDisplayDistance = 0x358;
            inline constexpr uintptr_t LocalPlayer = 0x108;
            inline constexpr uintptr_t MaxZoomDistance = 0x328;
            inline constexpr uintptr_t MinZoomDistance = 0x32c;
            inline constexpr uintptr_t ModelInstance = 0x258;
            inline constexpr uintptr_t Mouse = 0x10e8;
            inline constexpr uintptr_t NameDisplayDistance = 0x368;
            inline constexpr uintptr_t TeamColor = 0x370;
        }
        namespace Primitive {
            inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
            inline constexpr uintptr_t Flags = 0x1be;
            inline constexpr uintptr_t Material = 0x24e;
            inline constexpr uintptr_t Position = 0xd4;
            inline constexpr uintptr_t Size = 0x1c4;
        }
        namespace PrimitiveFlags {
            inline constexpr uintptr_t Anchored = 0x2;
            inline constexpr uint64_t Anchored_Mask = 0x2;
            inline constexpr uintptr_t CanCollide = 0x8;
            inline constexpr uint64_t CanCollide_Mask = 0x8;
            inline constexpr uintptr_t CanQuery = 0x20;
            inline constexpr uint64_t CanQuery_Mask = 0x20;
            inline constexpr uintptr_t CanTouch = 0x10;
            inline constexpr uint64_t CanTouch_Mask = 0x10;
        }
        namespace ProximityPrompt {
            inline constexpr uintptr_t ActionText = 0x98;
            inline constexpr uintptr_t Enabled = 0x10e;
            inline constexpr uintptr_t GamepadKeyCode = 0xf4;
            inline constexpr uintptr_t HoldDuration = 0xf8;
            inline constexpr uintptr_t KeyCode = 0xfc;
            inline constexpr uintptr_t MaxActivationDistance = 0x100;
            inline constexpr uintptr_t ObjectText = 0xb0;
            inline constexpr uintptr_t RequiresLineOfSight = 0x10f;
        }
        namespace RenderJob {
            inline constexpr uintptr_t RealDataModel = 0x188;
        }
        namespace RenderView {
            inline constexpr uintptr_t VisualEngine = 0x20;
        }
        namespace Script {
            inline constexpr uintptr_t GUID = 0xb8;
            inline constexpr uintptr_t Hash = 0x178;
            inline constexpr uintptr_t Source = 0x160;
            inline constexpr uintptr_t Disabled = 0x10c;
            inline constexpr uintptr_t RunContext = 0x108;
            inline constexpr uintptr_t LinkedSource = 0xe8;
        }
        namespace Seat {
            inline constexpr uintptr_t Occupant = 0x1f0;
        }
        namespace Sky {
            inline constexpr uintptr_t MoonAngularSize = 0x1ec;
            inline constexpr uintptr_t MoonTextureId = 0xa0;
            inline constexpr uintptr_t SkyboxBk = 0xc8;
            inline constexpr uintptr_t SkyboxDn = 0xf0;
            inline constexpr uintptr_t SkyboxFt = 0x118;
            inline constexpr uintptr_t SkyboxLf = 0x140;
            inline constexpr uintptr_t SkyboxOrientation = 0x1e0;
            inline constexpr uintptr_t SkyboxRt = 0x168;
            inline constexpr uintptr_t SkyboxUp = 0x190;
            inline constexpr uintptr_t StarCount = 0x1f0;
            inline constexpr uintptr_t SunAngularSize = 0x1f4;
            inline constexpr uintptr_t SunTextureId = 0x1b8;
        }
        namespace Sound {
            inline constexpr uintptr_t IsPlaying = 0x128;
            inline constexpr uintptr_t Looped = 0x125;
            inline constexpr uintptr_t PlaybackSpeed = 0x104;
            inline constexpr uintptr_t RollOffMaxDistance = 0x108;
            inline constexpr uintptr_t RollOffMinDistance = 0x10c;
            inline constexpr uintptr_t SoundGroup = 0xc8;
            inline constexpr uintptr_t SoundId = 0xa0;
            inline constexpr uintptr_t Volume = 0x118;
        }
        namespace SpawnLocation {
            inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1c8;
            inline constexpr uintptr_t Enabled = 0x1c9;
            inline constexpr uintptr_t ForcefieldDuration = 0x1c0;
            inline constexpr uintptr_t Neutral = 0x1ca;
            inline constexpr uintptr_t TeamColor = 0x1c4;
        }
        namespace SpecialMesh {
            inline constexpr uintptr_t MeshId = 0xd0;
            inline constexpr uintptr_t Scale = 0xac;
        }
        namespace SunRaysEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t Intensity = 0x98;
            inline constexpr uintptr_t Spread = 0x9c;
        }
        namespace SurfaceAppearance {
            inline constexpr uintptr_t AlphaMode = 0x1a8;
            inline constexpr uintptr_t Color = 0x190;
            inline constexpr uintptr_t ColorMap = 0xa0;
            inline constexpr uintptr_t EmissiveMaskContent = 0xc8;
            inline constexpr uintptr_t EmissiveStrength = 0x1ac;
            inline constexpr uintptr_t EmissiveTint = 0x19c;
            inline constexpr uintptr_t MetalnessMap = 0xf0;
            inline constexpr uintptr_t NormalMap = 0x118;
            inline constexpr uintptr_t RoughnessMap = 0x140;
        }
        namespace TaskScheduler {
            inline constexpr uintptr_t JobEnd = 0xd8;
            inline constexpr uintptr_t JobName = 0x18;
            inline constexpr uintptr_t JobStart = 0xd0;
            inline const uintptr_t Pointer = REBASE(0x6df9168);
        }
        namespace Team {
            inline constexpr uintptr_t BrickColor = 0xa0;
        }
        namespace Terrain {
            inline constexpr uintptr_t GrassLength = 0x1c8;
            inline constexpr uintptr_t MaterialColors = 0x490;
            inline constexpr uintptr_t WaterColor = 0x1b8;
            inline constexpr uintptr_t WaterReflectance = 0x1d0;
            inline constexpr uintptr_t WaterTransparency = 0x1d4;
            inline constexpr uintptr_t WaterWaveSize = 0x1d8;
            inline constexpr uintptr_t WaterWaveSpeed = 0x1dc;
        }
        namespace Tool {
            inline constexpr uintptr_t CanBeDropped = 0x430;
            inline constexpr uintptr_t Enabled = 0x431;
            inline constexpr uintptr_t Grip = 0x400;
            inline constexpr uintptr_t ManualActivationOnly = 0x432;
            inline constexpr uintptr_t RequiresHandle = 0x433;
            inline constexpr uintptr_t TextureId = 0x2f8;
            inline constexpr uintptr_t Tooltip = 0x3e8;
        }
        namespace UnionOperation {
            inline constexpr uintptr_t AssetId = 0x2d0;
        }
        namespace VehicleSeat {
            inline constexpr uintptr_t MaxSpeed = 0x200;
            inline constexpr uintptr_t SteerFloat = 0x204;
            inline constexpr uintptr_t ThrottleFloat = 0x208;
            inline constexpr uintptr_t Torque = 0x20c;
            inline constexpr uintptr_t TurnSpeed = 0x210;
        }
        namespace VisualEngine {
            inline constexpr uintptr_t RenderView = 0xc80;
        }
        namespace Weld {
            inline constexpr uintptr_t Part0 = 0x100;
            inline constexpr uintptr_t Part1 = 0x110;
        }
        namespace WeldConstraint {
            inline constexpr uintptr_t Part0 = 0xa0;
            inline constexpr uintptr_t Part1 = 0xb0;
        }
        namespace Workspace {
            inline constexpr uintptr_t CurrentCamera = 0x458;
            inline constexpr uintptr_t DistributedGameTime = 0x478;
            inline constexpr uintptr_t World = 0x3b8;
        }
        namespace World {
            inline constexpr uintptr_t AirProperties = 0x228;
        }
        namespace LuaSourceContainer {
            inline constexpr uintptr_t GUID = 0xb8;
            inline constexpr uintptr_t CachedRemoteSource = 0xa0;
            inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd0;
            inline constexpr std::array<uintptr_t, 2> SandboxedSource_Path = {0xd8, 0x8};
        }
        namespace BaseScript {
            inline constexpr uintptr_t Disabled = 0x10c;
            inline constexpr uintptr_t RunContext = 0x108;
            inline constexpr uintptr_t LinkedSource = 0xe8;
        }
        namespace ProtectedString {
            inline constexpr uintptr_t Source = 0x0;
        }
        namespace SharedString {
            inline constexpr std::array<uintptr_t, 2> Contents_Path = {0x0, 0x10};
        }
        namespace DataModelPointer {
            inline constexpr uintptr_t Scheduler = 0x6df9168;
            inline constexpr uintptr_t JobVTable = 0x687c6a0;
            inline constexpr uintptr_t DataModelVTable = 0x6a6b760;
            inline constexpr uintptr_t JobDataModel = 0x188;
            inline constexpr uintptr_t JobStride = 0x10;
        }
        namespace TextLabel {
            inline constexpr uintptr_t Text = 0xe40;
            inline constexpr uintptr_t TextColor3 = 0xe68;
            inline constexpr uintptr_t RichText = 0xea5;
        }
        namespace TextButton {
            inline constexpr uintptr_t Text = 0x10c8;
            inline constexpr uintptr_t TextColor3 = 0x10f0;
            inline constexpr uintptr_t RichText = 0x112d;
        }
        namespace TextBox {
            inline constexpr uintptr_t TextColor3 = 0xe8c;
            inline constexpr uintptr_t RichText = 0xede;
        }
        namespace ImageLabel {
            inline constexpr uintptr_t Image = 0xa50;
        }
        namespace ImageButton {
            inline constexpr uintptr_t Image = 0xd00;
        }
        namespace ShirtGraphic {
            inline constexpr uintptr_t Graphic = 0xa8;
        }
        namespace BillboardGui {
            inline constexpr uintptr_t Adornee = 0x6a8;
        }
        namespace SurfaceGui {
            inline constexpr uintptr_t Adornee = 0x6a8;
        }
        namespace Highlight {
            inline constexpr uintptr_t Adornee = 0xa0;
        }
        namespace SelectionBox {
            inline constexpr uintptr_t Adornee = 0xd8;
        }
        namespace BoxHandleAdornment {
            inline constexpr uintptr_t Adornee = 0xd8;
        }
        namespace ViewportFrame {
            inline constexpr uintptr_t CurrentCamera = 0x9a8;
            inline constexpr uintptr_t Size = 0x500;
        }
        namespace BinaryStringValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace BoolValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace BrickColorValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace CFrameValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace Color3Value {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace DoubleConstrainedValue {
            inline constexpr uintptr_t Value = 0xb0;
        }
        namespace IntConstrainedValue {
            inline constexpr uintptr_t Value = 0xb0;
        }
        namespace IntValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace NumberValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace ObjectValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace RayValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace StringValue {
            inline constexpr uintptr_t Value = 0xa0;
        }
        namespace Vector3Value {
            inline constexpr uintptr_t Value = 0xa0;
        }

        namespace DataModel {
            template <class ReadPointer>
            uintptr_t Pointer(uintptr_t moduleBase, ReadPointer readPointer, uintptr_t maxJobs = 4096) {
                const auto scheduler = readPointer(moduleBase + DataModelPointer::Scheduler);
                if (!scheduler) return 0;
                const auto begin = readPointer(scheduler + TaskScheduler::JobStart);
                const auto end = readPointer(scheduler + TaskScheduler::JobEnd);
                if (!begin || end < begin || (end - begin) % DataModelPointer::JobStride) return 0;
                const auto count = (end - begin) / DataModelPointer::JobStride;
                if (count > maxJobs) return 0;
                uintptr_t result = 0;
                for (uintptr_t index = 0; index < count; ++index) {
                    const auto job = readPointer(begin + index * DataModelPointer::JobStride);
                    if (!job || readPointer(job) != moduleBase + DataModelPointer::JobVTable) continue;
                    const auto candidate = readPointer(job + DataModelPointer::JobDataModel);
                    if (!candidate || readPointer(candidate) != moduleBase + DataModelPointer::DataModelVTable) continue;
                    if (result && result != candidate) return 0;
                    result = candidate;
                }
                if (readPointer(scheduler + TaskScheduler::JobStart) != begin || readPointer(scheduler + TaskScheduler::JobEnd) != end) return 0;
                return result;
            }
        }
    }
}

#include <cstdint>
namespace StatusFlags {
    inline constexpr std::uintptr_t Collector = 0x4e453c8;
    inline constexpr std::uintptr_t Inputs[] = {
        0x6ff7c0c,
        0x6ff7c10,
        0x6ff7bb0,
        0x730fecc,
        0x730fec8,
        0x6ff7bd8,
        0x6ff7bdc,
        0x6ff7be0,
        0x6ff7be4,
        0x6ff7be8,
        0x6ff7bec,
        0x6ff7bf0,
        0x6ff7bf4,
        0x6ff7bf8,
        0x6ff7bfc,
        0x6ff7c00,
        0x6ff7c04,
        0x6ff7c08,
    };
}

#include <cstdint>

namespace StatusFlags {
inline constexpr std::uintptr_t ImageBase = 0x100000000;
inline constexpr std::uintptr_t CollectorRva = 0x4E453C8;
inline constexpr std::uintptr_t AggregateStoreRva = 0x4E45528;
inline constexpr std::uintptr_t rva_Slot00 = 0x6FF7C0C; // 4 bytes
inline constexpr std::uintptr_t rva_Slot01 = 0x6FF7C10; // 4 bytes
inline constexpr std::uintptr_t rva_Slot02 = 0x6FF7BB0; // 4 bytes
inline constexpr std::uintptr_t rva_Slot03 = 0x730FECC; // 4 bytes
inline constexpr std::uintptr_t rva_Slot04 = 0x730FEC8; // 4 bytes
inline constexpr std::uintptr_t rva_Slot05 = 0x6FF7BD8; // 4 bytes
inline constexpr std::uintptr_t rva_Slot06 = 0x6FF7BDC; // 4 bytes
inline constexpr std::uintptr_t rva_Slot07 = 0x6FF7BE0; // 4 bytes
inline constexpr std::uintptr_t rva_Slot08 = 0x6FF7BE4; // 4 bytes
inline constexpr std::uintptr_t rva_Slot09 = 0x6FF7BE8; // 4 bytes
inline constexpr std::uintptr_t rva_Slot10 = 0x6FF7BEC; // 4 bytes
inline constexpr std::uintptr_t rva_Slot11 = 0x6FF7BF0; // 4 bytes
inline constexpr std::uintptr_t rva_Slot12 = 0x6FF7BF4; // 4 bytes
inline constexpr std::uintptr_t rva_Slot13 = 0x6FF7BF8; // 4 bytes
inline constexpr std::uintptr_t rva_Slot14 = 0x6FF7BFC; // 4 bytes
inline constexpr std::uintptr_t rva_Slot15 = 0x6FF7C00; // 4 bytes
inline constexpr std::uintptr_t rva_Slot16 = 0x6FF7C04; // 4 bytes
inline constexpr std::uintptr_t rva_Slot17 = 0x6FF7C08; // 4 bytes
}
