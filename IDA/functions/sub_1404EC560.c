//----- (00000001404EC560) ----------------------------------------------------
__int64 __fastcall sub_1404EC560(__int64 a1)
{
	unsigned __int64 v1; // r15
	_QWORD* v2; // r13
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rsi
	_QWORD* v9; // rbx
	char* v10; // rdx
	_DWORD* v11; // rax
	int* v12; // rdi
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // r14
	unsigned __int64 v16; // rbx
	__int64(__fastcall * *v17)(); // rdx
	_DWORD* v18; // rax
	_QWORD* v19; // r8
	_DWORD* v20; // rcx
	unsigned __int64 v21; // rdx
	int v22; // eax
	unsigned __int64 v23; // rbx
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	_QWORD* v27; // rdi
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // rdx
	__int64* v31; // rax
	int v32; // ecx
	int v33; // ecx
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	_QWORD* v37; // rdi
	unsigned __int64* v38; // rdx
	__int64 v39; // rdx
	_DWORD* v40; // rax
	int v41; // edx
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	_QWORD* v45; // rdi
	unsigned __int64* v46; // rdx
	__int64 v47; // rdx
	__int64* v48; // rax
	int v49; // ecx
	int v50; // ecx
	unsigned int v51; // eax
	__int64 v52; // rdx
	unsigned __int64 v53; // rcx
	__int64 v54; // rbx
	__int64 v55; // rax
	int v56; // eax
	__int64 v57; // rbx
	unsigned __int64 v58; // r12
	int* v59; // rax
	unsigned __int64 v60; // rax
	int* v61; // rdx
	__int64 v62; // rcx
	unsigned __int64 v63; // r14
	int* v64; // rdi
	unsigned __int64 v65; // rsi
	__int64 v66; // r13
	__int64 v67; // r15
	int* v68; // rax
	int* v69; // rbx
	__int64 v70; // r12
	unsigned __int64 v71; // rbx
	unsigned __int8 i; // si
	__int64 v73; // rcx
	__int64 v74; // r8
	__int64 v75; // rdx
	__int64 v76; // rcx
	int v77; // esi
	int v78; // r10d
	__int64 v79; // r9
	_DWORD* v80; // rdx
	__int64 v81; // rcx
	int v82; // eax
	int v83; // edx
	__int64 v84; // rcx
	__int64 v85; // rax
	__int64 v86; // r8
	__int64 v87; // r9
	_DWORD* v88; // rdx
	__int64 v89; // rcx
	__int64 v90; // rdx
	void* v92; // [rsp+28h] [rbp-89h]
	double v93; // [rsp+28h] [rbp-89h]
	double v94; // [rsp+28h] [rbp-89h]
	__int64(__fastcall * *v95)(); // [rsp+30h] [rbp-81h] BYREF
	int v96; // [rsp+38h] [rbp-79h]
	_QWORD* v97; // [rsp+40h] [rbp-71h]
	int v98; // [rsp+48h] [rbp-69h]
	__int64 v99; // [rsp+50h] [rbp-61h] BYREF
	int* v100; // [rsp+58h] [rbp-59h] BYREF
	int* v101; // [rsp+60h] [rbp-51h]
	__int64 v102; // [rsp+68h] [rbp-49h]
	int v103; // [rsp+78h] [rbp-39h]
	int v104; // [rsp+7Ch] [rbp-35h]
	unsigned int v105; // [rsp+80h] [rbp-31h]
	_QWORD* v106; // [rsp+88h] [rbp-29h]
	int* v107; // [rsp+90h] [rbp-21h]
	__int64 v108; // [rsp+98h] [rbp-19h] BYREF
	__int64 v109; // [rsp+A0h] [rbp-11h]
	int* v110; // [rsp+B8h] [rbp+7h] BYREF
	int v111[3]; // [rsp+C0h] [rbp+Fh] BYREF
	int v112; // [rsp+CCh] [rbp+1Bh]

	v1 = 0i64;
	v2 = (_QWORD*)a1;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v106 = (_QWORD*)a1;
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != v2)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = *(_QWORD**)(v7 + 400);
	v10 = (char*)sub_14018F0E0(&v108, 0i64)[1];
	v11 = (_DWORD*)v9[3];
	if ((unsigned __int64)v11 < v9[2] && v11 != dword_140A12138 && (int)v11[2] > 0)
		v10 = (char*)sub_140056BB0(v9, 1u, 0i64);
	sub_14018F2D0(&v100, v10);
	if (v109)
		sub_14018B900(v109, 0);
	v12 = v101;
	v13 = (v102 - (__int64)v101) >> 1;
	v14 = sub_14018B280(2 * v13 + 18, 0);
	if (v14)
	{
		*((_QWORD*)v14 + 1) = v13;
		*(_QWORD*)v14 = off_140B55060;
	}
	else
	{
		v14 = 0i64;
	}
	v15 = v14 + 4;
	v16 = 2 * v13;
	v107 = v14 + 4;
	sub_1407DB590(v14 + 4, v12, v16);
	*(_WORD*)((char*)v15 + v16) = 0;
	v110 = v15;
	if (v12)
		sub_14018B900((__int64)v12, 0);
	v111[0] = 0;
	v97 = v2;
	v98 = 1;
	v96 = -2;
	v17 = off_140B569F0;
	v95 = off_140B569F0;
	v92 = sub_140450AD0;
	v18 = (_DWORD*)(v2[3] + 16i64);
	if ((unsigned __int64)v18 < v2[2] && v18 != dword_140A12138 && *(_DWORD*)(v2[3] + 24i64) == 5)
	{
		sub_1400579E0((__int64)v2, (__int64)off_140B569F0, -2);
		v19 = v97;
		v20 = dword_140A12138;
		v21 = v97[2];
		if (v97[3] + 16i64 < v21)
			v20 = (_DWORD*)(v97[3] + 16i64);
		*(_QWORD*)v21 = *(_QWORD*)v20;
		*(_DWORD*)(v21 + 8) = v20[2];
		v19[2] += 16i64;
		v22 = sub_1400578C0((__int64)v97);
		v17 = v95;
		v96 = v22;
	}
	v23 = -1i64;
	if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v17[1])(&v95))
	{
	LABEL_57:
		if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v95[1])(&v95))
			goto LABEL_74;
		v42 = sub_14005C3C0(*(_QWORD*)(v97[4] + 160i64), v96);
		v44 = *(_QWORD*)(v43 + 16);
		*(_QWORD*)v44 = *v42;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v42 + 2);
		*(_QWORD*)(v43 + 16) += 16i64;
		v45 = v97;
		v46 = (unsigned __int64*)sub_14018F0E0(&v108, L"eDisplayFlag")[1];
		if (v46)
		{
			do
				++v23;
			while (*((_BYTE*)v46 + v23));
			sub_140058710((__int64)v45, v46, v23);
		}
		else
		{
			*(_DWORD*)(v45[2] + 8i64) = 0;
			v45[2] += 16i64;
		}
		if (v109)
			sub_14018B900(v109, 0);
		sub_14005E8E0((__int64)v97, v97[2] - 32i64, (int*)(v97[2] - 16i64), v97[2] - 16i64);
		v47 = v97[2];
		v48 = (__int64*)(v47 - 16);
		if ((_DWORD*)(v47 - 16) == dword_140A12138 || *((_DWORD*)v48 + 2) != 3)
		{
			v97[2] = v47 - 32;
			goto LABEL_74;
		}
		v49 = *((_DWORD*)v48 + 2);
		if (v49 != 3)
		{
			if (v49 != 4 || !sub_14005AC80((char*)(*v48 + 32), (unsigned __int64*)&v99))
			{
				v50 = 0;
				goto LABEL_71;
			}
			LODWORD(v101) = 3;
			v48 = (__int64*)&v100;
			v100 = (int*)v99;
		}
		v50 = (int)*(double*)v48;
	LABEL_71:
		v97[2] -= 32i64;
		v111[1] = v50;
		v92 = sub_140450BC0;
		goto LABEL_74;
	}
	v24 = sub_14005C3C0(*(_QWORD*)(v97[4] + 160i64), v96);
	v26 = *(_QWORD*)(v25 + 16);
	*(_QWORD*)v26 = *v24;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
	*(_QWORD*)(v25 + 16) += 16i64;
	v27 = v97;
	v28 = (unsigned __int64*)sub_14018F0E0(&v108, L"eCurrency")[1];
	if (v28)
	{
		v29 = -1i64;
		do
			++v29;
		while (*((_BYTE*)v28 + v29));
		sub_140058710((__int64)v27, v28, v29);
	}
	else
	{
		*(_DWORD*)(v27[2] + 8i64) = 0;
		v27[2] += 16i64;
	}
	if (v109)
		sub_14018B900(v109, 0);
	sub_14005E8E0((__int64)v97, v97[2] - 32i64, (int*)(v97[2] - 16i64), v97[2] - 16i64);
	v30 = v97[2];
	v31 = (__int64*)(v30 - 16);
	if ((_DWORD*)(v30 - 16) == dword_140A12138 || *((_DWORD*)v31 + 2) != 3)
	{
		v97[2] = v30 - 32;
		goto LABEL_57;
	}
	v32 = *((_DWORD*)v31 + 2);
	if (v32 == 3)
	{
	LABEL_38:
		v33 = (int)*(double*)v31;
		goto LABEL_39;
	}
	if (v32 == 4 && sub_14005AC80((char*)(*v31 + 32), (unsigned __int64*)&v99))
	{
		LODWORD(v101) = 3;
		v31 = (__int64*)&v100;
		v100 = (int*)v99;
		goto LABEL_38;
	}
	v33 = 0;
