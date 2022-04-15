#include "../winhttp.h"

//----- (00000001401B38F0) ----------------------------------------------------
__int64 __fastcall sub_1401B38F0(char* a1, __int64 a2, char* a3, char** a4, _QWORD* a5)
{
	unsigned __int64 v5; // rax
	unsigned int v6; // r10d
	__int64 v7; // r11
	char* v8; // rdi
	int v9; // edx
	__int64 result; // rax
	__int64 v12; // rdx
	signed __int64 v13; // rbx
	unsigned int v14; // r9d
	__int64 v15; // r8
	__int16 v16; // ax

	v5 = a2 - 1;
	v6 = 0;
	v7 = a2;
	v8 = a1;
	v9 = 0;
	if (v5 > 0x7FFFFFFE)
		v9 = -2147024809;
	if (v9 < 0)
	{
		result = (unsigned int)v9;
		if (v7)
			*(_WORD*)a1 = 0;
	}
	else
	{
		if (v7)
		{
			v12 = v7;
			v13 = a3 - a1;
			v14 = 0;
			v15 = 0i64;
			while (2147483646 - v7 + v12)
			{
				v16 = *(_WORD*)&a1[v13];
				if (!v16)
					break;
				*(_WORD*)a1 = v16;
				a1 += 2;
				++v15;
				if (!--v12)
				{
					a1 -= 2;
					v14 = -2147024774;
					--v15;
					break;
				}
			}
			*(_WORD*)a1 = 0;
			v7 -= v15;
			v6 = v14;
			v8 += 2 * v15;
			if ((int)(v14 + 0x80000000) >= 0 && v14 != -2147024774)
				return v14;
		}
		else if (*(_WORD*)a3)
		{
			if (!a1)
				return 2147942487i64;
			v6 = -2147024774;
		}
		if (a4)
			*a4 = v8;
		if (a5)
			*a5 = v7;
		return v6;
	}
	return result;
}
// 1401B39A6: conditional instruction was optimized away because rdx.8!=0

