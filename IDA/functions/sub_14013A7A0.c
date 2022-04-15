//----- (000000014013A7A0) ----------------------------------------------------
__int64 __fastcall sub_14013A7A0(_QWORD* a1)
{
	_QWORD* v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // eax
	_QWORD* v8; // r10
	_DWORD* v9; // rcx
	_QWORD* v10; // r8
	_DWORD* v11; // rcx
	unsigned __int64 v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	_DWORD* v16; // rcx
	int v17; // eax
	char* v18; // rdx
	_DWORD* v19; // rax
	int* v20; // r13
	_DWORD* v21; // rax
	int v22; // r12d
	int v23; // eax
	_DWORD* v24; // rcx
	__int64 v25; // r8
	_DWORD* v26; // rcx
	unsigned __int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	_DWORD* v30; // rcx
	int v31; // eax
	__int64 v32; // rax
	int* v33; // rdi
	__int64 v34; // rbx
	unsigned __int64 v35; // rbx
	_WORD* v36; // r14
	__int64 v37; // r15
	_QWORD* v38; // rbx
	__int64 v39; // rsi
	int v40; // eax
	__int64 v41; // rbx
	__int64 v42; // rsi
	int* v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rbx
	int* v47; // rdi
	_QWORD* v48; // r12
	__int64 v49; // rdx
	int v50; // r8d
	__int64 v51; // rcx
	_QWORD* v52; // rax
	__int64 v53; // r10
	__int64 v54; // rdx
	int* v55; // rdx
	__int64 v56; // rax
	int* v57; // rdi
	__int64 v58; // rax
	__int64 v59; // rsi
	_WORD* v60; // rax
	__int64 v61; // r14
	__int64 v62; // rcx
	__int64 v63; // rbx
	int* v64; // rdi
	__int64 v65; // rdx
	int v66; // r8d
	__int64 v67; // rcx
	_QWORD* v68; // rax
	__int64 v69; // r10
	__int64 v70; // rdx
	int* v71; // rdx
	__int64 v72; // rax
	__int64 v73; // rcx
	int* v74; // rdi
	int* v75; // rsi
	__int64 v76; // rax
	__int64 v77; // rbx
	unsigned __int64 v78; // rbx
	_WORD* v79; // r15
	__int64 v80; // r13
	__int64 v81; // r14
	_QWORD* v82; // rbx
	__int64* v83; // rbx
	__int64 v84; // rbx
	__int64 v85; // rsi
	int* v86; // rax
	__int64 v87; // r15
	bool v88; // zf
	int* v89; // rsi
	__int64 v90; // rax
	__int64 v91; // r14
	_WORD* v92; // rax
	__int64(__fastcall * *v94)(); // [rsp+20h] [rbp-89h] BYREF
	int v95; // [rsp+28h] [rbp-81h]
	_QWORD* v96; // [rsp+30h] [rbp-79h]
	int v97; // [rsp+38h] [rbp-71h]
	__int64(__fastcall * *v98)(); // [rsp+40h] [rbp-69h] BYREF
	int* v99; // [rsp+48h] [rbp-61h]
	_QWORD* v100; // [rsp+50h] [rbp-59h]
	__int64(__fastcall * **v101)(); // [rsp+58h] [rbp-51h]
	__int64(__fastcall * *v102)(); // [rsp+60h] [rbp-49h] BYREF
	int v103; // [rsp+68h] [rbp-41h]
	_QWORD* v104; // [rsp+70h] [rbp-39h]
	int v105; // [rsp+78h] [rbp-31h]
	__int64 v106; // [rsp+80h] [rbp-29h] BYREF
	int* v107; // [rsp+88h] [rbp-21h]
	_WORD* v108; // [rsp+90h] [rbp-19h]
	__int64 v109; // [rsp+98h] [rbp-11h]
	__int64 v110; // [rsp+A0h] [rbp-9h] BYREF
	__int64 v111; // [rsp+A8h] [rbp-1h] BYREF
	int* v112; // [rsp+B0h] [rbp+7h]
	__int64 v113; // [rsp+118h] [rbp+6Fh] BYREF
	__int64 v114; // [rsp+120h] [rbp+77h]
	__int64 v115; // [rsp+128h] [rbp+7Fh]

	v2 = *(_QWORD**)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= (unsigned __int64)v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v115 = v6;
	if (*(_QWORD*)(v6 + 2528))
	{
		v96 = a1;
		v97 = 1;
		v94 = off_140B569F0;
		v7 = -2;
		v8 = a1;
		v95 = -2;
		v9 = (_DWORD*)a1[3];
		if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && v9[2] == 5)
		{
			sub_1400579E0((__int64)a1, (__int64)v2, -2);
			v10 = v96;
			v11 = dword_140A12138;
			v12 = v96[2];
			if (v96[3] < v12)
				v11 = (_DWORD*)v96[3];
			*(_QWORD*)v12 = *(_QWORD*)v11;
			*(_DWORD*)(v12 + 8) = v11[2];
			v10[2] += 16i64;
			v7 = sub_1400578C0((__int64)v96);
			v8 = v96;
			v95 = v7;
		}
		if (!v8 || v7 == -2)
			goto LABEL_131;
		v13 = sub_14005C3C0(*(_QWORD*)(v8[4] + 160i64), v7);
		v15 = *(_QWORD*)(v14 + 16);
		*(_QWORD*)v15 = *v13;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v14 + 16) += 16i64;
		v2 = v96;
		v16 = (_DWORD*)(v96[2] - 16i64);
		if (v16 == dword_140A12138)
			v17 = -1;
		else
			v17 = v16[2];
		v96[2] = v16;
		if (v17 != 5)
		{
		LABEL_130:
			v7 = v95;
			v8 = v96;
		LABEL_131:
			v94 = off_140B56A08;
			if (v8)
				sub_1400579E0((__int64)v8, (__int64)v2, v7);
			return 0i64;
		}
		v18 = (char*)sub_14018F0E0(&v106, word_1409D9114)[1];
		v19 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v19 < a1[2] && v19 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v18 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v111, v18);
		if (v107)
			sub_14018B900((__int64)v107, 0);
		v20 = v112;
		if (sub_14013A630(v6 + 2496, v112)
			|| (v21 = (_DWORD*)(a1[3] + 32i64), (unsigned __int64)v21 >= a1[2])
			|| v21 == dword_140A12138
			|| *(int*)(a1[3] + 40i64) <= 0
			|| (v22 = sub_140056D60(a1, 3u), v22 <= 0))
		{
		LABEL_128:
			if (v20)
				sub_14018B900((__int64)v20, 0);
			goto LABEL_130;
		}
		v102 = off_140B569F0;
		v104 = a1;
		v105 = 1;
		v23 = -2;
		v103 = -2;
		v24 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v24 < a1[2] && v24 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
		{
			sub_1400579E0((__int64)a1, (__int64)v2, -2);
			v25 = (__int64)v104;
			v26 = dword_140A12138;
			v27 = v104[2];
			if (v104[3] + 48i64 < v27)
				v26 = (_DWORD*)(v104[3] + 48i64);
			*(_QWORD*)v27 = *(_QWORD*)v26;
			*(_DWORD*)(v27 + 8) = v26[2];
			*(_QWORD*)(v25 + 16) += 16i64;
			v23 = sub_1400578C0((__int64)v104);
			a1 = v104;
			v103 = v23;
		}
		if (!a1 || v23 == -2)
		{
		LABEL_126:
			v102 = off_140B56A08;
			if (a1)
				sub_1400579E0((__int64)a1, (__int64)v2, v23);
			goto LABEL_128;
		}
		v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
		v29 = a1[2];
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		a1[2] += 16i64;
		v2 = v104;
		v30 = (_DWORD*)(v104[2] - 16i64);
		if (v30 == dword_140A12138)
			v31 = -1;
		else
			v31 = v30[2];
		v104[2] = v30;
		if (v31 == 5)
		{
			v32 = 0i64;
			v33 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v32;
				while (*((_WORD*)v20 + v32));
			}
			v34 = (2 * v32) >> 1;
			if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v33 = sub_14018B280(2 * (v34 + 1), 0);
			v35 = 2 * v34;
			sub_1407DB590(v33, v20, v35);
			v36 = (_WORD*)((char*)v33 + v35);
			if ((int*)((char*)v33 + v35))
				*v36 = 0;
			v37 = *(_QWORD*)(v6 + 2544);
			v38 = *(_QWORD**)(v37 + 8);
			v114 = v6 + 2536;
			v39 = v37;
			while (v38)
			{
				if ((int)sub_1400454D0(v38[5], v38[6], (unsigned __int16*)v33, (__int64)v36) < 0)
				{
					v38 = (_QWORD*)v38[3];
				}
				else
				{
					v39 = (__int64)v38;
					v38 = (_QWORD*)v38[2];
				}
			}
			if (v39 == v37
				|| (v40 = sub_1400454D0((__int64)v33, (__int64)v36, *(unsigned __int16**)(v39 + 40), *(_QWORD*)(v39 + 48)),
					v113 = v39,
					v40 < 0))
			{
				v113 = v37;
			}
			v41 = v113;
			if (v33)
				sub_14018B900((__int64)v33, 0);
			v42 = v115;
			if (v41 == *(_QWORD*)(v115 + 2544))
			{
				v43 = sub_14018B280(232i64, 0);
				if (v43)
					v44 = sub_140133E40((__int64)v43, v42, v20);
				else
					v44 = 0i64;
				v45 = *(_QWORD*)(v42 + 2528);
				v46 = v44 + 56;
				v113 = v44;
				v47 = *(int**)(v45 + 160);
				*(_DWORD*)(v44 + 48) = v22;
				v48 = (_QWORD*)v44;
				if ((__int64(__fastcall***)())(v44 + 56) != &v94)
				{
					*(_DWORD*)(v44 + 80) = 1;
					*(_QWORD*)(v44 + 72) = v96;
					if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v94[1])(&v94))
					{
						v50 = *(_DWORD*)(v46 + 8);
						v51 = *(_QWORD*)(v46 + 16);
						*(_DWORD*)(v46 + 24) = v97;
						sub_1400579E0(v51, v49, v50);
						v52 = sub_14005C3C0(*(_QWORD*)(v96[4] + 160i64), v95);
						v54 = *(_QWORD*)(v53 + 16);
						*(_QWORD*)v54 = *v52;
						*(_DWORD*)(v54 + 8) = *((_DWORD*)v52 + 2);
						*(_QWORD*)(v53 + 16) += 16i64;
						*(_DWORD*)(v46 + 8) = sub_1400578C0(*(_QWORD*)(v46 + 16));
					}
				}
				v55 = (int*)&word_140B7B704;
				if (v47)
					v55 = v47;
				v56 = 0i64;
				if (*(_WORD*)v55)
				{
					do
						++v56;
					while (*((_WORD*)v55 + v56));
				}
				sub_14001C480((__int64)(v48 + 16), v55, (int*)((char*)v55 + 2 * v56));
				v57 = 0i64;
				v58 = 0i64;
				v99 = 0i64;
				v101 = 0i64;
				if (*(_WORD*)v20)
				{
					do
						++v58;
					while (*((_WORD*)v20 + v58));
				}
				v59 = (2 * v58) >> 1;
				if ((unsigned __int64)(v59 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v57 = sub_14018B280(2 * (v59 + 1), 0);
					v99 = v57;
					v101 = (__int64(__fastcall***)())((char*)v57 + 2 * v59 + 2);
				}
				sub_1407DB590(v57, v20, 2 * v59);
				v60 = (_WORD*)v57 + v59;
				v100 = v60;
				if (v60)
					*v60 = 0;
				v61 = v114;
				*(_QWORD*)sub_1400EDA60(v114, (__int64)&v98) = v48;
				if (v57)
					sub_14018B900((__int64)v57, 0);
			LABEL_87:
				sub_140185730(v48);
				v73 = (__int64)v104;
				LODWORD(v99) = -2;
				v100 = v104;
				v98 = off_140B56A08;
				v101 = &v102;
				*(_DWORD*)(v104[2] + 8i64) = 0;
				*(_QWORD*)(v73 + 16) += 16i64;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v98[2])(&v98, 0xFFFFFFFFi64);
				v104[2] -= 16i64;
				while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v101)[1])(v101)
					&& (unsigned int)sub_1400FCBA0((__int64)&v98))
				{
					sub_1400FC540((__int64)&v98, &v106);
					v74 = v107;
					v75 = 0i64;
					v76 = 0i64;
					if (*(_WORD*)v107)
					{
						do
							++v76;
						while (*((_WORD*)v107 + v76));
					}
					v77 = (2 * v76) >> 1;
					if ((unsigned __int64)(v77 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v75 = sub_14018B280(2 * (v77 + 1), 0);
					v78 = 2 * v77;
					sub_1407DB590(v75, v74, v78);
					v79 = (_WORD*)((char*)v75 + v78);
					if ((int*)((char*)v75 + v78))
						*v79 = 0;
					v80 = *(_QWORD*)(v61 + 8);
					v81 = v80;
					v82 = *(_QWORD**)(v80 + 8);
					while (v82)
					{
						if ((int)sub_1400454D0(v82[5], v82[6], (unsigned __int16*)v75, (__int64)v79) < 0)
						{
							v82 = (_QWORD*)v82[3];
						}
						else
						{
							v81 = (__int64)v82;
							v82 = (_QWORD*)v82[2];
						}
					}
					if (v81 == v80
						|| (int)sub_1400454D0((__int64)v75, (__int64)v79, *(unsigned __int16**)(v81 + 40), *(_QWORD*)(v81 + 48)) < 0)
					{
						v110 = v80;
						v83 = &v110;
					}
					else
					{
						v113 = v81;
						v83 = &v113;
					}
					v84 = *v83;
					if (v75)
						sub_14018B900((__int64)v75, 0);
					v85 = v115;
					if (v84 == *(_QWORD*)(v115 + 2544))
					{
						v86 = sub_14018B280(232i64, 0);
						if (v86)
							v87 = sub_140133E40((__int64)v86, v85, v74);
						else
							v87 = 0i64;
						v88 = *(_WORD*)v74 == 0;
						v89 = 0i64;
						v107 = 0i64;
						v109 = 0i64;
						v90 = 0i64;
						if (!v88)
						{
							do
								++v90;
							while (*((_WORD*)v74 + v90));
						}
						v91 = (2 * v90) >> 1;
						if ((unsigned __int64)(v91 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v89 = sub_14018B280(2 * (v91 + 1), 0);
							v107 = v89;
							v109 = (__int64)v89 + 2 * v91 + 2;
						}
						sub_1407DB590(v89, v74, 2 * v91);
						v92 = (_WORD*)v89 + v91;
						v108 = v92;
						if (v92)
							*v92 = 0;
						v61 = v114;
						*(_QWORD*)sub_1400EDA60(v114, (__int64)&v106) = v87;
						if (v89)
							sub_14018B900((__int64)v89, 0);
						sub_140185980((__int64)v48, v87);
					}
					else
					{
						sub_140185980((__int64)v48, *(_QWORD*)(v84 + 64));
						v61 = v114;
					}
					sub_14018B900((__int64)v74, 0);
				}
				v98 = off_140B56A08;
				if (v100)
					sub_1400579E0((__int64)v100, (__int64)v2, (int)v99);
				v20 = v112;
				goto LABEL_125;
			}
			v62 = *(_QWORD*)(v41 + 64);
			if (*(_DWORD*)(v62 + 48) < v22)
			{
				v63 = v62 + 56;
				v64 = *(int**)(*(_QWORD*)(v115 + 2528) + 160i64);
				*(_DWORD*)(v62 + 48) = v22;
				v48 = (_QWORD*)v62;
				if ((__int64(__fastcall***)())(v62 + 56) != &v94)
				{
					*(_DWORD*)(v62 + 80) = 1;
					*(_QWORD*)(v62 + 72) = v96;
					if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v94[1])(&v94))
					{
						v66 = *(_DWORD*)(v63 + 8);
						v67 = *(_QWORD*)(v63 + 16);
						*(_DWORD*)(v63 + 24) = v97;
						sub_1400579E0(v67, v65, v66);
						v68 = sub_14005C3C0(*(_QWORD*)(v96[4] + 160i64), v95);
						v70 = *(_QWORD*)(v69 + 16);
						*(_QWORD*)v70 = *v68;
						*(_DWORD*)(v70 + 8) = *((_DWORD*)v68 + 2);
						*(_QWORD*)(v69 + 16) += 16i64;
						*(_DWORD*)(v63 + 8) = sub_1400578C0(*(_QWORD*)(v63 + 16));
					}
				}
				v71 = (int*)&word_140B7B704;
				if (v64)
					v71 = v64;
				v72 = 0i64;
				if (*(_WORD*)v71)
				{
					do
						++v72;
					while (*((_WORD*)v71 + v72));
				}
				sub_14001C480((__int64)(v48 + 16), v71, (int*)((char*)v71 + 2 * v72));
				v61 = v114;
				goto LABEL_87;
			}
		}
	LABEL_125:
		v23 = v103;
		a1 = v104;
		goto LABEL_126;
	}
	return 0i64;
}
// 14013A8D1: variable 'v14' is possibly undefined
// 14013AA06: variable 'v2' is possibly undefined
// 14013AC1F: variable 'v49' is possibly undefined
// 14013AC3C: variable 'v53' is possibly undefined
// 14013AD9B: variable 'v65' is possibly undefined
// 14013ADB8: variable 'v69' is possibly undefined
// 1409D9114: using guessed type unsigned __int16 word_1409D9114[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;

