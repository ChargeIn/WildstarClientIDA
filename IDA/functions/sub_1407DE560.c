//----- (00000001407DE560) ----------------------------------------------------
_BYTE* __fastcall sub_1407DE560(_BYTE* a1, char* a2, unsigned __int64 a3)
{
	_BYTE* v3; // r11
	unsigned __int64 v4; // rax
	__int64 v5; // r10
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rax
	unsigned int v8; // eax
	__int64 v9; // rcx
	char v10; // al
	unsigned __int64 v12; // rax
	bool v13; // cf
	unsigned __int64 v14; // r8
	unsigned __int64 v15; // r8
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // rax
	unsigned __int64 v18; // r8
	unsigned __int64 v19; // r8
	unsigned __int64 v20; // rax
	unsigned __int64 v21; // r8
	unsigned __int64 v22; // r8
	unsigned int v23; // eax
	unsigned __int64 v24; // r8

	v3 = a1;
	if (!a3)
		return v3;
	if (((unsigned __int8)a1 & 7) != 0)
	{
		while (*a1)
		{
			if (((unsigned __int8)++a1 & 7) == 0)
				goto LABEL_5;
		}
	}
	else
	{
		while (1)
		{
			do
			{
			LABEL_5:
				v4 = *(_QWORD*)a1;
				v5 = (*(_QWORD*)a1 + 0x7EFEFEFEFEFEFEFFi64) ^ ~*(_QWORD*)a1;
				a1 += 8;
			} while ((v5 & 0x8101010101010100ui64) == 0);
			a1 -= 8;
			if (!(_BYTE)v4)
				break;
			++a1;
			if (!BYTE1(v4))
				break;
			++a1;
			v6 = v4 >> 16;
			if (!(_BYTE)v6)
				break;
			++a1;
			if (!BYTE1(v6))
				break;
			++a1;
			v7 = v6 >> 16;
			if (!(_BYTE)v7)
				break;
			++a1;
			if (!BYTE1(v7))
				break;
			++a1;
			v8 = WORD1(v7);
			if (!(_BYTE)v8)
				break;
			++a1;
			if (!BYTE1(v8))
				break;
			++a1;
		}
	}
	v9 = a1 - a2;
	if (((unsigned __int8)a2 & 7) != 0)
	{
		while (1)
		{
			v10 = *a2;
			a2[v9] = *a2;
			if (!v10)
				return v3;
			++a2;
			if (!--a3)
			{
				a2[v9] = 0;
				return v3;
			}
			if (((unsigned __int8)a2 & 7) == 0)
				goto LABEL_23;
		}
	}
	do
	{
	LABEL_23:
		while (1)
		{
			v12 = *(_QWORD*)a2;
			v13 = a3 < 8;
			a3 -= 8i64;
			if (v13 || (((v12 + 0x7EFEFEFEFEFEFEFFi64) ^ ~v12) & 0x8101010101010100ui64) != 0)
				break;
			*(_QWORD*)&a2[v9] = v12;
			a2 += 8;
		}
		v14 = a3 + 8;
		if (!v14)
			break;
		a2[v9] = v12;
		if (!(_BYTE)v12)
			return v3;
		++a2;
		v15 = v14 - 1;
		if (!v15)
			break;
		a2[v9] = BYTE1(v12);
		if (!BYTE1(v12))
			return v3;
		++a2;
		v16 = v15 - 1;
		if (!v16)
			break;
		v17 = v12 >> 16;
		a2[v9] = v17;
		if (!(_BYTE)v17)
			return v3;
		++a2;
		v18 = v16 - 1;
		if (!v18)
			break;
		a2[v9] = BYTE1(v17);
		if (!BYTE1(v17))
			return v3;
		++a2;
		v19 = v18 - 1;
		if (!v19)
			break;
		v20 = v17 >> 16;
		a2[v9] = v20;
		if (!(_BYTE)v20)
			return v3;
		++a2;
		v21 = v19 - 1;
		if (!v21)
			break;
		a2[v9] = BYTE1(v20);
		if (!BYTE1(v20))
			return v3;
		++a2;
		v22 = v21 - 1;
		if (!v22)
			break;
		v23 = WORD1(v20);
		a2[v9] = v23;
		if (!(_BYTE)v23)
			return v3;
		++a2;
		v24 = v22 - 1;
		if (!v24)
			break;
		a2[v9] = BYTE1(v23);
		if (!BYTE1(v23))
			return v3;
		++a2;
		a3 = v24 - 1;
	} while (a3);
	a2[v9] = 0;
	return v3;
}

