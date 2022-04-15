#include "../winhttp.h"

//----- (0000000140653E20) ----------------------------------------------------
__int64 __fastcall sub_140653E20(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	unsigned int v4; // eax
	_DWORD* v5; // rcx
	BOOL v6; // edx
	BOOL* v7; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v6 = 0;
		goto LABEL_7;
	}
	v4 = sub_140056D60(a1, 2u);
	if (v4 < 0x1C)
	{
		v6 = *(_QWORD*)(v3 + 16i64 * (int)v4 + 728) != 0i64;
	LABEL_7:
		v7 = (BOOL*)a1[2];
		v7[2] = 1;
		*v7 = v6;
		goto LABEL_8;
	}
	v5 = (_DWORD*)a1[2];
	*v5 = 0;
	v5[2] = 1;
LABEL_8:
	a1[2] += 16i64;
	return 1i64;
}
// 140653E75: conditional instruction was optimized away because eax.4<1Cu
// 140C65898: using guessed type __int64 qword_140C65898;

