//----- (00000001407DEF44) ----------------------------------------------------
__int64 __fastcall sub_1407DEF44(_OWORD* a1, unsigned __int8* a2, unsigned __int8** a3, unsigned int a4, int a5)
{
	unsigned __int8 v8; // si
	__int64 v9; // r8
	unsigned int v10; // edi
	unsigned __int8* i; // rbx
	int v12; // eax
	int v13; // ebp
	__int64 v14; // r10
	unsigned int v15; // r9d
	unsigned int v16; // ecx
	int v17; // ecx
	unsigned __int8* v18; // rbx
	__int128 v20; // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+30h] [rbp-38h]
	char v22; // [rsp+38h] [rbp-30h]

	sub_1407DE348((__int64)&v20, a1);
	if (a3)
		*a3 = a2;
	if (!a2 || a4 && a4 - 2 > 0x22)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	LABEL_21:
		v10 = 0;
		goto LABEL_63;
	}
	v8 = *a2;
	v9 = v20;
	v10 = 0;
	for (i = a2 + 1; ; ++i)
	{
		if (*(int*)(v9 + 212) <= 1)
		{
			v12 = *(_WORD*)(*(_QWORD*)(v9 + 264) + 2i64 * v8) & 8;
		}
		else
		{
			v12 = sub_1407EA448(v8, 8, &v20);
			v9 = v20;
		}
		if (!v12)
			break;
		v8 = *i;
	}
	v13 = a5;
	if (v8 == 45)
	{
		v13 = a5 | 2;
	}
	else if (v8 != 43)
	{
		goto LABEL_17;
	}
	v8 = *i++;
LABEL_17:
	if (!a4)
	{
		if (v8 != 48)
		{
			a4 = 10;
			goto LABEL_32;
		}
		if (((*i - 88) & 0xDF) != 0)
		{
			a4 = 8;
			goto LABEL_32;
		}
		a4 = 16;
		goto LABEL_30;
	}
	if (a4 - 2 > 0x22)
	{
		if (a3)
			*a3 = a2;
		goto LABEL_21;
	}
	if (a4 == 16 && v8 == 48)
	{
	LABEL_30:
		if (((*i - 88) & 0xDF) == 0)
		{
			v8 = i[1];
			i += 2;
		}
	}
LABEL_32:
	v14 = *(_QWORD*)(v9 + 264);
	v15 = 0xFFFFFFFF / a4;
	while (1)
	{
		if ((*(_WORD*)(v14 + 2i64 * v8) & 4) != 0)
		{
			v16 = (char)v8 - 48;
		}
		else
		{
			if ((*(_WORD*)(v14 + 2i64 * v8) & 0x103) == 0)
				break;
			v17 = (char)v8;
			if ((unsigned __int8)(v8 - 97) <= 0x19u)
				v17 = (char)v8 - 32;
			v16 = v17 - 55;
		}
		if (v16 >= a4)
			break;
		v13 |= 8u;
		if (v10 < v15 || v10 == v15 && v16 <= 0xFFFFFFFF % a4)
		{
			v10 = v16 + a4 * v10;
		}
		else
		{
			v13 |= 4u;
			if (!a3)
				break;
		}
		v8 = *i++;
	}
	v18 = i - 1;
	if ((v13 & 8) != 0)
	{
		if ((v13 & 4) != 0 || (v13 & 1) == 0 && ((v13 & 2) != 0 && v10 > 0x80000000 || (v13 & 2) == 0 && v10 > 0x7FFFFFFF))
		{
			*(_DWORD*)sub_1407DE1B0() = 34;
			if ((v13 & 1) != 0)
				v10 = -1;
			else
				v10 = ((v13 & 2) != 0) + 0x7FFFFFFF;
		}
	}
	else
	{
		if (a3)
			v18 = a2;
		v10 = 0;
	}
	if (a3)
		*a3 = v18;
	if ((v13 & 2) != 0)
		v10 = -v10;
LABEL_63:
	if (v22)
		*(_DWORD*)(v21 + 200) &= ~2u;
	return v10;
}
// 1407DF030: conditional instruction was optimized away because r14d.4!=0

