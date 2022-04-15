//----- (000000014067E2D0) ----------------------------------------------------
__int64 __fastcall sub_14067E2D0(__int64 a1)
{
	unsigned __int64 v1; // r12
	int* v2; // r14
	int* v4; // rbp
	unsigned __int64 v5; // rsi
	int* v6; // rbx
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned __int64 v11; // rbp
	int v12; // r11d
	__int64 v13; // r9
	__int64 v14; // r8
	unsigned int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rsi
	__int64 v21; // r15
	__int64 v22; // rbx
	__int64 v23; // rax
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rdx
	int v27; // r11d
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdx
	unsigned __int16* v32; // r11
	__int64 v33; // rcx
	_QWORD* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rdx
	unsigned __int16* v37; // r11
	__int64 v38; // rsi
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int16* v41; // r11
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // rdx
	int v45; // r11d
	__int64(__fastcall * *v47)(); // [rsp+20h] [rbp-48h] BYREF
	int v48; // [rsp+28h] [rbp-40h]
	__int64 v49; // [rsp+30h] [rbp-38h]
	int v50; // [rsp+38h] [rbp-30h]
	__int64 v51; // [rsp+78h] [rbp+10h] BYREF
	__int64 v52; // [rsp+80h] [rbp+18h] BYREF

	v1 = 0i64;
	v2 = 0i64;
	if (!*(_QWORD*)(qword_140C65950 + 112) || !*(_QWORD*)(qword_140C65950 + 96))
		return 0i64;
	v4 = *(int**)(qword_140C65950 + 88);
	v5 = *(_QWORD*)(qword_140C65950 + 96);
	if (v5)
	{
		v6 = sub_14018DB00(0i64, *(_QWORD*)(qword_140C65950 + 96), 4i64);
		sub_1407DB590(v6, v4, 4 * v5);
		v1 = v5;
		if (v6)
			v2 = v6;
	}
	v7 = *(_QWORD*)(a1 + 32);
	v49 = a1;
	v47 = off_140B569F0;
	v8 = *(_QWORD*)(v7 + 112);
	v50 = 1;
	if (*(_QWORD*)(v7 + 120) >= v8)
		sub_14005E2C0(a1);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = 0i64;
	v12 = sub_1400578C0(a1);
	v48 = v12;
	if (v1)
	{
		v13 = qword_140C65950;
		do
		{
			v14 = *(_QWORD*)(v13 + 48);
			v15 = v2[v11];
			v16 = *(_QWORD*)(v14 + 8);
			v17 = v14;
			while (v16)
			{
				if (*(_DWORD*)(v16 + 32) < v15)
				{
					v16 = *(_QWORD*)(v16 + 24);
				}
				else
				{
					v17 = v16;
					v16 = *(_QWORD*)(v16 + 16);
				}
			}
			if (v17 == v14 || v15 < *(_DWORD*)(v17 + 32))
			{
				v52 = *(_QWORD*)(v13 + 48);
				v18 = &v52;
			}
			else
			{
				v51 = v17;
				v18 = &v51;
			}
			v19 = *v18;
			if (v19 != v14)
			{
				v20 = *(_QWORD*)(v19 + 40);
				if (v20)
				{
					v21 = *(_QWORD*)(v20 + 8);
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v22 = *(_QWORD*)(a1 + 16);
					v23 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v22 + 8) = 5;
					*(_QWORD*)v22 = v23;
					*(_QWORD*)(a1 + 16) += 16i64;
					LODWORD(v22) = sub_1400578C0(a1);
					v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v22);
					v25 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v25 = *v24;
					*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v26, L"idPattern", v27);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_14034BDD0(v28, *(_DWORD*)(v21 + 4));
					v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v22);
					v30 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v30 = *v29;
					*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v31, L"strName", v32);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_14034BDD0(v33, *(_DWORD*)(v21 + 8));
					v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v22);
					v35 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v35 = *v34;
					*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v36, L"strDescription", v37);
					v38 = *(_QWORD*)(a1 + 16) - 16i64;
					*(_QWORD*)(a1 + 16) = v38;
					v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v22);
					*(_QWORD*)v38 = *v39;
					*(_DWORD*)(v38 + 8) = *((_DWORD*)v39 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v40, L"strIcon", v41);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v47);
					sub_1400579E0(a1, v42, v22);
					v13 = qword_140C65950;
				}
			}
			++v11;
		} while (v11 < v1);
		a1 = v49;
		v12 = v48;
	}
	v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v12);
	v44 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v44 = *v43;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v44, v45);
	if (v2)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 4);
	return 1i64;
}
// 14067E4AE: variable 'v26' is possibly undefined
// 14067E4AE: variable 'v27' is possibly undefined
// 14067E4BC: variable 'v28' is possibly undefined
// 14067E4FC: variable 'v31' is possibly undefined
// 14067E4FC: variable 'v32' is possibly undefined
// 14067E50A: variable 'v33' is possibly undefined
// 14067E54A: variable 'v36' is possibly undefined
// 14067E54A: variable 'v37' is possibly undefined
// 14067E5B5: variable 'v40' is possibly undefined
// 14067E5B5: variable 'v41' is possibly undefined
// 14067E5D1: variable 'v42' is possibly undefined
// 14067E62A: variable 'v45' is possibly undefined
// 140B31788: using guessed type wchar_t aStrdescription_15[15];
// 140B317A8: using guessed type wchar_t aStricon_12[8];
// 140B317B8: using guessed type wchar_t aIdpattern_0[10];
// 140B317D0: using guessed type wchar_t aStrname_72[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65950: using guessed type __int64 qword_140C65950;

