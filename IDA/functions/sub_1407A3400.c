#include "../winhttp.h"

//----- (00000001407A3400) ----------------------------------------------------
__int64 __fastcall sub_1407A3400(
	__int64 a1,
	double a2,
	float* a3,
	int a4,
	__int64 a5,
	int* a6,
	_QWORD* a7,
	unsigned __int64* a8,
	int* a9)
{
	double v9; // xmm6_8
	__int64 v10; // rbx
	int v12; // edi
	__int64 v13; // xmm0_8
	int v14; // xmm0_4
	double v15; // xmm0_8
	float v16; // xmm1_4
	__int64 v17; // rcx
	unsigned __int64 v18; // rcx
	bool v19; // cf
	int v21; // [rsp+68h] [rbp+20h]

	v9 = a2;
	v10 = 0i64;
	v12 = 0;
	switch (a4)
	{
	case 0:
	case 9:
		v13 = 0x3FF0000000000000i64;
		if (a2 > 1.0 || (v13 = 0i64, a2 < 0.0))
		{
			v9 = *(double*)&v13;
			v12 = 1;
		}
		goto LABEL_5;
	case 1:
	case 6:
		if (a2 < 0.0)
		{
			sub_1409357C8(-a2, 2.0);
			v9 = 2.0 - -a2;
			goto LABEL_16;
		}
		if (a2 > 2.0)
			goto LABEL_15;
		goto LABEL_16;
	case 2:
		if (a2 >= 0.0)
		{
			if (a2 > 1.0)
				sub_1409357C8(a2, 1.0);
			v14 = 1065353216;
		}
		else
		{
			sub_1409357C8(-a2, 1.0);
			v9 = 1.0 - -a2;
			v14 = 1065353216;
		}
		break;
	case 3:
	case 10:
		if (a2 <= 1.0)
		{
			if (a2 >= 0.0)
			{
				v9 = 1.0 - a2;
			LABEL_11:
				v14 = -1082130432;
			}
			else
			{
				v14 = -1082130432;
				v12 = 1;
				v9 = 1.0;
			}
		}
		else
		{
			v14 = -1082130432;
			v12 = 1;
			v9 = 0.0;
		}
		break;
	case 4:
	case 7:
		v15 = 1.0 - a2;
		v9 = 1.0 - a2;
		if (1.0 - a2 >= 0.0)
		{
			if (v15 > 2.0)
				sub_1409357C8(v15, 2.0);
		}
		else
		{
			sub_1409357C8(-v15, 2.0);
			v9 = 2.0 - -v15;
		}
		if (v9 <= 1.0)
			goto LABEL_11;
		v14 = 1065353216;
		v9 = 2.0 - v9;
		break;
	case 5:
		v9 = 1.0 - a2;
		if (1.0 - a2 < 0.0)
		{
			sub_1409357C8(-v9, 1.0);
			v9 = 1.0 - -v9;
			v14 = -1082130432;
			break;
		}
		if (v9 <= 1.0)
			goto LABEL_18;
		sub_1409357C8(v9, 1.0);
		v14 = -1082130432;
		break;
	case 8:
		if (a2 >= 0.0)
		{
			v9 = a2
				+ (double)(int)((a2 + *(double*)(a5 + 40)) * (1.0 / *(double*)(a5 + 48))) * *(double*)(a5 + 24)
				+ (double)((int)(1.0 / *(double*)(a5 + 48) * a2) + 1) * *(double*)(a5 + 16);
			if (v9 > 2.0)
				LABEL_15:
			sub_1409357C8(v9, 2.0);
		LABEL_16:
			if (v9 <= 1.0)
			{
			LABEL_5:
				v14 = 1065353216;
			}
			else
			{
				v9 = 2.0 - v9;
			LABEL_18:
				v14 = -1082130432;
			}
		}
		else
		{
			v14 = 1065353216;
			v9 = 0.0;
		}
		break;
	default:
		v14 = v21;
		break;
	}
	v16 = v9;
	*a3 = v16;
	if (a7 && a8)
	{
		v17 = *(_QWORD*)(a5 + 8);
		v19 = v17 == 1;
		v18 = v17 - 1;
		if (!v19 && v18 != 1)
		{
			do
			{
				if (v16 < *(float*)(*(_QWORD*)a5 + 4 * (v10 + ((v18 - v10) >> 1))))
					v18 = v10 + ((v18 - v10) >> 1);
				else
					v10 += (v18 - v10) >> 1;
			} while (v10 + 1 < v18);
		}
		*a7 = v10;
		*a8 = v18;
	}
	if (a6)
		*a6 = v14;
	if (a9)
		*a9 = v12;
	return 0i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

