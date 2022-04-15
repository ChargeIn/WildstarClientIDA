#include "../winhttp.h"

//----- (00000001402F1780) ----------------------------------------------------
__int64 __fastcall sub_1402F1780(__int64 a1, int a2, float a3, int a4)
{
	__int64 v4; // r11
	float v8; // xmm3_4
	float v9; // xmm1_4
	int v10; // eax
	int v11; // r9d
	int v12; // edx
	int v13; // edx
	float v14; // xmm0_4
	int v15; // edx
	int v17; // ecx
	__int64 v18; // rcx

	v4 = *(_QWORD*)(a1 + 32);
	if (v4)
	{
		v8 = *(float*)(v4 + 20);
		if (v8 != 0.0 && (*(_BYTE*)(a1 + 20) & 4) != 0)
			*(float*)(a1 + 8) = fmaxf(-2.0, fminf(a3 / v8, 2.0));
		v9 = *(float*)(a1 + 8);
		v10 = *(_DWORD*)(v4 + 12);
		v11 = *(_DWORD*)(v4 + 16) - v10;
		v12 = *(_DWORD*)(a1 + 12) + (int)(float)((float)(a2 - *(_DWORD*)(a1 + 48)) * v9);
		if (a4)
		{
			v13 = *(_DWORD*)(a1 + 64);
			v14 = *(float*)&dword_140C41F64;
			*(_DWORD*)(a1 + 48) = a2;
			v12 = v13 - v10;
			*(_DWORD*)(a1 + 12) = v12;
			if (v9 <= v14)
			{
				if (v9 >= (float)-v14)
					*(_DWORD*)(a1 + 52) = a2;
				else
					*(_DWORD*)(a1 + 52) = a2 + (int)(float)-(float)((float)v12 / v9);
			}
			else
			{
				*(_DWORD*)(a1 + 52) = a2 + (int)(float)((float)(v11 - v12) / v9);
			}
		}
		else if (*(float*)(v4 + 20) != 0.0 && (*(_BYTE*)(a1 + 20) & 4) != 0)
		{
			*(_DWORD*)(a1 + 12) = v12;
			*(_DWORD*)(a1 + 52) = a2;
			*(_DWORD*)(a1 + 48) = a2;
			if (v9 <= 0.0000099999997 || v12 > v11)
			{
				if (v9 < -0.0000099999997 && v12 >= 0)
					*(_DWORD*)(a1 + 52) = a2 + (int)(float)-(float)((float)v12 / v9);
			}
			else
			{
				*(_DWORD*)(a1 + 52) = a2 + (int)(float)((float)(v11 - v12) / v9);
			}
		}
		if ((*(_BYTE*)(v4 + 2) & 1) != 0 && v11)
		{
			if (v12 < 0)
			{
				*(_DWORD*)(a1 + 64) = v11 + v12 % v11 + *(_DWORD*)(v4 + 12);
				goto LABEL_31;
			}
			if (v12 > v11)
			{
				*(_DWORD*)(a1 + 64) = v12 % v11 + *(_DWORD*)(v4 + 12);
				goto LABEL_31;
			}
		}
		else
		{
			if (v12 < 0)
			{
				*(_DWORD*)(a1 + 64) = *(_DWORD*)(v4 + 12);
				goto LABEL_31;
			}
			if (v12 > v11)
				v12 = v11;
		}
		*(_DWORD*)(a1 + 64) = v12 + *(_DWORD*)(v4 + 12);
	}
	else
	{
		*(_DWORD*)(a1 + 64) = 0;
	}
LABEL_31:
	v15 = *(_DWORD*)(a1 + 56);
	if (a2 - v15 < 0)
	{
		*(_DWORD*)(a1 + 68) = 0;
		return 0i64;
	}
	v17 = *(_DWORD*)(a1 + 60);
	if (a2 - v17 < 0)
	{
		*(float*)(a1 + 68) = (float)(a2 - v15) / (float)(v17 - v15);
	}
	else
	{
		v18 = *(_QWORD*)(a1 + 96);
		*(_DWORD*)(a1 + 68) = 1065353216;
		if (v18)
		{
			sub_1402F1720(v18);
			return 0i64;
		}
	}
	return 0i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41F64: using guessed type int dword_140C41F64;

