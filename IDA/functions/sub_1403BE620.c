//----- (00000001403BE620) ----------------------------------------------------
void __fastcall sub_1403BE620(_QWORD* a1, unsigned int a2, int a3, int a4, int a5)
{
	__int64 v6; // rdi
	__int64 v8; // r12
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rdx
	int* v12; // rax
	int* v13; // rsi
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rcx
	int v17; // ebx
	int v18; // r8d
	__int64 v19; // r13
	__int64 v20; // rax
	int v21; // edx
	int v22; // eax
	__int64 v23; // rcx
	unsigned int v24; // edx
	__int64* v25; // rcx
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rdx
	int v30; // eax
	__int64 v31; // rcx
	int v32; // edx
	__int64 v33[2]; // [rsp+30h] [rbp-38h] BYREF
	int v34; // [rsp+40h] [rbp-28h] BYREF
	__int64 v35; // [rsp+48h] [rbp-20h]
	void(__fastcall * v36)(__int64*, unsigned int); // [rsp+50h] [rbp-18h]
	__int64 v37; // [rsp+58h] [rbp-10h]

	if (a2)
	{
		v6 = a2;
		v8 = sub_1403ACD90(qword_140C65B70, a2, a1[3218]);
		if (v8)
		{
			v9 = a1[689];
			v10 = *(_QWORD*)(v9 + 8);
			v11 = v9;
			while (v10)
			{
				if (*(_DWORD*)(v10 + 32) < (unsigned int)v6)
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v11 = v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			}
			if (v11 == v9 || (v33[0] = v11, (unsigned int)v6 < *(_DWORD*)(v11 + 32)))
				v33[0] = v9;
			if (v33[0] == v9)
			{
				v12 = sub_14018B280(176i64, 0);
				v13 = v12;
				if (v12)
				{
					*((_QWORD*)v12 + 6) = 0i64;
					*((_QWORD*)v12 + 7) = 0i64;
					*((_QWORD*)v12 + 9) = 0i64;
					*((_QWORD*)v12 + 10) = 0i64;
					v12[8] = 1414420037;
					v12[25] = 0;
					*((_QWORD*)v12 + 15) = 0i64;
					*((_QWORD*)v12 + 16) = 0i64;
					*((_QWORD*)v12 + 18) = 0i64;
					*((_QWORD*)v12 + 19) = 0i64;
					v12[26] = 1414420037;
					v12[43] = 0;
					*(_QWORD*)v12 = 0i64;
					*((_QWORD*)v12 + 1) = 0i64;
					v12[4] = 0;
					v12[6] = 0;
				}
				else
				{
					v13 = 0i64;
				}
				v13[5] = a4;
				v13[4] = a3;
				v13[6] = a5;
				v14 = *(_QWORD*)(v8 + 112);
				v34 = 1;
				v15 = *(_DWORD*)(v14 + 388);
				v35 = sub_14001C280((__int64)a1);
				v37 = v6;
				v36 = sub_1403BF2C0;
				sub_140195960((__int64)(v13 + 8), v15, (__int64)&v34, 4);
				LODWORD(v33[0]) = v6;
				v33[1] = (__int64)v13;
				sub_140055F80((__int64)(a1 + 688), (__int64)&v34, v33);
				v17 = *(_DWORD*)(*(_QWORD*)(v8 + 112) + 24i64);
				if (v17 == 2)
				{
					v18 = 0;
				}
				else
				{
					if (v17 != 7)
					{
					LABEL_21:
						v22 = sub_140564FB0(v16, v6) + 1;
						if (v17 == 7)
							--v22;
						v23 = *(_QWORD*)(v8 + 112);
						if ((*(_BYTE*)(v23 + 268) & 0x40) == 0)
							sub_1400EA3E0(
								a1[3688],
								"StartSpellThreshold",
								byte_1409E98FC,
								(unsigned int)v6,
								v22,
								*(_DWORD*)(v23 + 24));
						if ((unsigned int)sub_1403C0760((__int64)a1, v6))
						{
							if (v17 == 2 || v17 == 7)
								sub_1403BEF30(v25, v24, 0);
							v26 = a1[697];
							v27 = v26;
							v28 = *(_QWORD*)(v26 + 8);
							while (v28)
							{
								if (*(_DWORD*)(v28 + 32) < (unsigned int)v6)
								{
									v28 = *(_QWORD*)(v28 + 24);
								}
								else
								{
									v27 = v28;
									v28 = *(_QWORD*)(v28 + 16);
								}
							}
							if (v27 == v26 || (v33[0] = v27, (unsigned int)v6 < *(_DWORD*)(v27 + 32)))
								v33[0] = v26;
							if (v33[0] != v26)
								sub_1403D5FD0((__int64)(a1 + 696), v33);
						}
						else
						{
							v29 = *(_QWORD*)(v8 + 112);
							v30 = *(_DWORD*)(v29 + 24);
							if (v30 == 7 || v30 == 2)
							{
								v31 = *(_QWORD*)(qword_140C65898 + 5352);
								if (v31)
								{
									v32 = *(_DWORD*)(v29 + 4);
									if (*(_DWORD*)(v31 + 280) == v32)
										sub_1405CA390(v31, v32);
								}
							}
						}
						return;
					}
					v18 = 1;
				}
				v19 = sub_140564F40(qword_140C65B70, v6, v18);
				if (v19)
				{
					v34 = 1;
					v20 = sub_14001C280((__int64)a1);
					v21 = *(_DWORD*)(v19 + 16);
					v35 = v20;
					v37 = v6;
					v36 = (void(__fastcall*)(__int64*, unsigned int))nullsub_1;
					sub_140195960((__int64)(v13 + 26), v21, (__int64)&v34, 4);
				}
				goto LABEL_21;
			}
		}
	}
}
// 1403BE813: variable 'v16' is possibly undefined
// 1403BE87F: variable 'v25' is possibly undefined
// 1403BE87F: variable 'v24' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409E98FC: using guessed type _BYTE byte_1409E98FC[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

