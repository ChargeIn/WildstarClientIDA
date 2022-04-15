#include "../winhttp.h"

//----- (0000000140023230) ----------------------------------------------------
__int64 __fastcall sub_140023230(__int64 a1, unsigned int* a2)
{
	signed int v2; // ebx
	_QWORD* v4; // rsi
	__int64 v5; // r8
	_QWORD* v6; // rdx
	_QWORD* v7; // rcx

	v2 = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	if (!*a2)
		return 0i64;
	v4 = (_QWORD*)(a1 + 280);
	sub_1400076E0((__int64*)(a1 + 280), *a2);
	if ((int)*a2 > 0)
	{
		v5 = 0i64;
		do
		{
			++v2;
			v6 = (_QWORD*)(v5 + *((_QWORD*)a2 + 1));
			v7 = (_QWORD*)(v5 + *v4);
			v5 += 64i64;
			*v7 = *v6;
			v7[1] = v6[1];
			v7[2] = v6[2];
			v7[3] = v6[3];
			v7[4] = v6[4];
			v7[5] = v6[5];
			v7[6] = v6[6];
			v7[7] = v6[7];
		} while (v2 < (int)*a2);
	}
	return 0i64;
}

