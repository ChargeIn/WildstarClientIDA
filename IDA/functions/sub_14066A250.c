#include "../winhttp.h"

//----- (000000014066A250) ----------------------------------------------------
__int64 __fastcall sub_14066A250(_QWORD* a1)
{
	__int64 v2; // rax
	int* v3; // rdx

	v2 = sub_140056AB0(a1, 1u);
	v3 = (int*)a1[2];
	if (v2)
		*v3 = (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 12i64) >> 23) & 1;
	else
		*v3 = 0;
	v3[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}

