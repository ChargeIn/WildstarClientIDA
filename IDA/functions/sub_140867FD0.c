#include "../winhttp.h"

//----- (0000000140867FD0) ----------------------------------------------------
__int64 __fastcall sub_140867FD0(__int64 a1, int a2)
{
	float v2; // xmm2_4
	unsigned __int8 v3; // si
	float v5; // xmm0_4
	double v6; // xmm0_8
	char v7; // cl
	float v8; // xmm6_4
	float v9; // xmm1_4
	_QWORD** v10; // rbx

	v2 = *(float*)(a1 + 24);
	v3 = 0;
	if (v2 == 0.0 || (v5 = (float)((float)a2 - *(float*)(a1 + 20)) / v2, *(float*)(a1 + 28) = v5, v5 >= 1.0))
	{
		v8 = *(float*)(a1 + 12);
		v7 = *(_BYTE*)(a1 + 72);
		v3 = 1;
	}
	else
	{
		if (v5 < 0.0)
			*(_DWORD*)(a1 + 28) = 0;
		v6 = sub_140837010(
			*(float*)(a1 + 28),
			*(float*)(a1 + 8),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 12)),
			*(_DWORD*)(a1 + 64));
		v7 = *(_BYTE*)(a1 + 72);
		v8 = *(float*)&v6;
	}
	if ((v7 & 1) != 0)
	{
		v9 = (float)(COERCE_FLOAT((LODWORD(v8) & 0x7FFFFF) + 1065353216) - 1.0)
			/ (float)(COERCE_FLOAT((LODWORD(v8) & 0x7FFFFF) + 1065353216) + 1.0);
		v8 = (float)((float)((float)((float)((float)((float)(v9 * v9) * 0.33333334) + 1.0) * (float)(v9 * 2.0))
			+ (float)((float)((float)(unsigned __int8)(LODWORD(v8) >> 23) - 127.0) * 0.69314718))
			* 0.43429449)
			* 20.0;
	}
	v10 = *(_QWORD***)(a1 + 40);
	*(float*)(a1 + 16) = v8;
	for (*(_BYTE*)(a1 + 72) = v7 | 2; v10 != *(_QWORD***)(a1 + 48); ++v10)
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD)) * *v10)(*v10, *(_QWORD*)a1, **v10, v3);
	return v3;
}

