#include "../winhttp.h"

//----- (000000014071C260) ----------------------------------------------------
__int64 __fastcall sub_14071C260(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r9
	int v3[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)(a1 + 324))
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 80i64))(a1, 1i64);
	if (*(_QWORD*)(a1 + 72) && (v2 = *(_QWORD*)(a1 + 224)) != 0)
	{
		v3[0] = 0;
		return (*(__int64(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, v3, 0i64);
	}
	else if (*(_QWORD*)(a1 + 224))
	{
		if (!*(_DWORD*)(a1 + 232))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 104i64))(a1);
	}
	return result;
}
// 14071C260: using guessed type int var_18[6];

