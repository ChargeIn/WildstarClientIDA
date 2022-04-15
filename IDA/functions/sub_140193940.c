#include "../winhttp.h"

//----- (0000000140193940) ----------------------------------------------------
__int64 sub_140193940(int* a1, unsigned __int64 a2, int** a3, unsigned __int64* a4, int a5, signed __int8* a6, ...)
{
	int v7; // r14d
	int v10; // ecx
	int* v11; // r15
	unsigned __int64 v12; // rbp
	signed __int8* v13; // r8
	unsigned __int64 v14; // rbx
	int v15; // eax
	__int64 result; // rax
	va_list va; // [rsp+A0h] [rbp+38h] BYREF

	va_start(va, a6);
	v7 = 0;
	v10 = 0;
	if ((a5 & 0x100) != 0)
	{
		if (!a1 && a2 || a2 > 0x7FFFFFFF)
			v10 = -2147024809;
	}
	else if (a2 - 1 > 0x7FFFFFFE)
	{
		v10 = -2147024809;
	}
	if (v10 >= 0)
	{
		v11 = a1;
		v12 = a2;
		if ((a5 & 0x100) != 0)
		{
			v13 = (signed __int8*)&unk_1409D068A;
			if (a6)
				v13 = a6;
		}
		else
		{
			v13 = a6;
		}
		if ((a5 & 0xFFFFE000) != 0)
		{
			v7 = -2147024809;
			if (a2)
				*(_BYTE*)a1 = 0;
			goto LABEL_17;
		}
		if (a2)
		{
			v14 = a2 - 1;
			v15 = sub_1407DF5FC(a1, a2 - 1, v13, (int*)va);
			if (v15 < 0 || v15 > v14)
			{
				*((_BYTE*)a1 + v14) = 0;
				v7 = -2147024774;
			}
			else if (v15 == v14)
			{
				*((_BYTE*)a1 + v14) = 0;
			}
			else
			{
				v14 = v15;
			}
			v12 = a2 - v14;
			v11 = (int*)((char*)a1 + v14);
			if (v7 < 0)
				goto LABEL_17;
			if ((a5 & 0x200) != 0 && v12 > 1)
				sub_1407E4830((int*)((char*)v11 + 1), (unsigned __int8)a5, v12 - 1);
		}
		else if (*v13)
		{
			v7 = -2147024774;
			if (!a1)
				v7 = -2147024809;
		LABEL_17:
			if ((a5 & 0x1C00) != 0 && a2)
			{
				if ((a5 & 0x1000) != 0)
				{
					v11 = a1;
					v12 = a2;
					*(_BYTE*)a1 = 0;
				}
				if ((a5 & 0x400) != 0)
				{
					sub_1407E4830(a1, (unsigned __int8)a5, a2);
					if ((_BYTE)a5)
					{
						v12 = 1i64;
						v11 = (int*)((char*)a1 + a2 - 1);
						*(_BYTE*)v11 = 0;
					}
					else
					{
						v11 = a1;
						v12 = a2;
					}
				}
				if ((a5 & 0x800) != 0)
				{
					v11 = a1;
					v12 = a2;
					*(_BYTE*)a1 = 0;
				}
			}
			if ((int)(v7 + 0x80000000) >= 0 && v7 != -2147024774)
				return (unsigned int)v7;
		}
		if (a3)
			*a3 = v11;
		result = (unsigned int)v7;
		if (a4)
			*a4 = v12;
		return result;
	}
	result = (unsigned int)v10;
	if (a2)
		*(_BYTE*)a1 = 0;
	return result;
}
// 140193B0B: conditional instruction was optimized away because rdi.8!=0
// 140193B20: conditional instruction was optimized away because rdi.8!=0

