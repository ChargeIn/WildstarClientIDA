//----- (0000000140769A00) ----------------------------------------------------
__int64 __fastcall sub_140769A00(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	int v5; // ecx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r14d
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	__int64 v15; // rcx
	float v16; // xmm6_4
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned int v19; // esi
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	__int64 v22; // rax
	int v23; // ebx
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r11
	__int64 v27; // rdx
	int v28; // r10d
	unsigned int v29; // ecx
	__int64 v30; // rax
	__int64 v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rcx
	unsigned __int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	int v38; // ebx
	int v39; // r8d
	unsigned int v40; // ecx
	__int64 v41; // rax
	_QWORD* v42; // rax
	__int64 v43; // rdx
	int v44; // r10d
	__int64 v45; // rdx
	__int64 v46; // rcx
	unsigned __int64 v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	int v50; // r15d
	__int64 v51; // rbx
	__int64 v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rdx
	int v55; // r10d
	_QWORD* v56; // rax
	__int64 v57; // r10
	__int64 v58; // rdx
	int v59; // r11d
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	unsigned __int16* v63; // r11
	__int64 v64; // rdx
	__int64 v65; // rdx
	_QWORD* v66; // rax
	__int64 v67; // rdx
	__int64(__fastcall * *v69)(); // [rsp+20h] [rbp-68h] BYREF
	__int64 v70; // [rsp+28h] [rbp-60h]
	__int64 v71; // [rsp+30h] [rbp-58h]
	int v72; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v73)(); // [rsp+40h] [rbp-48h] BYREF
	int v74; // [rsp+48h] [rbp-40h]
	__int64 v75; // [rsp+50h] [rbp-38h]
	int v76; // [rsp+58h] [rbp-30h]

	v2 = sub_140215240(*(_DWORD*)(qword_140C65B98 + 264));
	if (v2
		&& (v3 = sub_140214E00(*(_DWORD*)(v2 + 16)), (v4 = v3) != 0)
		&& qword_140C65898
		&& ((v5 = *(_DWORD*)(v3 + 12)) == 0 || (unsigned int)(v5 - 3) <= 4))
	{
		v6 = *(_QWORD*)(a1 + 32);
		v7 = *(_QWORD*)(v6 + 112);
		v73 = off_140B569F0;
		v75 = a1;
		v76 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(a1);
		v8 = *(_QWORD*)(a1 + 16);
		v9 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = sub_1400578C0(a1);
		v11 = *(_QWORD*)(a1 + 32);
		v74 = v10;
		v12 = sub_14005C3C0(*(_QWORD*)(v11 + 160), v10);
		v13 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v13, L"eState", v14);
		v15 = qword_140C65B98;
		*(_QWORD*)(a1 + 16) -= 16i64;
		v16 = (float)(int)sub_1405C15D0((unsigned int*)(v15 + 264)) * 0.001;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
		v18 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v19 = 0;
		v20 = (unsigned __int64*)sub_14018F0E0(&v69, L"fTimeRemaining")[1];
		if (v20)
		{
			v21 = -1i64;
			do
				++v21;
			while (*((_BYTE*)v20 + v21));
			sub_140058710(a1, v20, v21);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v70)
			sub_14018B900(v70, 0);
		v22 = *(_QWORD*)(a1 + 16);
		v23 = 3;
		*(_DWORD*)(v22 + 8) = 3;
		*(double*)v22 = v16;
		*(_QWORD*)(a1 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v24, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v27, L"eMyTeam", v28);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v29 = *(_DWORD*)(qword_140C65B98 + 264);
		if (v29)
		{
			v30 = sub_140215240(v29);
			if (v30)
			{
				v31 = sub_140214E00(*(_DWORD*)(v30 + 16));
				if (v31)
					v23 = *(_DWORD*)(v31 + 40);
			}
		}
		v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
		v33 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v33, L"eRules", v23);
		*(_QWORD*)(a1 + 16) -= 16i64;
		if (v23 == 2)
		{
			v34 = *(_QWORD*)(a1 + 32);
			v69 = off_140B569F0;
			v71 = a1;
			v35 = *(_QWORD*)(v34 + 112);
			v72 = 1;
			if (*(_QWORD*)(v34 + 120) >= v35)
				sub_14005E2C0(a1);
			v36 = *(_QWORD*)(a1 + 16);
			v37 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v36 + 8) = 5;
			*(_QWORD*)v36 = v37;
			*(_QWORD*)(a1 + 16) += 16i64;
			v38 = sub_1400578C0(a1);
			v39 = *(_DWORD*)(qword_140C65B98 + 344);
			LODWORD(v70) = v38;
			sub_1400FA910((__int64)&v69, 0i64, v39);
			sub_1400FA910((__int64)&v69, 1i64, *(_DWORD*)(qword_140C65B98 + 348));
			sub_1400FB2A0((__int64)&v73, (__int64)L"tLivesRemaining", v38);
			v40 = *(_DWORD*)(qword_140C65B98 + 264);
			if (v40)
			{
				v41 = sub_140215240(v40);
				if (v41)
					sub_140214E00(*(_DWORD*)(v41 + 16));
			}
			v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			v43 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v43 = *v42;
			*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v43, L"nMaxLives", v44);
			*(_QWORD*)(a1 + 16) -= 16i64;
			sub_1400579E0(a1, v45, v38);
		}
		if (*(_DWORD*)(v4 + 12) == 3)
		{
			v46 = *(_QWORD*)(a1 + 32);
			v69 = off_140B569F0;
			v47 = *(_QWORD*)(v46 + 112);
			v71 = a1;
			v72 = 1;
			if (*(_QWORD*)(v46 + 120) >= v47)
				sub_14005E2C0(a1);
			v48 = *(_QWORD*)(a1 + 16);
			v49 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v48 + 8) = 5;
			*(_QWORD*)v48 = v49;
			*(_QWORD*)(a1 + 16) += 16i64;
			v50 = sub_1400578C0(a1);
			LODWORD(v70) = v50;
			do
			{
				if (v19 < (unsigned __int64)((*(_QWORD*)(qword_140C65B98 + 368) - *(_QWORD*)(qword_140C65B98 + 360)) / 40i64)
					&& *(_QWORD*)(qword_140C65B98 + 360) + 40i64 * (int)v19)
				{
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v51 = *(_QWORD*)(a1 + 16);
					v52 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v51 + 8) = 5;
					*(_QWORD*)v51 = v52;
					*(_QWORD*)(a1 + 16) += 16i64;
					LODWORD(v51) = sub_1400578C0(a1);
					v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v51);
					v54 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v54 = *v53;
					*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v54, L"nRating", v55);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v51);
					*(_QWORD*)v57 = *v56;
					*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v58, L"nDelta", v59);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v51);
					*(_QWORD*)v61 = *v60;
					*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v62, L"strName", v63);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1400FB3A0((__int64)&v69, v19, v51);
					sub_1400579E0(a1, v64, v51);
				}
				++v19;
			} while (v19 < 2);
			sub_1400FB2A0((__int64)&v73, (__int64)L"tTeams", v50);
			sub_1400579E0(a1, v65, v50);
		}
		v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
		v67 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v67 = *v66;
		*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v67, v10);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140769B18: variable 'v14' is possibly undefined
