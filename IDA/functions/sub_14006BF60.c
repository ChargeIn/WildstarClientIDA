#include "../winhttp.h"

//----- (000000014006BF60) ----------------------------------------------------
__int64 __fastcall sub_14006BF60(__int64 a1, _WORD* a2, unsigned __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rbp
	__int16 v7; // ax
	__int64 result; // rax
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	if (v3
		&& (v6 = *(_QWORD*)(a1 + 24),
			(unsigned __int64)(8i64 * *(_QWORD*)(v3 + 32) - 8 * v6 - *(_QWORD*)(a1 + 32)) >= 0x40))
	{
		v7 = sub_1400A71C0((_QWORD*)(a1 + 24), (__int64*)(a1 + 32), a3);
		*(_DWORD*)(a1 + 8) += *(_DWORD*)(a1 + 24) - v6;
		*a2 = v7;
		return 0i64;
	}
	else
	{
		result = sub_140336D60(a1, &v9, a3);
		*a2 = v9;
	}
	return result;
}

