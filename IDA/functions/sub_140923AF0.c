#include "../winhttp.h"

//----- (0000000140923AF0) ----------------------------------------------------
_WORD* __fastcall sub_140923AF0(__int64 a1, _WORD* a2, __int64 a3)
{
	unsigned int* v3; // rbx
	_QWORD* v7; // rsi
	__int64 v9; // rax
	_QWORD* v10; // rdi
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbp
	_QWORD* v14; // rax
	char* v15; // rax
	__int64* v16; // rbp
	_QWORD* v17; // rax
	__int64 v18; // rsi
	_QWORD* v19; // rax
	__int64 v20; // rsi
	_QWORD* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // rsi
	_QWORD* v24; // rax

	v3 = *(unsigned int**)a1;
	if (**(_DWORD**)a1)
		v7 = 0i64;
	else
		v7 = sub_14092D590(*(_QWORD*)a1, 80i64);
	if (*v3)
		return 0i64;
	sub_1407E4830((int*)v7, 0i64, 0x50ui64);
	v9 = *(_QWORD*)(a3 + 16);
	v7[4] = a2;
	*v7 = v9;
	*(_QWORD*)(a3 + 16) = v7;
	if (*a2 == 151)
	{
		v10 = sub_140932450((__int64)v3, 22);
		if (!*v3)
		{
			v11 = sub_14092D590((__int64)v3, 16i64);
			if (v11)
			{
				v12 = v7[3];
				*v11 = v10;
				v11[1] = v12;
				v7[3] = v11;
			}
		}
	}
	else if (*a2 == 153 || *(_QWORD*)(a1 + 208))
	{
		v23 = *(_QWORD*)(a1 + 184);
		v24 = sub_140932450((__int64)v3, 22);
		if (v23)
		{
			if (v24)
			{
				v24[2] &= ~2ui64;
				v24[2] |= 1ui64;
				v24[3] = v23;
			}
		}
		else
		{
			sub_14091B490(v3, (__int64*)(a1 + 232), (__int64)v24);
		}
	}
	else
	{
		v13 = *(_QWORD*)(a1 + 184);
		v14 = sub_140931B80(v3, 1, 6, 0i64, 267, *(int*)(a1 + 36));
		if (v13)
		{
			if (v14)
			{
				v14[2] &= ~2ui64;
				v14[2] |= 1ui64;
				v14[3] = v13;
			}
		}
		else
		{
			sub_14091B490(v3, (__int64*)(a1 + 232), (__int64)v14);
		}
		if (!*v3)
		{
			v3[26] = 0;
			v15 = sub_14092D140((__int64)v3, 1, 9, 0i64, 1, 0i64);
			if (v15)
				*v15 = -119;
		}
		sub_140932690(v3, 7, 3, 0i64, 257, 66i64);
		v16 = v7 + 3;
		v17 = sub_140931B80(v3, 1, 3, 0i64, 512, 0i64);
		sub_14091B490(v3, v7 + 3, (__int64)v17);
		sub_140932690(v3, 7, 3, 0i64, 257, 67i64);
		v18 = *(_QWORD*)(a1 + 184);
		v19 = sub_140931B80(v3, 0, 3, 0i64, 512, 0i64);
		if (v18)
		{
			if (v19)
			{
				v19[2] &= ~2ui64;
				v19[2] |= 1ui64;
				v19[3] = v18;
			}
		}
		else
		{
			sub_14091B490(v3, (__int64*)(a1 + 232), (__int64)v19);
		}
		sub_140932690(v3, 6, 3, 0i64, 257, 8i64);
		v20 = *(_QWORD*)(a1 + 184);
		v21 = sub_140931B80(v3, 1, 3, 0i64, 6, 0i64);
		if (v20)
		{
			if (v21)
			{
				v21[2] &= ~2ui64;
				v21[2] |= 1ui64;
				v21[3] = v20;
			}
		}
		else
		{
			sub_14091B490(v3, (__int64*)(a1 + 232), (__int64)v21);
		}
		v22 = sub_140932450((__int64)v3, 22);
		sub_14091B490(v3, v16, (__int64)v22);
	}
	return a2 + 1;
}
// 140923C12: conditional instruction was optimized away because rbp.8!=0
// 140923D13: conditional instruction was optimized away because rsi.8!=0
// 140923D8F: conditional instruction was optimized away because rsi.8!=0
// 140923DF1: conditional instruction was optimized away because rsi.8!=0

