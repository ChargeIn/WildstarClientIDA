#include "../winhttp.h"

//----- (00000001407ECF30) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407ECF30(_OWORD* a1, WCHAR* a2, WCHAR** a3, int a4, int a5)
{
	WCHAR v8; // si
	unsigned __int64 v9; // rdi
	WCHAR* v10; // rbx
	int v11; // ebp
	unsigned __int64 v12; // r13
	unsigned int v13; // r8d
	int v14; // r8d
	WCHAR* v15; // rbx
	char v17[16]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v18; // [rsp+30h] [rbp-48h]
	char v19; // [rsp+38h] [rbp-40h]

	sub_1407DE348((__int64)v17, a1);
	if (a3)
		*a3 = a2;
	if (!a2 || a4 && (unsigned int)(a4 - 2) > 0x22)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	LABEL_18:
		v9 = 0i64;
		goto LABEL_60;
	}
	v8 = *a2;
	v9 = 0i64;
	v10 = a2 + 1;
	while ((unsigned int)sub_1407ED1C8(v8, 8))
		v8 = *v10++;
	v11 = a5;
	if (v8 == 45)
	{
		v11 = a5 | 2;
	LABEL_13:
		v8 = *v10++;
		goto LABEL_14;
	}
	if (v8 == 43)
		goto LABEL_13;
LABEL_14:
	if (a4 && (unsigned int)(a4 - 2) > 0x22)
	{
		if (a3)
			*a3 = a2;
		goto LABEL_18;
	}
	if (a4)
		goto LABEL_25;
	if (!(unsigned int)sub_1407EFE7C(v8))
	{
		if (((*v10 - 88) & 0xFFDF) != 0)
		{
			a4 = 8;
			goto LABEL_29;
		}
		a4 = 16;
	LABEL_25:
		if (a4 == 16 && !(unsigned int)sub_1407EFE7C(v8) && ((*v10 - 88) & 0xFFDF) == 0)
		{
			v8 = v10[1];
			v10 += 2;
		}
		goto LABEL_29;
	}
	a4 = 10;
LABEL_29:
	v12 = 0xFFFFFFFFFFFFFFFFui64 / a4;
	while (1)
	{
		v13 = sub_1407EFE7C(v8);
		if (v13 != -1)
			goto LABEL_36;
		if ((unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u)
			break;
		v14 = v8;
		if ((unsigned __int16)(v8 - 97) <= 0x19u)
			v14 = v8 - 32;
		v13 = v14 - 55;
	LABEL_36:
		if (v13 >= a4)
			break;
		v11 |= 8u;
		if (v9 < v12 || v9 == v12 && v13 <= 0xFFFFFFFFFFFFFFFFui64 % a4)
		{
			v9 = v9 * a4 + v13;
		}
		else
		{
			v11 |= 4u;
			if (!a3)
				break;
		}
		v8 = *v10++;
	}
	v15 = v10 - 1;
	if ((v11 & 8) != 0)
	{
		if ((v11 & 4) != 0
			|| (v11 & 1) == 0
			&& ((v11 & 2) != 0 && v9 > 0x8000000000000000ui64 || (v11 & 2) == 0 && v9 > 0x7FFFFFFFFFFFFFFFi64))
		{
			*(_DWORD*)sub_1407DE1B0() = 34;
			if ((v11 & 1) != 0)
				v9 = -1i64;
			else
				v9 = ((v11 & 2) != 0) + 0x7FFFFFFFFFFFFFFFi64;
		}
	}
	else
	{
		if (a3)
			v15 = a2;
		v9 = 0i64;
	}
	if (a3)
		*a3 = v15;
	if ((v11 & 2) != 0)
		v9 = -(__int64)v9;
LABEL_60:
	if (v19)
		*(_DWORD*)(v18 + 200) &= ~2u;
	return v9;
}
// 1407ECF30: using guessed type char var_58[16];

