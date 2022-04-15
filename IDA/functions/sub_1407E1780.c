//----- (00000001407E1780) ----------------------------------------------------
__int64 __fastcall sub_1407E1780(WCHAR* a1, WCHAR** a2, unsigned int a3, int a4)
{
	unsigned int v5; // r14d
	WCHAR v8; // si
	unsigned int v9; // edi
	WCHAR* v10; // rbx
	unsigned int v11; // r13d
	unsigned int v12; // eax
	int v13; // eax
	WCHAR* v14; // rbx

	v5 = a3;
	if (a2)
		*a2 = a1;
	if (!a1 || a3 && a3 - 2 > 0x22)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v8 = *a1;
	v9 = 0;
	v10 = a1 + 1;
	while ((unsigned int)sub_1407ED1C8(v8, 8))
		v8 = *v10++;
	if (v8 == 45)
	{
		a4 |= 2u;
	}
	else if (v8 != 43)
	{
		goto LABEL_14;
	}
	v8 = *v10++;
LABEL_14:
	if (v5)
		goto LABEL_20;
	if (!(unsigned int)sub_1407EFE7C(v8))
	{
		if (((*v10 - 88) & 0xFFDF) != 0)
		{
			v5 = 8;
			goto LABEL_24;
		}
		v5 = 16;
	LABEL_20:
		if (v5 == 16 && !(unsigned int)sub_1407EFE7C(v8) && ((*v10 - 88) & 0xFFDF) == 0)
		{
			v8 = v10[1];
			v10 += 2;
		}
		goto LABEL_24;
	}
	v5 = 10;
LABEL_24:
	v11 = 0xFFFFFFFF / v5;
	while (1)
	{
		v12 = sub_1407EFE7C(v8);
		if (v12 != -1)
			goto LABEL_31;
		if ((unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u)
			break;
		v13 = v8;
		if ((unsigned __int16)(v8 - 97) <= 0x19u)
			v13 = v8 - 32;
		v12 = v13 - 55;
	LABEL_31:
		if (v12 >= v5)
			break;
		a4 |= 8u;
		if (v9 < v11 || v9 == v11 && v12 <= 0xFFFFFFFF % v5)
		{
			v9 = v12 + v5 * v9;
		}
		else
		{
			a4 |= 4u;
			if (!a2)
				break;
		}
		v8 = *v10++;
	}
	v14 = v10 - 1;
	if ((a4 & 8) != 0)
	{
		if ((a4 & 4) != 0 || (a4 & 1) == 0 && ((a4 & 2) != 0 && v9 > 0x80000000 || (a4 & 2) == 0 && v9 > 0x7FFFFFFF))
		{
			*(_DWORD*)sub_1407DE1B0() = 34;
			if ((a4 & 1) != 0)
				v9 = -1;
			else
				v9 = ((a4 & 2) != 0) + 0x7FFFFFFF;
		}
	}
	else
	{
		if (a2)
			v14 = a1;
		v9 = 0;
	}
	if (a2)
		*a2 = v14;
	if ((a4 & 2) != 0)
		return -v9;
	return v9;
}

