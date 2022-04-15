//----- (00000001405EC320) ----------------------------------------------------
__int64 __fastcall sub_1405EC320(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r15
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // r12d
	__int64 v12; // rdx
	int v13; // eax
	int v14; // r14d
	_QWORD* v15; // rax
	__int64 v16; // rcx
	unsigned __int64 v17; // rdi
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	int* v20; // rax
	__int64* v21; // rax
	unsigned int v22; // r14d
	_QWORD* v23; // rax
	__int64 v24; // r11
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	int* v27; // rax
	__int64* v28; // rax
	unsigned int v29; // r14d
	_QWORD* v30; // rax
	__int64 v31; // r11
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	int* v34; // rax
	__int64* v35; // rax
	unsigned int v36; // r14d
	_QWORD* v37; // rax
	__int64 v38; // r11
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	int* v41; // rax
	__int64* v42; // rax
	unsigned int v43; // r14d
	_QWORD* v44; // rax
	__int64 v45; // r11
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	int* v48; // rax
	__int64* v49; // rax
	unsigned int v50; // r14d
	_QWORD* v51; // rax
	__int64 v52; // r11
	unsigned __int64* v53; // rdx
	unsigned __int64 v54; // r8
	int* v55; // rax
	__int64* v56; // rax
	unsigned int v57; // r14d
	_QWORD* v58; // rax
	__int64 v59; // r11
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // r8
	int* v62; // rax
	__int64* v63; // rax
	unsigned int v64; // r14d
	_QWORD* v65; // rax
	__int64 v66; // r11
	unsigned __int64* v67; // rdx
	unsigned __int64 v68; // r8
	int* v69; // rax
	__int64* v70; // rax
	unsigned int v71; // r14d
	_QWORD* v72; // rax
	__int64 v73; // r11
	unsigned __int64* v74; // rdx
	unsigned __int64 v75; // r8
	int* v76; // rax
	__int64* v77; // rax
	unsigned int v78; // r14d
	_QWORD* v79; // rax
	__int64 v80; // r11
	unsigned __int64* v81; // rdx
	unsigned __int64 v82; // r8
	int* v83; // rax
	__int64* v84; // rax
	unsigned int v85; // r14d
	_QWORD* v86; // rax
	__int64 v87; // r11
	unsigned __int64* v88; // rdx
	unsigned __int64 v89; // r8
	int* v90; // rax
	__int64* v91; // rax
	unsigned int v92; // r14d
	_QWORD* v93; // rax
	__int64 v94; // r11
	unsigned __int64* v95; // rdx
	int* v96; // rax
	__int64* v97; // rax
	__int64(__fastcall * *v99)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v100; // [rsp+28h] [rbp-20h]
	_QWORD* v101; // [rsp+30h] [rbp-18h]
	int v102; // [rsp+38h] [rbp-10h]
	int v103; // [rsp+78h] [rbp+30h] BYREF

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = a1[4];
		v99 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v101 = a1;
		v102 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		LODWORD(v100) = v11;
		v12 = *(unsigned int*)(*(_QWORD*)(v5 + 112) + 284i64);
		if ((_DWORD)v12)
		{
			v13 = sub_1407A1440(v10, v12, 1u);
			if (v13)
			{
				v103 = v13;
				if ((unsigned int)sub_1403D3470(a1, &v103))
				{
					sub_1400FB540((__int64)&v99);
					a1[2] -= 16i64;
				}
				v14 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				v16 = a1[2];
				*(_QWORD*)v16 = *v15;
				*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
				a1[2] += 16i64;
				v17 = -1i64;
				v18 = (unsigned __int64*)sub_14018F0E0(&v99, L"bTargetAvoided")[1];
				if (v18)
				{
					v19 = -1i64;
					do
						++v19;
					while (*((_BYTE*)v18 + v19));
					sub_140058710((__int64)a1, v18, v19);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v20 = (int*)a1[2];
				*v20 = v14 & 1;
				v20[2] = 1;
				a1[2] += 16i64;
				v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v22 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v24 = *v23;
				*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
				a1[2] += 16i64;
				v25 = (unsigned __int64*)sub_14018F0E0(&v99, L"bTargetBlocked")[1];
				if (v25)
				{
					v26 = -1i64;
					do
						++v26;
					while (*((_BYTE*)v25 + v26));
					sub_140058710((__int64)a1, v25, v26);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v27 = (int*)a1[2];
				v27[2] = 1;
				*v27 = (v22 >> 1) & 1;
				a1[2] += 16i64;
				v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v29 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v31 = *v30;
				*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
				a1[2] += 16i64;
				v32 = (unsigned __int64*)sub_14018F0E0(&v99, L"bTargetGlancing")[1];
				if (v32)
				{
					v33 = -1i64;
					do
						++v33;
					while (*((_BYTE*)v32 + v33));
					sub_140058710((__int64)a1, v32, v33);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v34 = (int*)a1[2];
				v34[2] = 1;
				*v34 = (v29 >> 2) & 1;
				a1[2] += 16i64;
				v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v36 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v38 = *v37;
				*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
				a1[2] += 16i64;
				v39 = (unsigned __int64*)sub_14018F0E0(&v99, L"bTargetFierce")[1];
				if (v39)
				{
					v40 = -1i64;
					do
						++v40;
					while (*((_BYTE*)v39 + v40));
					sub_140058710((__int64)a1, v39, v40);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v41 = (int*)a1[2];
				v41[2] = 1;
				*v41 = (v36 >> 3) & 1;
				a1[2] += 16i64;
				v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v43 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				a1[2] += 16i64;
				v46 = (unsigned __int64*)sub_14018F0E0(&v99, L"bNOTUSED")[1];
				if (v46)
				{
					v47 = -1i64;
					do
						++v47;
					while (*((_BYTE*)v46 + v47));
					sub_140058710((__int64)a1, v46, v47);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v48 = (int*)a1[2];
				v48[2] = 1;
				*v48 = (v43 >> 4) & 1;
				a1[2] += 16i64;
				v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v50 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v52 = *v51;
				*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
				a1[2] += 16i64;
				v53 = (unsigned __int64*)sub_14018F0E0(&v99, L"bCasterAvoided")[1];
				if (v53)
				{
					v54 = -1i64;
					do
						++v54;
					while (*((_BYTE*)v53 + v54));
					sub_140058710((__int64)a1, v53, v54);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v55 = (int*)a1[2];
				v55[2] = 1;
				*v55 = (v50 >> 5) & 1;
				a1[2] += 16i64;
				v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v57 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v59 = *v58;
				*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
				a1[2] += 16i64;
				v60 = (unsigned __int64*)sub_14018F0E0(&v99, L"bCasterBlocked")[1];
				if (v60)
				{
					v61 = -1i64;
					do
						++v61;
					while (*((_BYTE*)v60 + v61));
					sub_140058710((__int64)a1, v60, v61);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v62 = (int*)a1[2];
				v62[2] = 1;
				*v62 = (v57 >> 6) & 1;
				a1[2] += 16i64;
				v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v64 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v66 = *v65;
				*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
				a1[2] += 16i64;
				v67 = (unsigned __int64*)sub_14018F0E0(&v99, L"bCasterGlancing")[1];
				if (v67)
				{
					v68 = -1i64;
					do
						++v68;
					while (*((_BYTE*)v67 + v68));
					sub_140058710((__int64)a1, v67, v68);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v69 = (int*)a1[2];
				v69[2] = 1;
				*v69 = (v64 >> 7) & 1;
				a1[2] += 16i64;
				v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v71 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v73 = *v72;
				*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
				a1[2] += 16i64;
				v74 = (unsigned __int64*)sub_14018F0E0(&v99, L"bCasterFierce")[1];
				if (v74)
				{
					v75 = -1i64;
					do
						++v75;
					while (*((_BYTE*)v74 + v75));
					sub_140058710((__int64)a1, v74, v75);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v76 = (int*)a1[2];
				v76[2] = 1;
				*v76 = (v71 >> 8) & 1;
				a1[2] += 16i64;
				v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v78 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v80 = *v79;
				*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
				a1[2] += 16i64;
				v81 = (unsigned __int64*)sub_14018F0E0(&v99, L"bNOTUSED1")[1];
				if (v81)
				{
					v82 = -1i64;
					do
						++v82;
					while (*((_BYTE*)v81 + v82));
					sub_140058710((__int64)a1, v81, v82);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v83 = (int*)a1[2];
				v83[2] = 1;
				*v83 = (v78 >> 9) & 1;
				a1[2] += 16i64;
				v84 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v84, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v85 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v86 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v87 = *v86;
				*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
				a1[2] += 16i64;
				v88 = (unsigned __int64*)sub_14018F0E0(&v99, L"bCasterSpellSuccess")[1];
				if (v88)
				{
					v89 = -1i64;
					do
						++v89;
					while (*((_BYTE*)v88 + v89));
					sub_140058710((__int64)a1, v88, v89);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v90 = (int*)a1[2];
				v90[2] = 1;
				*v90 = (v85 >> 10) & 1;
				a1[2] += 16i64;
				v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v92 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 280i64);
				v93 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				*(_QWORD*)v94 = *v93;
				*(_DWORD*)(v94 + 8) = *((_DWORD*)v93 + 2);
				a1[2] += 16i64;
				v95 = (unsigned __int64*)sub_14018F0E0(&v99, L"bLastCasterSpellSuccess")[1];
				if (v95)
				{
					do
						++v17;
					while (*((_BYTE*)v95 + v17));
					sub_140058710((__int64)a1, v95, v17);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v100)
					sub_14018B900(v100, 0);
				v96 = (int*)a1[2];
				v96[2] = 1;
				*v96 = (v92 >> 11) & 1;
				a1[2] += 16i64;
				v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
			}
		}
		sub_1400579E0((__int64)a1, v12, v11);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1405EC41C: variable 'v10' is possibly undefined
// 1405EC554: variable 'v24' is possibly undefined
// 1405EC61A: variable 'v31' is possibly undefined
// 1405EC6E8: variable 'v38' is possibly undefined
// 1405EC7AF: variable 'v45' is possibly undefined
// 1405EC878: variable 'v52' is possibly undefined
// 1405EC93F: variable 'v59' is possibly undefined
// 1405ECA08: variable 'v66' is possibly undefined
// 1405ECACF: variable 'v73' is possibly undefined
// 1405ECB98: variable 'v80' is possibly undefined
// 1405ECC5F: variable 'v87' is possibly undefined
// 1405ECD28: variable 'v94' is possibly undefined
// 1405ECDC7: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23778: using guessed type wchar_t aBcasteravoided[15];
// 140B23798: using guessed type wchar_t aBcasterblocked[15];
// 140B237B8: using guessed type wchar_t aBtargetfierce[14];
// 140B237D8: using guessed type wchar_t aBnotused[9];
// 140B237F0: using guessed type wchar_t aBtargetblocked[15];
// 140B23810: using guessed type wchar_t aBtargetglancin[16];
// 140B23840: using guessed type wchar_t aBtargetavoided[15];
// 140B23A10: using guessed type wchar_t aBlastcasterspe[24];
// 140B23A60: using guessed type wchar_t aBnotused1[10];
// 140B23A78: using guessed type wchar_t aBcasterspellsu[20];
// 140B23AA0: using guessed type wchar_t aBcasterglancin[16];
// 140B23AC0: using guessed type wchar_t aBcasterfierce[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

