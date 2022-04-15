#include "../winhttp.h"

//----- (0000000140055050) ----------------------------------------------------
__int64 __fastcall sub_140055050(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	char v6; // [rsp+38h] [rbp+10h] BYREF

	if (!(unsigned __int8)SteamAPI_Init())
		return 2147500037i64;
	v3 = SteamUtils();
	*(_QWORD*)(a1 + 40) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 72i64))(v3);
	v4 = SteamUser();
	v5 = *(_QWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v4 + 16i64))(v4, &v6);
	result = 0i64;
	*(_QWORD*)(a1 + 48) = v5;
	return result;
}
// 140959C58: using guessed type __int64 SteamUtils(void);
// 140959C60: using guessed type __int64 SteamUser(void);
// 140959C80: using guessed type __int64 SteamAPI_Init(void);

