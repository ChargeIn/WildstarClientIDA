#include "../winhttp.h"

//----- (000000014005E840) ----------------------------------------------------
__int64 __fastcall sub_14005E840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // r10
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rdx
	int v10; // edx
	int v11; // edx

	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = *(_QWORD*)a2;
	*(_DWORD*)(v5 + 8) = *(_DWORD*)(a2 + 8);
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(v7 + 16) = *(_QWORD*)a3;
	*(_DWORD*)(v7 + 24) = *(_DWORD*)(a3 + 8);
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(v8 + 32) = *(_QWORD*)a4;
	*(_DWORD*)(v8 + 40) = *(_DWORD*)(a4 + 8);
	v9 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(v9 + 48) = *(_QWORD*)a5;
	*(_DWORD*)(v9 + 56) = *(_DWORD*)(a5 + 8);
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 64)
	{
		v10 = *(_DWORD*)(a1 + 88);
		if (v10 < 4)
			v11 = v10 + 4;
		else
			v11 = 2 * v10;
		sub_140061210(a1, v11);
	}
	*(_QWORD*)(a1 + 16) += 64i64;
	return sub_140061D30(a1, *(_QWORD*)(a1 + 16) - 64i64, 0i64);
}
// 140061D30: using guessed type __int64 __fastcall sub_140061D30(_QWORD, _QWORD, _QWORD);

