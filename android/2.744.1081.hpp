#pragma once
#include <cstdint>
#include <array>

#ifndef REBASE
#define REBASE(x) (x)
#endif

namespace Offsets
{
    inline constexpr const char* architecture = "arm64";
    inline constexpr const char* luau = "2.744.1081";
    inline constexpr const char* build = "android-2.744.1081-0c68e85475423a37";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x25b3428);
        inline const uintptr_t luaM_freegco = REBASE(0x261b808);
        inline const uintptr_t luaM_newgco = REBASE(0x32e38d0);
        inline const uintptr_t luaM_toobig = REBASE(0x32e36a8);
        inline const uintptr_t luaM_visitgco = REBASE(0x32e4274);
        inline const uintptr_t newblock = REBASE(0x32e36bc);
        inline const uintptr_t newclasspage = REBASE(0x32e42e0);
        inline const uintptr_t newpage = REBASE(0x32e3a48);
    }

    namespace Luau {
        inline const uintptr_t OpcodeLookupTable = REBASE(0x84f959);
        inline const uintptr_t loadsafe = REBASE(0x32f53d4);
        inline const uintptr_t luaA_pushvalue = REBASE(0x261bd10);
        inline const uintptr_t luaA_toobject = REBASE(0x2606c88);
        inline const uintptr_t luaC_step = REBASE(0x32e52ec);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x25af070);
        inline const uintptr_t luaD_throw = REBASE(0x272ca3c);
        inline const uintptr_t luaF_newLclosure = REBASE(0x2604a98);
        inline const uintptr_t luaF_newUpval = REBASE(0x2608b04);
        inline const uintptr_t luaF_newproto = REBASE(0x26045e0);
        inline const uintptr_t luaG_runerror = REBASE(0x272c8fc);
        inline const uintptr_t luaH_clone = REBASE(0x26089c8);
        inline const uintptr_t luaH_dummynode = REBASE(0x84f3f0);
        inline const uintptr_t luaH_new = REBASE(0x25b3268);
        inline const uintptr_t luaL_argerrorL = REBASE(0x32f7c40);
        inline const uintptr_t luaL_checklstring = REBASE(0x32f7f18);
        inline const uintptr_t luaL_checktype = REBASE(0x32f7fb4);
        inline const uintptr_t luaL_errorL = REBASE(0x32f7d14);
        inline const uintptr_t luaL_findtable = REBASE(0x25b48e8);
        inline const uintptr_t luaL_getmetafield = REBASE(0x261bc9c);
        inline const uintptr_t luaL_register = REBASE(0x25b47c0);
        inline const uintptr_t luaL_tagerror = REBASE(0x32f7f88);
        inline const uintptr_t luaL_typeerrorL = REBASE(0x32f7db8);
        inline const uintptr_t luaO_chunkid = REBASE(0x26088a4);
        inline const uintptr_t luaO_nilobject = REBASE(0x84f3e0);
        inline const uintptr_t luaO_pushfstring = REBASE(0x272c9a4);
        inline const uintptr_t luaO_pushvfstring = REBASE(0x261d250);
        inline const uintptr_t luaT_init = REBASE(0x25b34dc);
        inline const uintptr_t luaT_objtypename = REBASE(0x261d0c0);
        inline const uintptr_t luaV_gettable = REBASE(0x25b4efc);
        inline const uintptr_t luaV_settable = REBASE(0x25b3df4);
        inline const uintptr_t lua_checkstack = REBASE(0x2613f3c);
        inline const uintptr_t lua_error = REBASE(0x32e1340);
        inline const uintptr_t lua_gettop = REBASE(0x2609a1c);
        inline const uintptr_t lua_namecallatom = REBASE(0x26a576c);
        inline const uintptr_t lua_newstate = REBASE(0x25aee14);
        inline const uintptr_t lua_pushfstringL = REBASE(0x261d164);
        inline const uintptr_t lua_pushvfstring = REBASE(0x32e1c20);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x25bd1b8);
        inline const uintptr_t lua_resetthread = REBASE(0x271fa1c);
        inline const uintptr_t lua_type = REBASE(0x25b4ab4);
        inline const uintptr_t lua_yield = REBASE(0x26527d0);
        inline const uintptr_t luaopen_base = REBASE(0x25b3ab8);
        inline const uintptr_t luaopen_bit32 = REBASE(0x25b5a94);
        inline const uintptr_t luaopen_buffer = REBASE(0x25b5ae4);
        inline const uintptr_t luaopen_class = REBASE(0x42dad94);
        inline const uintptr_t luaopen_coroutine = REBASE(0x25b53bc);
        inline const uintptr_t luaopen_debug = REBASE(0x25b5a10);
        inline const uintptr_t luaopen_integer = REBASE(0x42e1bfc);
        inline const uintptr_t luaopen_math = REBASE(0x25b5734);
        inline const uintptr_t luaopen_os = REBASE(0x25b5abc);
        inline const uintptr_t luaopen_string = REBASE(0x25b5504);
        inline const uintptr_t luaopen_table = REBASE(0x25b59a8);
        inline const uintptr_t luaopen_utf8 = REBASE(0x25b5a38);
        inline const uintptr_t luaopen_vector = REBASE(0x25b5b24);
        inline const uintptr_t luau_execute = REBASE(0x26083a0);
        inline const uintptr_t pseudo2addr = REBASE(0x32e342c);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x32f8858);
        inline const uintptr_t luaB_error = REBASE(0x32f88bc);
        inline const uintptr_t luaB_gcinfo = REBASE(0x32f892c);
        inline const uintptr_t luaB_getfenv = REBASE(0x32f8964);
        inline const uintptr_t luaB_getmetatable = REBASE(0x32f89c8);
        inline const uintptr_t luaB_newproxy = REBASE(0x32f8a20);
        inline const uintptr_t luaB_next = REBASE(0x261df14);
        inline const uintptr_t luaB_pcall = REBASE(0x32f8678);
        inline const uintptr_t luaB_pcallrun = REBASE(0x32f86b8);
        inline const uintptr_t luaB_print = REBASE(0x32f8aa8);
        inline const uintptr_t luaB_rawequal = REBASE(0x32f8b80);
        inline const uintptr_t luaB_rawget = REBASE(0x32f8bd0);
        inline const uintptr_t luaB_rawlen = REBASE(0x32f8c7c);
        inline const uintptr_t luaB_rawset = REBASE(0x32f8c20);
        inline const uintptr_t luaB_select = REBASE(0x32f8cdc);
        inline const uintptr_t luaB_setfenv = REBASE(0x32f8d84);
        inline const uintptr_t luaB_setmetatable = REBASE(0x32f8e58);
        inline const uintptr_t luaB_tonumber = REBASE(0x32f8ef4);
        inline const uintptr_t luaB_tostring = REBASE(0x32f900c);
        inline const uintptr_t luaB_type = REBASE(0x32f9044);
        inline const uintptr_t luaB_typeof = REBASE(0x32f9090);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x222f1d0);
        inline const uintptr_t luaF_freeproto = REBASE(0x261b960);
        inline const uintptr_t luaF_newCclosure = REBASE(0x25b5274);
        inline const uintptr_t luaL_tostring = REBASE(0x32f82e8);
        inline const uintptr_t luaS_newlstr = REBASE(0x25b35b0);
        inline const uintptr_t lua_clock = REBASE(0x25aa1a4);
        inline const uintptr_t lua_pushstring = REBASE(0x25b56ec);
        inline const uintptr_t lua_setfield = REBASE(0x25b3d08);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x2718820);
        inline const uintptr_t GetIdentityContext = REBASE(0x260d3e4);
        inline const uintptr_t IdentityCapabilitiesTable = REBASE(0x84ab40);
        inline const uintptr_t IdentityToCaps = REBASE(0x238fed0);
        inline const uintptr_t PrintIdentity = REBASE(0x4321194);
        inline const uintptr_t ScriptContextRequire = REBASE(0x260ecf8);
        inline const uintptr_t ScriptContextResume = REBASE(0x2607558);
        inline const uintptr_t ScriptContextResumeInternal = REBASE(0x42f25a0);
    }

    namespace FFlag {
        inline const uintptr_t BooleanType = REBASE(0x6bf9f70);
        inline const uintptr_t SetFFlag = REBASE(0x65ec26c);
    }

    namespace Scheduler {
        inline const uintptr_t TaskSchedulerConstructor = REBASE(0x227eb20);
        inline const uintptr_t TaskSchedulerPTR = REBASE(0x7304340);
    }

    namespace Reflection {
        inline const uintptr_t GetProperty = REBASE(0x2247d8c);
        inline const uintptr_t GetPropertyData = REBASE(0x24d9ff4);
        inline const uintptr_t GetPropertyEntry = REBASE(0x2609374);
    }

    namespace Instance {
        inline const uintptr_t InstanceFindFirstAncestor = REBASE(0x261cedc);
        inline const uintptr_t InstanceFindFirstAncestorWhichIsA = REBASE(0x2495c20);
        inline const uintptr_t InstanceFindFirstChildOfClass = REBASE(0x239b574);
        inline const uintptr_t InstanceNew = REBASE(0x261ed8c);
    }

    namespace Remote {
        inline const uintptr_t FireAllClients = REBASE(0x4b971f0);
        inline const uintptr_t FireClient = REBASE(0x4b96d30);
        inline const uintptr_t FireServer = REBASE(0x4b968a4);
        inline const uintptr_t InvokeClient = REBASE(0x56a8988);
        inline const uintptr_t InvokeServer = REBASE(0x56a7a24);
    }

    namespace WorldRoot {
        inline const uintptr_t BlockCast = REBASE(0x58e02d0);
        inline const uintptr_t ShapeCast = REBASE(0x58e10bc);
        inline const uintptr_t SphereCast = REBASE(0x58dfeb8);
        inline const uintptr_t WorldRootRaycast = REBASE(0x58dfb44);
    }

    namespace Raycast {
        inline constexpr uintptr_t FunctionPointerOffset = 0x88;
        inline const uintptr_t RaycastBoundDesc = REBASE(0x6f904b8);
        inline const uintptr_t RaycastFn = REBASE(0x58dfb44);
    }

    namespace Rendering {
        inline const uintptr_t CubeTextures = REBASE(0x22b1734);
        inline const uintptr_t DrawSkyEnv = REBASE(0x4f22d1c);
        inline const uintptr_t FastClusterEntityVTable = REBASE(0x6996f40);
        inline const uintptr_t SkyThread = REBASE(0x25e87ec);
    }

    namespace Input {
        inline const uintptr_t FireProximityPrompt = REBASE(0x4aedc60);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x5d98a68);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x40d44d0);
        inline const uintptr_t RakPeerProcessNetworkPacket = REBASE(0x40d8ff0);
        inline const uintptr_t RakPeerReceive = REBASE(0x40c9c7c);
        inline const uintptr_t RakPeerVirtualTable = REBASE(0x68847f8);
        inline const uintptr_t RaknetReceive = REBASE(0x40e472c);
        inline const uintptr_t ReportNetworkError = REBASE(0x5d9775c);
        inline const uintptr_t Send = REBASE(0x40d8ff0);
        inline const uintptr_t SendPacketsToSelf = REBASE(0x40c82c8);
        inline const uintptr_t UpdateNetworkLoop = REBASE(0x40c82c8);
    }

    namespace RbxTransport {
        inline const uintptr_t AppClose = REBASE(0x31ce874);
        inline const uintptr_t AppDeletingDestructor = REBASE(0x31cdcb0);
        inline const uintptr_t AppDestructor = REBASE(0x31cdb54);
        inline const uintptr_t AppReceive = REBASE(0x31cf9ec);
        inline const uintptr_t AppReceiveMaxBytes = REBASE(0x31d015c);
        inline const uintptr_t AppSend = REBASE(0x31cf24c);
        inline const uintptr_t AppTypeInfo = REBASE(0x67321d0);
        inline const uintptr_t AppVTable = REBASE(0x67320d8);
        inline const uintptr_t ClientChannelConfig = REBASE(0x50e12cc);
        inline const uintptr_t ClientDeletingDestructor = REBASE(0x50e2454);
        inline const uintptr_t ClientDestructor = REBASE(0x50e23f8);
        inline const uintptr_t ClientOpenChannels = REBASE(0x50e178c);
        inline const uintptr_t ClientReceive = REBASE(0x50e15e8);
        inline const uintptr_t ClientSend = REBASE(0x50e1118);
        inline const uintptr_t ClientSendShared = REBASE(0x50e12f8);
        inline const uintptr_t ClientTypeInfo = REBASE(0x69a8ec0);
        inline const uintptr_t ClientVTable = REBASE(0x69a8dd8);
        inline const uintptr_t GenerateRetryToken = REBASE(0x2e53338);
        inline const uintptr_t RetryTokenDecrypt = REBASE(0x2e2cd80);
        inline const uintptr_t RetryTokenEncrypt = REBASE(0x2e2cc18);
        inline const uintptr_t VerifyRetryToken = REBASE(0x2e53688);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x42c6354);
        inline const uintptr_t defer = REBASE(0x26c14c4);
        inline const uintptr_t delay = REBASE(0x266b63c);
        inline const uintptr_t desynchronize = REBASE(0x42c61f4);
        inline const uintptr_t spawn = REBASE(0x2650e28);
        inline const uintptr_t synchronize = REBASE(0x42c6094);
        inline const uintptr_t task_lib_init = REBASE(0x25bcbdc);
        inline const uintptr_t wait = REBASE(0x271f418);
    }

    namespace MathLib {
        inline const uintptr_t lua_math_abs = REBASE(0x42de938);
        inline const uintptr_t lua_math_acos = REBASE(0x42de96c);
        inline const uintptr_t lua_math_asin = REBASE(0x42de9a0);
        inline const uintptr_t lua_math_atan = REBASE(0x42dea28);
        inline const uintptr_t lua_math_atan2 = REBASE(0x42de9d4);
        inline const uintptr_t lua_math_ceil = REBASE(0x42dea5c);
        inline const uintptr_t lua_math_clamp = REBASE(0x42df6c0);
        inline const uintptr_t lua_math_cos = REBASE(0x42deac4);
        inline const uintptr_t lua_math_cosh = REBASE(0x42dea90);
        inline const uintptr_t lua_math_deg = REBASE(0x42deaf8);
        inline const uintptr_t lua_math_exp = REBASE(0x42deb34);
        inline const uintptr_t lua_math_floor = REBASE(0x42deb68);
        inline const uintptr_t lua_math_fmod = REBASE(0x42deb9c);
        inline const uintptr_t lua_math_frexp = REBASE(0x42debf0);
        inline const uintptr_t lua_math_isfinite = REBASE(0x42df944);
        inline const uintptr_t lua_math_isinf = REBASE(0x42df900);
        inline const uintptr_t lua_math_isnan = REBASE(0x42df8c8);
        inline const uintptr_t lua_math_ldexp = REBASE(0x42dec60);
        inline const uintptr_t lua_math_lerp = REBASE(0x42df858);
        inline const uintptr_t lua_math_log = REBASE(0x42dece4);
        inline const uintptr_t lua_math_log10 = REBASE(0x42decb0);
        inline const uintptr_t lua_math_map = REBASE(0x42df7c0);
        inline const uintptr_t lua_math_max = REBASE(0x42ded98);
        inline const uintptr_t lua_math_min = REBASE(0x42dee18);
        inline const uintptr_t lua_math_modf = REBASE(0x42dee98);
        inline const uintptr_t lua_math_noise = REBASE(0x42df2c8);
        inline const uintptr_t lua_math_pow = REBASE(0x42def1c);
        inline const uintptr_t lua_math_rad = REBASE(0x42def70);
        inline const uintptr_t lua_math_random = REBASE(0x42defac);
        inline const uintptr_t lua_math_randomseed = REBASE(0x42df16c);
        inline const uintptr_t lua_math_round = REBASE(0x42df78c);
        inline const uintptr_t lua_math_sign = REBASE(0x42df744);
        inline const uintptr_t lua_math_sin = REBASE(0x42df1f8);
        inline const uintptr_t lua_math_sinh = REBASE(0x42df1c4);
        inline const uintptr_t lua_math_sqrt = REBASE(0x42df22c);
        inline const uintptr_t lua_math_tan = REBASE(0x42df294);
        inline const uintptr_t lua_math_tanh = REBASE(0x42df260);
    }

    namespace OsLib {
        inline const uintptr_t lua_os_clock = REBASE(0x42dbc9c);
        inline const uintptr_t lua_os_date = REBASE(0x42dbcc8);
        inline const uintptr_t lua_os_difftime = REBASE(0x42dbff4);
        inline const uintptr_t lua_os_time = REBASE(0x42dc044);
    }

    namespace StringLib {
        inline const uintptr_t lua_string_byte = REBASE(0x42dc35c);
        inline const uintptr_t lua_string_char = REBASE(0x42dc484);
        inline const uintptr_t lua_string_find = REBASE(0x42dc55c);
        inline const uintptr_t lua_string_format = REBASE(0x42dc564);
        inline const uintptr_t lua_string_gmatch = REBASE(0x42dcb90);
        inline const uintptr_t lua_string_gsub = REBASE(0x42dcc00);
        inline const uintptr_t lua_string_len = REBASE(0x42dd074);
        inline const uintptr_t lua_string_lower = REBASE(0x42dd0d8);
        inline const uintptr_t lua_string_match = REBASE(0x42dd190);
        inline const uintptr_t lua_string_pack = REBASE(0x42dd844);
        inline const uintptr_t lua_string_packsize = REBASE(0x42ddc58);
        inline const uintptr_t lua_string_rep = REBASE(0x42dd198);
        inline const uintptr_t lua_string_reverse = REBASE(0x42dd2e0);
        inline const uintptr_t lua_string_split = REBASE(0x42dd520);
        inline const uintptr_t lua_string_sub = REBASE(0x42dd380);
        inline const uintptr_t lua_string_unpack = REBASE(0x42ddd48);
        inline const uintptr_t lua_string_upper = REBASE(0x42dd468);
    }

    namespace TableLib {
        inline const uintptr_t lua_table_clear = REBASE(0x32fd764);
        inline const uintptr_t lua_table_clone = REBASE(0x32fd880);
        inline const uintptr_t lua_table_concat = REBASE(0x32fcc88);
        inline const uintptr_t lua_table_create = REBASE(0x32fd4e4);
        inline const uintptr_t lua_table_find = REBASE(0x32fd588);
        inline const uintptr_t lua_table_foreach = REBASE(0x32fcdd0);
        inline const uintptr_t lua_table_foreachi = REBASE(0x32fce8c);
        inline const uintptr_t lua_table_freeze = REBASE(0x32fd7ac);
        inline const uintptr_t lua_table_getn = REBASE(0x32fcf54);
        inline const uintptr_t lua_table_insert = REBASE(0x32fd068);
        inline const uintptr_t lua_table_isfrozen = REBASE(0x32fd83c);
        inline const uintptr_t lua_table_maxn = REBASE(0x32fcf98);
        inline const uintptr_t lua_table_move = REBASE(0x32fd344);
        inline const uintptr_t lua_table_pack = REBASE(0x32fd298);
        inline const uintptr_t lua_table_remove = REBASE(0x32fd128);
        inline const uintptr_t lua_table_sort = REBASE(0x32fd1dc);
        inline const uintptr_t lua_table_unpack = REBASE(0x32fcb40);
    }

    namespace IntegerLib {
        inline const uintptr_t lua_integer_add = REBASE(0x42e1d40);
        inline const uintptr_t lua_integer_arshift = REBASE(0x42e26d0);
        inline const uintptr_t lua_integer_band = REBASE(0x42e223c);
        inline const uintptr_t lua_integer_bnot = REBASE(0x42e231c);
        inline const uintptr_t lua_integer_bor = REBASE(0x42e22ac);
        inline const uintptr_t lua_integer_bswap = REBASE(0x42e2a78);
        inline const uintptr_t lua_integer_btest = REBASE(0x42e2998);
        inline const uintptr_t lua_integer_bxor = REBASE(0x42e2350);
        inline const uintptr_t lua_integer_clamp = REBASE(0x42e21b8);
        inline const uintptr_t lua_integer_countlz = REBASE(0x42e2a44);
        inline const uintptr_t lua_integer_countrz = REBASE(0x42e2a0c);
        inline const uintptr_t lua_integer_create = REBASE(0x42e1c70);
        inline const uintptr_t lua_integer_div = REBASE(0x42e1e0c);
        inline const uintptr_t lua_integer_extract = REBASE(0x42e27f4);
        inline const uintptr_t lua_integer_fromstring = REBASE(0x42e2aac);
        inline const uintptr_t lua_integer_ge = REBASE(0x42e2528);
        inline const uintptr_t lua_integer_gt = REBASE(0x42e24e0);
        inline const uintptr_t lua_integer_idiv = REBASE(0x42e1fec);
        inline const uintptr_t lua_integer_le = REBASE(0x42e2408);
        inline const uintptr_t lua_integer_lrotate = REBASE(0x42e273c);
        inline const uintptr_t lua_integer_lshift = REBASE(0x42e2600);
        inline const uintptr_t lua_integer_lt = REBASE(0x42e23c0);
        inline const uintptr_t lua_integer_max = REBASE(0x42e1efc);
        inline const uintptr_t lua_integer_min = REBASE(0x42e1e84);
        inline const uintptr_t lua_integer_mod = REBASE(0x42e2130);
        inline const uintptr_t lua_integer_mul = REBASE(0x42e1dc8);
        inline const uintptr_t lua_integer_neg = REBASE(0x42e1d0c);
        inline const uintptr_t lua_integer_rem = REBASE(0x42e1f74);
        inline const uintptr_t lua_integer_replace = REBASE(0x42e28b8);
        inline const uintptr_t lua_integer_rrotate = REBASE(0x42e2798);
        inline const uintptr_t lua_integer_rshift = REBASE(0x42e2668);
        inline const uintptr_t lua_integer_sub = REBASE(0x42e1d84);
        inline const uintptr_t lua_integer_tonumber = REBASE(0x42e1cd8);
        inline const uintptr_t lua_integer_udiv = REBASE(0x42e207c);
        inline const uintptr_t lua_integer_uge = REBASE(0x42e25b8);
        inline const uintptr_t lua_integer_ugt = REBASE(0x42e2570);
        inline const uintptr_t lua_integer_ule = REBASE(0x42e2498);
        inline const uintptr_t lua_integer_ult = REBASE(0x42e2450);
        inline const uintptr_t lua_integer_urem = REBASE(0x42e20d4);
    }

    namespace Bit32Lib {
        inline const uintptr_t lua_bit32_arshift = REBASE(0x42e0420);
        inline const uintptr_t lua_bit32_band = REBASE(0x42e04a8);
        inline const uintptr_t lua_bit32_bnot = REBASE(0x42e04d8);
        inline const uintptr_t lua_bit32_bor = REBASE(0x42e050c);
        inline const uintptr_t lua_bit32_btest = REBASE(0x42e05ec);
        inline const uintptr_t lua_bit32_bxor = REBASE(0x42e057c);
        inline const uintptr_t lua_bit32_byteswap = REBASE(0x42e0950);
        inline const uintptr_t lua_bit32_countlz = REBASE(0x42e08bc);
        inline const uintptr_t lua_bit32_countrz = REBASE(0x42e0908);
        inline const uintptr_t lua_bit32_extract = REBASE(0x42e0620);
        inline const uintptr_t lua_bit32_lrotate = REBASE(0x42e06b0);
        inline const uintptr_t lua_bit32_lshift = REBASE(0x42e06f8);
        inline const uintptr_t lua_bit32_replace = REBASE(0x42e0764);
        inline const uintptr_t lua_bit32_rrotate = REBASE(0x42e0814);
        inline const uintptr_t lua_bit32_rshift = REBASE(0x42e0858);
    }

    namespace BufferLib {
        inline const uintptr_t lua_buffer_copy = REBASE(0x42e1684);
        inline const uintptr_t lua_buffer_create = REBASE(0x42e0a88);
        inline const uintptr_t lua_buffer_fill = REBASE(0x42e1788);
        inline const uintptr_t lua_buffer_fromstring = REBASE(0x42e0ad4);
        inline const uintptr_t lua_buffer_len = REBASE(0x42e1618);
        inline const uintptr_t lua_buffer_readbits = REBASE(0x42e1860);
        inline const uintptr_t lua_buffer_readf32 = REBASE(0x42e0fa0);
        inline const uintptr_t lua_buffer_readf64 = REBASE(0x42e1048);
        inline const uintptr_t lua_buffer_readi16 = REBASE(0x42e0d00);
        inline const uintptr_t lua_buffer_readi32 = REBASE(0x42e0e50);
        inline const uintptr_t lua_buffer_readi8 = REBASE(0x42e0bc0);
        inline const uintptr_t lua_buffer_readstring = REBASE(0x42e1444);
        inline const uintptr_t lua_buffer_readu16 = REBASE(0x42e0da8);
        inline const uintptr_t lua_buffer_readu32 = REBASE(0x42e0ef8);
        inline const uintptr_t lua_buffer_readu8 = REBASE(0x42e0c60);
        inline const uintptr_t lua_buffer_tostring = REBASE(0x42e0b54);
        inline const uintptr_t lua_buffer_writebits = REBASE(0x42e1964);
        inline const uintptr_t lua_buffer_writef32 = REBASE(0x42e12e8);
        inline const uintptr_t lua_buffer_writef64 = REBASE(0x42e1398);
        inline const uintptr_t lua_buffer_writei16 = REBASE(0x42e1190);
        inline const uintptr_t lua_buffer_writei32 = REBASE(0x42e123c);
        inline const uintptr_t lua_buffer_writei8 = REBASE(0x42e10ec);
        inline const uintptr_t lua_buffer_writestring = REBASE(0x42e1510);
        inline const uintptr_t lua_buffer_writeu16 = REBASE(0x42e1190);
        inline const uintptr_t lua_buffer_writeu32 = REBASE(0x42e123c);
        inline const uintptr_t lua_buffer_writeu8 = REBASE(0x42e10ec);
    }

    namespace VectorLib {
        inline const uintptr_t lua_vector_abs = REBASE(0x42e2f0c);
        inline const uintptr_t lua_vector_angle = REBASE(0x42e2d7c);
        inline const uintptr_t lua_vector_ceil = REBASE(0x42e2ec8);
        inline const uintptr_t lua_vector_clamp = REBASE(0x42e2fb8);
        inline const uintptr_t lua_vector_create = REBASE(0x42e2b6c);
        inline const uintptr_t lua_vector_cross = REBASE(0x42e2ca0);
        inline const uintptr_t lua_vector_dot = REBASE(0x42e2d14);
        inline const uintptr_t lua_vector_floor = REBASE(0x42e2e84);
        inline const uintptr_t lua_vector_lerp = REBASE(0x42e31f4);
        inline const uintptr_t lua_vector_magnitude = REBASE(0x42e2be8);
        inline const uintptr_t lua_vector_max = REBASE(0x42e30a4);
        inline const uintptr_t lua_vector_min = REBASE(0x42e314c);
        inline const uintptr_t lua_vector_normalize = REBASE(0x42e2c3c);
        inline const uintptr_t lua_vector_sign = REBASE(0x42e2f50);
    }

    namespace Utf8Lib {
        inline const uintptr_t lua_utf8_char = REBASE(0x42e005c);
        inline const uintptr_t lua_utf8_codepoint = REBASE(0x42dfec8);
        inline const uintptr_t lua_utf8_codes = REBASE(0x42e02bc);
        inline const uintptr_t lua_utf8_len = REBASE(0x42e0140);
        inline const uintptr_t lua_utf8_offset = REBASE(0x42dfce4);
    }

    namespace DebugLib {
        inline const uintptr_t lua_debug_info = REBASE(0x42df98c);
        inline const uintptr_t lua_debug_traceback = REBASE(0x42dfc20);
    }

    namespace CoroutineLib {
        inline const uintptr_t lua_coroutine_close = REBASE(0x42dbb94);
        inline const uintptr_t lua_coroutine_create = REBASE(0x42db6c8);
        inline const uintptr_t lua_coroutine_isyieldable = REBASE(0x42db7f4);
        inline const uintptr_t lua_coroutine_running = REBASE(0x42db70c);
        inline const uintptr_t lua_coroutine_status = REBASE(0x42db73c);
        inline const uintptr_t lua_coroutine_wrap = REBASE(0x42db79c);
        inline const uintptr_t lua_coroutine_yield = REBASE(0x42db7e0);
    }

    namespace ClassLib {
        inline const uintptr_t lua_class_classof = REBASE(0x42dae40);
        inline const uintptr_t lua_class_isinstance = REBASE(0x42dadbc);
    }

    namespace LuauAliases {
        inline const uintptr_t luaB_pcallcont = REBASE(0x32f86b8);
        inline const uintptr_t luaB_pcally = REBASE(0x32f8678);
        inline const uintptr_t luaL_tolstring = REBASE(0x32f82e8);
        inline const uintptr_t luaM_free_ = REBASE(0x25b3428);
        inline const uintptr_t luaM_freegco_ = REBASE(0x261b808);
        inline const uintptr_t luaM_newgco_ = REBASE(0x32e38d0);
        inline const uintptr_t luaO_nilobject_ = REBASE(0x84f3e0);
    }

    namespace LuauApi {
        inline const uintptr_t lua_addfinalizer = REBASE(0x32e279c);
        inline const uintptr_t lua_break = REBASE(0x32e8560);
        inline const uintptr_t lua_call = REBASE(0x2648af4);
        inline const uintptr_t lua_callbacks = REBASE(0x25b37b8);
        inline const uintptr_t lua_clonefunction = REBASE(0x2612bd4);
        inline const uintptr_t lua_concat = REBASE(0x32e2ab8);
        inline const uintptr_t lua_costatus = REBASE(0x26658b4);
        inline const uintptr_t lua_createtable = REBASE(0x25b4bc4);
        inline const uintptr_t lua_gc = REBASE(0x25b38a4);
        inline const uintptr_t lua_getargument = REBASE(0x32e442c);
        inline const uintptr_t lua_getfenv = REBASE(0x32e1fd0);
        inline const uintptr_t lua_getfield = REBASE(0x25b4db0);
        inline const uintptr_t lua_getinfo = REBASE(0x2608588);
        inline const uintptr_t lua_getlocal = REBASE(0x32e4530);
        inline const uintptr_t lua_getmetatable = REBASE(0x32e1e88);
        inline const uintptr_t lua_getreadonly = REBASE(0x261bc40);
        inline const uintptr_t lua_gettable = REBASE(0x32e1cc4);
        inline const uintptr_t lua_getweakref = REBASE(0x32e32c4);
        inline const uintptr_t lua_insert = REBASE(0x2612518);
        inline const uintptr_t lua_isLfunction = REBASE(0x32e1474);
        inline const uintptr_t lua_iscfunction = REBASE(0x32e13f8);
        inline const uintptr_t lua_isnumber = REBASE(0x2608410);
        inline const uintptr_t lua_isstring = REBASE(0x2648f64);
        inline const uintptr_t lua_isuserdata = REBASE(0x32e14f0);
        inline const uintptr_t lua_isyieldable = REBASE(0x26120e8);
        inline const uintptr_t lua_newbuffer = REBASE(0x32e2cac);
        inline const uintptr_t lua_newthread = REBASE(0x26010cc);
        inline const uintptr_t lua_newuserdatadtor = REBASE(0x32e2bd0);
        inline const uintptr_t lua_newuserdatatagged = REBASE(0x2612b04);
        inline const uintptr_t lua_next = REBASE(0x2619778);
        inline const uintptr_t lua_objlen = REBASE(0x26196cc);
        inline const uintptr_t lua_pcallyieldable = REBASE(0x32e2430);
        inline const uintptr_t lua_pushboolean = REBASE(0x260b0bc);
        inline const uintptr_t lua_pushcclosurek = REBASE(0x25b5104);
        inline const uintptr_t lua_pushfinalizerfunction = REBASE(0x32e25ac);
        inline const uintptr_t lua_pushinteger = REBASE(0x25bb42c);
        inline const uintptr_t lua_pushinteger64 = REBASE(0x32e1a44);
        inline const uintptr_t lua_pushlightuserdatatagged = REBASE(0x25bace8);
        inline const uintptr_t lua_pushlstring = REBASE(0x32e1b54);
        inline const uintptr_t lua_pushnil = REBASE(0x25b5c3c);
        inline const uintptr_t lua_pushnumber = REBASE(0x25b5924);
        inline const uintptr_t lua_pushthread = REBASE(0x25bd214);
        inline const uintptr_t lua_pushunsigned = REBASE(0x266c070);
        inline const uintptr_t lua_pushvalue = REBASE(0x25b3c28);
        inline const uintptr_t lua_pushvector = REBASE(0x32e1ac0);
        inline const uintptr_t lua_rawequal = REBASE(0x32e1558);
        inline const uintptr_t lua_rawget = REBASE(0x25b4a08);
        inline const uintptr_t lua_rawgetfield = REBASE(0x32e1d6c);
        inline const uintptr_t lua_rawgeti = REBASE(0x260714c);
        inline const uintptr_t lua_rawset = REBASE(0x25bad70);
        inline const uintptr_t lua_rawsetfield = REBASE(0x32e20e8);
        inline const uintptr_t lua_rawseti = REBASE(0x26250cc);
        inline const uintptr_t lua_rawsetptagged = REBASE(0x25bca44);
        inline const uintptr_t lua_ref = REBASE(0x25bd2b0);
        inline const uintptr_t lua_remove = REBASE(0x25b4d1c);
        inline const uintptr_t lua_replace = REBASE(0x2601a58);
        inline const uintptr_t lua_resume = REBASE(0x26081cc);
        inline const uintptr_t lua_resumeerror = REBASE(0x32e8360);
        inline const uintptr_t lua_setfenv = REBASE(0x32e21f0);
        inline const uintptr_t lua_setlocal = REBASE(0x32e460c);
        inline const uintptr_t lua_setmetatable = REBASE(0x25b55ac);
        inline const uintptr_t lua_setreadonly = REBASE(0x25b5488);
        inline const uintptr_t lua_setsafeenv = REBASE(0x2602b10);
        inline const uintptr_t lua_settable = REBASE(0x25b4c90);
        inline const uintptr_t lua_settop = REBASE(0x25b4b20);
        inline const uintptr_t lua_toboolean = REBASE(0x32e1748);
        inline const uintptr_t lua_tobuffer = REBASE(0x32e19b8);
        inline const uintptr_t lua_tointeger64 = REBASE(0x32e17c8);
        inline const uintptr_t lua_tointegerx = REBASE(0x26084c0);
        inline const uintptr_t lua_tolstring = REBASE(0x260508c);
        inline const uintptr_t lua_tonumberx = REBASE(0x260b410);
        inline const uintptr_t lua_tothread = REBASE(0x26511d4);
        inline const uintptr_t lua_tounsignedx = REBASE(0x266bfa8);
        inline const uintptr_t lua_tovector = REBASE(0x265f788);
        inline const uintptr_t lua_typename = REBASE(0x32e13d4);
        inline const uintptr_t lua_unref = REBASE(0x269bf90);
        inline const uintptr_t lua_xmove = REBASE(0x2651244);
        inline const uintptr_t lua_xpush = REBASE(0x2606d5c);
    }

    namespace LuauAux {
        inline const uintptr_t luaL_addlstring = REBASE(0x26134ac);
        inline const uintptr_t luaL_addvalue = REBASE(0x26133f4);
        inline const uintptr_t luaL_addvalueany = REBASE(0x261df6c);
        inline const uintptr_t luaL_buffinit = REBASE(0x2612d6c);
        inline const uintptr_t luaL_buffinitsize = REBASE(0x261b6b0);
        inline const uintptr_t luaL_callmeta = REBASE(0x261d0d8);
        inline const uintptr_t luaL_checkany = REBASE(0x26120a8);
        inline const uintptr_t luaL_checkboolean = REBASE(0x32f7ffc);
        inline const uintptr_t luaL_checkbuffer = REBASE(0x32f7f50);
        inline const uintptr_t luaL_checkinteger = REBASE(0x260b140);
        inline const uintptr_t luaL_checkinteger64 = REBASE(0x32f8094);
        inline const uintptr_t luaL_checknumber = REBASE(0x261d600);
        inline const uintptr_t luaL_checkstack = REBASE(0x261c278);
        inline const uintptr_t luaL_checkunsigned = REBASE(0x266bf34);
        inline const uintptr_t luaL_checkvector = REBASE(0x32f8130);
        inline const uintptr_t luaL_newmetatable = REBASE(0x25b6ac8);
        inline const uintptr_t luaL_optinteger64 = REBASE(0x32f80dc);
        inline const uintptr_t luaL_optlstring = REBASE(0x261bd88);
        inline const uintptr_t luaL_optnumber = REBASE(0x266b874);
        inline const uintptr_t luaL_optvector = REBASE(0x32f8168);
        inline const uintptr_t luaL_prepbuffsize = REBASE(0x261334c);
        inline const uintptr_t luaL_pushresult = REBASE(0x2613514);
        inline const uintptr_t luaL_pushresultsize = REBASE(0x32f84fc);
        inline const uintptr_t luaL_traceback = REBASE(0x26395a8);
        inline const uintptr_t luaL_typename = REBASE(0x32f81bc);
        inline const uintptr_t luaL_where = REBASE(0x32f7e70);
    }

    namespace LuauBuiltins {
        inline const uintptr_t luauF_readfp_double = REBASE(0x32fb404);
        inline const uintptr_t luauF_readfp_float = REBASE(0x32fb330);
        inline const uintptr_t luauF_readinteger_int16_t = REBASE(0x32fb0b8);
        inline const uintptr_t luauF_readinteger_int32_t = REBASE(0x32fb1f4);
        inline const uintptr_t luauF_readinteger_int8_t = REBASE(0x32faf88);
        inline const uintptr_t luauF_readinteger_uint16_t = REBASE(0x32fb120);
        inline const uintptr_t luauF_readinteger_uint32_t = REBASE(0x32fb25c);
        inline const uintptr_t luauF_readinteger_uint8_t = REBASE(0x32fafec);
        inline const uintptr_t luauF_writefp_double = REBASE(0x32fb468);
        inline const uintptr_t luauF_writefp_float = REBASE(0x32fb398);
        inline const uintptr_t luauF_writeinteger_uint16_t = REBASE(0x32fb188);
        inline const uintptr_t luauF_writeinteger_uint32_t = REBASE(0x32fb2c4);
        inline const uintptr_t luauF_writeinteger_uint8_t = REBASE(0x32fb050);
    }

    namespace LuauData {
        inline const uintptr_t luaT_eventname = REBASE(0x6762928);
        inline const uintptr_t luaT_typenames = REBASE(0x67628b8);
        inline const uintptr_t luauF_table = REBASE(0x6762b10);
    }

    namespace LuauHelpers {
        inline const uintptr_t luau_lapi_runfinalizery = REBASE(0x32e268c);
        inline const uintptr_t luau_laux_currfuncname = REBASE(0x32f7c98);
        inline const uintptr_t luau_laux_extendstrbuf = REBASE(0x32f81fc);
        inline const uintptr_t luau_lbaselib_auxopen = REBASE(0x32f8578);
        inline const uintptr_t luau_lbaselib_getfunc = REBASE(0x32f90d0);
        inline const uintptr_t luau_lcorolib_auxwrapfinish = REBASE(0x26661e0);
        inline const uintptr_t luau_ldblib_getthread = REBASE(0x26083b0);
        inline const uintptr_t luau_ldebug_pusherror = REBASE(0x32e4918);
        inline const uintptr_t luau_ldo_resume = REBASE(0x32e8158);
        inline const uintptr_t luau_ldo_resume_error = REBASE(0x32e8880);
        inline const uintptr_t luau_ldo_resume_finish = REBASE(0x32e8224);
        inline const uintptr_t luau_ldo_resume_handle = REBASE(0x32e8418);
        inline const uintptr_t luau_ldo_resume_start = REBASE(0x32e80bc);
        inline const uintptr_t luau_lgc_reallymarkobject = REBASE(0x32e5900);
        inline const uintptr_t luau_lstrlib_classend = REBASE(0x2613230);
        inline const uintptr_t luau_lstrlib_gmatch_aux = REBASE(0x263da2c);
        inline const uintptr_t luau_lstrlib_match = REBASE(0x2612d80);
        inline const uintptr_t luau_lstrlib_push_captures = REBASE(0x261c1f0);
        inline const uintptr_t luau_lstrlib_push_onecapture = REBASE(0x261336c);
        inline const uintptr_t luau_lstrlib_str_find_aux = REBASE(0x261be00);
        inline const uintptr_t luau_ltable_resize = REBASE(0x32e6308);
        inline const uintptr_t luau_ltablib_addfield = REBASE(0x26251b0);
        inline const uintptr_t luau_ltablib_moveelements = REBASE(0x32fd934);
        inline const uintptr_t luau_ltablib_sort_heap = REBASE(0x32fdd98);
        inline const uintptr_t luau_ltablib_sort_rec = REBASE(0x263d510);
        inline const uintptr_t luau_lutf8lib_buffutfchar = REBASE(0x263d448);
        inline const uintptr_t luau_lvmutils_callTMres = REBASE(0x32f3dcc);
    }

    namespace LuauInternals {
        inline const uintptr_t luaA_pushclass = REBASE(0x32e1350);
        inline const uintptr_t luaB_inext = REBASE(0x32f850c);
        inline const uintptr_t luaB_ipairs = REBASE(0x32f85dc);
        inline const uintptr_t luaB_newbuffer = REBASE(0x32fe3a8);
        inline const uintptr_t luaB_pairs = REBASE(0x32f862c);
        inline const uintptr_t luaB_xpcallcont = REBASE(0x32f87d8);
        inline const uintptr_t luaB_xpcally = REBASE(0x32f8764);
        inline const uintptr_t luaC_allocationrate = REBASE(0x26b30b4);
        inline const uintptr_t luaC_barrierback = REBASE(0x261b6e4);
        inline const uintptr_t luaC_barrierf = REBASE(0x266c0f0);
        inline const uintptr_t luaC_barriertable = REBASE(0x25bcf40);
        inline const uintptr_t luaC_enumheap = REBASE(0x32ff2c8);
        inline const uintptr_t luaD_call = REBASE(0x32e7e4c);
        inline const uintptr_t luaD_growCI = REBASE(0x260bba4);
        inline const uintptr_t luaD_growstack = REBASE(0x261ed70);
        inline const uintptr_t luaD_reallocstack = REBASE(0x2608264);
        inline const uintptr_t luaD_runfinalizers = REBASE(0x32e7f60);
        inline const uintptr_t luaE_newthread = REBASE(0x260119c);
        inline const uintptr_t luaF_getlocal = REBASE(0x32e5dc4);
        inline const uintptr_t luaG_aritherror = REBASE(0x32e4788);
        inline const uintptr_t luaG_indexerror = REBASE(0x272c888);
        inline const uintptr_t luaG_missingmembererror = REBASE(0x32e4870);
        inline const uintptr_t luaG_readonlyerror = REBASE(0x32e4904);
        inline const uintptr_t luaG_typeerrorL = REBASE(0x32e46e4);
        inline const uintptr_t luaH_clear = REBASE(0x265fb34);
        inline const uintptr_t luaH_get = REBASE(0x25b40b0);
        inline const uintptr_t luaH_getn = REBASE(0x32e7228);
        inline const uintptr_t luaH_getnum = REBASE(0x25b52f8);
        inline const uintptr_t luaH_getreadonly = REBASE(0x32e762c);
        inline const uintptr_t luaH_getstr = REBASE(0x25bbc30);
        inline const uintptr_t luaH_newkey = REBASE(0x25b46b8);
        inline const uintptr_t luaH_next = REBASE(0x261986c);
        inline const uintptr_t luaH_set = REBASE(0x25bae50);
        inline const uintptr_t luaH_setnum = REBASE(0x25bd3d0);
        inline const uintptr_t luaH_setreadonly = REBASE(0x32e7378);
        inline const uintptr_t luaM_new_ = REBASE(0x25af130);
        inline const uintptr_t luaO_rawequalKey = REBASE(0x25baeb8);
        inline const uintptr_t luaO_rawequalObj = REBASE(0x26125d0);
        inline const uintptr_t luaR_addclassmember = REBASE(0x32f7218);
        inline const uintptr_t luaR_defaultcreateobject = REBASE(0x32f76b4);
        inline const uintptr_t luaR_inheritclass = REBASE(0x32f6e38);
        inline const uintptr_t luaR_setupconstructor = REBASE(0x32f6d08);
        inline const uintptr_t luaU_newudata = REBASE(0x25bb12c);
        inline const uintptr_t luaV_callTM = REBASE(0x32f4044);
        inline const uintptr_t luaV_dolen = REBASE(0x264ae38);
        inline const uintptr_t luaV_tonumber = REBASE(0x261d9bc);
        inline const uintptr_t luauF_abs = REBASE(0x32f9244);
        inline const uintptr_t luauF_acos = REBASE(0x32f927c);
        inline const uintptr_t luauF_arshift = REBASE(0x32f9bd4);
        inline const uintptr_t luauF_asin = REBASE(0x32f92d0);
        inline const uintptr_t luauF_assert = REBASE(0x32f9210);
        inline const uintptr_t luauF_atan = REBASE(0x32f9388);
        inline const uintptr_t luauF_atan2 = REBASE(0x32f9324);
        inline const uintptr_t luauF_band = REBASE(0x32f9c34);
        inline const uintptr_t luauF_bnot = REBASE(0x32f9cc8);
        inline const uintptr_t luauF_bor = REBASE(0x32f9d0c);
        inline const uintptr_t luauF_btest = REBASE(0x32f9e34);
        inline const uintptr_t luauF_bufferreadlong = REBASE(0x32fc9b0);
        inline const uintptr_t luauF_bufferwritelong = REBASE(0x32fca14);
        inline const uintptr_t luauF_bxor = REBASE(0x32f9da0);
        inline const uintptr_t luauF_byte = REBASE(0x32fa1f4);
        inline const uintptr_t luauF_byteswap = REBASE(0x32faf44);
        inline const uintptr_t luauF_ceil = REBASE(0x32f93dc);
        inline const uintptr_t luauF_char = REBASE(0x32fa2c0);
        inline const uintptr_t luauF_clamp = REBASE(0x32fa524);
        inline const uintptr_t luauF_cos = REBASE(0x32f9468);
        inline const uintptr_t luauF_cosh = REBASE(0x32f9414);
        inline const uintptr_t luauF_countlz = REBASE(0x32fa9f0);
        inline const uintptr_t luauF_countrz = REBASE(0x32faa34);
        inline const uintptr_t luauF_deg = REBASE(0x32f94bc);
        inline const uintptr_t luauF_exp = REBASE(0x32f9500);
        inline const uintptr_t luauF_extract = REBASE(0x32f9ec8);
        inline const uintptr_t luauF_extractk = REBASE(0x32fab88);
        inline const uintptr_t luauF_floor = REBASE(0x32f9554);
        inline const uintptr_t luauF_fmod = REBASE(0x32f958c);
        inline const uintptr_t luauF_frexp = REBASE(0x32f95f0);
        inline const uintptr_t luauF_getmetatable = REBASE(0x32fabe4);
        inline const uintptr_t luauF_integeradd = REBASE(0x32fbcfc);
        inline const uintptr_t luauF_integerarshift = REBASE(0x32fc6a0);
        inline const uintptr_t luauF_integerband = REBASE(0x32fc1e0);
        inline const uintptr_t luauF_integerbnot = REBASE(0x32fc2b8);
        inline const uintptr_t luauF_integerbor = REBASE(0x32fc24c);
        inline const uintptr_t luauF_integerbswap = REBASE(0x32fc974);
        inline const uintptr_t luauF_integerbtest = REBASE(0x32fc888);
        inline const uintptr_t luauF_integerbxor = REBASE(0x32fc2f4);
        inline const uintptr_t luauF_integerclamp = REBASE(0x32fc170);
        inline const uintptr_t luauF_integercountlz = REBASE(0x32fc938);
        inline const uintptr_t luauF_integercountrz = REBASE(0x32fc8f8);
        inline const uintptr_t luauF_integercreate = REBASE(0x32fbc0c);
        inline const uintptr_t luauF_integerdiv = REBASE(0x32fbde0);
        inline const uintptr_t luauF_integerextract = REBASE(0x32fc7d8);
        inline const uintptr_t luauF_integerge = REBASE(0x32fc4dc);
        inline const uintptr_t luauF_integergt = REBASE(0x32fc490);
        inline const uintptr_t luauF_integeridiv = REBASE(0x32fbfcc);
        inline const uintptr_t luauF_integerle = REBASE(0x32fc3ac);
        inline const uintptr_t luauF_integerlrotate = REBASE(0x32fc718);
        inline const uintptr_t luauF_integerlshift = REBASE(0x32fc5c0);
        inline const uintptr_t luauF_integerlt = REBASE(0x32fc360);
        inline const uintptr_t luauF_integermax = REBASE(0x32fbed0);
        inline const uintptr_t luauF_integermin = REBASE(0x32fbe44);
        inline const uintptr_t luauF_integermod = REBASE(0x32fc0ec);
        inline const uintptr_t luauF_integermul = REBASE(0x32fbd94);
        inline const uintptr_t luauF_integerneg = REBASE(0x32fbcc0);
        inline const uintptr_t luauF_integerrem = REBASE(0x32fbf5c);
        inline const uintptr_t luauF_integerrrotate = REBASE(0x32fc778);
        inline const uintptr_t luauF_integerrshift = REBASE(0x32fc630);
        inline const uintptr_t luauF_integersub = REBASE(0x32fbd48);
        inline const uintptr_t luauF_integertonumber = REBASE(0x32fbc84);
        inline const uintptr_t luauF_integerudiv = REBASE(0x32fc048);
        inline const uintptr_t luauF_integeruge = REBASE(0x32fc574);
        inline const uintptr_t luauF_integerugt = REBASE(0x32fc528);
        inline const uintptr_t luauF_integerule = REBASE(0x32fc444);
        inline const uintptr_t luauF_integerult = REBASE(0x32fc3f8);
        inline const uintptr_t luauF_integerurem = REBASE(0x32fc098);
        inline const uintptr_t luauF_isfinite = REBASE(0x32fbbc0);
        inline const uintptr_t luauF_isinf = REBASE(0x32fbb78);
        inline const uintptr_t luauF_isnan = REBASE(0x32fbb3c);
        inline const uintptr_t luauF_ldexp = REBASE(0x32f9684);
        inline const uintptr_t luauF_len = REBASE(0x32fa3c8);
        inline const uintptr_t luauF_lerp = REBASE(0x32fba20);
        inline const uintptr_t luauF_log = REBASE(0x32f9740);
        inline const uintptr_t luauF_log10 = REBASE(0x32f96ec);
        inline const uintptr_t luauF_lrotate = REBASE(0x32f9f74);
        inline const uintptr_t luauF_lshift = REBASE(0x32f9fd0);
        inline const uintptr_t luauF_max = REBASE(0x32f97fc);
        inline const uintptr_t luauF_min = REBASE(0x32f9888);
        inline const uintptr_t luauF_modf = REBASE(0x32f9914);
        inline const uintptr_t luauF_pow = REBASE(0x32f99a4);
        inline const uintptr_t luauF_rad = REBASE(0x32f9a08);
        inline const uintptr_t luauF_rawequal = REBASE(0x32fa764);
        inline const uintptr_t luauF_rawget = REBASE(0x32fa70c);
        inline const uintptr_t luauF_rawlen = REBASE(0x32fab10);
        inline const uintptr_t luauF_rawset = REBASE(0x32fa618);
        inline const uintptr_t luauF_replace = REBASE(0x32fa030);
        inline const uintptr_t luauF_round = REBASE(0x32fa5e0);
        inline const uintptr_t luauF_rrotate = REBASE(0x32fa100);
        inline const uintptr_t luauF_rshift = REBASE(0x32fa158);
        inline const uintptr_t luauF_select = REBASE(0x32faa7c);
        inline const uintptr_t luauF_setmetatable = REBASE(0x32fac98);
        inline const uintptr_t luauF_sign = REBASE(0x32fa594);
        inline const uintptr_t luauF_sin = REBASE(0x32f9aa0);
        inline const uintptr_t luauF_sinh = REBASE(0x32f9a4c);
        inline const uintptr_t luauF_sqrt = REBASE(0x32f9af4);
        inline const uintptr_t luauF_sub = REBASE(0x32fa458);
        inline const uintptr_t luauF_tan = REBASE(0x32f9b80);
        inline const uintptr_t luauF_tanh = REBASE(0x32f9b2c);
        inline const uintptr_t luauF_tinsert = REBASE(0x32fa7b0);
        inline const uintptr_t luauF_tonumber = REBASE(0x32fad3c);
        inline const uintptr_t luauF_tostring = REBASE(0x32fadec);
        inline const uintptr_t luauF_tunpack = REBASE(0x32fa858);
        inline const uintptr_t luauF_type = REBASE(0x32fa1b8);
        inline const uintptr_t luauF_typeof = REBASE(0x32fa408);
        inline const uintptr_t luauF_vector = REBASE(0x32fa97c);
        inline const uintptr_t luauF_vectorabs = REBASE(0x32fb72c);
        inline const uintptr_t luauF_vectorceil = REBASE(0x32fb6dc);
        inline const uintptr_t luauF_vectorclamp = REBASE(0x32fb7f0);
        inline const uintptr_t luauF_vectorcross = REBASE(0x32fb59c);
        inline const uintptr_t luauF_vectordot = REBASE(0x32fb624);
        inline const uintptr_t luauF_vectorfloor = REBASE(0x32fb68c);
        inline const uintptr_t luauF_vectorlerp = REBASE(0x32fba90);
        inline const uintptr_t luauF_vectormagnitude = REBASE(0x32fb4d0);
        inline const uintptr_t luauF_vectormax = REBASE(0x32fb970);
        inline const uintptr_t luauF_vectormin = REBASE(0x32fb8c0);
        inline const uintptr_t luauF_vectornormalize = REBASE(0x32fb528);
        inline const uintptr_t luauF_vectorsign = REBASE(0x32fb77c);
        inline const uintptr_t luau_precall = REBASE(0x2604ddc);
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
            inline constexpr uintptr_t PlaceId = 0x360;
            inline constexpr uintptr_t PlaceVersion = 0x37c;
        }
        namespace DepthOfFieldEffect {
            inline constexpr uintptr_t Enabled = 0x95;
            inline constexpr uintptr_t FarIntensity = 0x98;
            inline constexpr uintptr_t FocusDistance = 0x9c;
            inline constexpr uintptr_t InFocusRadius = 0xa0;
            inline constexpr uintptr_t NearIntensity = 0xa4;
        }
        namespace DragDetector {
            inline constexpr uintptr_t ActivatedCursorIcon = 0x180;
            inline constexpr uintptr_t CursorIcon = 0xa0;
            inline constexpr uintptr_t MaxActivationDistance = 0xc8;
            inline constexpr uintptr_t MaxDragAngle = 0x270;
            inline constexpr uintptr_t MaxDragTranslation = 0x234;
            inline constexpr uintptr_t MaxForce = 0x274;
            inline constexpr uintptr_t MaxTorque = 0x278;
            inline constexpr uintptr_t MinDragAngle = 0x27c;
            inline constexpr uintptr_t MinDragTranslation = 0x240;
            inline constexpr uintptr_t ReferenceInstance = 0x1b8;
            inline constexpr uintptr_t Responsiveness = 0x288;
        }
        namespace GuiObject {
            inline constexpr uintptr_t BackgroundTransparency = 0x544;
            inline constexpr uintptr_t LayoutOrder = 0x55c;
            inline constexpr uintptr_t Position = 0x4f0;
            inline constexpr uintptr_t Rotation = 0x574;
            inline constexpr uintptr_t ScreenGui_Enabled = 0x4a4;
            inline constexpr uintptr_t Size = 0x510;
            inline constexpr uintptr_t Visible = 0x58d;
            inline constexpr uintptr_t ZIndex = 0x584;
        }
        namespace Humanoid {
            inline constexpr uintptr_t AutoJumpEnabled = 0x1b8;
            inline constexpr uintptr_t AutoRotate = 0x1b9;
            inline constexpr uintptr_t AutomaticScalingEnabled = 0x1ba;
            inline constexpr uintptr_t BreakJointsOnDeath = 0x1bb;
            inline constexpr uintptr_t CameraOffset = 0x100;
            inline constexpr uintptr_t DisplayDistanceType = 0x164;
            inline constexpr uintptr_t EvaluateStateMachine = 0x1bc;
            inline constexpr uintptr_t Health = 0x174;
            inline constexpr uintptr_t HealthDisplayDistance = 0x16c;
            inline constexpr uintptr_t HealthDisplayType = 0x170;
            inline constexpr uintptr_t HipHeight = 0x178;
            inline constexpr uintptr_t Jump = 0x1bf;
            inline constexpr uintptr_t JumpHeight = 0x184;
            inline constexpr uintptr_t JumpPower = 0x188;
            inline constexpr uintptr_t MaxHealth = 0x18c;
            inline constexpr uintptr_t MaxSlopeAngle = 0x190;
            inline constexpr uintptr_t MoveToPart = 0xf0;
            inline constexpr uintptr_t MoveToPoint = 0x148;
            inline constexpr uintptr_t NameDisplayDistance = 0x194;
            inline constexpr uintptr_t NameOcclusion = 0x198;
            inline constexpr uintptr_t PlatformStand = 0x1c1;
            inline constexpr uintptr_t RequiresNeck = 0x1c2;
            inline constexpr uintptr_t RigType = 0x1a4;
            inline constexpr uintptr_t SeatPart = 0xe0;
            inline constexpr uintptr_t Sit = 0x1c3;
            inline constexpr uintptr_t UseJumpPower = 0x1c5;
            inline constexpr uintptr_t Walkspeed = 0x1b4;
        }
        namespace Instance {
            inline constexpr uintptr_t Name = 0x68;
            inline constexpr uintptr_t Parent = 0x60;
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
        namespace MeshPart {
            inline constexpr uintptr_t MeshId = 0x2d0;
            inline constexpr uintptr_t Texture = 0x2f8;
        }
        namespace Misc {
            inline constexpr uintptr_t AnimationId = 0x98;
        }
        namespace Model {
            inline constexpr uintptr_t PrimaryPart = 0x200;
        }
        namespace ModuleScript {
            inline constexpr uintptr_t GUID = 0xb8;
            inline constexpr uintptr_t Hash = 0x120;
            inline constexpr uintptr_t Source = 0x108;
            inline constexpr uintptr_t LinkedSource = 0xe8;
            inline constexpr uintptr_t CachedRemoteSource = 0xa0;
            inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd0;
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
            inline constexpr uintptr_t AccountAge = 0x30c;
            inline constexpr uintptr_t CameraMode = 0x320;
            inline constexpr uintptr_t HealthDisplayDistance = 0x344;
            inline constexpr uintptr_t MaxZoomDistance = 0x318;
            inline constexpr uintptr_t MinZoomDistance = 0x31c;
            inline constexpr uintptr_t ModelInstance = 0x248;
            inline constexpr uintptr_t NameDisplayDistance = 0x354;
            inline constexpr uintptr_t TeamColor = 0x360;
        }
        namespace PlayerMouse {
            inline constexpr uintptr_t Icon = 0xa0;
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
            inline constexpr uintptr_t Enabled = 0x10e;
            inline constexpr uintptr_t GamepadKeyCode = 0xf4;
            inline constexpr uintptr_t HoldDuration = 0xf8;
            inline constexpr uintptr_t KeyCode = 0xfc;
            inline constexpr uintptr_t MaxActivationDistance = 0x100;
            inline constexpr uintptr_t RequiresLineOfSight = 0x10f;
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
            inline constexpr uintptr_t IsPlaying = 0x120;
            inline constexpr uintptr_t Looped = 0x11d;
            inline constexpr uintptr_t PlaybackSpeed = 0xfc;
            inline constexpr uintptr_t RollOffMaxDistance = 0x100;
            inline constexpr uintptr_t RollOffMinDistance = 0x104;
            inline constexpr uintptr_t SoundGroup = 0xc8;
            inline constexpr uintptr_t Volume = 0x110;
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
            inline const uintptr_t Pointer = REBASE(0x7304340);
        }
        namespace Team {
            inline constexpr uintptr_t BrickColor = 0xa0;
        }
        namespace Terrain {
            inline constexpr uintptr_t GrassLength = 0x1c8;
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
            inline constexpr uintptr_t AirProperties = 0x230;
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
            inline constexpr uintptr_t TextColor3 = 0xe88;
            inline constexpr uintptr_t RichText = 0xec5;
        }
        namespace TextButton {
            inline constexpr uintptr_t TextColor3 = 0x1110;
            inline constexpr uintptr_t RichText = 0x114d;
        }
        namespace TextBox {
            inline constexpr uintptr_t TextColor3 = 0xeac;
            inline constexpr uintptr_t RichText = 0xefe;
        }
        namespace ImageLabel {
            inline constexpr uintptr_t Image = 0xa70;
        }
        namespace ImageButton {
            inline constexpr uintptr_t Image = 0xd20;
        }
        namespace Shirt {
            inline constexpr uintptr_t ShirtTemplate = 0xd0;
        }
        namespace Pants {
            inline constexpr uintptr_t PantsTemplate = 0xa8;
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
        namespace ViewportFrame {
            inline constexpr uintptr_t CurrentCamera = 0x9c8;
            inline constexpr uintptr_t Size = 0x510;
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
        namespace Vector3Value {
            inline constexpr uintptr_t Value = 0xa0;
        }
    }
}
