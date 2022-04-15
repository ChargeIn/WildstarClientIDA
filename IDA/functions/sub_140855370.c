#include "../winhttp.h"

//----- (0000000140855370) ----------------------------------------------------
__int64 __fastcall sub_140855370(_QWORD* a1, unsigned int a2, int a3)
{
	__int64 v5; // rdx
	__int64 result; // rax
	int v7; // r8d
	unsigned __int8* v8; // r9
	unsigned int v9; // r10d
	__int64 v10; // rcx
	__int64 v11; // rdx
	int* v12; // rax
	int v13; // [rsp+40h] [rbp+8h] BYREF
	bool v14; // [rsp+48h] [rbp+10h] BYREF

	v14 = 0;
	if (!qword_140C61BB0 || (sub_140838F30(qword_140C61BB0, (__int64)a1, a2, a3, &v14), !v14))
		a1[12] &= ~(1i64 << a2);
	(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
	if (a2 == 20)
	{
		v7 = 11;
	}
	else
	{
		if (a2 != 21)
		{
			result = a2 - 37;
			if ((unsigned int)result > 1)
				return result;
			return (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 560i64))(
				a1,
				v5,
				a2,
				0i64,
				0i64);
		}
		v7 = 12;
	}
	v8 = (unsigned __int8*)a1[10];
	v13 = dword_140C11000[v7];
	if (v8)
	{
		v9 = *v8;
		v10 = 0i64;
		while (1)
		{
			v11 = (unsigned int)(v10 + 1);
			if (v8[v11] == (_BYTE)v7)
				break;
			v10 = (unsigned int)v11;
			if ((unsigned int)v11 >= v9)
				goto LABEL_14;
		}
		v5 = (__int64)&v8[4 * v10 + ((v9 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_14:
		v5 = 0i64;
	}
	v12 = &v13;
	if (v5)
		v12 = (int*)v5;
	v13 = *v12;
	return (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 560i64))(a1, v5, a2, 0i64, 0i64);
}
// 140855450: variable 'v5' is possibly undefined
// 140C11000: using guessed type int dword_140C11000[5];
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

