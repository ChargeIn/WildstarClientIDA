//----- (0000000140130A00) ----------------------------------------------------
void __fastcall sub_140130A00(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	unsigned __int64 v5; // r10
	unsigned int v6; // r11d
	__int64 v7; // rbx
	__int64 v8; // r8
	__int64 v9; // rcx
	unsigned int v10; // eax
	int v11; // edx
	char v12; // al
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	__int64 v16; // rdx
	__int64 v17; // rdx
	unsigned __int8 v18; // cl
	int v19; // r8d
	int v20; // r8d
	char v21; // al
	int v22; // edx
	int v23; // edx
	int v24; // edx
	__int64 v25; // r9
	__int64 v26; // rcx

	v5 = a3;
	v6 = a2;
	v7 = a1;
	if (*a5)
		goto LABEL_56;
	v8 = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(v8 + 2880))
		goto LABEL_55;
	if (*(float*)(a1 + 648) <= 0.0)
		goto LABEL_55;
	v9 = *(_QWORD*)(a1 + 16);
	if (v9)
	{
		if (!sub_1400D1A60(v9))
			goto LABEL_55;
	}
	v10 = a2 - 256;
	v11 = 0;
	if ((v10 & 0xFFFFFFFB) == 0
		&& (a4 & 0x40000000) == 0
		&& v5 == *(_DWORD*)(v7 + 1456)
		&& *(_DWORD*)(v8 + 2876) == *(_DWORD*)(v7 + 1460))
	{
		v12 = *(_BYTE*)(v7 + 1436);
		if ((v12 & 0x10) != 0)
		{
			if ((v12 & 0x40) == 0)
			{
				v14 = *(_DWORD*)(v7 + 1320);
				if (v14)
				{
					if (v14 != 2)
					{
						v13 = 0;
						goto LABEL_20;
					}
					*(_DWORD*)(v7 + 1428) = 0;
					v13 = 2;
				}
				else
				{
					v13 = 3;
				}
				*(_BYTE*)(v7 + 1436) = v12 | 0x40;
				goto LABEL_20;
			}
			v13 = 0;
		}
		else
		{
			v13 = 0;
		}
	LABEL_20:
		v15 = v13 - 2;
		if (!v15)
		{
			v16 = 33i64;
			goto LABEL_24;
		}
		if (v15 == 1)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, 33i64, 0i64, 0i64);
			*a5 = 1;
			return;
		}
	}
	if (((v6 - 257) & 0xFFFFFFFB) == 0
		&& v5 == *(_DWORD*)(v7 + 1456)
		&& *(_DWORD*)(v8 + 2876) == *(_DWORD*)(v7 + 1460))
	{
		v18 = *(_BYTE*)(v7 + 1436);
		if ((v18 & 0x10) != 0)
		{
			v19 = *(_DWORD*)(v7 + 1320);
			if (!v19)
			{
				v11 = 2;
			LABEL_37:
				*(_BYTE*)(v7 + 1436) = v18 & 0xBF;
				goto LABEL_38;
			}
			v20 = v19 - 1;
			if (v20)
			{
				if (v20 == 1)
					goto LABEL_37;
			}
			else
			{
				v21 = v18 ^ (v18 ^ (~(v18 >> 6) << 6)) & 0x40;
				*(_BYTE*)(v7 + 1436) = v21;
				v11 = 8 - ((v21 & 0x40) != 0);
			}
		}
	LABEL_38:
		v22 = v11 - 2;
		if (v22)
		{
			v23 = v22 - 2;
			if (!v23)
			{
				v17 = 34i64;
				goto LABEL_25;
			}
			v24 = v23 - 3;
			if (!v24)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, 34i64, 0i64);
				v26 = *(_QWORD*)(v7 + 1448);
				if (v26)
					sub_140150B90(v26, v7);
				v17 = 36i64;
				goto LABEL_25;
			}
			if (v24 == 1)
			{
				if ((*(_BYTE*)(v7 + 664) & 0x20) != 0 && *(_QWORD*)(v7 + 1448))
				{
					*(_BYTE*)(v7 + 1436) |= 0x40u;
					if ((*(_BYTE*)(v7 + 664) & 0x40) == 0)
						goto LABEL_26;
					v17 = 36i64;
				}
				else
				{
					if (*(_QWORD*)(v7 + 1448))
					{
						if (sub_140150A30(*(_QWORD*)(v7 + 1448)) == v7)
							sub_140150A60(v25, -1);
					}
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, 34i64, 0i64);
					v17 = 37i64;
				}
			LABEL_25:
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, v17, 0i64, 0i64);
			LABEL_26:
				*a5 = 1;
				return;
			}
			goto LABEL_55;
		}
		v16 = 34i64;
	LABEL_24:
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 568i64))(v7, v16, 0i64, 0i64);
		v17 = 32i64;
		goto LABEL_25;
	}
LABEL_55:
	a3 = v5;
	a2 = v6;
	a1 = v7;
LABEL_56:
	sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
}
// 140130A59: variable 'a2' is possibly undefined
// 140130A6C: variable 'a4' is possibly undefined
// 140130A80: variable 'v5' is possibly undefined
// 140130A8C: variable 'v8' is possibly undefined
// 140130B45: variable 'v6' is possibly undefined
// 140130C4D: variable 'v25' is possibly undefined

