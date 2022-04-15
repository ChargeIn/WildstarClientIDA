#include "../winhttp.h"

//----- (00000001403366F0) ----------------------------------------------------
__int64 __fastcall sub_1403366F0(_QWORD* a1)
{
	__int64 v1; // r10
	_QWORD* v4; // rcx
	__int64 v5; // r8
	_QWORD* v6; // rcx
	_QWORD* i; // rdx
	__int64 v8; // rax

	v1 = a1[1];
	if (!v1)
		return 0i64;
	v4 = (_QWORD*)a1[4];
	v5 = 0i64;
	if (v4)
	{
		v6 = (_QWORD*)*v4;
		for (i = (_QWORD*)v6[7]; i; v5 += 8 * v8)
		{
			v8 = v6[4] - v6[2];
			v6 = i;
			i = (_QWORD*)i[7];
		}
	}
	return v5 + a1[2] + 8i64 * (*(_QWORD*)(v1 + 32) - *(_QWORD*)(v1 + 16));
}

