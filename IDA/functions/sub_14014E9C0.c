#include "../winhttp.h"

//----- (000000014014E9C0) ----------------------------------------------------
__int64 __fastcall sub_14014E9C0(__int128* a1, __int64 a2, _DWORD* a3)
{
	double v5; // xmm7_8
	double v6; // xmm6_8
	__int128 v7; // xmm0
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm0_4
	__int64 v11; // rcx
	__int64 v12; // rcx

	*(_QWORD*)&v5 = COERCE_UNSIGNED_INT((float)(a3[2] - *a3));
	*(_QWORD*)&v6 = COERCE_UNSIGNED_INT((float)(a3[3] - a3[1]));
	if ((a1[5] & 1) != 0)
	{
		v7 = *a1;
		*(_OWORD*)(a2 + 16) = *a1;
		*(_OWORD*)a2 = v7;
	}
	else
	{
		v8 = *((_QWORD*)a1 + 2);
		if (v8)
			*(_DWORD*)a2 = sub_14014E200(v8, v5).m128_u32[0];
		else
			*(float*)a2 = *(float*)&v5 * *((float*)a1 + 12);
		v9 = *((_QWORD*)a1 + 3);
		if (v9)
			LODWORD(v10) = sub_14014E200(v9, v6).m128_u32[0];
		else
			v10 = *(float*)&v6 * *((float*)a1 + 13);
		*(float*)(a2 + 4) = v10;
		v11 = *((_QWORD*)a1 + 4);
		if (v11)
			*(_DWORD*)(a2 + 16) = sub_14014E200(v11, v5).m128_u32[0];
		else
			*(float*)(a2 + 16) = *(float*)&v5 * *((float*)a1 + 14);
		v12 = *((_QWORD*)a1 + 5);
		if (v12)
			*(_DWORD*)(a2 + 20) = sub_14014E200(v12, v6).m128_u32[0];
		else
			*(float*)(a2 + 20) = *(float*)&v6 * *((float*)a1 + 15);
	}
	return a2;
}

