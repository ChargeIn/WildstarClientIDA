#include "../winhttp.h"

//----- (0000000140835CA0) ----------------------------------------------------
float __fastcall sub_140835CA0(_DWORD* a1, float a2, unsigned int a3, _DWORD* a4)
{
	unsigned int v4; // r10d
	__int64 v6; // rbx
	float v8; // xmm3_4
	__int64 v9; // rdx
	float* v10; // r8
	bool v11; // zf
	float v12; // xmm3_4
	int v14; // ecx
	double v15; // xmm0_8
	float v16; // xmm0_4
	int v17; // ecx
	float v18; // xmm0_4
	float v19; // xmm1_4
	float v20; // xmm1_4
	float v21; // [rsp+40h] [rbp+8h]

	v4 = a1[2];
	v6 = a3;
	if (v4 == 1)
	{
		v8 = *(float*)(*(_QWORD*)a1 + 4i64);
		goto LABEL_13;
	}
	if (a3 >= v4)
	{
	LABEL_11:
		v8 = v21;
		goto LABEL_12;
	}
	v9 = *(_QWORD*)a1;
	v10 = (float*)(*(_QWORD*)a1 + 12i64 * a3);
	while (1)
	{
		if (a2 <= *v10)
		{
		LABEL_23:
			v8 = *(float*)(v9 + 12 * v6 + 4);
			goto LABEL_12;
		}
		v11 = (_DWORD)v6 == v4 - 1;
		if ((unsigned int)v6 < v4 - 1)
			break;
	LABEL_9:
		if (v11)
			goto LABEL_23;
		v6 = (unsigned int)(v6 + 1);
		v10 += 3;
		if ((unsigned int)v6 >= v4)
			goto LABEL_11;
	}
	if (a2 >= *(float*)(v9 + 12i64 * (unsigned int)(v6 + 1)))
	{
		v11 = (_DWORD)v6 == v4 - 1;
		goto LABEL_9;
	}
	v14 = *(_DWORD*)(v9 + 12 * v6 + 8);
	if (v14 == 4)
	{
		v8 = (float)((float)((float)(a2 - *(float*)(v9 + 12 * v6))
			/ (float)(*(float*)(v9 + 12i64 * (unsigned int)(v6 + 1)) - *(float*)(v9 + 12 * v6)))
			* (float)(*(float*)(v9 + 12i64 * (unsigned int)(v6 + 1) + 4) - *(float*)(v9 + 12 * v6 + 4)))
			+ *(float*)(v9 + 12 * v6 + 4);
	}
	else if (v14 == 9)
	{
		v8 = *(float*)(v9 + 12 * v6 + 4);
	}
	else
	{
		v15 = sub_140837010(
			(float)(a2 - *(float*)(v9 + 12 * v6))
			/ (float)(*(float*)(v9 + 12i64 * (unsigned int)(v6 + 1)) - *(float*)(v9 + 12 * v6)),
			*(float*)(v9 + 12 * v6 + 4),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v9 + 12i64 * (unsigned int)(v6 + 1) + 4)),
			v14);
		v8 = *(float*)&v15;
	}
LABEL_12:
	*a4 = v6;
LABEL_13:
	switch (a1[3])
	{
	case 2:
		if (v8 >= 0.0)
		{
			if (v8 >= 1.0)
			{
				return 4096.0;
			}
			else
			{
				v20 = (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(1.0 - v8) & 0x7FFFFF) + 1065353216) - 1.0)
					/ (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(1.0 - v8) & 0x7FFFFF) + 1065353216) + 1.0);
				return (float)((float)((float)((float)((float)((float)(v20 * v20) * 0.33333334) + 1.0) * (float)(v20 * 2.0))
					+ (float)((float)((float)(unsigned __int8)(COERCE_UNSIGNED_INT(1.0 - v8) >> 23) - 127.0)
						* 0.69314718))
					* -0.43429449)
					* 20.0;
			}
		}
		else if (v8 <= -1.0)
		{
			return -4096.0;
		}
		else
		{
			v19 = (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(v8 + 1.0) & 0x7FFFFF) + 1065353216) - 1.0)
				/ (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(v8 + 1.0) & 0x7FFFFF) + 1065353216) + 1.0);
			return (float)((float)((float)((float)((float)((float)(v19 * v19) * 0.33333334) + 1.0) * (float)(v19 * 2.0))
				+ (float)((float)((float)(unsigned __int8)(COERCE_UNSIGNED_INT(v8 + 1.0) >> 23) - 127.0)
					* 0.69314718))
				* 0.43429449)
				* 20.0;
		}
	case 3:
		if (v8 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v18 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v18 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			v17 = (int)(float)((float)(v18 * v8) + 1065353200.0);
			return (float)((float)((float)((float)(COERCE_FLOAT((v17 & 0x7FFFFF) + 1065353216) * 0.32518977) + 0.020805772)
				* COERCE_FLOAT((v17 & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT(v17 & 0xFF800000);
		}
		return 0.0;
	case 4:
		v12 = v8 * 0.050000001;
		if (v12 < -37.0)
			return 0.0;
		if ((dword_140C61BFC & 1) != 0)
		{
			v16 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v16 = 27866352.0;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v17 = (int)(float)((float)(v12 * v16) + 1065353200.0);
		return (float)((float)((float)((float)(COERCE_FLOAT((v17 & 0x7FFFFF) + 1065353216) * 0.32518977) + 0.020805772)
			* COERCE_FLOAT((v17 & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT(v17 & 0xFF800000);
	default:
		return v8;
	}
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

