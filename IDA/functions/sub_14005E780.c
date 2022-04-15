#include "../winhttp.h"

//----- (000000014005E780) ----------------------------------------------------
__int64 __fastcall sub_14005E780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // r10
	__int64 v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rdx
	int v10; // edx
	int v11; // edx
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 result; // rax

	v5 = *(_QWORD*)(a1 + 16);
	v7 = a2 - *(_QWORD*)(a1 + 64);
	*(_QWORD*)v5 = *(_QWORD*)a3;
	*(_DWORD*)(v5 + 8) = *(_DWORD*)(a3 + 8);
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(v8 + 16) = *(_QWORD*)a4;
	*(_DWORD*)(v8 + 24) = *(_DWORD*)(a4 + 8);
	v9 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(v9 + 32) = *(_QWORD*)a5;
	*(_DWORD*)(v9 + 40) = *(_DWORD*)(a5 + 8);
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 48)
	{
		v10 = *(_DWORD*)(a1 + 88);
		if (v10 < 3)
			v11 = v10 + 3;
		else
			v11 = 2 * v10;
		sub_140061210(a1, v11);
	}
	*(_QWORD*)(a1 + 16) += 48i64;
	sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 48i64), 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v12 = *(_QWORD*)(a1 + 16);
	v13 = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(v13 + v7) = *(_QWORD*)v12;
	result = *(unsigned int*)(v12 + 8);
	*(_DWORD*)(v13 + v7 + 8) = result;
	return result;
}