// 140769C37: variable 'v26' is possibly undefined
// 140769C49: variable 'v27' is possibly undefined
// 140769C49: variable 'v28' is possibly undefined
// 140769DD8: variable 'v44' is possibly undefined
// 140769DE8: variable 'v45' is possibly undefined
// 140769F27: variable 'v55' is possibly undefined
// 140769F58: variable 'v57' is possibly undefined
// 140769F6A: variable 'v58' is possibly undefined
// 140769F6A: variable 'v59' is possibly undefined
// 140769F9B: variable 'v61' is possibly undefined
// 140769FAD: variable 'v62' is possibly undefined
// 140769FAD: variable 'v63' is possibly undefined
// 140769FCC: variable 'v64' is possibly undefined
// 140769FF6: variable 'v65' is possibly undefined
// 140B4E640: using guessed type wchar_t aNdelta[7];
// 140B4E650: using guessed type wchar_t aNrating_1[8];
// 140B4E660: using guessed type wchar_t aNmaxlives[10];
// 140B4E678: using guessed type wchar_t aTlivesremainin[16];
// 140B4E698: using guessed type wchar_t aErules[7];
// 140B4E6A8: using guessed type wchar_t aEmyteam[8];
// 140B4E6B8: using guessed type wchar_t aFtimeremaining_2[15];
// 140B4E6D8: using guessed type wchar_t aEstate_5[7];
// 140B4E820: using guessed type wchar_t aTteams[7];
// 140B4E830: using guessed type wchar_t aStrname_113[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

