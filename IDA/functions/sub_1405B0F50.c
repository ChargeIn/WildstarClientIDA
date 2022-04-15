#include "../winhttp.h"

//----- (00000001405B0F50) ----------------------------------------------------
void __fastcall sub_1405B0F50(__int64 a1, __int64 a2)
{
	__int64 v4; // r13
	__int64 v5; // r9
	int v6; // r14d
	int v7; // r12d
	int v8; // r15d
	__int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rdx
	int* v12; // rbx
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rcx
	__int64 v19; // rdi
	int* v20; // rax
	BOOL v21; // ebx
	int* v22; // rdx
	__int64 v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rcx
	unsigned __int64 v26; // r15
	_QWORD* v27; // rbx
	unsigned __int64 v28; // r15
	__int64 v29; // rbx
	__int64 v30; // rcx
	unsigned __int64 v31; // r15
	int** v32; // rbx
	int* v33; // rax
	__int64 v34; // rcx
	int* v35; // rcx
	__int64 v36; // [rsp+58h] [rbp+10h] BYREF

	if (a2)
	{
		v4 = sub_1402070A0(*(_DWORD*)(a2 + 56));
		if (v4)
		{
			v5 = qword_140C635F0;
			v6 = 0;
			v7 = 0;
			if (*(_QWORD*)(a2 + 24) == *(_QWORD*)(qword_140C635F0 + 5792)
				&& *(_DWORD*)a2 == *(_DWORD*)(qword_140C635F0 + 5760))
			{
				v7 = 1;
			}
			v8 = 0;
			v9 = 0i64;
			if (qword_140C7DE20)
			{
				while (1)
				{
					v10 = *(_QWORD*)(qword_140C7DE18 + 8 * v9);
					if (*(_DWORD*)(v10 + 16) == 3)
						break;
					if (++v9 >= (unsigned __int64)qword_140C7DE20)
						goto LABEL_14;
				}
				if (v10 && *(_QWORD*)(a2 + 32) == *(_QWORD*)v10 && *(_DWORD*)a2 == *(_DWORD*)(qword_140C635F0 + 5760))
					v8 = 1;
			}
		LABEL_14:
			v11 = *(int**)(a1 + 24);
			if (*(_DWORD*)(a2 + 168))
			{
				v12 = *(int**)(a1 + 16);
				if (v12 != v11)
				{
					while (*(_DWORD*)(*(_QWORD*)v12 + 8i64) != *(_DWORD*)a2
						|| *(_QWORD*)(*(_QWORD*)v12 + 16i64) != *(_QWORD*)(a2 + 8))
					{
						v12 += 2;
						if (v12 == v11)
							goto LABEL_77;
					}
					if (v7)
						*(_QWORD*)(a1 + 40) = 0i64;
					if (v8)
						*(_QWORD*)(a1 + 48) = 0i64;
					if (v7 || v8)
					{
						v13 = qword_140C65898;
						v14 = *(_DWORD*)(qword_140C65898 + 29976);
						*(_QWORD*)(qword_140C65898 + 29960) = 0i64;
						*(_QWORD*)(v13 + 29968) = 0i64;
						*(_DWORD*)(v13 + 29976) = 0;
						if ((v14 & 1) != 0)
							sub_1400EA3E0(*(_QWORD*)(v13 + 29504), "HousingPrivacyUpdated", byte_1409EC064, 0i64);
					}
					v36 = *(unsigned int*)(v4 + 28);
					sub_1400B6120(a1 + 56, (__int64)&v36);
					sub_1405B13D0(v15, *(_DWORD*)(v4 + 28), 0i64);
					sub_1405AE130(*(_QWORD**)v12);
					v16 = sub_140205FA0(*(_DWORD*)(*(_QWORD*)v12 + 184i64));
					if (v16)
						v6 = *(_DWORD*)(v16 + 4);
					sub_1404C9D20(v17, *(_DWORD*)(*(_QWORD*)v12 + 188i64), v6);
					if (*(_QWORD*)v12)
						(***(void(__fastcall****)(_QWORD, __int64))v12)(*(_QWORD*)v12, 1i64);
					sub_1405B1C30(a1 + 8, v12);
				}
			}
			else
			{
				v18 = *(__int64**)(a1 + 16);
				if (v18 == (__int64*)v11)
				{
				LABEL_37:
					v20 = sub_14018B280(504i64, 0);
					if (v20)
					{
						v19 = sub_1405A9F40((__int64)v20, a2);
						v36 = v19;
					}
					else
					{
						v19 = 0i64;
						v36 = 0i64;
					}
					v22 = *(int**)(a1 + 24);
					if (v22 == *(int**)(a1 + 32))
					{
						sub_14010A1C0((_QWORD*)(a1 + 8), v22, &v36);
						v19 = v36;
					}
					else
					{
						if (v22)
							*(_QWORD*)v22 = v19;
						*(_QWORD*)(a1 + 24) += 8i64;
					}
				}
				else
				{
					while (1)
					{
						v19 = *v18;
						if (*(_DWORD*)(*v18 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v19 + 16) == *(_QWORD*)(a2 + 8))
							break;
						if (++v18 == (__int64*)v11)
							goto LABEL_37;
					}
					v21 = *(_DWORD*)(v19 + 100) != *(_DWORD*)(a2 + 92);
					sub_1405AA570(*v18, a2);
					if (v21)
						sub_1405AEE20(v19);
					else
						sub_1405ABF80(v19);
				}
				v23 = sub_140205FA0(*(_DWORD*)(v19 + 184));
				if (v23)
					v24 = *(unsigned int*)(v23 + 4);
				else
					v24 = 0i64;
				if (v7)
				{
					*(_QWORD*)(a1 + 40) = v19;
					*(_DWORD*)(v19 + 496) = 2;
				}
				if (v8)
					*(_QWORD*)(a1 + 48) = v19;
				if (v7 || v8)
				{
					v25 = qword_140C65898;
					*(_DWORD*)(qword_140C65898 + 29940) = *(_DWORD*)(v4 + 28);
					if (*(_DWORD*)(v25 + 29944) != (_DWORD)v24)
					{
						*(_DWORD*)(v25 + 29944) = v24;
						sub_14053ADC0(v25);
					}
				}
				v36 = *(unsigned int*)(v4 + 28);
				v26 = (*(__int64(__fastcall**)(__int64*, __int64))(a1 + 80))(&v36, v24);
				v27 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 8 * (v26 % *(_QWORD*)(a1 + 64)));
				if (v27)
				{
					while (v26 != *v27 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 88))(&v36, v27 + 2))
					{
						v27 = (_QWORD*)v27[1];
						if (!v27)
							goto LABEL_71;
					}
					if (v27 != (_QWORD*)-24i64)
					{
						v36 = *(unsigned int*)(v4 + 28);
						v28 = (*(__int64(__fastcall**)(__int64*))(a1 + 80))(&v36);
						v29 = *(_QWORD*)(a1 + 72) + 8 * (v28 % *(_QWORD*)(a1 + 64));
						if (*(_QWORD*)v29)
						{
							while (v28 != **(_QWORD**)v29
								|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 88))(&v36, *(_QWORD*)v29 + 16i64))
							{
								v29 = *(_QWORD*)v29 + 8i64;
								if (!*(_QWORD*)v29)
									goto LABEL_71;
							}
							v30 = *(_QWORD*)v29;
							*(_QWORD*)v29 = *(_QWORD*)(*(_QWORD*)v29 + 8i64);
							sub_14018B900(v30, 0);
							--* (_QWORD*)(a1 + 56);
						}
					}
				}
			LABEL_71:
				v36 = *(unsigned int*)(v4 + 28);
				if (*(_QWORD*)(a1 + 56) == *(_QWORD*)(a1 + 64))
					sub_1400290D0(a1 + 56);
				v31 = (*(__int64(__fastcall**)(__int64*))(a1 + 80))(&v36);
				v32 = (int**)(*(_QWORD*)(a1 + 72) + 8 * (v31 % *(_QWORD*)(a1 + 64)));
				v33 = sub_14018B280(32i64, 0);
				if (v33)
				{
					v35 = *v32;
					*(_QWORD*)v33 = v31;
					*((_QWORD*)v33 + 1) = v35;
					v34 = v36;
					*((_QWORD*)v33 + 3) = v19;
					*((_QWORD*)v33 + 2) = v34;
				}
				else
				{
					v33 = 0i64;
				}
				*v32 = v33;
				++* (_QWORD*)(a1 + 56);
				sub_1405B13D0(v34, *(_DWORD*)(v4 + 28), *(int**)(a2 + 48));
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPlotsRecieved", &unk_1409D0F73);
			}
		LABEL_77:
			if (v7)
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingOwnershipRecieved", &unk_1409D0F76, v5);
		}
	}
}
// 1405B10CE: variable 'v15' is possibly undefined
// 1405B10FE: variable 'v17' is possibly undefined
// 1405B1242: variable 'v24' is possibly undefined
// 1405B135B: variable 'v34' is possibly undefined
// 1405B13BB: variable 'v5' is possibly undefined
// 1409EC064: using guessed type _BYTE byte_1409EC064[24];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