LABEL_39:
	v97[2] -= 32i64;
	v111[2] = v33;
	if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v95[1])(&v95))
	{
	LABEL_55:
		v92 = sub_140450CE0;
		goto LABEL_74;
	}
	v34 = sub_14005C3C0(*(_QWORD*)(v97[4] + 160i64), v96);
	v36 = *(_QWORD*)(v35 + 16);
	*(_QWORD*)v36 = *v34;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v35 + 16) += 16i64;
	v37 = v97;
	v38 = (unsigned __int64*)sub_14018F0E0(&v108, L"bIncreasingOrder")[1];
	if (v38)
	{
		do
			++v23;
		while (*((_BYTE*)v38 + v23));
		sub_140058710((__int64)v37, v38, v23);
	}
	else
	{
		*(_DWORD*)(v37[2] + 8i64) = 0;
		v37[2] += 16i64;
	}
	if (v109)
		sub_14018B900(v109, 0);
	sub_14005E8E0((__int64)v97, v97[2] - 32i64, (int*)(v97[2] - 16i64), v97[2] - 16i64);
	v39 = v97[2];
	v40 = (_DWORD*)(v39 - 16);
	if ((_DWORD*)(v39 - 16) == dword_140A12138 || v40[2] != 1)
	{
		v97[2] = v39 - 32;
		goto LABEL_55;
	}
	v41 = v40[2];
	if (v41 && (v41 != 1 || *v40))
	{
		v112 = 1;
		v97[2] -= 32i64;
		v92 = sub_140450CE0;
	}
	else
	{
		v112 = 0;
		v97[2] -= 32i64;
		v92 = sub_140450CE0;
	}
