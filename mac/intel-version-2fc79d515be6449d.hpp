#pragma once
#include <cstdint>
#include <array>

#ifndef REBASE
#define REBASE(x) (x)
#endif

namespace Offsets
{
    inline constexpr const char* architecture = "x86_64";
    inline constexpr const char* luau = "0.746.0.7461264";
    inline constexpr const char* build = "version-2fc79d515be6449d";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x2976208);
        inline const uintptr_t luaM_freegco = REBASE(0x2976302);
        inline const uintptr_t luaM_newgco = REBASE(0x2975800);
        inline const uintptr_t luaM_toobig = REBASE(0x297552c);
        inline const uintptr_t newblock = REBASE(0x2975551);
        inline const uintptr_t newclasspage = REBASE(0x2976efd);
        inline const uintptr_t newpage = REBASE(0x2975950);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x2983a56);
        inline const uintptr_t loadsafe = REBASE(0x2983acb);
        inline const uintptr_t luaA_pushvalue = REBASE(0x295c818);
        inline const uintptr_t luaA_toobject = REBASE(0x295c7bf);
        inline const uintptr_t luaC_step = REBASE(0x296e812);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x296c784);
        inline const uintptr_t luaD_throw = REBASE(0x296c825);
        inline const uintptr_t luaF_newLclosure = REBASE(0x296e1a0);
        inline const uintptr_t luaF_newUpval = REBASE(0x296e39e);
        inline const uintptr_t luaF_newproto = REBASE(0x296dc78);
        inline const uintptr_t luaG_runerror = REBASE(0x296b678);
        inline const uintptr_t luaH_clone = REBASE(0x297f1eb);
        inline const uintptr_t luaH_dummynode = REBASE(0x64287f0);
        inline const uintptr_t luaH_new = REBASE(0x297db32);
        inline const uintptr_t luaL_argerrorL = REBASE(0x2961528);
        inline const uintptr_t luaL_checklstring = REBASE(0x2961953);
        inline const uintptr_t luaL_checktype = REBASE(0x2961b38);
        inline const uintptr_t luaL_errorL = REBASE(0x29615f5);
        inline const uintptr_t luaL_findtable = REBASE(0x296206f);
        inline const uintptr_t luaL_getmetafield = REBASE(0x2961e58);
        inline const uintptr_t luaL_register = REBASE(0x2961f3b);
        inline const uintptr_t luaL_tagerror = REBASE(0x2961ad2);
        inline const uintptr_t luaL_typeerrorL = REBASE(0x29616aa);
        inline const uintptr_t luaO_chunkid = REBASE(0x2977be3);
        inline const uintptr_t luaO_nilobject = REBASE(0x6428690);
        inline const uintptr_t luaO_pushfstring = REBASE(0x2977b49);
        inline const uintptr_t luaO_str2d = REBASE(0x29778f4);
        inline const uintptr_t luaT_objtypename = REBASE(0x2981928);
        inline const uintptr_t luaV_equal = REBASE(0x29863da);
        inline const uintptr_t luaV_gettable = REBASE(0x2985972);
        inline const uintptr_t luaV_lessthan = REBASE(0x2986285);
        inline const uintptr_t luaV_settable = REBASE(0x2985ddf);
        inline const uintptr_t lua_checkstack = REBASE(0x295c876);
        inline const uintptr_t lua_eception = REBASE(0x296c862);
        inline const uintptr_t lua_encodepointer = REBASE(0x2960952);
        inline const uintptr_t lua_error = REBASE(0x295c904);
        inline const uintptr_t lua_gettop = REBASE(0x295cc25);
        inline const uintptr_t lua_newstate = REBASE(0x29788d8);
        inline const uintptr_t lua_pushfstringL = REBASE(0x295e338);
        inline const uintptr_t lua_pushvfstring = REBASE(0x296179e);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x296d28c);
        inline const uintptr_t lua_resetthread = REBASE(0x29786ea);
        inline const uintptr_t lua_type = REBASE(0x295d0c1);
        inline const uintptr_t lua_yield = REBASE(0x296d6db);
        inline const uintptr_t luaopen_base = REBASE(0x2962b68);
        inline const uintptr_t luaopen_bit32 = REBASE(0x2963953);
        inline const uintptr_t luaopen_buffer = REBASE(0x29640f2);
        inline const uintptr_t luaopen_class = REBASE(0x29697b9);
        inline const uintptr_t luaopen_coroutine = REBASE(0x2969899);
        inline const uintptr_t luaopen_debug = REBASE(0x296ac43);
        inline const uintptr_t luaopen_integer = REBASE(0x29733bc);
        inline const uintptr_t luaopen_math = REBASE(0x2974345);
        inline const uintptr_t luaopen_os = REBASE(0x2977ccf);
        inline const uintptr_t luaopen_string = REBASE(0x2979430);
        inline const uintptr_t luaopen_table = REBASE(0x297fdbc);
        inline const uintptr_t luaopen_utf8 = REBASE(0x2981a35);
        inline const uintptr_t luaopen_vector = REBASE(0x2982275);
        inline const uintptr_t luau_execute = REBASE(0x29879ab);
        inline const uintptr_t pseudo2addr = REBASE(0x2961434);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x2962f4a);
        inline const uintptr_t luaB_error = REBASE(0x2962fbf);
        inline const uintptr_t luaB_gcinfo = REBASE(0x2963034);
        inline const uintptr_t luaB_getfenv = REBASE(0x296305f);
        inline const uintptr_t luaB_getmetatable = REBASE(0x29630b7);
        inline const uintptr_t luaB_newproxy = REBASE(0x2963105);
        inline const uintptr_t luaB_next = REBASE(0x2962ab1);
        inline const uintptr_t luaB_pcall = REBASE(0x2962d9f);
        inline const uintptr_t luaB_pcallrun = REBASE(0x2962dd2);
        inline const uintptr_t luaB_print = REBASE(0x2963192);
        inline const uintptr_t luaB_rawequal = REBASE(0x2963255);
        inline const uintptr_t luaB_rawget = REBASE(0x296329d);
        inline const uintptr_t luaB_rawlen = REBASE(0x2963340);
        inline const uintptr_t luaB_rawset = REBASE(0x29632e8);
        inline const uintptr_t luaB_select = REBASE(0x29633a1);
        inline const uintptr_t luaB_setfenv = REBASE(0x296344c);
        inline const uintptr_t luaB_setmetatable = REBASE(0x2963536);
        inline const uintptr_t luaB_tonumber = REBASE(0x29635f1);
        inline const uintptr_t luaB_tostring = REBASE(0x2963729);
        inline const uintptr_t luaB_type = REBASE(0x2963757);
        inline const uintptr_t luaB_typeof = REBASE(0x2963798);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x2be9695);
        inline const uintptr_t luaF_freeproto = REBASE(0x296e505);
        inline const uintptr_t luaF_newCclosure = REBASE(0x296e324);
        inline const uintptr_t luaL_tostring = REBASE(0x2962864);
        inline const uintptr_t luaS_newlstr = REBASE(0x297db32);
        inline const uintptr_t lua_clock = REBASE(0x2978396);
        inline const uintptr_t lua_pushstring = REBASE(0x295e2a5);
        inline const uintptr_t lua_setfield = REBASE(0x295efac);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x14cc9b6);
        inline const uintptr_t GetGlobalState = REBASE(0x4693d90);
        inline const uintptr_t GetIdentityContext = REBASE(0x155889c);
        inline const uintptr_t GetRequireBypass = REBASE(0x155ba8e);
        inline const uintptr_t GetScriptContextFromLuaState = REBASE(0x155a2b0);
        inline const uintptr_t IdentityCapabilitiesTable = REBASE(0x6271ec0);
        inline const uintptr_t IdentityToCaps = REBASE(0x1728508);
        inline const uintptr_t IsLegalSendEvent = REBASE(0x55caa92);
        inline const uintptr_t ModuleScriptIsCoreScript = REBASE(0x14f59ba);
        inline const uintptr_t PrintIdentity = REBASE(0x14ea51c);
        inline const uintptr_t PushInstance = REBASE(0x14bcd72);
        inline const uintptr_t ScriptContextRequire = REBASE(0x159f82c);
        inline const uintptr_t ScriptContextResume = REBASE(0x156bb02);
        inline const uintptr_t ScriptContextResumeInternal = REBASE(0x156c44c);
    }

    namespace ScriptContextFields {
        inline constexpr uintptr_t RequireBypass = 0xae1;
    }

    namespace ModuleScriptFields {
        inline constexpr uintptr_t IsCoreScript = 0x138;
        inline constexpr uint64_t IsCoreScriptMask = 1;
    }

    namespace FFlag {
        inline const uintptr_t BooleanType = REBASE(0x71dedf0);
        inline const uintptr_t FLogDataBank = REBASE(0x765faf0);
        inline const uintptr_t GetFFlag = REBASE(0x2e4a9d6);
        inline const uintptr_t GetFFlagByName = REBASE(0x2e5b3cc);
        inline const uintptr_t GetFFlagLocked = REBASE(0x2e4eae2);
        inline const uintptr_t RegisterBoolean = REBASE(0x2e5ac2b);
        inline const uintptr_t SetFFlag = REBASE(0x2e4a004);
    }

    namespace FlagStorage {
        inline const uintptr_t AnimGraphServerAuthorityNodeIndices = REBASE(0x7b4ecb4);
        inline const uintptr_t DebugMacDisableUpdates = REBASE(0x7328358);
        inline const uintptr_t EnableLoadModule = REBASE(0x7375010);
        inline const uintptr_t RenderAdvSkyGroup = REBASE(0x73de0a0);
    }

    namespace Scheduler {
        inline const uintptr_t TaskSchedulerConstructor = REBASE(0x2de4168);
        inline const uintptr_t TaskSchedulerPTR = REBASE(0x7657ed0);
    }

    namespace Reflection {
        inline const uintptr_t GetProperty = REBASE(0x50feac4);
        inline const uintptr_t GetPropertyData = REBASE(0x171f8aa);
        inline const uintptr_t GetPropertyEntry = REBASE(0x50fea84);
    }

    namespace Instance {
        inline const uintptr_t InstanceFindFirstAncestor = REBASE(0x11b5d78);
        inline const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x11b5e8c);
        inline const uintptr_t InstanceFindFirstChild = REBASE(0x11b622e);
        inline const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x2c98026);
        inline const uintptr_t InstanceGetAttribute = REBASE(0x2ca0e28);
        inline const uintptr_t InstanceGetAttributes = REBASE(0x11bfe4a);
        inline const uintptr_t InstanceGetChildren = REBASE(0x11b5ff8);
        inline const uintptr_t InstanceNew = REBASE(0x14b7a9a);
    }

    namespace Remote {
        inline const uintptr_t FireAllClients = REBASE(0x45cfbbe);
        inline const uintptr_t FireClient = REBASE(0x45cf838);
        inline const uintptr_t FireServer = REBASE(0x45cf4d2);
        inline const uintptr_t InvokeClient = REBASE(0x46899f2);
        inline const uintptr_t InvokeServer = REBASE(0x4688f70);
    }

    namespace WorldRoot {
        inline const uintptr_t BlockCast = REBASE(0x117e2a8);
        inline const uintptr_t ShapeCast = REBASE(0x117f4d4);
        inline const uintptr_t SphereCast = REBASE(0x117dee6);
        inline const uintptr_t WorldRootRaycast = REBASE(0x117db9a);
    }

    namespace Raycast {
        inline constexpr uintptr_t FunctionPointerOffset = 0xa8;
        inline const uintptr_t RaycastBoundDesc = REBASE(0x75e6518);
        inline const uintptr_t RaycastFn = REBASE(0x117db9a);
    }

    namespace Rendering {
        inline const uintptr_t CubeTextures = REBASE(0x29e2c0a);
        inline const uintptr_t DrawSkyEnv = REBASE(0x47ddd74);
        inline const uintptr_t FastClusterEntityVTable = REBASE(0x729ba90);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x4da7c4c);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x4da898c);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x4da8a72);
        inline const uintptr_t FireProximityPrompt = REBASE(0x43af1b0);
        inline const uintptr_t FireRightMouseClick = REBASE(0x4da7dae);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x55c6f40);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x2c6f074);
        inline const uintptr_t RakNetReliabilityLayerSend = REBASE(0x2c88ff2);
        inline const uintptr_t RakNetSend = REBASE(0x2c645e0);
        inline const uintptr_t RakPeerProcessNetworkPacket = REBASE(0x2c7612a);
        inline const uintptr_t RakPeerReceive = REBASE(0x2c65076);
        inline const uintptr_t RakPeerVirtualTable = REBASE(0x71d6420);
        inline const uintptr_t ReportNetworkError = REBASE(0x55c6af6);
        inline const uintptr_t Send = REBASE(0x2c7612a);
        inline const uintptr_t SendPacketsToSelf = REBASE(0x2c6364c);
        inline const uintptr_t UpdateNetworkLoop = REBASE(0x2c638c0);
    }

    namespace RbxTransport {
        inline const uintptr_t AppClose = REBASE(0x243d78c);
        inline const uintptr_t AppDeletingDestructor = REBASE(0x243d2f2);
        inline const uintptr_t AppDestructor = REBASE(0x243d2e8);
        inline const uintptr_t AppReceive = REBASE(0x243ea8a);
        inline const uintptr_t AppReceiveMaxBytes = REBASE(0x243f224);
        inline const uintptr_t AppSend = REBASE(0x243e30c);
        inline const uintptr_t AppTypeInfo = REBASE(0x71a6538);
        inline const uintptr_t AppVTable = REBASE(0x71a6438);
        inline const uintptr_t ClientDeletingDestructor = REBASE(0x4c1da68);
        inline const uintptr_t ClientDestructor = REBASE(0x4c1da10);
        inline const uintptr_t ClientOpenChannels = REBASE(0x4c1cda0);
        inline const uintptr_t ClientReceive = REBASE(0x4c1cc66);
        inline const uintptr_t ClientTypeInfo = REBASE(0x72a3938);
        inline const uintptr_t ClientVTable = REBASE(0x72a3848);
        inline const uintptr_t FailureFallbackToRbxTransport = REBASE(0x7401800);
        inline const uintptr_t GenerateRetryToken = REBASE(0x253bb97);
        inline const uintptr_t RetryTokenDecrypt = REBASE(0x2539e58);
        inline const uintptr_t RetryTokenEncrypt = REBASE(0x2539d14);
        inline const uintptr_t UseRbxTransportClient = REBASE(0x73e3aa0);
        inline const uintptr_t VerifyRetryToken = REBASE(0x253bf15);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x14f308e);
        inline const uintptr_t defer = REBASE(0x14f2790);
        inline const uintptr_t delay = REBASE(0x14f308e);
        inline const uintptr_t desynchronize = REBASE(0x14f2634);
        inline const uintptr_t spawn = REBASE(0x14f3761);
        inline const uintptr_t synchronize = REBASE(0x14f24d4);
        inline const uintptr_t task_lib_init = REBASE(0x14f22b6);
        inline const uintptr_t wait = REBASE(0x14f2f36);
    }

    namespace MathLib {
        inline const uintptr_t lua_math_abs = REBASE(0x29744ba);
        inline const uintptr_t lua_math_acos = REBASE(0x29744e8);
        inline const uintptr_t lua_math_asin = REBASE(0x2974514);
        inline const uintptr_t lua_math_atan = REBASE(0x2974586);
        inline const uintptr_t lua_math_atan2 = REBASE(0x2974540);
        inline const uintptr_t lua_math_ceil = REBASE(0x29745b2);
        inline const uintptr_t lua_math_clamp = REBASE(0x29751ef);
        inline const uintptr_t lua_math_cos = REBASE(0x297460b);
        inline const uintptr_t lua_math_cosh = REBASE(0x29745df);
        inline const uintptr_t lua_math_deg = REBASE(0x2974637);
        inline const uintptr_t lua_math_exp = REBASE(0x2974666);
        inline const uintptr_t lua_math_floor = REBASE(0x2974692);
        inline const uintptr_t lua_math_fmod = REBASE(0x29746bf);
        inline const uintptr_t lua_math_frexp = REBASE(0x2974705);
        inline const uintptr_t lua_math_isfinite = REBASE(0x29754a5);
        inline const uintptr_t lua_math_isinf = REBASE(0x2975461);
        inline const uintptr_t lua_math_isnan = REBASE(0x2975430);
        inline const uintptr_t lua_math_ldexp = REBASE(0x297474a);
        inline const uintptr_t lua_math_lerp = REBASE(0x29753b3);
        inline const uintptr_t lua_math_log = REBASE(0x29747bb);
        inline const uintptr_t lua_math_log10 = REBASE(0x297478f);
        inline const uintptr_t lua_math_map = REBASE(0x2975315);
        inline const uintptr_t lua_math_max = REBASE(0x297486e);
        inline const uintptr_t lua_math_min = REBASE(0x29748ed);
        inline const uintptr_t lua_math_modf = REBASE(0x297496c);
        inline const uintptr_t lua_math_noise = REBASE(0x2974d74);
        inline const uintptr_t lua_math_pow = REBASE(0x29749bd);
        inline const uintptr_t lua_math_rad = REBASE(0x2974a03);
        inline const uintptr_t lua_math_random = REBASE(0x2974a32);
        inline const uintptr_t lua_math_randomseed = REBASE(0x2974c55);
        inline const uintptr_t lua_math_round = REBASE(0x29752cd);
        inline const uintptr_t lua_math_sign = REBASE(0x2975274);
        inline const uintptr_t lua_math_sin = REBASE(0x2974cc5);
        inline const uintptr_t lua_math_sinh = REBASE(0x2974c99);
        inline const uintptr_t lua_math_sqrt = REBASE(0x2974cf1);
        inline const uintptr_t lua_math_tan = REBASE(0x2974d48);
        inline const uintptr_t lua_math_tanh = REBASE(0x2974d1c);
    }

    namespace OsLib {
        inline const uintptr_t lua_os_clock = REBASE(0x2977ced);
        inline const uintptr_t lua_os_date = REBASE(0x2977d0f);
        inline const uintptr_t lua_os_difftime = REBASE(0x2978071);
        inline const uintptr_t lua_os_time = REBASE(0x29780ba);
    }

    namespace StringLib {
        inline const uintptr_t lua_string_byte = REBASE(0x29794cd);
        inline const uintptr_t lua_string_char = REBASE(0x29795e7);
        inline const uintptr_t lua_string_find = REBASE(0x29796bb);
        inline const uintptr_t lua_string_format = REBASE(0x29796ca);
        inline const uintptr_t lua_string_gmatch = REBASE(0x2979ed4);
        inline const uintptr_t lua_string_gsub = REBASE(0x2979f34);
        inline const uintptr_t lua_string_len = REBASE(0x297a42d);
        inline const uintptr_t lua_string_lower = REBASE(0x297a465);
        inline const uintptr_t lua_string_match = REBASE(0x297a510);
        inline const uintptr_t lua_string_pack = REBASE(0x297abe1);
        inline const uintptr_t lua_string_packsize = REBASE(0x297b164);
        inline const uintptr_t lua_string_rep = REBASE(0x297a51c);
        inline const uintptr_t lua_string_reverse = REBASE(0x297a674);
        inline const uintptr_t lua_string_split = REBASE(0x297a888);
        inline const uintptr_t lua_string_sub = REBASE(0x297a720);
        inline const uintptr_t lua_string_unpack = REBASE(0x297b257);
        inline const uintptr_t lua_string_upper = REBASE(0x297a7dd);
    }

    namespace TableLib {
        inline const uintptr_t lua_table_clear = REBASE(0x29809b1);
        inline const uintptr_t lua_table_clone = REBASE(0x2980ad6);
        inline const uintptr_t lua_table_concat = REBASE(0x297ff43);
        inline const uintptr_t lua_table_create = REBASE(0x2980755);
        inline const uintptr_t lua_table_find = REBASE(0x29807fa);
        inline const uintptr_t lua_table_foreach = REBASE(0x2980082);
        inline const uintptr_t lua_table_foreachi = REBASE(0x298013d);
        inline const uintptr_t lua_table_freeze = REBASE(0x29809ec);
        inline const uintptr_t lua_table_getn = REBASE(0x2980209);
        inline const uintptr_t lua_table_insert = REBASE(0x2980303);
        inline const uintptr_t lua_table_isfrozen = REBASE(0x2980a9b);
        inline const uintptr_t lua_table_maxn = REBASE(0x2980244);
        inline const uintptr_t lua_table_move = REBASE(0x298059d);
        inline const uintptr_t lua_table_pack = REBASE(0x2980509);
        inline const uintptr_t lua_table_remove = REBASE(0x29803c1);
        inline const uintptr_t lua_table_sort = REBASE(0x2980463);
        inline const uintptr_t lua_table_unpack = REBASE(0x297fe11);
    }

    namespace IntegerLib {
        inline const uintptr_t lua_integer_add = REBASE(0x29734e5);
        inline const uintptr_t lua_integer_arshift = REBASE(0x2973e61);
        inline const uintptr_t lua_integer_band = REBASE(0x2973a49);
        inline const uintptr_t lua_integer_bnot = REBASE(0x2973b1b);
        inline const uintptr_t lua_integer_bor = REBASE(0x2973ab6);
        inline const uintptr_t lua_integer_bswap = REBASE(0x2974245);
        inline const uintptr_t lua_integer_btest = REBASE(0x2974162);
        inline const uintptr_t lua_integer_bxor = REBASE(0x2973b48);
        inline const uintptr_t lua_integer_clamp = REBASE(0x29739c1);
        inline const uintptr_t lua_integer_countlz = REBASE(0x297420a);
        inline const uintptr_t lua_integer_countrz = REBASE(0x29741d3);
        inline const uintptr_t lua_integer_create = REBASE(0x297342e);
        inline const uintptr_t lua_integer_div = REBASE(0x297359a);
        inline const uintptr_t lua_integer_extract = REBASE(0x2973f6c);
        inline const uintptr_t lua_integer_fromstring = REBASE(0x2974272);
        inline const uintptr_t lua_integer_ge = REBASE(0x2973ce8);
        inline const uintptr_t lua_integer_gt = REBASE(0x2973ca9);
        inline const uintptr_t lua_integer_idiv = REBASE(0x297379e);
        inline const uintptr_t lua_integer_le = REBASE(0x2973bec);
        inline const uintptr_t lua_integer_lrotate = REBASE(0x2973eca);
        inline const uintptr_t lua_integer_lshift = REBASE(0x2973da5);
        inline const uintptr_t lua_integer_lt = REBASE(0x2973bad);
        inline const uintptr_t lua_integer_max = REBASE(0x29736a4);
        inline const uintptr_t lua_integer_min = REBASE(0x2973632);
        inline const uintptr_t lua_integer_mod = REBASE(0x2973927);
        inline const uintptr_t lua_integer_mul = REBASE(0x297355d);
        inline const uintptr_t lua_integer_neg = REBASE(0x29734b8);
        inline const uintptr_t lua_integer_rem = REBASE(0x2973716);
        inline const uintptr_t lua_integer_replace = REBASE(0x2974050);
        inline const uintptr_t lua_integer_rrotate = REBASE(0x2973f1b);
        inline const uintptr_t lua_integer_rshift = REBASE(0x2973e03);
        inline const uintptr_t lua_integer_sub = REBASE(0x2973521);
        inline const uintptr_t lua_integer_tonumber = REBASE(0x297348c);
        inline const uintptr_t lua_integer_udiv = REBASE(0x2973845);
        inline const uintptr_t lua_integer_uge = REBASE(0x2973d66);
        inline const uintptr_t lua_integer_ugt = REBASE(0x2973d27);
        inline const uintptr_t lua_integer_ule = REBASE(0x2973c6a);
        inline const uintptr_t lua_integer_ult = REBASE(0x2973c2b);
        inline const uintptr_t lua_integer_urem = REBASE(0x29738b6);
    }

    namespace Bit32Lib {
        inline const uintptr_t lua_bit32_arshift = REBASE(0x2963971);
        inline const uintptr_t lua_bit32_band = REBASE(0x29639fb);
        inline const uintptr_t lua_bit32_bnot = REBASE(0x2963a1f);
        inline const uintptr_t lua_bit32_bor = REBASE(0x2963a4a);
        inline const uintptr_t lua_bit32_btest = REBASE(0x2963b14);
        inline const uintptr_t lua_bit32_bxor = REBASE(0x2963aaf);
        inline const uintptr_t lua_bit32_byteswap = REBASE(0x2963dd8);
        inline const uintptr_t lua_bit32_countlz = REBASE(0x2963d5b);
        inline const uintptr_t lua_bit32_countrz = REBASE(0x2963d9e);
        inline const uintptr_t lua_bit32_extract = REBASE(0x2963b3e);
        inline const uintptr_t lua_bit32_lrotate = REBASE(0x2963b9a);
        inline const uintptr_t lua_bit32_lshift = REBASE(0x2963bde);
        inline const uintptr_t lua_bit32_replace = REBASE(0x2963c39);
        inline const uintptr_t lua_bit32_rrotate = REBASE(0x2963cba);
        inline const uintptr_t lua_bit32_rshift = REBASE(0x2963d01);
    }

    namespace BufferLib {
        inline const uintptr_t lua_buffer_copy = REBASE(0x2964c90);
        inline const uintptr_t lua_buffer_create = REBASE(0x2964125);
        inline const uintptr_t lua_buffer_fill = REBASE(0x2964d99);
        inline const uintptr_t lua_buffer_fromstring = REBASE(0x2964175);
        inline const uintptr_t lua_buffer_len = REBASE(0x2964c4c);
        inline const uintptr_t lua_buffer_readbits = REBASE(0x2964e65);
        inline const uintptr_t lua_buffer_readf32 = REBASE(0x2964521);
        inline const uintptr_t lua_buffer_readf64 = REBASE(0x29645a4);
        inline const uintptr_t lua_buffer_readi16 = REBASE(0x296430c);
        inline const uintptr_t lua_buffer_readi32 = REBASE(0x2964418);
        inline const uintptr_t lua_buffer_readi8 = REBASE(0x2964208);
        inline const uintptr_t lua_buffer_readstring = REBASE(0x2964a99);
        inline const uintptr_t lua_buffer_readu16 = REBASE(0x2964392);
        inline const uintptr_t lua_buffer_readu32 = REBASE(0x296449b);
        inline const uintptr_t lua_buffer_readu8 = REBASE(0x296428a);
        inline const uintptr_t lua_buffer_tostring = REBASE(0x29641c6);
        inline const uintptr_t lua_buffer_writebits = REBASE(0x2964f8a);
        inline const uintptr_t lua_buffer_writef32 = REBASE(0x2964975);
        inline const uintptr_t lua_buffer_writef64 = REBASE(0x2964a09);
        inline const uintptr_t lua_buffer_writei16 = REBASE(0x296473b);
        inline const uintptr_t lua_buffer_writei32 = REBASE(0x2964859);
        inline const uintptr_t lua_buffer_writei8 = REBASE(0x2964627);
        inline const uintptr_t lua_buffer_writestring = REBASE(0x2964b54);
        inline const uintptr_t lua_buffer_writeu16 = REBASE(0x29647ca);
        inline const uintptr_t lua_buffer_writeu32 = REBASE(0x29648e7);
        inline const uintptr_t lua_buffer_writeu8 = REBASE(0x29646b1);
    }

    namespace VectorLib {
        inline const uintptr_t lua_vector_abs = REBASE(0x2982730);
        inline const uintptr_t lua_vector_angle = REBASE(0x2982596);
        inline const uintptr_t lua_vector_ceil = REBASE(0x29826f5);
        inline const uintptr_t lua_vector_clamp = REBASE(0x2982811);
        inline const uintptr_t lua_vector_create = REBASE(0x298237c);
        inline const uintptr_t lua_vector_cross = REBASE(0x29824b7);
        inline const uintptr_t lua_vector_dot = REBASE(0x2982536);
        inline const uintptr_t lua_vector_floor = REBASE(0x29826ba);
        inline const uintptr_t lua_vector_lerp = REBASE(0x2982a1a);
        inline const uintptr_t lua_vector_magnitude = REBASE(0x29823fd);
        inline const uintptr_t lua_vector_max = REBASE(0x29828f6);
        inline const uintptr_t lua_vector_min = REBASE(0x2982988);
        inline const uintptr_t lua_vector_normalize = REBASE(0x298244b);
        inline const uintptr_t lua_vector_sign = REBASE(0x2982775);
    }

    namespace Utf8Lib {
        inline const uintptr_t lua_utf8_char = REBASE(0x2981d8b);
        inline const uintptr_t lua_utf8_codepoint = REBASE(0x2981c1d);
        inline const uintptr_t lua_utf8_codes = REBASE(0x2981fd7);
        inline const uintptr_t lua_utf8_len = REBASE(0x2981e82);
        inline const uintptr_t lua_utf8_offset = REBASE(0x2981a85);
    }

    namespace DebugLib {
        inline const uintptr_t lua_debug_info = REBASE(0x296ac61);
        inline const uintptr_t lua_debug_traceback = REBASE(0x296af42);
    }

    namespace CoroutineLib {
        inline const uintptr_t lua_coroutine_close = REBASE(0x296a71d);
        inline const uintptr_t lua_coroutine_create = REBASE(0x2969e79);
        inline const uintptr_t lua_coroutine_finally = REBASE(0x2969fb3);
        inline const uintptr_t lua_coroutine_isyieldable = REBASE(0x2969f8f);
        inline const uintptr_t lua_coroutine_resume = REBASE(0x2969949);
        inline const uintptr_t lua_coroutine_running = REBASE(0x2969eb5);
        inline const uintptr_t lua_coroutine_status = REBASE(0x2969edb);
        inline const uintptr_t lua_coroutine_wrap = REBASE(0x2969f42);
        inline const uintptr_t lua_coroutine_yield = REBASE(0x2969f79);
    }

    namespace ClassLib {
        inline const uintptr_t lua_class_classof = REBASE(0x2969842);
        inline const uintptr_t lua_class_isinstance = REBASE(0x29697d7);
    }

    namespace LuauAliases {
        inline const uintptr_t luaB_pcallcont = REBASE(0x2962dd2);
        inline const uintptr_t luaB_pcally = REBASE(0x2962d9f);
        inline const uintptr_t luaL_tolstring = REBASE(0x2962864);
        inline const uintptr_t luaM_free_ = REBASE(0x2976208);
        inline const uintptr_t luaM_freegco_ = REBASE(0x2976302);
        inline const uintptr_t luaM_newgco_ = REBASE(0x2975800);
        inline const uintptr_t luaO_nilobject_ = REBASE(0x6428690);
        inline const uintptr_t luaV_equalval = REBASE(0x29863da);
        inline const uintptr_t luau_load = REBASE(0x2983a56);
    }

    namespace LuauApi {
        inline const uintptr_t lua_absindex = REBASE(0x295cc02);
        inline const uintptr_t lua_addfinalizer = REBASE(0x295fad7);
        inline const uintptr_t lua_call = REBASE(0x295f4c2);
        inline const uintptr_t lua_callbacks = REBASE(0x29612f2);
        inline const uintptr_t lua_callyieldable = REBASE(0x295f72b);
        inline const uintptr_t lua_cleartable = REBASE(0x29611a6);
        inline const uintptr_t lua_clonefunction = REBASE(0x2961022);
        inline const uintptr_t lua_clonetable = REBASE(0x296120e);
        inline const uintptr_t lua_close = REBASE(0x2978c5b);
        inline const uintptr_t lua_concat = REBASE(0x2960109);
        inline const uintptr_t lua_costatus = REBASE(0x295f876);
        inline const uintptr_t lua_cpcall = REBASE(0x295f679);
        inline const uintptr_t lua_createtable = REBASE(0x295eb97);
        inline const uintptr_t lua_equal = REBASE(0x295d3b3);
        inline const uintptr_t lua_gc = REBASE(0x295fc70);
        inline const uintptr_t lua_getcoverage = REBASE(0x296bfe8);
        inline const uintptr_t lua_getfenv = REBASE(0x295ee62);
        inline const uintptr_t lua_getfield = REBASE(0x295e74a);
        inline const uintptr_t lua_getinfo = REBASE(0x296b274);
        inline const uintptr_t lua_getlocal = REBASE(0x296b107);
        inline const uintptr_t lua_getmetatable = REBASE(0x295ed50);
        inline const uintptr_t lua_getreadonly = REBASE(0x295ecab);
        inline const uintptr_t lua_gettable = REBASE(0x295e6b8);
        inline const uintptr_t lua_getthreaddata = REBASE(0x295fc5c);
        inline const uintptr_t lua_getupvalue = REBASE(0x29604c8);
        inline const uintptr_t lua_getuserdatametatable = REBASE(0x2960d9b);
        inline const uintptr_t lua_getweakref = REBASE(0x2960ceb);
        inline const uintptr_t lua_insert = REBASE(0x295ce6f);
        inline const uintptr_t lua_iscfunction = REBASE(0x295d13d);
        inline const uintptr_t lua_isnumber = REBASE(0x295d1f5);
        inline const uintptr_t lua_isstring = REBASE(0x295d26b);
        inline const uintptr_t lua_isuserdata = REBASE(0x295d287);
        inline const uintptr_t lua_isyieldable = REBASE(0x296d76b);
        inline const uintptr_t lua_mainthread = REBASE(0x295cbf4);
        inline const uintptr_t lua_newbuffer = REBASE(0x2960429);
        inline const uintptr_t lua_newthread = REBASE(0x295cb41);
        inline const uintptr_t lua_newuserdatadtor = REBASE(0x2960362);
        inline const uintptr_t lua_newuserdatatagged = REBASE(0x29601ef);
        inline const uintptr_t lua_next = REBASE(0x295fec6);
        inline const uintptr_t lua_objlen = REBASE(0x295db21);
        inline const uintptr_t lua_pcall = REBASE(0x295f555);
        inline const uintptr_t lua_pcallyieldable = REBASE(0x295f775);
        inline const uintptr_t lua_pushboolean = REBASE(0x295e55f);
        inline const uintptr_t lua_pushcclosurek = REBASE(0x295e423);
        inline const uintptr_t lua_pushinteger = REBASE(0x295e038);
        inline const uintptr_t lua_pushinteger64 = REBASE(0x295e09f);
        inline const uintptr_t lua_pushlightuserdatatagged = REBASE(0x295e5c7);
        inline const uintptr_t lua_pushlstring = REBASE(0x295e1f8);
        inline const uintptr_t lua_pushnil = REBASE(0x295df6f);
        inline const uintptr_t lua_pushnumber = REBASE(0x295dfce);
        inline const uintptr_t lua_pushthread = REBASE(0x295e638);
        inline const uintptr_t lua_pushunsigned = REBASE(0x295e100);
        inline const uintptr_t lua_pushvalue = REBASE(0x295d001);
        inline const uintptr_t lua_pushvector = REBASE(0x295e16a);
        inline const uintptr_t lua_rawequal = REBASE(0x295d2e1);
        inline const uintptr_t lua_rawget = REBASE(0x295e945);
        inline const uintptr_t lua_rawgetfield = REBASE(0x295e84d);
        inline const uintptr_t lua_rawgeti = REBASE(0x295e9dc);
        inline const uintptr_t lua_rawgetptagged = REBASE(0x295eab7);
        inline const uintptr_t lua_rawiter = REBASE(0x295ffa7);
        inline const uintptr_t lua_rawset = REBASE(0x295f127);
        inline const uintptr_t lua_rawseti = REBASE(0x295f1dd);
        inline const uintptr_t lua_rawsetptagged = REBASE(0x295f295);
        inline const uintptr_t lua_ref = REBASE(0x29609b3);
        inline const uintptr_t lua_remove = REBASE(0x295cdf0);
        inline const uintptr_t lua_replace = REBASE(0x295cf0a);
        inline const uintptr_t lua_resume = REBASE(0x296d202);
        inline const uintptr_t lua_resumeerror = REBASE(0x296d504);
        inline const uintptr_t lua_setembeddergc = REBASE(0x2960ba8);
        inline const uintptr_t lua_setfenv = REBASE(0x295f42e);
        inline const uintptr_t lua_setlocal = REBASE(0x296b1b6);
        inline const uintptr_t lua_setmetatable = REBASE(0x295f35d);
        inline const uintptr_t lua_setreadonly = REBASE(0x295ec44);
        inline const uintptr_t lua_setsafeenv = REBASE(0x295ecf8);
        inline const uintptr_t lua_settable = REBASE(0x295ef37);
        inline const uintptr_t lua_setthreaddata = REBASE(0x295fc66);
        inline const uintptr_t lua_settop = REBASE(0x295cc37);
        inline const uintptr_t lua_setupvalue = REBASE(0x2960638);
        inline const uintptr_t lua_status = REBASE(0x295f86c);
        inline const uintptr_t lua_toboolean = REBASE(0x295d6fe);
        inline const uintptr_t lua_tobuffer = REBASE(0x295de9b);
        inline const uintptr_t lua_tocfunction = REBASE(0x295dd2c);
        inline const uintptr_t lua_tointeger64 = REBASE(0x295d761);
        inline const uintptr_t lua_tointegerx = REBASE(0x295d5ee);
        inline const uintptr_t lua_tolstring = REBASE(0x295d7d4);
        inline const uintptr_t lua_tonumberx = REBASE(0x295d565);
        inline const uintptr_t lua_topointer = REBASE(0x295df07);
        inline const uintptr_t lua_tothread = REBASE(0x295de48);
        inline const uintptr_t lua_tounsignedx = REBASE(0x295d671);
        inline const uintptr_t lua_touserdata = REBASE(0x295dcc9);
        inline const uintptr_t lua_touserdatatagged = REBASE(0x295dd98);
        inline const uintptr_t lua_tovector = REBASE(0x295dace);
        inline const uintptr_t lua_typename = REBASE(0x295d11b);
        inline const uintptr_t lua_unref = REBASE(0x2960ab6);
        inline const uintptr_t lua_weakref = REBASE(0x2960bb9);
        inline const uintptr_t lua_xmove = REBASE(0x295c9cf);
        inline const uintptr_t lua_xpush = REBASE(0x295ca7b);
    }

    namespace LuauAux {
        inline const uintptr_t luaL_addlstring = REBASE(0x296240c);
        inline const uintptr_t luaL_addvalue = REBASE(0x296264e);
        inline const uintptr_t luaL_addvalueany = REBASE(0x29626c9);
        inline const uintptr_t luaL_buffinit = REBASE(0x29623e8);
        inline const uintptr_t luaL_buffinitsize = REBASE(0x2962510);
        inline const uintptr_t luaL_callmeta = REBASE(0x2961ec7);
        inline const uintptr_t luaL_checkany = REBASE(0x2961b6b);
        inline const uintptr_t luaL_checkboolean = REBASE(0x2961c29);
        inline const uintptr_t luaL_checkbuffer = REBASE(0x2961aa8);
        inline const uintptr_t luaL_checkinteger = REBASE(0x2961c94);
        inline const uintptr_t luaL_checkinteger64 = REBASE(0x2961ccf);
        inline const uintptr_t luaL_checknumber = REBASE(0x2961bb0);
        inline const uintptr_t luaL_checkstack = REBASE(0x2961af2);
        inline const uintptr_t luaL_checkudata = REBASE(0x29619ec);
        inline const uintptr_t luaL_checkunsigned = REBASE(0x2961d79);
        inline const uintptr_t luaL_checkvector = REBASE(0x2961df1);
        inline const uintptr_t luaL_newmetatable = REBASE(0x296197d);
        inline const uintptr_t luaL_openlibs = REBASE(0x29730f3);
        inline const uintptr_t luaL_optinteger64 = REBASE(0x2961d3c);
        inline const uintptr_t luaL_optlstring = REBASE(0x29618f8);
        inline const uintptr_t luaL_optnumber = REBASE(0x2961beb);
        inline const uintptr_t luaL_optvector = REBASE(0x2961e1b);
        inline const uintptr_t luaL_prepbuffsize = REBASE(0x296245a);
        inline const uintptr_t luaL_pushresult = REBASE(0x296247a);
        inline const uintptr_t luaL_pushresultsize = REBASE(0x2962aa4);
        inline const uintptr_t luaL_sandbox = REBASE(0x29731b1);
        inline const uintptr_t luaL_sandboxthread = REBASE(0x29732c6);
        inline const uintptr_t luaL_traceback = REBASE(0x29621b1);
        inline const uintptr_t luaL_typename = REBASE(0x296217f);
    }

    namespace LuauHelpers {
        inline const uintptr_t luau_lapi_aux_upvalue = REBASE(0x29605a6);
        inline const uintptr_t luau_lapi_f_Ccall = REBASE(0x295f6ac);
        inline const uintptr_t luau_lapi_f_call = REBASE(0x295f666);
        inline const uintptr_t luau_lapi_runfinalizercont = REBASE(0x295fac3);
        inline const uintptr_t luau_lapi_runfinalizery = REBASE(0x295f99a);
        inline const uintptr_t luau_laux_currfuncname = REBASE(0x2961594);
        inline const uintptr_t luau_laux_extendstrbuf = REBASE(0x2962555);
        inline const uintptr_t luau_lbaselib_auxopen = REBASE(0x2962cbf);
        inline const uintptr_t luau_lbaselib_getfunc = REBASE(0x29637cf);
        inline const uintptr_t luau_lbitlib_andaux = REBASE(0x2963e03);
        inline const uintptr_t luau_lbitlib_fieldargs = REBASE(0x2963e61);
        inline const uintptr_t luau_lcorolib_auxresumecont = REBASE(0x296a68c);
        inline const uintptr_t luau_lcorolib_coclosecont = REBASE(0x2969e36);
        inline const uintptr_t luau_lcorolib_coclosey = REBASE(0x2969cd2);
        inline const uintptr_t luau_lcorolib_coresumecont = REBASE(0x29699e9);
        inline const uintptr_t luau_lcorolib_coresumefinish = REBASE(0x296abea);
        inline const uintptr_t luau_ldblib_getthread = REBASE(0x296afd7);
        inline const uintptr_t luau_ldebug_pusherror = REBASE(0x296ba11);
        inline const uintptr_t luau_ldo_resume = REBASE(0x296d330);
        inline const uintptr_t luau_ldo_resume_finish = REBASE(0x296d3f4);
        inline const uintptr_t luau_ldo_resume_handle = REBASE(0x296d59b);
        inline const uintptr_t luau_ldo_resume_start = REBASE(0x296d28c);
        inline const uintptr_t luau_lgc_reallymarkobject = REBASE(0x296f9b9);
        inline const uintptr_t luau_loslib_getfield = REBASE(0x297830e);
        inline const uintptr_t luau_lstate_close_state = REBASE(0x2978bea);
        inline const uintptr_t luau_lstrlib_add_value = REBASE(0x297c3fd);
        inline const uintptr_t luau_lstrlib_classend = REBASE(0x297be3e);
        inline const uintptr_t luau_lstrlib_gmatch_aux = REBASE(0x297c2ec);
        inline const uintptr_t luau_lstrlib_match = REBASE(0x297b90a);
        inline const uintptr_t luau_lstrlib_push_captures = REBASE(0x297bd67);
        inline const uintptr_t luau_lstrlib_push_onecapture = REBASE(0x297c24c);
        inline const uintptr_t luau_lstrlib_str_find_aux = REBASE(0x297b658);
        inline const uintptr_t luau_lstrlib_unpackint = REBASE(0x297ce31);
        inline const uintptr_t luau_ltable_resize = REBASE(0x297d517);
        inline const uintptr_t luau_ltable_setarrayvector = REBASE(0x297dbd6);
        inline const uintptr_t luau_ltablib_addfield = REBASE(0x2980b63);
        inline const uintptr_t luau_ltablib_moveelements = REBASE(0x2980c13);
        inline const uintptr_t luau_ltablib_sort_rec = REBASE(0x298106d);
        inline const uintptr_t luau_lutf8lib_buffutfchar = REBASE(0x29820ce);
        inline const uintptr_t luau_lutf8lib_iter_aux = REBASE(0x29821a1);
        inline const uintptr_t luau_lutf8lib_utf8_decode = REBASE(0x2982025);
        inline const uintptr_t luau_lvmutils_callTMres = REBASE(0x2985b72);
        inline const uintptr_t luau_lvmutils_get_compTM = REBASE(0x298654c);
    }

    namespace LuauInternals {
        inline const uintptr_t luaA_pushclass = REBASE(0x295c912);
        inline const uintptr_t luaB_inext = REBASE(0x2962b04);
        inline const uintptr_t luaB_ipairs = REBASE(0x2962d11);
        inline const uintptr_t luaB_newbuffer = REBASE(0x2963f1d);
        inline const uintptr_t luaB_pairs = REBASE(0x2962d59);
        inline const uintptr_t luaB_xpcallcont = REBASE(0x2962ed7);
        inline const uintptr_t luaB_xpcally = REBASE(0x2962e68);
        inline const uintptr_t luaC_allocationrate = REBASE(0x296fb5b);
        inline const uintptr_t luaC_barrierback = REBASE(0x296fb04);
        inline const uintptr_t luaC_barrierf = REBASE(0x296f990);
        inline const uintptr_t luaC_barriertable = REBASE(0x296fadc);
        inline const uintptr_t luaC_validate = REBASE(0x29790b8);
        inline const uintptr_t luaD_call = REBASE(0x296cea6);
        inline const uintptr_t luaD_growCI = REBASE(0x296cb49);
        inline const uintptr_t luaD_growstack = REBASE(0x296cb27);
        inline const uintptr_t luaD_pcall = REBASE(0x296d790);
        inline const uintptr_t luaD_preparefinalize = REBASE(0x296d02b);
        inline const uintptr_t luaD_preparefinalizestate = REBASE(0x296cfa5);
        inline const uintptr_t luaD_reallocCI = REBASE(0x296cab3);
        inline const uintptr_t luaD_reallocstack = REBASE(0x296c86c);
        inline const uintptr_t luaD_runfinalizers = REBASE(0x296d0b1);
        inline const uintptr_t luaE_newthread = REBASE(0x2978450);
        inline const uintptr_t luaF_close = REBASE(0x296e46e);
        inline const uintptr_t luaF_getlocal = REBASE(0x296e6b5);
        inline const uintptr_t luaG_aritherror = REBASE(0x296b7cb);
        inline const uintptr_t luaG_indexerror = REBASE(0x296b8cc);
        inline const uintptr_t luaG_missingmembererror = REBASE(0x296b94c);
        inline const uintptr_t luaG_ordererror = REBASE(0x296b856);
        inline const uintptr_t luaG_readonlyerror = REBASE(0x296b9ec);
        inline const uintptr_t luaG_typeerrorL = REBASE(0x296b63c);
        inline const uintptr_t luaH_clear = REBASE(0x297f319);
        inline const uintptr_t luaH_free = REBASE(0x297de33);
        inline const uintptr_t luaH_get = REBASE(0x297e071);
        inline const uintptr_t luaH_getn = REBASE(0x297f0c2);
        inline const uintptr_t luaH_getnum = REBASE(0x297decf);
        inline const uintptr_t luaH_getp = REBASE(0x297dff6);
        inline const uintptr_t luaH_getreadonly = REBASE(0x297f726);
        inline const uintptr_t luaH_getstr = REBASE(0x297dfa2);
        inline const uintptr_t luaH_newkey = REBASE(0x297e606);
        inline const uintptr_t luaH_next = REBASE(0x297cf88);
        inline const uintptr_t luaH_set = REBASE(0x297e5b4);
        inline const uintptr_t luaH_setnum = REBASE(0x297ef99);
        inline const uintptr_t luaH_setreadonly = REBASE(0x297f48b);
        inline const uintptr_t luaH_setstr = REBASE(0x297f008);
        inline const uintptr_t luaM_realloc_ = REBASE(0x2976a11);
        inline const uintptr_t luaO_rawequalKey = REBASE(0x297784c);
        inline const uintptr_t luaO_rawequalObj = REBASE(0x29777a8);
        inline const uintptr_t luaR_addclassmember = REBASE(0x2968dc5);
        inline const uintptr_t luaR_defaultcreateobject = REBASE(0x296923b);
        inline const uintptr_t luaR_inheritclass = REBASE(0x2968914);
        inline const uintptr_t luaR_setupconstructor = REBASE(0x296879e);
        inline const uintptr_t luaU_newudata = REBASE(0x2981937);
        inline const uintptr_t luaV_callTM = REBASE(0x2985fa7);
        inline const uintptr_t luaV_dolen = REBASE(0x2987439);
        inline const uintptr_t luaV_tonumber = REBASE(0x298589c);
        inline const uintptr_t luauF_tinsert = REBASE(0x2966498);
        inline const uintptr_t luau_precall = REBASE(0x2992c99);
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
            inline constexpr uintptr_t FieldOfView = 0x120;
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
            inline const uintptr_t Pointer = REBASE(0x7657ed0);
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
            inline constexpr uintptr_t Scheduler = 0x7657ed0;
            inline constexpr uintptr_t JobVTable = 0x70b0b20;
            inline constexpr uintptr_t DataModelVTable = 0x72c4f90;
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
