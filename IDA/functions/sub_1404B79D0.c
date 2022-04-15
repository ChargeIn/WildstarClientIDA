//----- (00000001404B79D0) ----------------------------------------------------
void __fastcall sub_1404B79D0(__int64 a1, char* a2)
{
	__int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rcx
	int v6; // eax
	int v7; // r13d
	int v8; // edx
	int v9; // esi
	int v10; // r15d
	char* v11; // rdi
	signed __int64 v12; // r12
	__int64 v13; // r14
	__int64 v14; // rax
	__int64 v15; // rcx
	int v16; // ecx
	BOOL v17; // eax
	int v18[10]; // [rsp+20h] [rbp-2C8h] BYREF
	char v19; // [rsp+48h] [rbp-2A0h] BYREF

	v3 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v4 = v3;
	if (v3)
	{
		v5 = *(_QWORD*)(v3 + 232);
		if (!v5 || !*(_DWORD*)(v3 + 272))
			v5 = 0i64;
		v6 = *(_DWORD*)(v5 + 184);
		if ((v6 & 0xFFFFFFFA) == 0 && v6 != 4)
		{
			v7 = 0;
			sub_1407E4830(v18, 0i64, 0x288ui64);
			v9 = 1;
			v10 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 6120i64);
			v11 = &v19;
			v12 = (char*)v18 - a2;
			v13 = 6i64;
			while (1)
			{
				if (*(_DWORD*)a2)
				{
					v14 = sub_1405AC6C0(v4, v8, v9, v10);
					if (!v14)
						goto LABEL_15;
					v8 = *(_DWORD*)(v14 + 304);
					if (v8)
					{
						if (!*(_DWORD*)(v14 + 308) || *(_DWORD*)(v14 + 348) != *(_DWORD*)a2)
						{
						LABEL_15:
							v7 = 1;
							*((_QWORD*)v11 - 2) = *(_QWORD*)(v4 + 8);
							*((_QWORD*)v11 - 1) = *(_QWORD*)(v4 + 16);
							if (v14)
								v15 = *(_QWORD*)(v14 + 88);
							else
								v15 = 0i64;
							*(_QWORD*)v11 = v15;
							v16 = *(_DWORD*)a2;
							*((_DWORD*)v11 + 2) = 3;
							*((_DWORD*)v11 + 4) = v10;
							*((_DWORD*)v11 + 5) = v9;
							*((_DWORD*)v11 + 15) = v16;
							v17 = v14 && *(_QWORD*)(v14 + 88);
							*(_DWORD*)&a2[v12] = v17;
						}
					}
					else if (*(_DWORD*)(v14 + 108) != *(_DWORD*)a2)
					{
						goto LABEL_15;
					}
				}
				++v9;
				v11 += 104;
				a2 += 4;
				if (!--v13)
				{
					if (v7)
						sub_1403F4900(qword_140C65898, 0x50Du, (__int64)v18);
					return;
				}
			}
		}
	}
}
// 1404B7ADF: conditional instruction was optimized away because edx.4==0
// 1404B7AC2: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404B79D0: using guessed type int var_2C8[10];

