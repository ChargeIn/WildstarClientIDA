#include "../winhttp.h"

//----- (00000001401A3210) ----------------------------------------------------
__int64 sub_1401A3210(
	int* a1,
	unsigned __int64 a2,
	__int64* a3,
	unsigned __int64* a4,
	int a5,
	unsigned __int16* a6,
	...)
{
	int v9; // ecx
	__int64 v10; // r15
	unsigned __int64 v11; // r14
	unsigned __int16* v12; // r8
	int v13; // esi
	unsigned __int64 v14; // rbp
	__int64 result; // rax
	unsigned __int64 v16; // rbp
	int v17; // eax
	va_list va; // [rsp+A0h] [rbp+38h] BYREF

	va_start(va, a6);
	v9 = 0;
	if ((a5 & 0x100) != 0)
	{
		if (!a1 && a2 || a2 > 0x7FFFFFFF)
			v9 = -2147024809;
	}
	else if (a2 - 1 > 0x7FFFFFFE)
	{
		v9 = -2147024809;
	}
	if (v9 >= 0)
	{
		v10 = (__int64)a1;
		v11 = a2;
		if ((a5 & 0x100) != 0)
		{
			v12 = (unsigned __int16*)&unk_1409E218C;
			if (a6)
				v12 = a6;
		}
		else
		{
			v12 = a6;
		}
		v13 = 0;
		if ((a5 & 0xFFFFE000) != 0)
		{
			v13 = -2147024809;
			if (a2)
				*(_WORD*)a1 = 0;
			goto LABEL_17;
		}
		if (!a2)
		{
			if (*v12)
			{
				v13 = -2147024774;
				if (!a1)
					v13 = -2147024809;
			LABEL_17:
				if ((a5 & 0x1C00) != 0 && a2)
				{
					v14 = (2 * a2) >> 1;
					if (v14 && (a5 & 0x1000) != 0)
					{
						v10 = (__int64)a1;
						v11 = (2 * a2) >> 1;
						*(_WORD*)a1 = 0;
					}
					if ((a5 & 0x400) != 0)
					{
						sub_1407E4830(a1, (unsigned __int8)a5, 2 * a2);
						if ((_BYTE)a5)
						{
							if (!v14)
								goto LABEL_28;
							v10 = (__int64)a1 + 2 * v14 - 2;
							v11 = 1i64;
							*(_WORD*)v10 = 0;
						}
						else
						{
							v10 = (__int64)a1;
							v11 = (2 * a2) >> 1;
						}
					}
					if (v14 && (a5 & 0x800) != 0)
					{
						v10 = (__int64)a1;
						v11 = (2 * a2) >> 1;
						*(_WORD*)a1 = 0;
					}
				}
			LABEL_28:
				if ((int)(v13 + 0x80000000) >= 0 && v13 != -2147024774)
					return (unsigned int)v13;
			}
		LABEL_48:
			if (a3)
				*a3 = v10;
			result = (unsigned int)v13;
			if (a4)
				*a4 = v11;
			return result;
		}
		v16 = a2 - 1;
		v17 = sub_1407DDA14(a1, a2 - 1, v12, (__int64)va);
		if (v17 < 0 || v17 > v16)
		{
			v13 = -2147024774;
		}
		else if (v17 != v16)
		{
			v16 = v17;
		LABEL_43:
			v11 = a2 - v16;
			v10 = (__int64)a1 + 2 * v16;
			if (v13 < 0)
				goto LABEL_17;
			if ((a5 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2)
				sub_1407E4830((int*)(v10 + 2), (unsigned __int8)a5, 2 * v11 - 2);
			goto LABEL_48;
		}
		*((_WORD*)a1 + v16) = 0;
		goto LABEL_43;
	}
	result = (unsigned int)v9;
	if (a2)
		*(_WORD*)a1 = 0;
	return result;
}

