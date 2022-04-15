#include "../winhttp.h"

//----- (0000000140109200) ----------------------------------------------------
__int64 __fastcall sub_140109200(__int64* a1, __int64 a2, int* a3)
{
	_QWORD* v6; // rdi
	int v7; // esi

	if (((a1[13] - a1[12]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		return 0i64;
	v6 = *(_QWORD**)a1[12];
	if (a3 && *(_WORD*)a3)
		v6 = (_QWORD*)sub_140108E00(a1, a3);
	v7 = sub_1401045A0(v6, *a1, a2);
	if (v7 >= 0)
		sub_140109100((__int64)a1, (__int64)v6);
	return (unsigned int)v7;
}

