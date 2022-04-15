#include "../winhttp.h"

//----- (0000000140885660) ----------------------------------------------------
__int64 __fastcall sub_140885660(_DWORD* a1, unsigned int* a2, unsigned int a3)
{
	_DWORD* v5; // r11
	unsigned int v6; // eax
	unsigned int v7; // ecx
	unsigned int v8; // r9d
	unsigned int v9; // r8d
	unsigned int v11; // eax
	unsigned int v12; // eax
	unsigned int v13; // ecx

	v5 = a1;
	if (a2)
	{
		if (a2[2])
		{
			v6 = sub_1408846A0(a1[28], a2[2]);
			v5[41] = v5[28] * (a2[2] / v6);
		}
		v7 = v5[41];
		v5[40] = v7;
		v8 = a3 - a3 % v7;
		v5[38] = v8;
		v9 = *a2;
		if (*a2)
		{
			if (v9 <= a3 && !(v9 % v7))
			{
				v5[38] = v9;
				v5[40] = *a2;
				return 1i64;
			}
			return 2i64;
		}
		v11 = a2[1];
		if (v11)
		{
			if (v7 < v11)
			{
				v12 = v7 * ((v7 + v11 - 1) / v7);
				v5[40] = v12;
				if (v12 > v8)
					return 2i64;
			}
		}
	}
	else
	{
		v13 = a1[28];
		v5[40] = v13;
		v5[38] = a3 - a3 % v13;
	}
	return 1i64;
}
// 140885698: variable 'v5' is possibly undefined

