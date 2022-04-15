#include "../winhttp.h"

//----- (00000001401724E0) ----------------------------------------------------
__int64 __fastcall sub_1401724E0(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // eax
	int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // r8
	_QWORD* v10; // r8
	bool v11; // cl
	_QWORD* v12; // rax
	bool v13; // zf
	__int64 result; // rax
	int v15; // ecx
	__int64 v16; // rdx

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = v3;
	if ((unsigned int)(v3 + 1) <= 1)
		return 0i64;
	if (v3 < 0)
		return 0i64;
	v5 = (__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3;
	if (v3 >= (int)v5)
		return 0i64;
	v6 = *(_QWORD*)(v2 + 1416);
	v7 = *(_QWORD*)(v6 + 8i64 * v3);
	if (!v7)
		return 0i64;
	v8 = *(int*)(v7 + 104);
	if ((int)v8 < 0)
		return 0i64;
	if ((int)v8 >= (int)v5)
		return 0i64;
	v9 = *(_QWORD*)(v6 + 8 * v8);
	if (!v9)
		return 0i64;
	v10 = *(_QWORD**)(v9 + 96);
	v11 = 0;
	v12 = (_QWORD*)*v10;
	if ((_QWORD*)*v10 == v10)
		return 0i64;
	while (!v11)
	{
		v13 = *((_DWORD*)v12 + 4) == v4;
		v12 = (_QWORD*)*v12;
		v11 = v13;
		if (v12 == v10)
			return 0i64;
	}
	v15 = *((_DWORD*)v12 + 4);
	if (v15 == -1)
		return 0i64;
	v16 = a1[2];
	*(_DWORD*)(v16 + 8) = 3;
	result = 1i64;
	*(double*)v16 = (double)v15;
	a1[2] += 16i64;
	return result;
}

