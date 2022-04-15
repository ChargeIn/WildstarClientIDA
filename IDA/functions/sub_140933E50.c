#include "../winhttp.h"

//----- (0000000140933E50) ----------------------------------------------------
double __fastcall sub_140933E50(double a1)
{
	unsigned __int64 v1; // rdx
	int v2; // ecx
	__int64 v4; // xmm6_8
	double v5; // xmm6_8
	double v6; // xmm3_8
	double v7; // xmm4_8
	double v8; // xmm5_8
	double v9; // [rsp+70h] [rbp+8h]
	double v10; // [rsp+78h] [rbp+10h]

	v9 = 0.0;
	v1 = *(_QWORD*)&a1 & 0x8000000000000000ui64;
	v2 = ((*(_QWORD*)&a1 >> 52) & 0x7FF) - 1023;
	if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) > 0x7FF0000000000000i64)
		return sub_1407EFC20(
			(__int64)"acos",
			13,
			*(_QWORD*)&a1 | 0x8000000000000i64,
			1,
			0,
			0x21u,
			*(__int64*)&a1,
			0i64,
			1);
	if (v2 < -56)
	{
		v4 = 0x3FF921FB54442D18i64;
		goto LABEL_11;
	}
	if (v2 >= 0)
	{
		if (a1 == 1.0)
			return 0.0;
		if (a1 != -1.0)
			return sub_1407EFC20((__int64)"acos", 13, 0xFFF8000000000000ui64, 1, 8, 0x21u, *(__int64*)&a1, 0i64, 1);
		v4 = 0x400921FB54442D18i64;
	LABEL_11:
		sub_1407F662C(32);
		return *(double*)&v4;
	}
	v5 = a1;
	if (v1)
		v5 = -a1;
	if (v2 < -1)
	{
		v7 = 0.0;
		v6 = v5 * v5;
		v10 = v5 * v5;
	}
	else
	{
		v6 = (1.0 - v5) * 0.5;
		v10 = v6;
		v9 = sqrt(v6);
		v7 = v9;
		v5 = v9;
	}
	v8 = (((((v6 * 0.0000482901920344787 + 0.001092426972350747) * v6 - 0.05499898092356859) * v6 + 0.2755581752569377)
		* v6
		- 0.4450172168676356)
		* v6
		+ 0.227485835556935)
		* v6
		/ ((((v6 * 0.1058694220872044 - 0.9436391370324927) * v6 + 2.76568859157271) * v6 - 3.284315057209587) * v6
			+ 1.36491501334161);
	if (v2 < -1)
		return 1.570796326794897 - (a1 - (6.123233995736766e-17 - v8 * a1));
	if (v1)
		return 3.141592653589793 - (v8 * v5 - 6.123233995736766e-17 + v7) * 2.0;
	return (v10
		- COERCE_DOUBLE(*(_QWORD*)&v7 & 0xFFFFFFFF00000000ui64)
		* COERCE_DOUBLE(*(_QWORD*)&v7 & 0xFFFFFFFF00000000ui64))
		/ (COERCE_DOUBLE(*(_QWORD*)&v7 & 0xFFFFFFFF00000000ui64) + v9)
		* 2.0
		+ v5 * 2.0 * v8
		+ COERCE_DOUBLE(*(_QWORD*)&v7 & 0xFFFFFFFF00000000ui64) * 2.0;
}

