//----- (00000001405E52F0) ----------------------------------------------------
void __fastcall sub_1405E52F0(__int64* a1, int* a2)
{
	int* v4; // rax
	unsigned int v5; // edx
	int v6; // ebp
	int v7; // r15d
	int* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // r10d
	int v12; // r11d
	__int64 v13; // rsi
	unsigned int v14; // r8d
	__int64 v15; // rcx
	unsigned int* v16; // rdx
	__int64 v17; // rax
	int v18; // edx
	__int16* v19; // rbx
	__int64 v20; // rcx
	__int16* v21; // rax
	int* v22; // rbx
	unsigned int v23; // edx
	__int16* v24; // rbx
	__int64 v25; // rcx
	__int16* v26; // rax
	int* v27; // rbx
	__int16* v28; // rbx
	__int64 v29; // rcx
	__int16* v30; // rax
	int* v31; // rbp
	unsigned int i; // esi
	unsigned int v33; // eax
	__int64 v34; // rbx
	unsigned __int64 v35; // rax
	__int64* v36; // rcx
	unsigned __int64 v37; // r8
	_DWORD* v38; // rdx
	unsigned __int64 v39; // rdx
	unsigned __int64 v40; // rcx
	_DWORD* v41; // rax
	__int64 v42; // [rsp+40h] [rbp-48h] BYREF
	int* v43; // [rsp+48h] [rbp-40h]

	v4 = sub_1405E6000(a1, *a2, 1);
	v5 = *a2;
	v6 = v4[20];
	v7 = v4[21];
	v8 = v4;
	v4[2] = *a2;
	v4[20] = a2[1];
	v9 = a2[2] & 1;
	v4[3] = v9;
	v4[4] = a2[3];
	v4[5] = a2[4];
	v4[6] = a2[5];
	v4[7] = a2[6];
	v4[8] = a2[7];
	v4[9] = a2[8];
	v4[10] = a2[9];
	v4[11] = a2[10];
	v4[12] = a2[11];
	v4[13] = a2[12];
	v4[14] = a2[13];
	v4[15] = a2[14];
	v10 = sub_1405BE150(v9, v5);
	v13 = v10;
	if (v10)
	{
		v14 = *(_DWORD*)(v10 + 12);
		v15 = 0i64;
		if (v14)
		{
			v16 = (unsigned int*)(v10 + 32);
			while (v11 >= *v16)
			{
				v15 = (unsigned int)(v15 + 1);
				v16 += 12;
				if ((unsigned int)v15 >= v14)
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			v15 = v14;
		}
		v17 = qword_140C65898;
		v8[21] = v15;
		if (*(_QWORD*)(v17 + 120))
		{
			if (v8[3] != v12)
			{
				v18 = 60108;
				if (v12)
					v18 = 215978;
				v19 = sub_14034BDD0(v15, v18);
				v21 = sub_14034BDD0(v20, *(_DWORD*)(v13 + 4));
				sub_14018EFA0(&v42, (__int64)v19, v21);
				v22 = v43;
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v43, 0, 0i64);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"TradeSkillFloater",
					"US",
					*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
					v22);
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				if (v8[3])
				{
					v23 = *(_DWORD*)(v13 + 20);
					if (v23)
						sub_140437A10((_QWORD*)qword_140C658D8, v23, 0, 0i64, 0, 0, 1);
					if ((*(_BYTE*)(v13 + 16) & 2) == 0 && *a2 != 22)
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "TradeSkills_Learned", "i");
				}
				if (v22)
					sub_14018B900((__int64)v22, 0);
			}
			if (v8[20] != v6)
			{
				v24 = sub_14034BDD0(v15, 195954);
				v26 = sub_14034BDD0(v25, *(_DWORD*)(v13 + 4));
				sub_14018EFA0(&v42, (__int64)v24, (unsigned int)(v8[20] - v6), v26);
				v27 = v43;
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v43, 0, 0i64);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"TradeSkillFloater",
					"US",
					*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
					v27);
				if (v27)
					sub_14018B900((__int64)v27, 0);
			}
			if (v8[21] != v7)
			{
				v28 = sub_14034BDD0(v15, 195955);
				v30 = sub_14034BDD0(v29, *(_DWORD*)(v13 + 4));
				sub_14018EFA0(&v42, (__int64)v28, v30, (unsigned int)v8[21]);
				v31 = v43;
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v43, 0, 0i64);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"TradeSkillFloater",
					"US",
					*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
					v31);
				for (i = 0; ; ++i)
				{
					if (qword_140C63838)
					{
						v33 = qword_140C63838(off_140A6DD58, qword_140C63858);
					}
					else
					{
						if (dword_140C654F8 || (int)sub_1402459A0() < 0)
						{
						LABEL_44:
							if (v31)
								sub_14018B900((__int64)v31, 0);
							break;
						}
						v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
					}
					if (i >= v33)
						goto LABEL_44;
					v34 = sub_140245C60(i);
					if (*(_DWORD*)(v34 + 8) == *a2)
					{
						v35 = *((_QWORD*)v8 + 14);
						v36 = (__int64*)(v8 + 26);
						v37 = 0i64;
						if (v35)
						{
							v38 = (_DWORD*)*v36;
							while (*v38 != *(_DWORD*)v34)
							{
								++v37;
								++v38;
								if (v37 >= v35)
									goto LABEL_35;
							}
						}
						else
						{
						LABEL_35:
							sub_140003460(v36, (int*)v34);
						}
						if ((*(_BYTE*)(v34 + 32) & 1) != 0 && *(_DWORD*)(v34 + 28) <= (unsigned int)v8[21])
						{
							v39 = *((_QWORD*)v8 + 9);
							v40 = 0i64;
							if (v39)
							{
								v41 = (_DWORD*)*((_QWORD*)v8 + 8);
								while (*v41 != *(_DWORD*)v34)
								{
									++v40;
									++v41;
									if (v40 >= v39)
										goto LABEL_42;
								}
							}
							else
							{
							LABEL_42:
								sub_1405E5900(a1, *(_DWORD*)(v34 + 8), *(_DWORD*)v34, 0);
							}
						}
					}
				}
			}
		}
		if (*a2 != 22)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ProfessionUpdated", &unk_1409D135E);
	}
}
// 1405E53C3: variable 'v11' is possibly undefined
// 1405E53F3: variable 'v12' is possibly undefined
// 1405E5414: variable 'v20' is possibly undefined
// 1405E550B: variable 'v15' is possibly undefined
// 1405E5516: variable 'v25' is possibly undefined
// 1405E55AE: variable 'v29' is possibly undefined
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C658D8: using guessed type __int64 qword_140C658D8;

