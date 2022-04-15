//----- (00000001403BB340) ----------------------------------------------------
void __fastcall sub_1403BB340(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v3; // rbx
	__int64 v5; // rbp
	unsigned int v6; // r9d
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rdx
	unsigned __int8 v10; // si
	char v11; // al
	unsigned int v12; // eax
	char v13[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v14; // [rsp+40h] [rbp+8h] BYREF

	if (a3 < 0xAu)
	{
		v14 = a1;
		v3 = qword_140C65898;
		v5 = sub_1403BACC0(qword_140C65898, a2, *(_BYTE*)(qword_140C65898 + 28140));
		if (v5)
		{
			v7 = *(_QWORD*)(v3 + 5216);
			v8 = *(_QWORD*)(v7 + 8);
			v9 = v7;
			while (v8)
			{
				if (*(_DWORD*)(v8 + 32) < v6)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v9 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			}
			if (v9 == v7 || (v14 = v9, v6 < *(_DWORD*)(v9 + 32)))
				v14 = v7;
			if (v14 == v7)
			{
				v10 = *(_BYTE*)(v5 + 8);
				LODWORD(v14) = v6;
				BYTE4(v14) = a3;
				sub_140032F50(v3 + 5208, (__int64)v13, &v14);
			}
			else
			{
				v10 = *(_BYTE*)(v14 + 36);
				if (*(_BYTE*)(v5 + 8) == a3)
					sub_1403D5B90(v3 + 5208, &v14);
				else
					*(_BYTE*)(v14 + 36) = a3;
			}
			v11 = sub_1403BB2B0(v8, v5, v10, a3);
			if (*(_DWORD*)(v3 + 28124) == -1)
				*(_DWORD*)(v3 + 28124) = *(_DWORD*)(v3 + 28120);
			v12 = *(_DWORD*)(v3 + 28124) + v11;
			if (v12 > *(_DWORD*)(v3 + 28128))
				v12 = *(_DWORD*)(v3 + 28128);
			*(_DWORD*)(v3 + 28124) = v12;
		}
	}
}
// 1403BB3A4: variable 'v6' is possibly undefined
// 1403BB431: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403BB340: using guessed type char var_18[24];

