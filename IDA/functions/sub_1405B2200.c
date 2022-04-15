#include "../winhttp.h"

//----- (00000001405B2200) ----------------------------------------------------
_QWORD* __fastcall sub_1405B2200(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // r10
	unsigned __int64 v4; // rdx
	__int64 i; // rdx
	__int64 v6; // rax

	v3 = a2;
	v4 = (__int64)((unsigned __int128)(((__int64)a2 - a1) * (__int128)0x4EC4EC4EC4EC4EC5i64) >> 64) >> 5;
	for (i = (v4 >> 63) + v4; i > 0; a3[12] = v3[12])
	{
		v6 = *(v3 - 13);
		a3 -= 13;
		v3 -= 13;
		*a3 = v6;
		--i;
		a3[1] = v3[1];
		a3[2] = v3[2];
		a3[3] = v3[3];
		a3[4] = v3[4];
		a3[5] = v3[5];
		a3[6] = v3[6];
		a3[7] = v3[7];
		a3[8] = v3[8];
		a3[9] = v3[9];
		a3[10] = v3[10];
		a3[11] = v3[11];
	}
	return a3;
}

