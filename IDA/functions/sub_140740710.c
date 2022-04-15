//----- (0000000140740710) ----------------------------------------------------
__int64 __fastcall sub_140740710(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	int v4; // ecx
	unsigned int v5; // esi
	_DWORD* v6; // rax
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // r15
	__int64 v13; // rbp
	unsigned int* i; // r15
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // eax
	unsigned int v18; // edi
	int v19; // esi
	__int64 v20; // rax
	__int64 v21; // rdi
	_QWORD* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rdx
	int v25; // r11d
	__int64 v26; // r14
	_QWORD* v27; // rax
	__int64 v28; // rdx
	int v29; // r11d
	__int64 v30; // rcx
	_QWORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rdx
	unsigned __int16* v34; // r11
	__int64 v35; // rdx
	_QWORD* v36; // rax
	__int64 v37; // r11
	__int64 v38; // r9
	int v39; // r8d
	__int64 v40; // rdx
	__int64(__fastcall * *v41)(); // [rsp+20h] [rbp-38h] BYREF
	int v42; // [rsp+28h] [rbp-30h]
	_QWORD* v43; // [rsp+30h] [rbp-28h]
	int v44; // [rsp+38h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140056D60(a1, 2u);
			if ((unsigned int)(v4 - 1) > 5)
			{
				if (v4 != 20)
					goto LABEL_5;
				v5 = 6;
			}
			else
			{
				v5 = v4 - 1;
				if ((unsigned int)(v4 - 1) >= 7)
				{
				LABEL_5:
					v6 = (_DWORD*)a1[2];
					*v6 = 0;
					v6[2] = 1;
					a1[2] += 16i64;
					return 1i64;
				}
			}
			v8 = a1[4];
			v41 = off_140B569F0;
			v9 = *(_QWORD*)(v8 + 112);
			v43 = a1;
			v44 = 1;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0((__int64)a1);
			v10 = a1[2];
			v11 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			a1[2] += 16i64;
			v12 = v3 + 140;
			v42 = sub_1400578C0((__int64)a1);
			v13 = 3i64;
			for (i = (unsigned int*)(v12 + 12i64 * v5); ; ++i)
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v15 = a1[2];
				v16 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				a1[2] += 16i64;
				v17 = sub_1400578C0((__int64)a1);
				v18 = *i;
				v19 = v17;
				if (qword_140C63840)
				{
					v20 = qword_140C63840(off_140A6A168, v18, qword_140C63858);
				}
				else
				{
					if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
					{
						v21 = 0i64;
						goto LABEL_20;
					}
					v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(qword_140C63AE0, v18);
				}
				v21 = v20;
			LABEL_20:
				v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
				v23 = a1[2];
				*(_QWORD*)v23 = *v22;
				*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v24, L"nId", v25);
				v26 = a1[2] - 16i64;
				a1[2] = v26;
				v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
				*(_QWORD*)v26 = *v27;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v27 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v28, L"nRampIndex", v29);
				a1[2] -= 16i64;
				if (v21)
				{
					sub_14034BDD0(v30, *(_DWORD*)(v21 + 8));
					v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
					v32 = a1[2];
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v33, L"strName", v34);
					a1[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v41);
				sub_1400579E0((__int64)a1, v35, v19);
				if (!--v13)
				{
					v36 = sub_14005C3C0(*(_QWORD*)(v43[4] + 160i64), v42);
					v38 = *(_QWORD*)(v37 + 16);
					v39 = v42;
					*(_QWORD*)v38 = *v36;
					v40 = *((unsigned int*)v36 + 2);
					*(_DWORD*)(v38 + 8) = v40;
					*(_QWORD*)(v37 + 16) += 16i64;
					sub_1400579E0(v37, v40, v39);
					return 1i64;
				}
			}
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 1407408EE: variable 'v24' is possibly undefined
// 1407408EE: variable 'v25' is possibly undefined
// 140740942: variable 'v28' is possibly undefined
// 140740942: variable 'v29' is possibly undefined
// 140740954: variable 'v30' is possibly undefined
// 140740994: variable 'v33' is possibly undefined
// 140740994: variable 'v34' is possibly undefined
// 1407409B0: variable 'v35' is possibly undefined
// 1407409DB: variable 'v37' is possibly undefined
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140B48F90: using guessed type wchar_t aStrname_98[8];
// 140B48FA0: using guessed type wchar_t aNrampindex_1[11];
// 140B48FB8: using guessed type wchar_t aNid_36[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;