LABEL_74:
	v51 = sub_1400F26A0(v8, 3);
	v52 = v2[4];
	v104 = 1;
	v53 = *(_QWORD*)(v52 + 112);
	v105 = v51;
	if (*(_QWORD*)(v52 + 120) >= v53)
		sub_14005E2C0((__int64)v2);
	v54 = v2[2];
	v55 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v54 + 8) = 5;
	*(_QWORD*)v54 = v55;
	v2[2] += 16i64;
	v56 = sub_1400578C0((__int64)v2);
	v57 = qword_140C65908;
	v103 = v56;
	v58 = *(_QWORD*)(qword_140C65908 + 96);
	if (v58)
	{
		v59 = sub_14018B280(8 * v58 + 16, 0);
		if (v59)
		{
			*((_QWORD*)v59 + 1) = v58;
			v60 = (unsigned __int64)(v59 + 4);
			*(_QWORD*)(v60 - 16) = off_140B55060;
		}
		else
		{
			v60 = 16i64;
		}
	}
	else
	{
		v60 = 0i64;
	}
	v61 = *(int**)(v57 + 88);
	v99 = v60;
	sub_1407DB590((int*)v60, v61, 8 * v58);
	v63 = 0i64;
	v101 = 0i64;
	v64 = 0i64;
	v100 = 0i64;
	v65 = 0i64;
	if (v58)
	{
		v66 = v99;
		do
		{
			v67 = v63 + 1;
			v68 = sub_14018DB00((__int64)v64, v63 + 1, 8i64);
			v62 = *(_QWORD*)(v66 + 8 * v65);
			v69 = v68;
			*(_QWORD*)&v68[2 * v63] = v62;
			if (v64 != v68)
			{
				sub_1407DB590(v68, v64, 8 * v63);
				if (v64)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v64 - 2) + 8i64))(v64 - 4);
				v64 = v69;
			}
			++v65;
			++v63;
		} while (v65 < v58);
		v2 = v106;
		v101 = (int*)v67;
		v100 = v64;
		v1 = 0i64;
	}
	v70 = (__int64)v107;
	if (*((_QWORD*)v107 - 1))
	{
		sub_140450340(v62, (__int64)&v100, &v110);
		v63 = (unsigned __int64)v101;
		v64 = v100;
	}
	if (v105 && (v105 & 0xF) != 15)
	{
		sub_140450000(v105, (__int64)&v100, v105);
		v63 = (unsigned __int64)v101;
		v64 = v100;
	}
	if (*(_DWORD*)(qword_140C635F0 + 5896) == 1)
	{
		v71 = 0i64;
		for (i = *(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5584) + 520i64); v71 < v63; ++v71)
		{
			v73 = *(_QWORD*)&v64[2 * v71];
			v74 = 0i64;
			v75 = *(_QWORD*)(v73 + 72);
			if (v75)
			{
				v76 = *(_QWORD*)(v73 + 64);
				do
				{
					if (*(_BYTE*)(*(_QWORD*)v76 + 64i64) <= i)
						++v74;
					v76 += 8i64;
					--v75;
				} while (v75);
				if (v74)
					continue;
			}
			sub_140007270((__int64)&v100, v71);
			v63 = (unsigned __int64)v101;
			v64 = v100;
			--v71;
		}
	}
	if (v63 > 1)
	{
		sub_1404F4660((__int64*)&v100, (__int64)v92, (__int64)v111);
		v63 = (unsigned __int64)v101;
		v64 = v100;
	}
	v77 = v103;
	if (v63)
	{
		do
		{
			v78 = **(_DWORD**)&v64[2 * v1];
			v79 = *(_QWORD*)(v2[4] + 160i64);
			if ((unsigned int)(v77 - 1) >= *(_DWORD*)(v79 + 56))
			{
				if ((double)v77 == 0.0)
				{
					v80 = *(_DWORD**)(v79 + 32);
				}
				else
				{
					v93 = (double)v77;
					v80 = (_DWORD*)(*(_QWORD*)(v79 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v93) + HIDWORD(v93)) % (((1i64 << *(_BYTE*)(v79 + 11)) - 1) | 1)));
				}
				while (v80[6] != 3 || (double)v77 != *((double*)v80 + 2))
				{
					v80 = (_DWORD*)*((_QWORD*)v80 + 4);
					if (!v80)
					{
						v80 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v80 = (_DWORD*)(*(_QWORD*)(v79 + 24) + 16i64 * (v77 - 1));
			}
			v81 = v2[2];
			*(_QWORD*)v81 = *(_QWORD*)v80;
			v82 = v80[2];
			v83 = v104;
			*(_DWORD*)(v81 + 8) = v82;
			v2[2] += 16i64;
			v84 = v2[2];
			*(_DWORD*)(v84 + 8) = 3;
			v104 = v83 + 1;
			*(double*)v84 = (double)v83;
			v2[2] += 16i64;
			v85 = v2[2];
			*(_DWORD*)(v85 + 8) = 3;
			*(double*)v85 = (double)v78;
			v86 = v2[2] + 16i64;
			v2[2] = v86;
			sub_14005EA50((__int64)v2, (__int64*)(v86 - 48), (int*)(v86 - 32), (unsigned int*)(v86 - 16));
			v2[2] -= 48i64;
			++v1;
		} while (v1 < v63);
	}
	v87 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v77 - 1) >= *(_DWORD*)(v87 + 56))
	{
		if ((double)v77 == 0.0)
		{
			v88 = *(_DWORD**)(v87 + 32);
		}
		else
		{
			v94 = (double)v77;
			v88 = (_DWORD*)(*(_QWORD*)(v87 + 32)
				+ 40 * ((unsigned int)(LODWORD(v94) + HIDWORD(v94)) % (((1i64 << *(_BYTE*)(v87 + 11)) - 1) | 1)));
		}
		while (v88[6] != 3 || (double)v77 != *((double*)v88 + 2))
		{
			v88 = (_DWORD*)*((_QWORD*)v88 + 4);
			if (!v88)
			{
				v88 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v88 = (_DWORD*)(*(_QWORD*)(v87 + 24) + 16i64 * (v77 - 1));
	}
	v89 = v2[2];
	*(_QWORD*)v89 = *(_QWORD*)v88;
	*(_DWORD*)(v89 + 8) = v88[2];
	v2[2] += 16i64;
	if (v64)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v64 - 2) + 8i64))(v64 - 4);
	if (v99)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
	sub_1400579E0((__int64)v2, (__int64)v88, v77);
	v95 = off_140B56A08;
	if (v97)
		sub_1400579E0((__int64)v97, v90, v96);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)(v70 - 16) + 8i64))(v70 - 16);
	return 1i64;
}
// 1404EC76B: variable 'v25' is possibly undefined
// 1404EC882: variable 'v35' is possibly undefined
// 1404EC9B8: variable 'v43' is possibly undefined
// 1404ECC0A: variable 'v62' is possibly undefined
// 1404ECECC: variable 'v88' is possibly undefined
// 1404ECEEA: variable 'v90' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0D650: using guessed type wchar_t aEcurrency_0[10];
// 140B0D668: using guessed type wchar_t aBincreasingord_0[17];
// 140B0D690: using guessed type wchar_t aEdisplayflag_0[13];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

