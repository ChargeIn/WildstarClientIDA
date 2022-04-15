#include "../winhttp.h"

//----- (00000001409286A0) ----------------------------------------------------
_QWORD* __fastcall sub_1409286A0(__int64 a1, __int64* a2)
{
	unsigned int* v2; // rbx
	bool v3; // zf
	unsigned int* v5; // rcx
	_QWORD* result; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rcx
	_QWORD* v10; // rsi
	_QWORD* v11; // r15
	_QWORD* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // r8
	_QWORD* v15; // rdi
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rbp
	_QWORD* v19; // rax
	_QWORD* v20; // rbp
	_QWORD* v21; // rax
	__int64 v22; // rcx

	v2 = *(unsigned int**)a1;
	v3 = *(_DWORD*)(a1 + 80) == 0;
	v5 = *(unsigned int**)a1;
	if (v3)
	{
		result = sub_140931B80(v5, 3, 6, 0i64, 7, 0i64);
		v8 = result;
		if (!*v2)
		{
			result = sub_14092D590((__int64)v2, 16i64);
			if (result)
			{
				v9 = *a2;
				*result = v8;
				result[1] = v9;
				*a2 = (__int64)result;
			}
		}
	}
	else
	{
		v10 = sub_140931B80(v5, 2, 6, 0i64, 7, 0i64);
		v11 = sub_140931B80(v2, 3, 267, *(int*)(a1 + 48), 6, 0i64);
		if (!*v2)
		{
			v12 = sub_14092D590((__int64)v2, 16i64);
			if (v12)
			{
				v13 = *a2;
				*v12 = v11;
				v12[1] = v13;
				*a2 = (__int64)v12;
			}
		}
		if (*(_DWORD*)(a1 + 80) == 1)
		{
			if (!*v2)
			{
				v14 = *(int*)(a1 + 52) + 48i64;
				v2[26] = 0;
				sub_14092AA10(v2, 267, v14, 512, -1i64);
			}
			v15 = sub_140932450((__int64)v2, 22);
			if (!*v2)
			{
				v16 = sub_14092D590((__int64)v2, 16i64);
				if (v16)
				{
					v17 = *a2;
					*v16 = v15;
					v16[1] = v17;
					*a2 = (__int64)v16;
				}
			}
		}
		else
		{
			v18 = *(_QWORD*)(a1 + 168);
			v19 = sub_140932450((__int64)v2, 22);
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
				v20 = v19;
				if (!*v2)
				{
					v21 = sub_14092D590((__int64)v2, 16i64);
					if (v21)
					{
						v22 = *(_QWORD*)(a1 + 216);
						*v21 = v20;
						v21[1] = v22;
						*(_QWORD*)(a1 + 216) = v21;
					}
				}
			}
		}
		result = sub_140932570((__int64)v2);
		if (v10 && result)
		{
			v10[2] &= ~2ui64;
			v10[2] |= 1ui64;
			v10[3] = result;
		}
	}
	return result;
}
// 140928808: conditional instruction was optimized away because rbp.8!=0

