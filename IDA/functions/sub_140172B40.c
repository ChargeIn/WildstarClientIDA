#include "../winhttp.h"

//----- (0000000140172B40) ----------------------------------------------------
__int64 __fastcall sub_140172B40(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	int v4; // r8d
	__int64 v5; // rcx
	_QWORD** v6; // rcx
	int v7; // edx
	_QWORD* i; // rax
	bool v9; // al
	_DWORD* v10; // rcx
	bool v11; // zf
	__int64 result; // rax

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = 0;
	if (v3 >= 0
		&& v3 < (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3)
		&& (v5 = *(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8i64 * v3)) != 0)
	{
		v6 = *(_QWORD***)(v5 + 96);
		v7 = 0;
		for (i = *v6; i != v6; ++v7)
			i = (_QWORD*)*i;
		v9 = v7 != 0;
	}
	else
	{
		v9 = 0;
	}
	v10 = (_DWORD*)a1[2];
	v11 = !v9;
	result = 1i64;
	LOBYTE(v4) = !v11;
	v10[2] = 1;
	*v10 = v4;
	a1[2] += 16i64;
	return result;
}

