//----- (0000000140438080) ----------------------------------------------------
__int64 __fastcall sub_140438080(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rdi
	__int64 v5; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // r10d
	__int64 v14; // rbx
	__int64 v15; // r14
	unsigned int v16; // r12d
	__int64 v17; // r15
	__int64 v18; // rdi
	__int64 v19; // rax
	int v20; // edi
	_QWORD* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	unsigned __int16* v26; // r10
	_QWORD* v27; // rax
	__int64 v28; // r11
	__int64 v29; // rdx
	int v30; // r10d
	BOOL v31; // r14d
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // r8
	BOOL* v36; // rcx
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v42; // rax
	__int64 v43; // r8
	__int64 v44; // rdx
	int v45; // r10d
	__int64(__fastcall * *v46)(); // [rsp+20h] [rbp-68h] BYREF
	int v47; // [rsp+28h] [rbp-60h]
	__int64 v48; // [rsp+30h] [rbp-58h]
	int v49; // [rsp+38h] [rbp-50h]
	__int64 v50; // [rsp+40h] [rbp-48h] BYREF
	__int64 v51; // [rsp+48h] [rbp-40h]
	__int64 v52; // [rsp+50h] [rbp-38h]
	__int64 v53; // [rsp+90h] [rbp+8h]

	v3 = qword_140C658D8;
	v5 = a2;
	v53 = qword_140C658D8;
	if (*(_QWORD*)(qword_140C658D8 + 16))
	{
		v7 = *(_QWORD*)(a2 + 32);
		v46 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v48 = a2;
		v49 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0(a2);
		v9 = *(_QWORD*)(v5 + 16);
		v10 = sub_14005C1B0(v5, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		*(_QWORD*)(v5 + 16) += 16i64;
		v11 = sub_1400578C0(v5);
		v12 = *(_QWORD*)(v3 + 8);
		v13 = v11;
		v47 = v11;
		v14 = *(_QWORD*)(v12 + 16);
		if (v14 != v12)
		{
			do
			{
				v15 = *(_QWORD*)(v14 + 40);
				v16 = *(_DWORD*)(v14 + 32);
				if (v15
					&& (a3 == 31 || a3 == *(_DWORD*)(*(_QWORD*)v15 + 8i64))
					&& (*(_BYTE*)(*(_QWORD*)v15 + 4i64) & 8) == 0)
				{
					sub_1401DDFD0(&v50, v15 + 8);
					v17 = v51;
					if (v51 == v52)
					{
						if (v51)
							sub_14018B900(v51, 0);
					}
					else
					{
						if (*(_QWORD*)(*(_QWORD*)(v5 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v5 + 32) + 112i64))
							sub_14005E2C0(v5);
						v18 = *(_QWORD*)(v5 + 16);
						v19 = sub_14005C1B0(v5, 0, 0);
						*(_DWORD*)(v18 + 8) = 5;
						*(_QWORD*)v18 = v19;
						*(_QWORD*)(v5 + 16) += 16i64;
						v20 = sub_1400578C0(v5);
						v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64), v20);
						v22 = *(_QWORD*)(v5 + 16);
						*(_QWORD*)v22 = *v21;
						*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
						*(_QWORD*)(v5 + 16) += 16i64;
						sub_1400F06F0(v5, v22, L"id", v16);
						*(_QWORD*)(v5 + 16) -= 16i64;
						sub_14034BDD0(v23, *(_DWORD*)(*(_QWORD*)v17 + 16i64));
						v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64), v20);
						v25 = *(_QWORD*)(v5 + 16);
						*(_QWORD*)v25 = *v24;
						*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
						*(_QWORD*)(v5 + 16) += 16i64;
						sub_1400F0870(v5, v25, L"title", v26);
						*(_QWORD*)(v5 + 16) -= 16i64;
						v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64), v20);
						*(_QWORD*)v28 = *v27;
						*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
						*(_QWORD*)(v5 + 16) += 16i64;
						sub_1400F06F0(v5, v29, L"tutorialCategoryEnum", v30);
						*(_QWORD*)(v5 + 16) -= 16i64;
						v31 = sub_140437EA0(v53, v16);
						v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64), v20);
						*(_QWORD*)v33 = *v32;
						*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
						*(_QWORD*)(v5 + 16) += 16i64;
						v34 = (unsigned __int64*)sub_14018F0E0(&v50, L"viewed")[1];
						if (v34)
						{
							v35 = -1i64;
							do
								++v35;
							while (*((_BYTE*)v34 + v35));
							sub_140058710(v5, v34, v35);
						}
						else
						{
							*(_DWORD*)(*(_QWORD*)(v5 + 16) + 8i64) = 0;
							*(_QWORD*)(v5 + 16) += 16i64;
						}
						if (v51)
							sub_14018B900(v51, 0);
						v36 = *(BOOL**)(v5 + 16);
						v36[2] = 1;
						*v36 = v31;
						*(_QWORD*)(v5 + 16) += 16i64;
						v37 = (__int64*)sub_1400580E0(v5, -3);
						sub_14005EA50(
							v5,
							v37,
							(int*)(*(_QWORD*)(v5 + 16) - 32i64),
							(unsigned int*)(*(_QWORD*)(v5 + 16) - 16i64));
						*(_QWORD*)(v5 + 16) -= 48i64;
						sub_1400FB1D0((__int64)&v46);
						sub_1400579E0(v5, v38, v20);
						sub_14018B900(v17, 0);
						v3 = v53;
					}
				}
				v39 = *(_QWORD*)(v14 + 24);
				if (v39)
				{
					v14 = *(_QWORD*)(v14 + 24);
					for (i = *(_QWORD*)(v39 + 16); i; i = *(_QWORD*)(i + 16))
						v14 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v14 = j;
					if (*(_QWORD*)(v14 + 24) != j)
						v14 = j;
				}
			} while (v14 != *(_QWORD*)(v3 + 8));
			v5 = v48;
			v13 = v47;
		}
		v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64), v13);
		v43 = *(_QWORD*)(v5 + 16);
		*(_QWORD*)v43 = *v42;
		v44 = *((unsigned int*)v42 + 2);
		*(_DWORD*)(v43 + 8) = v44;
		*(_QWORD*)(v5 + 16) += 16i64;
		sub_1400579E0(v5, v44, v45);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
		return 0i64;
	}
}
// 140438239: variable 'v23' is possibly undefined
// 140438275: variable 'v26' is possibly undefined
// 1404382A9: variable 'v28' is possibly undefined
// 1404382BB: variable 'v29' is possibly undefined
// 1404382BB: variable 'v30' is possibly undefined
// 1404382F8: variable 'v33' is possibly undefined
// 1404383A7: variable 'v38' is possibly undefined
// 14043845D: variable 'v45' is possibly undefined
// 140B01EF8: using guessed type wchar_t aId_2[3];
// 140B021F0: using guessed type wchar_t aViewed[7];
// 140B02200: using guessed type wchar_t aTutorialcatego[21];
// 140B02230: using guessed type wchar_t aTitle_0[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658D8: using guessed type __int64 qword_140C658D8;

