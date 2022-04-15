#include "../winhttp.h"

//----- (00000001400F0FB0) ----------------------------------------------------
__int64 __fastcall sub_1400F0FB0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	__int64* v5; // rdi
	_DWORD* v7; // rax
	__int64 result; // rax

	*a4 += 8i64;
	v5 = *(__int64**)(*a4 - 8i64);
	v7 = sub_1400580E0(a2, a3);
	if (v7[2] != 4)
	{
		result = sub_14005E620(a2, (__int64)v7);
		if (!(_DWORD)result)
		{
			*v5 = 0i64;
			return result;
		}
		if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
			sub_14005E2C0(a2);
		v7 = sub_1400580E0(a2, a3);
	}
	result = *(_QWORD*)v7 + 32i64;
	*v5 = result;
	return result;
}

