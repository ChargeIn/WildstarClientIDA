#include "../winhttp.h"

//----- (0000000140336750) ----------------------------------------------------
__int64 __fastcall sub_140336750(_QWORD* a1)
{
	_QWORD* v1; // rax
	__int64 v3; // r10
	_QWORD* v5; // rcx
	__int64 v6; // r9
	_QWORD* i; // r8
	__int64 v8; // rax
	__int64 v9; // rax

	v1 = (_QWORD*)a1[4];
	if (!v1)
		return sub_1403366F0(a1);
	v3 = a1[1];
	if (v3)
	{
		v5 = (_QWORD*)a1[5];
		v6 = 0i64;
		if (!v5)
			v5 = (_QWORD*)*v1;
		for (i = (_QWORD*)v5[7]; i; v6 += 8 * v8)
		{
			v8 = v5[4] - v5[2];
			v5 = i;
			i = (_QWORD*)i[7];
		}
		v9 = a1[2];
		a1[5] = 0i64;
		return v6 + v9 + 8i64 * (*(_QWORD*)(v3 + 32) - *(_QWORD*)(v3 + 16));
	}
	else
	{
		a1[5] = 0i64;
		return 0i64;
	}
}

