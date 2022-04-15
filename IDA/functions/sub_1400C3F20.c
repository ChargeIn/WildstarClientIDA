//----- (00000001400C3F20) ----------------------------------------------------
__int64 __fastcall sub_1400C3F20(__int64 a1, int* a2)
{
	char v2; // di
	int v4; // eax
	BOOL v5; // eax
	bool v6; // al
	bool v7; // sf
	int v8; // eax
	double v9; // xmm0_8
	char v10; // al
	__int64 v11; // rcx
	unsigned int* v12; // rcx
	__int64 v13; // rcx
	char v14; // cl
	int v15; // eax

	v2 = *(_BYTE*)(a1 + 412) >> 7;
	v5 = 0;
	if (*a2 >= *(_DWORD*)(a1 + 336) && *a2 < *(_DWORD*)(a1 + 344))
	{
		v4 = a2[1];
		if (v4 >= *(_DWORD*)(a1 + 340) && v4 < *(_DWORD*)(a1 + 348))
			v5 = 1;
	}
	*(_BYTE*)(a1 + 412) &= ~0x80u;
	v6 = v5 << 7;
	v7 = ((v6 | *(_BYTE*)(a1 + 412)) & 0x80u) != 0;
	*(_BYTE*)(a1 + 412) |= v6;
	if (v7 && (*(_BYTE*)(a1 + 412) & 1) != 0)
	{
		v10 = 0;
		if (*a2 >= *(_DWORD*)(a1 + 352) && *a2 < *(_DWORD*)(a1 + 360))
		{
			v8 = a2[1];
			if (v8 >= *(_DWORD*)(a1 + 356) && v8 < *(_DWORD*)(a1 + 364))
			{
				v9 = sub_140109AB0((float*)a1, (int*)(a1 + 352), a2);
				if (*(float*)&v9 > *(float*)(a1 + 408))
					v10 = 1;
			}
		}
		*(_BYTE*)(a1 + 412) &= ~0x80u;
		*(_BYTE*)(a1 + 412) |= v10 << 7;
	}
	if (v2)
	{
		if (*(char*)(a1 + 412) < 0)
			goto LABEL_22;
		v11 = *(_QWORD*)(a1 + 288);
		if (v11)
		{
			v12 = (unsigned int*)(v11 + 32);
		LABEL_25:
			sub_14010B100(v12);
			goto LABEL_26;
		}
	}
	if (*(char*)(a1 + 412) >= 0)
		goto LABEL_26;
LABEL_22:
	if (!v2)
	{
		v13 = *(_QWORD*)(a1 + 288);
		if (v13)
		{
			v12 = (unsigned int*)(v13 + 72);
			goto LABEL_25;
		}
	}
LABEL_26:
	v14 = *(_BYTE*)(a1 + 412);
	if ((v14 & 0x20) != 0)
	{
		v15 = *(_DWORD*)(a1 + 296);
		if (!v15)
			goto LABEL_34;
		if (v15 == 2)
		{
			if ((v14 & 0x40) == 0)
			{
				if (v14 < 0)
				{
					*(_DWORD*)(a1 + 404) = 0;
					*(_BYTE*)(a1 + 412) = v14 ^ (v14 ^ ((unsigned __int8)v14 >> 1)) & 0x40;
					return 2i64;
				}
				goto LABEL_33;
			}
			if (v14 >= 0)
				LABEL_33:
			*(_DWORD*)(a1 + 404) = 0;
		LABEL_34:
			*(_BYTE*)(a1 + 412) = v14 ^ (v14 ^ ((unsigned __int8)v14 >> 1)) & 0x40;
		}
	}
	return 0i64;
}

