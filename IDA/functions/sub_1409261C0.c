//----- (00000001409261C0) ----------------------------------------------------
__int64 __fastcall sub_1409261C0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int* v3; // rdi
	_QWORD* v4; // rbx
	int v5; // ebp
	_QWORD* v6; // r14
	_QWORD* v10; // r15
	__int64 result; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	char* v14; // rax
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rsi
	_QWORD* v18; // rax
	_QWORD* v19; // rax

	v3 = *(unsigned int**)a1;
	v4 = *(_QWORD**)(a1 + 200);
	v5 = *(unsigned __int16*)(a2 + 2);
	v6 = 0i64;
	if (**(_DWORD**)a1)
		v10 = 0i64;
	else
		v10 = sub_14092D590((__int64)v3, 40i64);
	result = 0i64;
	if (*v3)
		return result;
	*v10 = 0i64;
	v10[1] = 0i64;
	v10[2] = 0i64;
	v10[3] = 0i64;
	v10[4] = 0i64;
	v12 = *(_QWORD*)(a3 + 16);
	v10[4] = a2;
	*v10 = v12;
	*(_QWORD*)(a3 + 16) = v10;
	if (v4)
	{
		while (*((_DWORD*)v4 + 6) != v5)
		{
			v6 = v4;
			v4 = (_QWORD*)*v4;
			if (!v4)
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		if (*v3)
			v4 = 0i64;
		else
			v4 = sub_14092D590((__int64)v3, 32i64);
		if (*v3)
			return 0i64;
		*v4 = 0i64;
		v4[1] = 0i64;
		v4[2] = 0i64;
		*((_DWORD*)v4 + 6) = v5;
		if (v6)
			*v6 = v4;
		else
			*(_QWORD*)(a1 + 200) = v4;
	}
	if (*(_DWORD*)(a1 + 100))
	{
		if (*(_DWORD*)(a1 + 60))
		{
			v13 = *(int*)(a1 + 36);
			if (!*v3)
			{
				v3[26] = 0;
				v14 = sub_14092D140((__int64)v3, 1, 3, 0i64, 267, v13 + 48);
				if (v14)
					*v14 = -117;
			}
			sub_14091B4D0(a1, 2);
			v15 = *(int*)(a1 + 60);
			if (!*v3)
			{
				v3[26] = 0;
				sub_14092AA10(v3, 1, 0i64, 267, v15 + 48);
				if (!*v3)
				{
					v3[26] = 0;
					sub_14092AA10(v3, 258, -8i64, 3, 0i64);
					if (!*v3)
					{
						v3[26] = 0;
						sub_14092AA10(v3, 258, -16i64, 1, 0i64);
					}
				}
			}
			goto LABEL_31;
		}
		v16 = *(_DWORD*)(a1 + 36);
	LABEL_28:
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 3, 0i64, 267, v16 + 48i64);
		}
		sub_14091B4D0(a1, 1);
		sub_140932690(v3, 6, 258, -8i64, 3, 0i64);
		goto LABEL_31;
	}
	if (*(_DWORD*)(a1 + 60))
	{
		v16 = *(_DWORD*)(a1 + 60);
		goto LABEL_28;
	}
LABEL_31:
	v17 = v4[1];
	v18 = sub_140932450((__int64)v3, 23);
	if (v17)
	{
		if (v18)
		{
			v18[2] &= ~2ui64;
			v18[2] |= 1ui64;
			v18[3] = v17;
		}
	}
	else
	{
		sub_14091B490(v3, v4 + 2, (__int64)v18);
	}
	v19 = sub_140931B80(v3, 0, 1, 0i64, 512, 0i64);
	sub_14091B490(v3, v10 + 3, (__int64)v19);
	return a2 + 4;
}
// 140926388: conditional instruction was optimized away because eax.4!=0
// 140926392: conditional instruction was optimized away because eax.4==0
// 140926428: conditional instruction was optimized away because rsi.8!=0

