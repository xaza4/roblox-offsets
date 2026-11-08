#pragma once
#include <cstdint>
#include <array>

#ifndef REBASE
#define REBASE(x) (x)
#endif

namespace Offsets
{
    inline constexpr const char* architecture = "arm64";
    inline constexpr const char* luau = "2.746.1264";
    inline constexpr const char* build = "ios-2.746.1264-86e614a70328b817";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x4202c80);
        inline const uintptr_t luaM_freegco = REBASE(0x4202dcc);
        inline const uintptr_t luaM_newgco = REBASE(0x420226c);
        inline const uintptr_t luaM_toobig = REBASE(0x4201f64);
        inline const uintptr_t luaM_visitgco = REBASE(0x4203858);
        inline const uintptr_t newblock = REBASE(0x4202058);
        inline const uintptr_t newclasspage = REBASE(0x4203a34);
        inline const uintptr_t newpage = REBASE(0x42023e4);
    }

    namespace Luau {
        inline const uintptr_t loadsafe = REBASE(0x4219f44);
        inline const uintptr_t luaA_pushvalue = REBASE(0x41e942c);
        inline const uintptr_t luaA_toobject = REBASE(0x41e93c8);
        inline const uintptr_t luaC_step = REBASE(0x41fb364);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x41f93d4);
        inline const uintptr_t luaD_throw = REBASE(0x41f9494);
        inline const uintptr_t luaF_newLclosure = REBASE(0x41fad40);
        inline const uintptr_t luaF_newUpval = REBASE(0x41faee0);
        inline const uintptr_t luaF_newproto = REBASE(0x41fa9ac);
        inline const uintptr_t luaG_runerror = REBASE(0x41f85a8);
        inline const uintptr_t luaH_clone = REBASE(0x420b948);
        inline const uintptr_t luaH_dummynode = REBASE(0x506ee58);
        inline const uintptr_t luaH_new = REBASE(0x420a09c);
        inline const uintptr_t luaL_argerrorL = REBASE(0x41ee218);
        inline const uintptr_t luaL_checklstring = REBASE(0x41ee4f4);
        inline const uintptr_t luaL_checktype = REBASE(0x41ee654);
        inline const uintptr_t luaL_errorL = REBASE(0x41ee2e8);
        inline const uintptr_t luaL_findtable = REBASE(0x41eec54);
        inline const uintptr_t luaL_getmetafield = REBASE(0x41eea24);
        inline const uintptr_t luaL_register = REBASE(0x41eeb24);
        inline const uintptr_t luaL_tagerror = REBASE(0x41ee5e4);
        inline const uintptr_t luaL_typeerrorL = REBASE(0x41ee334);
        inline const uintptr_t luaO_chunkid = REBASE(0x420469c);
        inline const uintptr_t luaO_nilobject = REBASE(0x506ed40);
        inline const uintptr_t luaO_pushfstring = REBASE(0x4204674);
        inline const uintptr_t luaO_pushvfstring = REBASE(0x42045b0);
        inline const uintptr_t luaO_str2d = REBASE(0x42043f4);
        inline const uintptr_t luaT_init = REBASE(0x420de70);
        inline const uintptr_t luaT_objtypename = REBASE(0x420e0d4);
        inline const uintptr_t luaV_equal = REBASE(0x421c744);
        inline const uintptr_t luaV_gettable = REBASE(0x421bbbc);
        inline const uintptr_t luaV_lessthan = REBASE(0x421c534);
        inline const uintptr_t luaV_settable = REBASE(0x421c068);
        inline const uintptr_t lua_checkstack = REBASE(0x41e94a4);
        inline const uintptr_t lua_eception = REBASE(0x41f94d4);
        inline const uintptr_t lua_error = REBASE(0x41e9560);
        inline const uintptr_t lua_gettop = REBASE(0x41e9910);
        inline const uintptr_t lua_namecallatom = REBASE(0x41ea7f4);
        inline const uintptr_t lua_newstate = REBASE(0x4205388);
        inline const uintptr_t lua_pushfstringL = REBASE(0x41eb158);
        inline const uintptr_t lua_pushvfstring = REBASE(0x41eb0ec);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x41e95f4);
        inline const uintptr_t lua_resetthread = REBASE(0x4205210);
        inline const uintptr_t lua_type = REBASE(0x41e9dbc);
        inline const uintptr_t lua_yield = REBASE(0x41fa44c);
        inline const uintptr_t luaopen_base = REBASE(0x41ef78c);
        inline const uintptr_t luaopen_bit32 = REBASE(0x41f0480);
        inline const uintptr_t luaopen_buffer = REBASE(0x41f0cbc);
        inline const uintptr_t luaopen_class = REBASE(0x41f6708);
        inline const uintptr_t luaopen_coroutine = REBASE(0x41f6814);
        inline const uintptr_t luaopen_debug = REBASE(0x41f7b94);
        inline const uintptr_t luaopen_integer = REBASE(0x41ffe80);
        inline const uintptr_t luaopen_math = REBASE(0x4200dd8);
        inline const uintptr_t luaopen_os = REBASE(0x42047d0);
        inline const uintptr_t luaopen_string = REBASE(0x4205fe8);
        inline const uintptr_t luaopen_table = REBASE(0x420c55c);
        inline const uintptr_t luaopen_utf8 = REBASE(0x420e220);
        inline const uintptr_t luaopen_vector = REBASE(0x420ea64);
        inline const uintptr_t luau_execute = REBASE(0x420f578);
        inline const uintptr_t pseudo2addr = REBASE(0x41ee138);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x41efbdc);
        inline const uintptr_t luaB_error = REBASE(0x41efc48);
        inline const uintptr_t luaB_gcinfo = REBASE(0x41efcb8);
        inline const uintptr_t luaB_getfenv = REBASE(0x41efcf0);
        inline const uintptr_t luaB_getmetatable = REBASE(0x41efd54);
        inline const uintptr_t luaB_newproxy = REBASE(0x41efdac);
        inline const uintptr_t luaB_next = REBASE(0x41ef6c8);
        inline const uintptr_t luaB_pcall = REBASE(0x41efa04);
        inline const uintptr_t luaB_pcallrun = REBASE(0x41efa40);
        inline const uintptr_t luaB_print = REBASE(0x41efe34);
        inline const uintptr_t luaB_rawequal = REBASE(0x41eff04);
        inline const uintptr_t luaB_rawget = REBASE(0x41eff54);
        inline const uintptr_t luaB_rawlen = REBASE(0x41f0000);
        inline const uintptr_t luaB_rawset = REBASE(0x41effa4);
        inline const uintptr_t luaB_select = REBASE(0x41f0060);
        inline const uintptr_t luaB_setfenv = REBASE(0x41f0108);
        inline const uintptr_t luaB_setmetatable = REBASE(0x41f01dc);
        inline const uintptr_t luaB_tonumber = REBASE(0x41f0278);
        inline const uintptr_t luaB_tostring = REBASE(0x41f0390);
        inline const uintptr_t luaB_type = REBASE(0x41f03c8);
        inline const uintptr_t luaB_typeof = REBASE(0x41f0414);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x423990c);
        inline const uintptr_t luaF_freeproto = REBASE(0x41fb068);
        inline const uintptr_t luaF_newCclosure = REBASE(0x41fae64);
        inline const uintptr_t luaL_tostring = REBASE(0x41ef4a0);
        inline const uintptr_t luaS_newlstr = REBASE(0x4205bfc);
        inline const uintptr_t lua_clock = REBASE(0x4204ed8);
        inline const uintptr_t lua_pushstring = REBASE(0x41eb0a4);
        inline const uintptr_t lua_setfield = REBASE(0x41ebf2c);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x18772c8);
        inline const uintptr_t GetIdentityContext = REBASE(0x18bae8c);
        inline const uintptr_t GetRequireBypass = REBASE(0x18bdd38);
        inline const uintptr_t GetScriptContextFromLuaState = REBASE(0x18bc8a0);
        inline const uintptr_t IdentityCapabilitiesTable = REBASE(0x50d6088);
        inline const uintptr_t IdentityToCaps = REBASE(0x4453dd0);
        inline const uintptr_t IsLegalSendEvent = REBASE(0x867c88);
        inline const uintptr_t ModuleScriptIsCoreScript = REBASE(0x18a0e0c);
        inline const uintptr_t PrintIdentity = REBASE(0x18953f0);
        inline const uintptr_t ScriptContextRequire = REBASE(0x18f8a24);
        inline const uintptr_t ScriptContextResume = REBASE(0x18cd518);
        inline const uintptr_t ScriptContextResumeInternal = REBASE(0x18cdd18);
    }

    namespace ScriptContextFields {
        inline constexpr uintptr_t RequireBypass = 0xae1;
    }

    namespace ModuleScriptFields {
        inline constexpr uintptr_t IsCoreScript = 0x138;
        inline constexpr uint64_t IsCoreScriptMask = 1;
    }

    namespace FFlag {
        inline const uintptr_t BooleanType = REBASE(0x609b520);
        inline const uintptr_t FLogDataBank = REBASE(0x6565070);
        inline const uintptr_t GetFFlag = REBASE(0x481d65c);
        inline const uintptr_t GetFFlagByName = REBASE(0x4829adc);
        inline const uintptr_t GetFFlagLocked = REBASE(0x4820d90);
        inline const uintptr_t RegisterBoolean = REBASE(0x4829410);
        inline const uintptr_t SetFFlag = REBASE(0x481cd80);
    }

    namespace FlagStorage {
        inline const uintptr_t AnimGraphServerAuthorityNodeIndices = REBASE(0x6645fc4);
        inline const uintptr_t EnableLoadModule = REBASE(0x6178868);
        inline const uintptr_t RenderAdvSkyGroup = REBASE(0x615a3d0);
    }

    namespace Scheduler {
        inline const uintptr_t TaskSchedulerConstructor = REBASE(0x47e2db0);
        inline const uintptr_t TaskSchedulerPTR = REBASE(0x655b430);
    }

    namespace Reflection {
        inline const uintptr_t GetProperty = REBASE(0x83c90c);
        inline const uintptr_t GetPropertyData = REBASE(0x44500b8);
        inline const uintptr_t GetPropertyEntry = REBASE(0x83c8b8);
    }

    namespace Instance {
        inline const uintptr_t InstanceFindFirstAncestor = REBASE(0x73e694);
        inline const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x73e754);
        inline const uintptr_t InstanceFindFirstChild = REBASE(0x73ead0);
        inline const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x41c3604);
        inline const uintptr_t InstanceGetAttribute = REBASE(0x41cc4b0);
        inline const uintptr_t InstanceGetAttributes = REBASE(0x747b14);
        inline const uintptr_t InstanceGetChildren = REBASE(0x73e8dc);
        inline const uintptr_t InstanceNew = REBASE(0x1862450);
    }

    namespace Remote {
        inline const uintptr_t FireAllClients = REBASE(0x21bd258);
        inline const uintptr_t FireClient = REBASE(0x21bce70);
        inline const uintptr_t FireServer = REBASE(0x21bca6c);
        inline const uintptr_t InvokeClient = REBASE(0x25dad20);
        inline const uintptr_t InvokeServer = REBASE(0x25da278);
    }

    namespace WorldRoot {
        inline const uintptr_t BlockCast = REBASE(0x40429c8);
        inline const uintptr_t ShapeCast = REBASE(0x404398c);
        inline const uintptr_t SphereCast = REBASE(0x4042614);
        inline const uintptr_t WorldRootRaycast = REBASE(0x40422c4);
    }

    namespace Raycast {
        inline constexpr uintptr_t FunctionPointerOffset = 0xa8;
        inline const uintptr_t RaycastBoundDesc = REBASE(0x6527150);
        inline const uintptr_t RaycastFn = REBASE(0x40422c4);
    }

    namespace Rendering {
        inline const uintptr_t CubeTextures = REBASE(0x67b768);
        inline const uintptr_t DrawSkyEnv = REBASE(0xac6190);
        inline const uintptr_t FastClusterEntityVTable = REBASE(0x5ccccf0);
        inline const uintptr_t SkyThread = REBASE(0xac33d0);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x220818c);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2208e9c);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2208fb0);
        inline const uintptr_t FireProximityPrompt = REBASE(0x24f410c);
        inline const uintptr_t FireRightMouseClick = REBASE(0x2208334);
    }

    namespace Raknet {
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x30917ec);
        inline const uintptr_t RakPeerProcessNetworkPacket = REBASE(0x3097a60);
        inline const uintptr_t RakPeerReceive = REBASE(0x30888e4);
        inline const uintptr_t RakPeerVirtualTable = REBASE(0x5f70f70);
        inline const uintptr_t RaknetReceive = REBASE(0x30a21f4);
        inline const uintptr_t ReportNetworkError = REBASE(0x864174);
        inline const uintptr_t Send = REBASE(0x3097a60);
        inline const uintptr_t SendPacketsToSelf = REBASE(0x3086ff8);
        inline const uintptr_t UpdateNetworkLoop = REBASE(0x30871f4);
    }

    namespace RbxTransport {
        inline const uintptr_t AppClose = REBASE(0x3db71fc);
        inline const uintptr_t AppDeletingDestructor = REBASE(0x3db6d80);
        inline const uintptr_t AppDestructor = REBASE(0x3db6d7c);
        inline const uintptr_t AppReceive = REBASE(0x3db8414);
        inline const uintptr_t AppReceiveMaxBytes = REBASE(0x3db8adc);
        inline const uintptr_t AppSend = REBASE(0x3db7c90);
        inline const uintptr_t AppTypeInfo = REBASE(0x5ff0070);
        inline const uintptr_t AppVTable = REBASE(0x5feff70);
        inline const uintptr_t ClientDeletingDestructor = REBASE(0xe97f5c);
        inline const uintptr_t ClientDestructor = REBASE(0xe97f00);
        inline const uintptr_t ClientOpenChannels = REBASE(0xe973dc);
        inline const uintptr_t ClientReceive = REBASE(0xe9724c);
        inline const uintptr_t ClientTypeInfo = REBASE(0x5cd5d68);
        inline const uintptr_t ClientVTable = REBASE(0x5cd5c88);
        inline const uintptr_t FailureFallbackToRbxTransport = REBASE(0x6152788);
        inline const uintptr_t GenerateRetryToken = REBASE(0x4521608);
        inline const uintptr_t RetryTokenDecrypt = REBASE(0x451fe70);
        inline const uintptr_t RetryTokenEncrypt = REBASE(0x451fd08);
        inline const uintptr_t UseRbxTransportClient = REBASE(0x6160020);
        inline const uintptr_t VerifyRetryToken = REBASE(0x4521960);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x189e1a0);
        inline const uintptr_t defer = REBASE(0x189d7ec);
        inline const uintptr_t delay = REBASE(0x189de14);
        inline const uintptr_t desynchronize = REBASE(0x189d670);
        inline const uintptr_t spawn = REBASE(0x189dc88);
        inline const uintptr_t synchronize = REBASE(0x189d4f0);
        inline const uintptr_t task_lib_init = REBASE(0x189d264);
        inline const uintptr_t wait = REBASE(0x189e034);
    }

    namespace MathLib {
        inline const uintptr_t lua_math_abs = REBASE(0x4200f58);
        inline const uintptr_t lua_math_acos = REBASE(0x4200f8c);
        inline const uintptr_t lua_math_asin = REBASE(0x4200fc0);
        inline const uintptr_t lua_math_atan = REBASE(0x4201048);
        inline const uintptr_t lua_math_atan2 = REBASE(0x4200ff4);
        inline const uintptr_t lua_math_ceil = REBASE(0x420107c);
        inline const uintptr_t lua_math_clamp = REBASE(0x4201c70);
        inline const uintptr_t lua_math_cos = REBASE(0x42010e4);
        inline const uintptr_t lua_math_cosh = REBASE(0x42010b0);
        inline const uintptr_t lua_math_deg = REBASE(0x4201118);
        inline const uintptr_t lua_math_exp = REBASE(0x4201154);
        inline const uintptr_t lua_math_floor = REBASE(0x4201188);
        inline const uintptr_t lua_math_fmod = REBASE(0x42011bc);
        inline const uintptr_t lua_math_frexp = REBASE(0x4201210);
        inline const uintptr_t lua_math_isfinite = REBASE(0x4201ef4);
        inline const uintptr_t lua_math_isinf = REBASE(0x4201eb0);
        inline const uintptr_t lua_math_isnan = REBASE(0x4201e78);
        inline const uintptr_t lua_math_ldexp = REBASE(0x420125c);
        inline const uintptr_t lua_math_lerp = REBASE(0x4201e08);
        inline const uintptr_t lua_math_log = REBASE(0x42012e0);
        inline const uintptr_t lua_math_log10 = REBASE(0x42012ac);
        inline const uintptr_t lua_math_map = REBASE(0x4201d70);
        inline const uintptr_t lua_math_max = REBASE(0x4201394);
        inline const uintptr_t lua_math_min = REBASE(0x4201418);
        inline const uintptr_t lua_math_modf = REBASE(0x420149c);
        inline const uintptr_t lua_math_noise = REBASE(0x42018a4);
        inline const uintptr_t lua_math_pow = REBASE(0x42014f8);
        inline const uintptr_t lua_math_rad = REBASE(0x420154c);
        inline const uintptr_t lua_math_random = REBASE(0x4201588);
        inline const uintptr_t lua_math_randomseed = REBASE(0x4201748);
        inline const uintptr_t lua_math_round = REBASE(0x4201d3c);
        inline const uintptr_t lua_math_sign = REBASE(0x4201cf4);
        inline const uintptr_t lua_math_sin = REBASE(0x42017d4);
        inline const uintptr_t lua_math_sinh = REBASE(0x42017a0);
        inline const uintptr_t lua_math_sqrt = REBASE(0x4201808);
        inline const uintptr_t lua_math_tan = REBASE(0x4201870);
        inline const uintptr_t lua_math_tanh = REBASE(0x420183c);
    }

    namespace OsLib {
        inline const uintptr_t lua_os_clock = REBASE(0x42047f8);
        inline const uintptr_t lua_os_date = REBASE(0x4204824);
        inline const uintptr_t lua_os_difftime = REBASE(0x4204b6c);
        inline const uintptr_t lua_os_time = REBASE(0x4204bbc);
    }

    namespace StringLib {
        inline const uintptr_t lua_string_byte = REBASE(0x4206090);
        inline const uintptr_t lua_string_char = REBASE(0x4206194);
        inline const uintptr_t lua_string_find = REBASE(0x420626c);
        inline const uintptr_t lua_string_format = REBASE(0x4206274);
        inline const uintptr_t lua_string_gmatch = REBASE(0x42068b4);
        inline const uintptr_t lua_string_gsub = REBASE(0x4206924);
        inline const uintptr_t lua_string_len = REBASE(0x4206d4c);
        inline const uintptr_t lua_string_lower = REBASE(0x4206d8c);
        inline const uintptr_t lua_string_match = REBASE(0x4206e44);
        inline const uintptr_t lua_string_pack = REBASE(0x42074d4);
        inline const uintptr_t lua_string_packsize = REBASE(0x42078ec);
        inline const uintptr_t lua_string_rep = REBASE(0x4206e4c);
        inline const uintptr_t lua_string_reverse = REBASE(0x4206f90);
        inline const uintptr_t lua_string_split = REBASE(0x42071b4);
        inline const uintptr_t lua_string_sub = REBASE(0x4207038);
        inline const uintptr_t lua_string_unpack = REBASE(0x42079c0);
        inline const uintptr_t lua_string_upper = REBASE(0x42070fc);
    }

    namespace TableLib {
        inline const uintptr_t lua_table_clear = REBASE(0x420d1d4);
        inline const uintptr_t lua_table_clone = REBASE(0x420d2f0);
        inline const uintptr_t lua_table_concat = REBASE(0x420c70c);
        inline const uintptr_t lua_table_create = REBASE(0x420cf54);
        inline const uintptr_t lua_table_find = REBASE(0x420cff4);
        inline const uintptr_t lua_table_foreach = REBASE(0x420c854);
        inline const uintptr_t lua_table_foreachi = REBASE(0x420c904);
        inline const uintptr_t lua_table_freeze = REBASE(0x420d21c);
        inline const uintptr_t lua_table_getn = REBASE(0x420c9cc);
        inline const uintptr_t lua_table_insert = REBASE(0x420cae0);
        inline const uintptr_t lua_table_isfrozen = REBASE(0x420d2ac);
        inline const uintptr_t lua_table_maxn = REBASE(0x420ca10);
        inline const uintptr_t lua_table_move = REBASE(0x420cdb8);
        inline const uintptr_t lua_table_pack = REBASE(0x420cd10);
        inline const uintptr_t lua_table_remove = REBASE(0x420cba0);
        inline const uintptr_t lua_table_sort = REBASE(0x420cc54);
        inline const uintptr_t lua_table_unpack = REBASE(0x420c5c4);
    }

    namespace IntegerLib {
        inline const uintptr_t lua_integer_add = REBASE(0x41fffc4);
        inline const uintptr_t lua_integer_arshift = REBASE(0x4200944);
        inline const uintptr_t lua_integer_band = REBASE(0x42004c0);
        inline const uintptr_t lua_integer_bnot = REBASE(0x42005a0);
        inline const uintptr_t lua_integer_bor = REBASE(0x4200530);
        inline const uintptr_t lua_integer_bswap = REBASE(0x4200ce4);
        inline const uintptr_t lua_integer_btest = REBASE(0x4200c04);
        inline const uintptr_t lua_integer_bxor = REBASE(0x42005d4);
        inline const uintptr_t lua_integer_clamp = REBASE(0x420043c);
        inline const uintptr_t lua_integer_countlz = REBASE(0x4200cb0);
        inline const uintptr_t lua_integer_countrz = REBASE(0x4200c78);
        inline const uintptr_t lua_integer_create = REBASE(0x41ffef4);
        inline const uintptr_t lua_integer_div = REBASE(0x4200090);
        inline const uintptr_t lua_integer_extract = REBASE(0x4200a60);
        inline const uintptr_t lua_integer_fromstring = REBASE(0x4200d18);
        inline const uintptr_t lua_integer_ge = REBASE(0x42007ac);
        inline const uintptr_t lua_integer_gt = REBASE(0x4200764);
        inline const uintptr_t lua_integer_idiv = REBASE(0x4200270);
        inline const uintptr_t lua_integer_le = REBASE(0x420068c);
        inline const uintptr_t lua_integer_lrotate = REBASE(0x42009b0);
        inline const uintptr_t lua_integer_lshift = REBASE(0x4200884);
        inline const uintptr_t lua_integer_lt = REBASE(0x4200644);
        inline const uintptr_t lua_integer_max = REBASE(0x4200180);
        inline const uintptr_t lua_integer_min = REBASE(0x4200108);
        inline const uintptr_t lua_integer_mod = REBASE(0x42003b4);
        inline const uintptr_t lua_integer_mul = REBASE(0x420004c);
        inline const uintptr_t lua_integer_neg = REBASE(0x41fff90);
        inline const uintptr_t lua_integer_rem = REBASE(0x42001f8);
        inline const uintptr_t lua_integer_replace = REBASE(0x4200b24);
        inline const uintptr_t lua_integer_rrotate = REBASE(0x4200a08);
        inline const uintptr_t lua_integer_rshift = REBASE(0x42008e4);
        inline const uintptr_t lua_integer_sub = REBASE(0x4200008);
        inline const uintptr_t lua_integer_tonumber = REBASE(0x41fff5c);
        inline const uintptr_t lua_integer_udiv = REBASE(0x4200300);
        inline const uintptr_t lua_integer_uge = REBASE(0x420083c);
        inline const uintptr_t lua_integer_ugt = REBASE(0x42007f4);
        inline const uintptr_t lua_integer_ule = REBASE(0x420071c);
        inline const uintptr_t lua_integer_ult = REBASE(0x42006d4);
        inline const uintptr_t lua_integer_urem = REBASE(0x4200358);
    }

    namespace Bit32Lib {
        inline const uintptr_t lua_bit32_arshift = REBASE(0x41f04a8);
        inline const uintptr_t lua_bit32_band = REBASE(0x41f0530);
        inline const uintptr_t lua_bit32_bnot = REBASE(0x41f0560);
        inline const uintptr_t lua_bit32_bor = REBASE(0x41f0594);
        inline const uintptr_t lua_bit32_btest = REBASE(0x41f0674);
        inline const uintptr_t lua_bit32_bxor = REBASE(0x41f0604);
        inline const uintptr_t lua_bit32_byteswap = REBASE(0x41f0998);
        inline const uintptr_t lua_bit32_countlz = REBASE(0x41f0908);
        inline const uintptr_t lua_bit32_countrz = REBASE(0x41f0950);
        inline const uintptr_t lua_bit32_extract = REBASE(0x41f06a8);
        inline const uintptr_t lua_bit32_lrotate = REBASE(0x41f070c);
        inline const uintptr_t lua_bit32_lshift = REBASE(0x41f075c);
        inline const uintptr_t lua_bit32_replace = REBASE(0x41f07c0);
        inline const uintptr_t lua_bit32_rrotate = REBASE(0x41f084c);
        inline const uintptr_t lua_bit32_rshift = REBASE(0x41f08a4);
    }

    namespace BufferLib {
        inline const uintptr_t lua_buffer_copy = REBASE(0x41f17b4);
        inline const uintptr_t lua_buffer_create = REBASE(0x41f0d00);
        inline const uintptr_t lua_buffer_fill = REBASE(0x41f1894);
        inline const uintptr_t lua_buffer_fromstring = REBASE(0x41f0d4c);
        inline const uintptr_t lua_buffer_len = REBASE(0x41f176c);
        inline const uintptr_t lua_buffer_readbits = REBASE(0x41f1940);
        inline const uintptr_t lua_buffer_readf32 = REBASE(0x41f10c0);
        inline const uintptr_t lua_buffer_readf64 = REBASE(0x41f113c);
        inline const uintptr_t lua_buffer_readi16 = REBASE(0x41f0ed0);
        inline const uintptr_t lua_buffer_readi32 = REBASE(0x41f0fc8);
        inline const uintptr_t lua_buffer_readi8 = REBASE(0x41f0de8);
        inline const uintptr_t lua_buffer_readstring = REBASE(0x41f15e8);
        inline const uintptr_t lua_buffer_readu16 = REBASE(0x41f0f4c);
        inline const uintptr_t lua_buffer_readu32 = REBASE(0x41f1044);
        inline const uintptr_t lua_buffer_readu8 = REBASE(0x41f0e5c);
        inline const uintptr_t lua_buffer_tostring = REBASE(0x41f0da0);
        inline const uintptr_t lua_buffer_writebits = REBASE(0x41f1a1c);
        inline const uintptr_t lua_buffer_writef32 = REBASE(0x41f14d4);
        inline const uintptr_t lua_buffer_writef64 = REBASE(0x41f1560);
        inline const uintptr_t lua_buffer_writei16 = REBASE(0x41f12b4);
        inline const uintptr_t lua_buffer_writei32 = REBASE(0x41f13c4);
        inline const uintptr_t lua_buffer_writei8 = REBASE(0x41f11b4);
        inline const uintptr_t lua_buffer_writestring = REBASE(0x41f1690);
        inline const uintptr_t lua_buffer_writeu16 = REBASE(0x41f133c);
        inline const uintptr_t lua_buffer_writeu32 = REBASE(0x41f144c);
        inline const uintptr_t lua_buffer_writeu8 = REBASE(0x41f1234);
    }

    namespace VectorLib {
        inline const uintptr_t lua_vector_abs = REBASE(0x420ef1c);
        inline const uintptr_t lua_vector_angle = REBASE(0x420ed8c);
        inline const uintptr_t lua_vector_ceil = REBASE(0x420eed8);
        inline const uintptr_t lua_vector_clamp = REBASE(0x420efc8);
        inline const uintptr_t lua_vector_create = REBASE(0x420eb7c);
        inline const uintptr_t lua_vector_cross = REBASE(0x420ecb0);
        inline const uintptr_t lua_vector_dot = REBASE(0x420ed24);
        inline const uintptr_t lua_vector_floor = REBASE(0x420ee94);
        inline const uintptr_t lua_vector_lerp = REBASE(0x420f20c);
        inline const uintptr_t lua_vector_magnitude = REBASE(0x420ebf8);
        inline const uintptr_t lua_vector_max = REBASE(0x420f0b4);
        inline const uintptr_t lua_vector_min = REBASE(0x420f160);
        inline const uintptr_t lua_vector_normalize = REBASE(0x420ec4c);
        inline const uintptr_t lua_vector_sign = REBASE(0x420ef60);
    }

    namespace Utf8Lib {
        inline const uintptr_t lua_utf8_char = REBASE(0x420e580);
        inline const uintptr_t lua_utf8_codepoint = REBASE(0x420e434);
        inline const uintptr_t lua_utf8_codes = REBASE(0x420e7a0);
        inline const uintptr_t lua_utf8_len = REBASE(0x420e664);
        inline const uintptr_t lua_utf8_offset = REBASE(0x420e27c);
    }

    namespace DebugLib {
        inline const uintptr_t lua_debug_info = REBASE(0x41f7bbc);
        inline const uintptr_t lua_debug_traceback = REBASE(0x41f7e58);
    }

    namespace CoroutineLib {
        inline const uintptr_t lua_coroutine_close = REBASE(0x41f76a8);
        inline const uintptr_t lua_coroutine_create = REBASE(0x41f6e00);
        inline const uintptr_t lua_coroutine_finally = REBASE(0x41f6f58);
        inline const uintptr_t lua_coroutine_isyieldable = REBASE(0x41f6f28);
        inline const uintptr_t lua_coroutine_resume = REBASE(0x41f68e8);
        inline const uintptr_t lua_coroutine_running = REBASE(0x41f6e44);
        inline const uintptr_t lua_coroutine_status = REBASE(0x41f6e74);
        inline const uintptr_t lua_coroutine_wrap = REBASE(0x41f6ed4);
        inline const uintptr_t lua_coroutine_yield = REBASE(0x41f6f18);
    }

    namespace ClassLib {
        inline const uintptr_t lua_class_classof = REBASE(0x41f67b0);
        inline const uintptr_t lua_class_isinstance = REBASE(0x41f6730);
    }

    namespace LuauAliases {
        inline const uintptr_t luaB_pcallcont = REBASE(0x41efa40);
        inline const uintptr_t luaB_pcally = REBASE(0x41efa04);
        inline const uintptr_t luaL_tolstring = REBASE(0x41ef4a0);
        inline const uintptr_t luaM_free_ = REBASE(0x4202c80);
        inline const uintptr_t luaM_freegco_ = REBASE(0x4202dcc);
        inline const uintptr_t luaM_newgco_ = REBASE(0x420226c);
        inline const uintptr_t luaO_nilobject_ = REBASE(0x506ed40);
        inline const uintptr_t luaV_equalval = REBASE(0x421c744);
    }

    namespace LuauApi {
        inline const uintptr_t lua_absindex = REBASE(0x41e98e4);
        inline const uintptr_t lua_addfinalizer = REBASE(0x41eca04);
        inline const uintptr_t lua_break = REBASE(0x41fa48c);
        inline const uintptr_t lua_call = REBASE(0x41ec55c);
        inline const uintptr_t lua_callbacks = REBASE(0x41ee024);
        inline const uintptr_t lua_callyieldable = REBASE(0x41ec608);
        inline const uintptr_t lua_concat = REBASE(0x41ed078);
        inline const uintptr_t lua_costatus = REBASE(0x41ec7a4);
        inline const uintptr_t lua_createtable = REBASE(0x41eba54);
        inline const uintptr_t lua_equal = REBASE(0x41ea11c);
        inline const uintptr_t lua_gc = REBASE(0x41ecb7c);
        inline const uintptr_t lua_getcoverage = REBASE(0x41f8ef0);
        inline const uintptr_t lua_getfenv = REBASE(0x41ebda4);
        inline const uintptr_t lua_getfield = REBASE(0x41eb57c);
        inline const uintptr_t lua_getmetatable = REBASE(0x41ebc60);
        inline const uintptr_t lua_getreadonly = REBASE(0x41ebb98);
        inline const uintptr_t lua_gettable = REBASE(0x41eb4d8);
        inline const uintptr_t lua_getthreaddata = REBASE(0x7c0cdc);
        inline const uintptr_t lua_getupvalue = REBASE(0x41ed3fc);
        inline const uintptr_t lua_getweakref = REBASE(0x41edc68);
        inline const uintptr_t lua_insert = REBASE(0x41e9af0);
        inline const uintptr_t lua_isnumber = REBASE(0x41e9f38);
        inline const uintptr_t lua_isstring = REBASE(0x41e9fb8);
        inline const uintptr_t lua_isuserdata = REBASE(0x41e9fd8);
        inline const uintptr_t lua_isyieldable = REBASE(0x41fa4c0);
        inline const uintptr_t lua_mainthread = REBASE(0x41e98d8);
        inline const uintptr_t lua_newbuffer = REBASE(0x41ed33c);
        inline const uintptr_t lua_newthread = REBASE(0x41e9804);
        inline const uintptr_t lua_newuserdatatagged = REBASE(0x41ed18c);
        inline const uintptr_t lua_next = REBASE(0x41ecdf0);
        inline const uintptr_t lua_objlen = REBASE(0x41ea8c4);
        inline const uintptr_t lua_pcallyieldable = REBASE(0x41ec668);
        inline const uintptr_t lua_pushboolean = REBASE(0x41eb32c);
        inline const uintptr_t lua_pushcclosurek = REBASE(0x41eb1cc);
        inline const uintptr_t lua_pushinteger = REBASE(0x41eadc8);
        inline const uintptr_t lua_pushinteger64 = REBASE(0x41eae48);
        inline const uintptr_t lua_pushlightuserdatatagged = REBASE(0x41eb3b0);
        inline const uintptr_t lua_pushlstring = REBASE(0x41eafd8);
        inline const uintptr_t lua_pushnil = REBASE(0x41eacd8);
        inline const uintptr_t lua_pushnumber = REBASE(0x41ead44);
        inline const uintptr_t lua_pushthread = REBASE(0x41eb438);
        inline const uintptr_t lua_pushunsigned = REBASE(0x41eaec4);
        inline const uintptr_t lua_pushvalue = REBASE(0x41e9ce0);
        inline const uintptr_t lua_pushvector = REBASE(0x41eaf44);
        inline const uintptr_t lua_rawequal = REBASE(0x41ea03c);
        inline const uintptr_t lua_rawget = REBASE(0x41eb7b4);
        inline const uintptr_t lua_rawgetfield = REBASE(0x41eb6a0);
        inline const uintptr_t lua_rawgeti = REBASE(0x41eb85c);
        inline const uintptr_t lua_rawgetptagged = REBASE(0x41eb954);
        inline const uintptr_t lua_rawiter = REBASE(0x41ecee0);
        inline const uintptr_t lua_rawset = REBASE(0x41ec0f4);
        inline const uintptr_t lua_rawsetfield = REBASE(0x41ebff0);
        inline const uintptr_t lua_rawseti = REBASE(0x41ec1d0);
        inline const uintptr_t lua_rawsetptagged = REBASE(0x41ec2b0);
        inline const uintptr_t lua_ref = REBASE(0x41ed960);
        inline const uintptr_t lua_remove = REBASE(0x41e9a60);
        inline const uintptr_t lua_replace = REBASE(0x41e9ba4);
        inline const uintptr_t lua_resume = REBASE(0x41f9f04);
        inline const uintptr_t lua_resumeerror = REBASE(0x41fa23c);
        inline const uintptr_t lua_setembeddergc = REBASE(0x41edaf4);
        inline const uintptr_t lua_setfenv = REBASE(0x41ec4a0);
        inline const uintptr_t lua_setmetatable = REBASE(0x41ec3a0);
        inline const uintptr_t lua_setreadonly = REBASE(0x41ebb20);
        inline const uintptr_t lua_setsafeenv = REBASE(0x41ebbf0);
        inline const uintptr_t lua_settable = REBASE(0x41ebea4);
        inline const uintptr_t lua_settop = REBASE(0x41e9920);
        inline const uintptr_t lua_setupvalue = REBASE(0x41ed5a4);
        inline const uintptr_t lua_status = REBASE(0x41ec79c);
        inline const uintptr_t lua_toboolean = REBASE(0x41ea3f0);
        inline const uintptr_t lua_tobuffer = REBASE(0x41eabc8);
        inline const uintptr_t lua_tointeger64 = REBASE(0x41ea46c);
        inline const uintptr_t lua_tointegerx = REBASE(0x41ea2b0);
        inline const uintptr_t lua_tolstring = REBASE(0x41ea4f8);
        inline const uintptr_t lua_tonumberx = REBASE(0x41ea210);
        inline const uintptr_t lua_topointer = REBASE(0x41eac50);
        inline const uintptr_t lua_tothread = REBASE(0x41eab5c);
        inline const uintptr_t lua_tounsignedx = REBASE(0x41ea350);
        inline const uintptr_t lua_touserdatatagged = REBASE(0x41eaa64);
        inline const uintptr_t lua_tovector = REBASE(0x41ea864);
        inline const uintptr_t lua_typename = REBASE(0x41e9e24);
        inline const uintptr_t lua_unref = REBASE(0x41eda7c);
        inline const uintptr_t lua_userdatatag = REBASE(0x41eaaec);
        inline const uintptr_t lua_weakref = REBASE(0x41edb00);
        inline const uintptr_t lua_weakunref = REBASE(0x41edc14);
        inline const uintptr_t lua_xmove = REBASE(0x41e9650);
        inline const uintptr_t lua_xpush = REBASE(0x41e971c);
    }

    namespace LuauAux {
        inline const uintptr_t luaL_addlstring = REBASE(0x41eeffc);
        inline const uintptr_t luaL_addvalue = REBASE(0x41ef244);
        inline const uintptr_t luaL_addvalueany = REBASE(0x41ef2d8);
        inline const uintptr_t luaL_buffinit = REBASE(0x41eefe8);
        inline const uintptr_t luaL_buffinitsize = REBASE(0x41ef124);
        inline const uintptr_t luaL_callmeta = REBASE(0x41eea98);
        inline const uintptr_t luaL_checkany = REBASE(0x41ee69c);
        inline const uintptr_t luaL_checkboolean = REBASE(0x41ee780);
        inline const uintptr_t luaL_checkbuffer = REBASE(0x41ee5ac);
        inline const uintptr_t luaL_checkinteger = REBASE(0x41ee818);
        inline const uintptr_t luaL_checkinteger64 = REBASE(0x41ee860);
        inline const uintptr_t luaL_checknumber = REBASE(0x41ee6e4);
        inline const uintptr_t luaL_checkstack = REBASE(0x41ee610);
        inline const uintptr_t luaL_checkunsigned = REBASE(0x41ee950);
        inline const uintptr_t luaL_checkvector = REBASE(0x41ee998);
        inline const uintptr_t luaL_newmetatable = REBASE(0x41ee52c);
        inline const uintptr_t luaL_openlibs = REBASE(0x41ffc20);
        inline const uintptr_t luaL_optinteger64 = REBASE(0x41ee8fc);
        inline const uintptr_t luaL_optlstring = REBASE(0x41ee47c);
        inline const uintptr_t luaL_optnumber = REBASE(0x41ee72c);
        inline const uintptr_t luaL_optvector = REBASE(0x41ee9d0);
        inline const uintptr_t luaL_prepbuffsize = REBASE(0x41ef060);
        inline const uintptr_t luaL_pushresult = REBASE(0x41ef080);
        inline const uintptr_t luaL_pushresultsize = REBASE(0x41ef6b8);
        inline const uintptr_t luaL_sandbox = REBASE(0x41ffcfc);
        inline const uintptr_t luaL_typename = REBASE(0x41eed74);
        inline const uintptr_t luaL_where = REBASE(0x41ee3d0);
    }

    namespace LuauData {
        inline const uintptr_t luaT_eventname = REBASE(0x6079210);
        inline const uintptr_t luaT_typenames = REBASE(0x60791a0);
    }

    namespace LuauHelpers {
        inline const uintptr_t luau_lapi_aux_upvalue = REBASE(0x41ed500);
        inline const uintptr_t luau_lapi_runfinalizercont = REBASE(0x41ec9f0);
        inline const uintptr_t luau_lapi_runfinalizery = REBASE(0x41ec8f4);
        inline const uintptr_t luau_laux_currfuncname = REBASE(0x41ee26c);
        inline const uintptr_t luau_laux_extendstrbuf = REBASE(0x41ef158);
        inline const uintptr_t luau_lbaselib_auxopen = REBASE(0x41ef904);
        inline const uintptr_t luau_lbitlib_andaux = REBASE(0x41f09cc);
        inline const uintptr_t luau_lbitlib_fieldargs = REBASE(0x41f0a30);
        inline const uintptr_t luau_lcorolib_auxresumecont = REBASE(0x41f761c);
        inline const uintptr_t luau_lcorolib_coclosecont = REBASE(0x41f6db0);
        inline const uintptr_t luau_lcorolib_coclosey = REBASE(0x41f6c48);
        inline const uintptr_t luau_lcorolib_coresumecont = REBASE(0x41f6994);
        inline const uintptr_t luau_lcorolib_coresumefinish = REBASE(0x41f7b30);
        inline const uintptr_t luau_ldblib_getthread = REBASE(0x41f7ef0);
        inline const uintptr_t luau_ldebug_pusherror = REBASE(0x41f8898);
        inline const uintptr_t luau_ldo_resume = REBASE(0x41fa034);
        inline const uintptr_t luau_ldo_resume_finish = REBASE(0x41fa100);
        inline const uintptr_t luau_ldo_resume_handle = REBASE(0x41fa2f4);
        inline const uintptr_t luau_ldo_resume_start = REBASE(0x41f9f9c);
        inline const uintptr_t luau_lgc_reallymarkobject = REBASE(0x41fc418);
        inline const uintptr_t luau_loslib_getfield = REBASE(0x4204e48);
        inline const uintptr_t luau_lstrlib_add_value = REBASE(0x4208a70);
        inline const uintptr_t luau_lstrlib_classend = REBASE(0x4208474);
        inline const uintptr_t luau_lstrlib_getnum = REBASE(0x42093b8);
        inline const uintptr_t luau_lstrlib_getnumlimit = REBASE(0x4209368);
        inline const uintptr_t luau_lstrlib_getoption = REBASE(0x42090d4);
        inline const uintptr_t luau_lstrlib_gmatch_aux = REBASE(0x4208978);
        inline const uintptr_t luau_lstrlib_match = REBASE(0x4207f4c);
        inline const uintptr_t luau_lstrlib_push_captures = REBASE(0x4208388);
        inline const uintptr_t luau_lstrlib_push_onecapture = REBASE(0x42088f0);
        inline const uintptr_t luau_lstrlib_str_find_aux = REBASE(0x4207cec);
        inline const uintptr_t luau_lstrlib_unpackint = REBASE(0x420943c);
        inline const uintptr_t luau_ltable_resize = REBASE(0x4209bcc);
        inline const uintptr_t luau_ltablib_addfield = REBASE(0x420d378);
        inline const uintptr_t luau_ltablib_moveelements = REBASE(0x420d43c);
        inline const uintptr_t luau_ltablib_sort_heap = REBASE(0x420dcc8);
        inline const uintptr_t luau_ltablib_sort_rec = REBASE(0x420d8dc);
        inline const uintptr_t luau_lutf8lib_buffutfchar = REBASE(0x420e8c4);
        inline const uintptr_t luau_lutf8lib_iter_aux = REBASE(0x420e984);
        inline const uintptr_t luau_lutf8lib_utf8_decode = REBASE(0x420e800);
        inline const uintptr_t luau_lvmutils_callTMres = REBASE(0x421bdc8);
        inline const uintptr_t luau_lvmutils_call_orderTM = REBASE(0x421c5a0);
        inline const uintptr_t luau_lvmutils_get_compTM = REBASE(0x421c8ec);
    }

    namespace LuauInternals {
        inline const uintptr_t luaA_pushclass = REBASE(0x41e9570);
        inline const uintptr_t luaB_inext = REBASE(0x41ef720);
        inline const uintptr_t luaB_ipairs = REBASE(0x41ef968);
        inline const uintptr_t luaB_newbuffer = REBASE(0x41f0acc);
        inline const uintptr_t luaB_pairs = REBASE(0x41ef9b8);
        inline const uintptr_t luaB_xpcallcont = REBASE(0x41efb5c);
        inline const uintptr_t luaB_xpcally = REBASE(0x41efaec);
        inline const uintptr_t luaC_allocationrate = REBASE(0x41fc66c);
        inline const uintptr_t luaC_barrierf = REBASE(0x41fc3e4);
        inline const uintptr_t luaC_barriertable = REBASE(0x41fc5b4);
        inline const uintptr_t luaC_enumheap = REBASE(0x41fe6bc);
        inline const uintptr_t luaD_call = REBASE(0x41f9b58);
        inline const uintptr_t luaD_growCI = REBASE(0x41f9734);
        inline const uintptr_t luaD_growstack = REBASE(0x41f9718);
        inline const uintptr_t luaD_preparefinalize = REBASE(0x41f9d24);
        inline const uintptr_t luaD_preparefinalizestate = REBASE(0x41f9c9c);
        inline const uintptr_t luaD_reallocstack = REBASE(0x41f94d8);
        inline const uintptr_t luaD_runfinalizers = REBASE(0x41f9da4);
        inline const uintptr_t luaE_newthread = REBASE(0x4204f94);
        inline const uintptr_t luaF_close = REBASE(0x41fafc4);
        inline const uintptr_t luaF_getlocal = REBASE(0x41fb1e0);
        inline const uintptr_t luaG_aritherror = REBASE(0x41f8680);
        inline const uintptr_t luaG_indexerror = REBASE(0x41f876c);
        inline const uintptr_t luaG_missingmembererror = REBASE(0x41f87e4);
        inline const uintptr_t luaG_ordererror = REBASE(0x41f86f8);
        inline const uintptr_t luaG_readonlyerror = REBASE(0x41f8884);
        inline const uintptr_t luaG_typeerrorL = REBASE(0x41f8578);
        inline const uintptr_t luaH_clear = REBASE(0x420ba8c);
        inline const uintptr_t luaH_get = REBASE(0x420a578);
        inline const uintptr_t luaH_getn = REBASE(0x420b7f4);
        inline const uintptr_t luaH_getnum = REBASE(0x420a3d0);
        inline const uintptr_t luaH_getreadonly = REBASE(0x420be68);
        inline const uintptr_t luaH_getstr = REBASE(0x420a494);
        inline const uintptr_t luaH_newkey = REBASE(0x420ac20);
        inline const uintptr_t luaH_set = REBASE(0x420abb8);
        inline const uintptr_t luaH_setnum = REBASE(0x420b650);
        inline const uintptr_t luaH_setreadonly = REBASE(0x420bba0);
        inline const uintptr_t luaH_setstr = REBASE(0x420b6e0);
        inline const uintptr_t luaM_new_ = REBASE(0x4201f78);
        inline const uintptr_t luaO_rawequalKey = REBASE(0x420431c);
        inline const uintptr_t luaO_rawequalObj = REBASE(0x4204248);
        inline const uintptr_t luaR_addclassmember = REBASE(0x41f5cf8);
        inline const uintptr_t luaR_defaultcreateobject = REBASE(0x41f6178);
        inline const uintptr_t luaR_inheritclass = REBASE(0x41f5904);
        inline const uintptr_t luaR_setupconstructor = REBASE(0x41f57d8);
        inline const uintptr_t luaU_newudata = REBASE(0x420e0ec);
        inline const uintptr_t luaV_callTM = REBASE(0x421c23c);
        inline const uintptr_t luaV_dolen = REBASE(0x421d7b0);
        inline const uintptr_t luaV_lessequal = REBASE(0x421c670);
        inline const uintptr_t luaV_strcmp = REBASE(0x421c4c8);
        inline const uintptr_t luaV_tonumber = REBASE(0x421baac);
        inline const uintptr_t luauF_tinsert = REBASE(0x41f31bc);
        inline const uintptr_t luau_precall = REBASE(0x4218bf4);
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
            inline const uintptr_t Pointer = REBASE(0x655b430);
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
    }
}

#include <cstdint>
namespace StatusFlags {
    inline constexpr std::uintptr_t Collector = 0x9722a4;
    inline constexpr std::uintptr_t Inputs[] = {
        0x66d2edc,
        0x66d2ee0,
        0x66d2e80,
        0x6681f44,
        0x6681f40,
        0x66d2ea8,
        0x66d2eac,
        0x66d2eb0,
        0x66d2eb4,
        0x66d2eb8,
        0x66d2ebc,
        0x66d2ec0,
        0x66d2ec4,
        0x66d2ec8,
        0x66d2ecc,
        0x66d2ed0,
        0x66d2ed4,
        0x66d2ed8,
    };
}
