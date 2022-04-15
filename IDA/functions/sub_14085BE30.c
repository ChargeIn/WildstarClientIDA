#include "../winhttp.h"

//----- (000000014085BE30) ----------------------------------------------------
__int64 __fastcall sub_14085BE30(__int64* a1, int a2, float a3)
{
	__int64 v3; // rbx
	unsigned __int8* v5; // rdx
	__int64* v6; // rdi
	unsigned int v7; // r9d
	int v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rdx
	int* v11; // rax
	__int64 result; // rax
	unsigned __int8* v13; // r8
	unsigned int v14; // r9d
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rdx
	int* v18; // rax
	int v19; // [rsp+58h] [rbp+10h] BYREF

	v3 = a2;
	if ((unsigned int)a2 > 4)
	{
		if ((unsigned int)(a2 - 11) > 2)
		{
			return sub_140854370(a1, a2, a3);
		}
		else
		{
			v13 = (unsigned __int8*)a1[10];
			v6 = a1 + 10;
			v19 = 0;
			if (v13)
			{
				v14 = *v13;
				v15 = 0i64;
				while (1)
				{
					v16 = (unsigned int)(v15 + 1);
					if (v13[v16] == (_BYTE)v3)
						break;
					v15 = (unsigned int)v16;
					if ((unsigned int)v16 >= v14)
						goto LABEL_17;
				}
				v17 = (__int64)&v13[4 * v15 + ((v14 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_17:
				v17 = 0i64;
			}
			v18 = &v19;
			if (v17)
				v18 = (int*)v17;
			result = (unsigned int)*v18;
			v19 = result;
			if ((float)(a3 - *(float*)&result) != 0.0)
			{
				(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 560))(
					a1,
					*a1,
					(unsigned int)dword_1409A3530[v3],
					0i64,
					0i64);
				return sub_14084FB50(v6, v3, SLODWORD(a3));
			}
		}
	}
	else
	{
		v5 = (unsigned __int8*)a1[10];
		v6 = a1 + 10;
		v19 = 0;
		if (v5)
		{
			v7 = *v5;
			v8 = 0;
			while (1)
			{
				v9 = (unsigned int)(v8 + 1);
				if (v5[v9] == (_BYTE)v3)
					break;
				++v8;
				if ((unsigned int)v9 >= v7)
					goto LABEL_6;
			}
			v10 = (__int64)&v5[4 * v8 + ((v7 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_6:
			v10 = 0i64;
		}
		v11 = &v19;
		if (v10)
			v11 = (int*)v10;
		result = (unsigned int)*v11;
		v19 = result;
		if ((float)(a3 - *(float*)&result) != 0.0)
		{
			(*(void(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 176))(
				a1,
				(unsigned int)dword_1409A3530[v3],
				*a1,
				0i64,
				0i64);
			return sub_14084FB50(v6, v3, SLODWORD(a3));
		}
	}
	return result;
}
// 14085BF73: ignored the value written to the shadow area of the succeeding call
// 1409A3530: using guessed type int dword_1409A3530[];

