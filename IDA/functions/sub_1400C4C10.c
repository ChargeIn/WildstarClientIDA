//----- (00000001400C4C10) ----------------------------------------------------
bool __fastcall sub_1400C4C10(__int64 a1, int a2, int* a3)
{
	bool v3; // si
	bool result; // al
	int v7; // ecx
	int v8; // edx
	int v9; // eax
	int v10; // ecx
	int v11; // edx
	int v12; // eax
	int v13; // eax
	int v14; // ecx
	int v15; // edx
	int v16; // ecx
	int v17; // ecx
	char v18; // cl
	int v19; // eax

	v3 = 0;
	if (!*(_DWORD*)(a1 + 1296) || a2)
		return 0;
	if ((unsigned int)sub_1400C3D70(a1 + 416, a3) == 2)
	{
		v7 = *(_DWORD*)(a1 + 1300);
		v8 = *(_DWORD*)(a1 + 1296);
		*(_DWORD*)(a1 + 1332) = v7;
		*(_DWORD*)(a1 + 1300) = v7 + 1;
		if (v7 + 1 > v8)
			*(_DWORD*)(a1 + 1300) = v8;
		v9 = *(_DWORD*)(a1 + 1300);
		if (v9 < 0)
			v9 = 0;
		*(_DWORD*)(a1 + 1300) = v9;
		v3 = v9 != v7;
		*(_BYTE*)(a1 + 1392) |= 0x14u;
	}
	if ((unsigned int)sub_1400C3D70(a1, a3) == 2)
	{
		v10 = *(_DWORD*)(a1 + 1300);
		v11 = *(_DWORD*)(a1 + 1296);
		*(_DWORD*)(a1 + 1332) = v10;
		*(_DWORD*)(a1 + 1300) = v10 - 1;
		if (v10 - 1 > v11)
			*(_DWORD*)(a1 + 1300) = v11;
		v12 = *(_DWORD*)(a1 + 1300);
		if (v12 < 0)
			v12 = 0;
		*(_DWORD*)(a1 + 1300) = v12;
		v3 = v12 != v10;
		*(_BYTE*)(a1 + 1392) |= 0x14u;
	}
	v13 = *a3;
	if (*a3 >= *(_DWORD*)(a1 + 1344) && v13 < *(_DWORD*)(a1 + 1352))
	{
		v14 = a3[1];
		if (v14 >= *(_DWORD*)(a1 + 1348) && v14 < *(_DWORD*)(a1 + 1356))
		{
			v15 = -*(_DWORD*)(a1 + 1304);
		LABEL_26:
			result = sub_1400C4740(a1, v15);
			*(_BYTE*)(a1 + 1392) |= 4u;
			return result;
		}
	}
	if (v13 >= *(_DWORD*)(a1 + 1360) && v13 < *(_DWORD*)(a1 + 1368))
	{
		v16 = a3[1];
		if (v16 >= *(_DWORD*)(a1 + 1364) && v16 < *(_DWORD*)(a1 + 1372))
		{
			v15 = *(_DWORD*)(a1 + 1304);
			goto LABEL_26;
		}
	}
	if (v13 >= *(_DWORD*)(a1 + 1376) && v13 < *(_DWORD*)(a1 + 1384))
	{
		v17 = a3[1];
		if (v17 >= *(_DWORD*)(a1 + 1380) && v17 < *(_DWORD*)(a1 + 1388))
		{
			*(_DWORD*)(a1 + 1336) = v13;
			*(_DWORD*)(a1 + 1340) = a3[1];
			v18 = *(_BYTE*)(a1 + 1392);
			if ((v18 & 1) != 0)
				v19 = a3[1] - *(_DWORD*)(a1 + 1380);
			else
				v19 = *a3 - *(_DWORD*)(a1 + 1376);
			*(_DWORD*)(a1 + 1328) = v19;
			*(_BYTE*)(a1 + 1392) = v18 | 6;
		}
	}
	return v3;
}

