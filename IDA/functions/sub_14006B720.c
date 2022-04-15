#include "../winhttp.h"

//----- (000000014006B720) ----------------------------------------------------
void __fastcall sub_14006B720(__int64* a1, __int64 a2, __int64 a3, int a4)
{
	int v7; // r8d
	int* v8; // rdx
	__int64 v9; // r9
	int v10; // ecx
	double v11; // xmm2_8
	double v12; // xmm3_8
	double v13; // xmm1_8
	__m128d v14; // xmm0
	int v15; // ecx
	_DWORD* v16; // r9
	int v17; // edx
	int v18; // r8d

	switch (a4)
	{
	case 0:
		if (!(unsigned int)sub_14006B250(12, a2, a3))
			sub_14006B410((__int64)a1, 12, (_DWORD*)a2, (_DWORD*)a3);
		return;
	case 1:
		if (*(_DWORD*)a2 == 5
			&& *(_DWORD*)(a2 + 16) == -1
			&& *(_DWORD*)(a2 + 20) == -1
			&& *(_DWORD*)a3 == 5
			&& *(_DWORD*)(a3 + 16) == -1
			&& *(_DWORD*)(a3 + 20) == -1)
		{
			*(double*)(a2 + 8) = *(double*)(a2 + 8) - *(double*)(a3 + 8);
		}
		else
		{
			sub_14006B410((__int64)a1, 13, (_DWORD*)a2, (_DWORD*)a3);
		}
		return;
	case 2:
		if (*(_DWORD*)a2 == 5
			&& *(_DWORD*)(a2 + 16) == -1
			&& *(_DWORD*)(a2 + 20) == -1
			&& *(_DWORD*)a3 == 5
			&& *(_DWORD*)(a3 + 16) == -1
			&& *(_DWORD*)(a3 + 20) == -1)
		{
			*(double*)(a2 + 8) = *(double*)(a3 + 8) * *(double*)(a2 + 8);
		}
		else
		{
			sub_14006B410((__int64)a1, 14, (_DWORD*)a2, (_DWORD*)a3);
		}
		return;
	case 3:
		if (*(_DWORD*)a2 == 5
			&& *(_DWORD*)(a2 + 16) == -1
			&& *(_DWORD*)(a2 + 20) == -1
			&& *(_DWORD*)a3 == 5
			&& *(_DWORD*)(a3 + 16) == -1
			&& *(_DWORD*)(a3 + 20) == -1
			&& (v11 = *(double*)(a3 + 8), v11 != 0.0))
		{
			*(double*)(a2 + 8) = *(double*)(a2 + 8) / v11;
		}
		else
		{
			sub_14006B410((__int64)a1, 15, (_DWORD*)a2, (_DWORD*)a3);
		}
		return;
	case 4:
		if (*(_DWORD*)a2 == 5
			&& *(_DWORD*)(a2 + 16) == -1
			&& *(_DWORD*)(a2 + 20) == -1
			&& *(_DWORD*)a3 == 5
			&& *(_DWORD*)(a3 + 16) == -1
			&& *(_DWORD*)(a3 + 20) == -1
			&& (v12 = *(double*)(a3 + 8), v13 = *(double*)(a2 + 8), v12 != 0.0))
		{
			v14.m128d_f64[1] = 0.0;
			v14.m128d_f64[0] = v13 / v12;
			v15 = (int)(v13 / v12);
			if ((double)v15 != v14.m128d_f64[0])
				v14.m128d_f64[0] = (double)(v15 - (_mm_movemask_pd(_mm_unpacklo_pd(v14, v14)) & 1));
			*(double*)(a2 + 8) = v13 - v14.m128d_f64[0] * v12;
		}
		else
		{
			sub_14006B410((__int64)a1, 16, (_DWORD*)a2, (_DWORD*)a3);
		}
		return;
	case 5:
		if (*(_DWORD*)a2 == 5
			&& *(_DWORD*)(a2 + 16) == -1
			&& *(_DWORD*)(a2 + 20) == -1
			&& *(_DWORD*)a3 == 5
			&& *(_DWORD*)(a3 + 16) == -1
			&& *(_DWORD*)(a3 + 20) == -1)
		{
			*(double*)(a2 + 8) = sub_1408FFA00(*(double*)(a2 + 8), *(double*)(a3 + 8));
		}
		else
		{
			sub_14006B410((__int64)a1, 17, (_DWORD*)a2, (_DWORD*)a3);
		}
		return;
	case 6:
		if (*(_DWORD*)(a3 + 16) == *(_DWORD*)(a3 + 20))
			sub_14006A700((__int64)a1, (int*)a3);
		else
			sub_14006AB60((__int64)a1, (int*)a3);
		if (*(_DWORD*)a3 == 11 && (v9 = *a1, (*(_BYTE*)(*(_QWORD*)(*a1 + 24) + 4i64 * *(int*)(a3 + 8)) & 0x3F) == 21))
		{
			if (*(_DWORD*)a2 == 12)
			{
				v10 = *(_DWORD*)(a2 + 8);
				if ((v10 & 0x100) == 0 && v10 >= *((unsigned __int8*)a1 + 74))
					--* ((_DWORD*)a1 + 15);
			}
			*(_DWORD*)(*(_QWORD*)(v9 + 24) + 4i64 * *(int*)(a3 + 8)) = *(_DWORD*)(*(_QWORD*)(v9 + 24)
				+ 4i64 * *(int*)(a3 + 8)) & 0x7FFFFF | (*(_DWORD*)(a2 + 8) << 23);
			*(_DWORD*)a2 = 11;
			*(_DWORD*)(a2 + 8) = *(_DWORD*)(a3 + 8);
		}
		else
		{
			sub_14006AAE0((__int64)a1, (int*)a3);
			if (*(_DWORD*)a2 == 5
				&& *(_DWORD*)(a2 + 16) == -1
				&& *(_DWORD*)(a2 + 20) == -1
				&& *(_DWORD*)a3 == 5
				&& *(_DWORD*)(a3 + 16) == -1
				&& *(_DWORD*)(a3 + 20) == -1)
			{
				*(_QWORD*)(a2 + 8) = 0i64;
			}
			else
			{
				sub_14006B410((__int64)a1, 21, (_DWORD*)a2, (_DWORD*)a3);
			}
		}
		return;
	case 7:
		v16 = (_DWORD*)a2;
		v17 = 23;
		goto LABEL_79;
	case 8:
		v16 = (_DWORD*)a2;
		v17 = 23;
		v18 = 1;
		goto LABEL_80;
	case 9:
		v16 = (_DWORD*)a2;
		v17 = 24;
		v18 = 1;
		goto LABEL_80;
	case 10:
		v16 = (_DWORD*)a2;
		v17 = 25;
		v18 = 1;
		goto LABEL_80;
	case 11:
		v16 = (_DWORD*)a2;
		v17 = 24;
		goto LABEL_79;
	case 12:
		v16 = (_DWORD*)a2;
		v17 = 25;
	LABEL_79:
		v18 = 0;
	LABEL_80:
		sub_14006B500((__int64)a1, v17, v18, v16, (_DWORD*)a3);
		return;
	case 13:
		sub_14006A700((__int64)a1, (int*)a3);
		v7 = *(_DWORD*)(a2 + 20);
		if (v7 == -1)
			goto LABEL_5;
		v8 = (int*)(a3 + 20);
		break;
	case 14:
		sub_14006A700((__int64)a1, (int*)a3);
		v7 = *(_DWORD*)(a2 + 16);
		if (v7 == -1)
			goto LABEL_5;
		v8 = (int*)(a3 + 16);
		break;
	}
	sub_14006A3C0(a1, v8, v7);
LABEL_5:
	*(_QWORD*)a2 = *(_QWORD*)a3;
	*(_QWORD*)(a2 + 8) = *(_QWORD*)(a3 + 8);
	*(_QWORD*)(a2 + 16) = *(_QWORD*)(a3 + 16);
}
// 14006BA7B: conditional instruction was optimized away because rcx.8<100000000u

