#include "../winhttp.h"

//----- (00000001408358D0) ----------------------------------------------------
__int64 __fastcall sub_1408358D0(_DWORD* a1, float a2, unsigned int a3, _DWORD* a4)
{
	unsigned int v4; // r10d
	__int64 v6; // rbx
	int v8; // edx
	__int64 v9; // rdx
	float* v10; // r8
	bool v11; // zf
	float v12; // xmm0_4
	int v13; // eax
	float v14; // xmm2_4
	double v15; // xmm0_8
	float v17; // xmm1_4
	float v18; // xmm1_4
	int v19; // eax
	float v20; // xmm1_4
	float v21; // xmm3_4
	int v22; // eax
	float v23; // xmm1_4
	int v24; // [rsp+40h] [rbp+8h]

	v4 = a1[2];
	v6 = a3;
	if (v4 == 1)
	{
		v8 = *(_DWORD*)(*(_QWORD*)a1 + 4i64);
		goto LABEL_13;
	}
	if (a3 >= v4)
	{
	LABEL_11:
		v8 = v24;
		goto LABEL_12;
	}
	v9 = *(_QWORD*)a1;
	v10 = (float*)(*(_QWORD*)a1 + 12i64 * a3);
	while (1)
	{
		if (a2 <= *v10)
		{
		LABEL_22:
			v8 = *(_DWORD*)(v9 + 12 * v6 + 4);
			goto LABEL_12;
		}
		v11 = (_DWORD)v6 == v4 - 1;
		if ((unsigned int)v6 < v4 - 1)
			break;
	LABEL_9:
		if (v11)
			goto LABEL_22;
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
	v13 = *(_DWORD*)(v9 + 12 * v6 + 8);
	if (v13 == 4)
	{
		v14 = (float)*(int*)(v9 + 12 * v6 + 4);
		v8 = (int)(float)((float)((float)((float)(a2 - *(float*)(v9 + 12 * v6))
			/ (float)(*(float*)(v9 + 12i64 * (unsigned int)(v6 + 1)) - *(float*)(v9 + 12 * v6)))
			* (float)((float)*(int*)(v9 + 12i64 * (unsigned int)(v6 + 1) + 4) - v14))
			+ v14);
	}
	else if (v13 == 9)
	{
		v8 = *(_DWORD*)(v9 + 12 * v6 + 4);
	}
	else
	{
		v15 = sub_140837010(
			(float)(a2 - *(float*)(v9 + 12 * v6))
			/ (float)(*(float*)(v9 + 12i64 * (unsigned int)(v6 + 1)) - *(float*)(v9 + 12 * v6)),
			(float)*(int*)(v9 + 12 * v6 + 4),
			COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(v9 + 12i64 * (unsigned int)(v6 + 1) + 4))),
			*(_DWORD*)(v9 + 12 * v6 + 8));
		v8 = (int)*(float*)&v15;
	}
LABEL_12:
	*a4 = v6;
LABEL_13:
	switch (a1[3])
	{
	case 2:
		v18 = (float)v8;
		if ((float)v8 >= 0.0)
		{
			if (v18 >= 1.0)
			{
				v21 = 4096.0;
			}
			else
			{
				v22 = (unsigned __int8)(COERCE_UNSIGNED_INT(1.0 - v18) >> 23);
				v23 = (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(1.0 - v18) & 0x7FFFFF) + 1065353216) - 1.0)
					/ (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(1.0 - v18) & 0x7FFFFF) + 1065353216) + 1.0);
				v21 = (float)((float)((float)((float)((float)((float)(v23 * v23) * 0.33333334) + 1.0) * (float)(v23 * 2.0))
					+ (float)((float)((float)v22 - 127.0) * 0.69314718))
					* -0.43429449)
					* 20.0;
			}
		}
		else if (v18 <= -1.0)
		{
			v21 = -4096.0;
		}
		else
		{
			v19 = (unsigned __int8)(COERCE_UNSIGNED_INT(v18 + 1.0) >> 23);
			v20 = (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(v18 + 1.0) & 0x7FFFFF) + 1065353216) - 1.0)
				/ (float)(COERCE_FLOAT((COERCE_UNSIGNED_INT(v18 + 1.0) & 0x7FFFFF) + 1065353216) + 1.0);
			v21 = (float)((float)((float)((float)((float)((float)(v20 * v20) * 0.33333334) + 1.0) * (float)(v20 * 2.0))
				+ (float)((float)((float)v19 - 127.0) * 0.69314718))
				* 0.43429449)
				* 20.0;
		}
		return (unsigned int)(int)v21;
	case 3:
		v12 = (float)v8;
		goto LABEL_25;
	case 4:
		v12 = (float)v8 * 0.050000001;
	LABEL_25:
		if (v12 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v17 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v17 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			return (unsigned int)(int)(float)((float)((float)((float)((float)(COERCE_FLOAT(
				((int)(float)((float)(v12 * v17)
					+ 1065353200.0) & 0x7FFFFF)
				+ 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(
					((int)(float)((float)(v12 * v17) + 1065353200.0) & 0x7FFFFF)
					+ 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v12 * v17) + 1065353200.0) & 0xFF800000));
		}
		else
		{
			return (unsigned int)(int)0.0;
		}
	default:
		return (unsigned int)v8;
	}
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

