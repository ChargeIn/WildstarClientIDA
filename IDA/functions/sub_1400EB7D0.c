#include "../winhttp.h"

//----- (00000001400EB7D0) ----------------------------------------------------
_BYTE* __fastcall sub_1400EB7D0(_QWORD* a1, int* a2, int* a3, int* a4, int a5)
{
	int v5; // r12d
	int* v6; // r15
	_QWORD* v7; // r13
	__int64 v10; // rbx
	int* v11; // rax
	int v12; // eax
	_QWORD* v13; // rsi
	__int64 v14; // r14
	_QWORD* v15; // r11
	_QWORD* v16; // rbx
	_QWORD* v17; // r9
	_BYTE* v18; // r10
	int v19; // r8d
	int v20; // edx
	int* v21; // rcx
	__int64 v22; // r10
	int v23; // eax
	int v24; // edi
	char* v25; // rdx
	int v26; // eax
	int v27; // ecx
	int v28; // r8d
	int* v29; // r9
	int v30; // eax
	int v31; // edx
	__int64 v32; // rcx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rax
	_DWORD* v38; // r11
	int v39; // eax
	int* v40; // r15
	__int64 v41; // rax
	_QWORD* v42; // rcx
	int* v43; // r13
	__int64 v44; // rax
	bool v45; // zf
	__int64 v46; // rsi
	int* v47; // r14
	__int64 v48; // rax
	__int64 v49; // rsi
	_WORD* v50; // r12
	__int64 v51; // rax
	__int64 v52; // rsi
	int* v53; // rsi
	int* v54; // r15
	unsigned __int64 v55; // rax
	unsigned __int64 v56; // rdi
	unsigned __int64 v57; // rdi
	__int64 v58; // rdi
	_QWORD* v59; // rax
	__int64 v60; // rdx
	__int64 v61; // rcx
	int* v62; // r14
	__int64 v63; // rax
	int* v64; // r12
	__int64 v65; // rdi
	unsigned __int64 v66; // rdi
	_WORD* v67; // r13
	__int64 v68; // rdi
	__int64 v69; // r15
	_QWORD* v70; // rsi
	__int64* v71; // rax
	bool v72; // di
	__int64 v73; // rcx
	__int64 v74; // rax
	int* v75; // rsi
	__int64 v76; // r15
	_WORD* v77; // rax
	__int64 v78; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v81; // rax
	int* v82; // rbx
	char* v83; // rdi
	unsigned __int64 v84; // rsi
	__int64 v85; // r14
	__int64 v86; // rdi
	_BYTE* v87; // rdi
	_QWORD* v88; // r14
	_QWORD* v89; // r10
	_BYTE* v90; // rdi
	_QWORD* v91; // rbx
	int v92; // esi
	char* v93; // rdx
	int v94; // eax
	int v95; // ecx
	int v96; // r8d
	__int64 v97; // r9
	int v98; // eax
	char* v99; // r8
	int v100; // edx
	int v101; // ecx
	__int64 v102; // r9
	int v103; // eax
	int* v104; // rcx
	__int64 v105; // rax
	_QWORD* v106; // rax
	_BYTE* result; // rax
	__int64 v108; // [rsp+30h] [rbp-B1h]
	__int64 v109; // [rsp+38h] [rbp-A9h]
	_QWORD* v110; // [rsp+40h] [rbp-A1h]
	__int64 v111; // [rsp+48h] [rbp-99h]
	__int64 v112; // [rsp+50h] [rbp-91h] BYREF
	int* v113; // [rsp+58h] [rbp-89h]
	_WORD* v114; // [rsp+60h] [rbp-81h]
	__int64 v115; // [rsp+68h] [rbp-79h]
	__int64 v116; // [rsp+70h] [rbp-71h]
	__int64 v117; // [rsp+78h] [rbp-69h]
	__int64 v118; // [rsp+80h] [rbp-61h]
	__int64 v119[2]; // [rsp+88h] [rbp-59h] BYREF
	__int64 v120; // [rsp+98h] [rbp-49h] BYREF
	int* v121; // [rsp+A0h] [rbp-41h]
	int* v122; // [rsp+A8h] [rbp-39h]
	__int64 v123; // [rsp+B0h] [rbp-31h]
	__int64 v124; // [rsp+B8h] [rbp-29h]
	__int64 v125; // [rsp+C0h] [rbp-21h] BYREF
	char v126[16]; // [rsp+C8h] [rbp-19h] BYREF
	__int64 v127; // [rsp+D8h] [rbp-9h] BYREF
	int* v128; // [rsp+E0h] [rbp-1h]

	v5 = a5;
	v6 = a2;
	v7 = a1;
	v10 = sub_14013A390((__int64)(a1 + 312), a5);
	if (!v10)
		v10 = v7[316];
	v11 = sub_14018B280(120i64, 0);
	if (v11)
		v111 = sub_1400F15F0((__int64)v11, v6, a3, a4, a5, v10);
	else
		v111 = 0i64;
	v12 = dword_140C3C530;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C530)
		v12 = *(_DWORD*)qword_140C63750;
	if (byte_140C3C540[v12])
	{
		v13 = (_QWORD*)v7[412];
		v14 = v7[50];
		v15 = (_QWORD*)v13[1];
		v116 = v14;
		v110 = v13;
		v16 = v13;
		v17 = v15;
		if (v15)
		{
			while (1)
			{
				v18 = (_BYTE*)v17[4];
				LOBYTE(v19) = *v18;
				v20 = (char)*v18 - *(char*)v6;
				if (v20)
				{
				LABEL_14:
					if (v20 < 0)
					{
						v17 = (_QWORD*)v17[3];
						goto LABEL_17;
					}
				}
				else
				{
					v21 = v6;
					v22 = v18 - (_BYTE*)v6;
					while ((_BYTE)v19)
					{
						v19 = *((char*)v21 + v22 + 1);
						v23 = *((char*)v21 + 1);
						v21 = (int*)((char*)v21 + 1);
						v20 = v19 - v23;
						if (v19 != v23)
							goto LABEL_14;
					}
				}
				v16 = v17;
				v17 = (_QWORD*)v17[2];
			LABEL_17:
				if (!v17)
				{
					v24 = *(char*)v6;
					while (1)
					{
						v25 = (char*)v15[4];
						v26 = *v25;
						v27 = v24 - v26;
						if (v24 == v26)
							break;
					LABEL_23:
						if (v27 >= 0)
							goto LABEL_25;
						v13 = v15;
						v15 = (_QWORD*)v15[2];
					LABEL_26:
						if (!v15)
						{
							v110 = v13;
							goto LABEL_28;
						}
					}
					LOBYTE(v28) = *(_BYTE*)v6;
					v29 = v6;
					while ((_BYTE)v28)
					{
						v28 = *((char*)v29 + 1);
						v30 = v25[1];
						v29 = (int*)((char*)v29 + 1);
						++v25;
						v27 = v28 - v30;
						if (v28 != v30)
							goto LABEL_23;
					}
				LABEL_25:
					v15 = (_QWORD*)v15[3];
					goto LABEL_26;
				}
			}
		}
	LABEL_28:
		if (v16 != v13)
		{
			do
			{
				v31 = *(_DWORD*)(v16[5] + 112i64);
				v32 = *(_QWORD*)(*(_QWORD*)(v14 + 32) + 160i64);
				v124 = v16[5];
				v33 = sub_14005C3C0(v32, v31);
				v34 = *(_QWORD*)(v14 + 16);
				*(_QWORD*)v34 = *v33;
				*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
				*(_QWORD*)(v14 + 16) += 16i64;
				v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v14 + 32) + 160i64), v5);
				*(_QWORD*)v36 = *v35;
				*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
				*(_QWORD*)(v14 + 16) += 16i64;
				v37 = *(_QWORD*)(v14 + 16);
				v38 = (_DWORD*)(v37 - 32);
				if ((_DWORD*)(v37 - 16) == dword_140A12138 || v38 == dword_140A12138)
				{
					v40 = 0i64;
					v39 = 0;
				}
				else
				{
					v39 = sub_14005AC20(v37 - 16, v37 - 32);
					v40 = 0i64;
				}
				*(_QWORD*)(v14 + 16) = v38;
				if (v39)
				{
					v41 = sub_1400E93D0(v14);
					v117 = v41 + 176;
					v42 = *(_QWORD**)(v41 + 2480);
					if ((_QWORD*)*v42 == v42)
						v108 = 0i64;
					else
						v108 = *(_QWORD*)(v42[1] + 16i64);
					v43 = 0i64;
					v121 = 0i64;
					v123 = 0i64;
					v44 = 0i64;
					do
						v45 = aUnknownaddon_0[++v44] == 0;
					while (!v45);
					v46 = (2 * v44) >> 1;
					if ((unsigned __int64)(v46 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v43 = sub_14018B280(2 * (v46 + 1), 0);
						v121 = v43;
						v123 = (__int64)v43 + 2 * v46 + 2;
					}
					sub_1407DB590(v43, (int*)L"[UnknownAddon]", 2 * v46);
					v47 = (int*)((char*)v43 + 2 * v46);
					v122 = v47;
					if (v47)
						*(_WORD*)v47 = 0;
					v48 = 0i64;
					v109 = 0i64;
					v118 = 0i64;
					do
						v45 = aUnknownfunctio_0[++v48] == 0;
					while (!v45);
					v49 = (2 * v48) >> 1;
					if ((unsigned __int64)(v49 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v40 = sub_14018B280(2 * (v49 + 1), 0);
						v109 = (__int64)v40;
						v118 = (__int64)v40 + 2 * v49 + 2;
					}
					sub_1407DB590(v40, (int*)L"[UnknownFunction]", 2 * v49);
					v50 = (_WORD*)v40 + v49;
					v51 = 0i64;
					if (v50)
						*v50 = 0;
					v52 = *(_QWORD*)(v108 + 48);
					if (v52)
					{
						v53 = *(int**)(v52 + 24);
						if (*(_WORD*)v53)
						{
							do
								++v51;
							while (*((_WORD*)v53 + v51));
						}
						v54 = (int*)((char*)v53 + 2 * v51);
						v55 = ((char*)v47 - (char*)v43) >> 1;
						v56 = ((char*)v54 - (char*)v53) >> 1;
						if (v56 > v55)
						{
							v58 = 2 * v55;
							sub_1407DB590(v43, v53, 2 * v55);
							sub_14001C310(&v120, (int*)((char*)v53 + v58), v54);
							v43 = v121;
						}
						else
						{
							v57 = 2 * v56;
							sub_1407DB590(v43, v53, v57);
							if ((int*)((char*)v43 + v57) != v47)
								sub_1407DB590((int*)((char*)v43 + v57), v47, 2ui64);
						}
						v59 = sub_14018F2D0(&v112, *(char**)(v108 + 24));
						v60 = v59[1];
						v59[1] = v109;
						v61 = v118;
						v59[2] = v50;
						v59[3] = v61;
						v109 = v60;
						if (v113)
							sub_14018B900((__int64)v113, 0);
					}
					sub_14018EFA0(
						&v127,
						(__int64)L"Addon: %s. Event: %s. Has an existing event registration to %s.",
						v43,
						a2,
						*(_QWORD*)(v124 + 48));
					v62 = v128;
					v63 = 0i64;
					v64 = 0i64;
					if (*(_WORD*)v128)
					{
						do
							++v63;
						while (*((_WORD*)v128 + v63));
					}
					v65 = (2 * v63) >> 1;
					if ((unsigned __int64)(v65 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v64 = sub_14018B280(2 * (v65 + 1), 0);
					v66 = 2 * v65;
					sub_1407DB590(v64, v62, v66);
					v67 = (_WORD*)((char*)v64 + v66);
					if ((int*)((char*)v64 + v66))
						*v67 = 0;
					v68 = *(_QWORD*)(v117 + 8);
					v69 = v68;
					v70 = *(_QWORD**)(v68 + 8);
					while (v70)
					{
						if ((int)sub_1400454D0(v70[5], v70[6], (unsigned __int16*)v64, (__int64)v67) < 0)
						{
							v70 = (_QWORD*)v70[3];
						}
						else
						{
							v69 = (__int64)v70;
							v70 = (_QWORD*)v70[2];
						}
					}
					if (v69 == v68
						|| (int)sub_1400454D0((__int64)v64, (__int64)v67, *(unsigned __int16**)(v69 + 40), *(_QWORD*)(v69 + 48)) < 0)
					{
						v119[0] = v68;
						v71 = v119;
					}
					else
					{
						v125 = v69;
						v71 = &v125;
					}
					v72 = *v71 == v68;
					if (v64)
						sub_14018B900((__int64)v64, 0);
					if (v72)
					{
						v73 = *(_QWORD*)(v108 + 48);
						if (v73)
							sub_140137280(v73, v62);
						v74 = 0i64;
						v75 = 0i64;
						v113 = 0i64;
						v115 = 0i64;
						if (*(_WORD*)v62)
						{
							do
								++v74;
							while (*((_WORD*)v62 + v74));
						}
						v76 = (2 * v74) >> 1;
						if ((unsigned __int64)(v76 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v75 = sub_14018B280(2 * (v76 + 1), 0);
							v113 = v75;
							v115 = (__int64)v75 + 2 * v76 + 2;
						}
						sub_1407DB590(v75, v62, 2 * v76);
						v77 = (_WORD*)v75 + v76;
						v114 = v77;
						if (v77)
							*v77 = 0;
						sub_140044D10(v117, (__int64)v126, (__int64)&v112);
						if (v75)
							sub_14018B900((__int64)v75, 0);
					}
					sub_14018B900((__int64)v62, 0);
					if (v109)
						sub_14018B900(v109, 0);
					if (v121)
						sub_14018B900((__int64)v121, 0);
					v5 = a5;
					v14 = v116;
					v13 = v110;
				}
				v78 = v16[3];
				if (v78)
				{
					v16 = (_QWORD*)v16[3];
					for (i = *(_QWORD**)(v78 + 16); i; i = (_QWORD*)i[2])
						v16 = i;
				}
				else
				{
					for (j = v16[1]; v16 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v16 = (_QWORD*)j;
					if (v16[3] != j)
						v16 = (_QWORD*)j;
				}
			} while (v16 != v13);
			v6 = a2;
			v7 = a1;
		}
	}
	v81 = -1i64;
	v82 = 0i64;
	v115 = 0i64;
	v113 = 0i64;
	do
		v45 = *((_BYTE*)v6 + ++v81) == 0;
	while (!v45);
	v83 = (char*)v6 + v81;
	v84 = v81;
	v85 = v81 + 1;
	if (v81 != -2)
	{
		v82 = sub_14018B280(v81 + 1, 0);
		v113 = v82;
		v115 = (__int64)v82 + v85;
	}
	sub_1407DB590(v82, v6, v84);
	v86 = v83 - (char*)v6;
	v45 = (int*)((char*)v82 + v86) == 0i64;
	v87 = (char*)v82 + v86;
	v114 = v87;
	if (!v45)
		*v87 = 0;
	sub_1400DFCD0((__int64)(v7 + 407), (__int64)v119, (__int64)&v112);
	if (v82)
		sub_14018B900((__int64)v82, 0);
	v88 = (_QWORD*)v7[412];
	v89 = (_QWORD*)v88[1];
	v90 = *(_BYTE**)(v119[0] + 40);
	v91 = v88;
	if (v89)
	{
		v92 = (char)*v90;
		while (1)
		{
			v93 = (char*)v89[4];
			v91 = v89;
			v94 = *v93;
			v95 = v92 - v94;
			if (v92 == v94)
				break;
		LABEL_115:
			if (v95 >= 0)
				goto LABEL_117;
			v89 = (_QWORD*)v89[2];
		LABEL_118:
			if (!v89)
				goto LABEL_119;
		}
		LOBYTE(v96) = *v90;
		v97 = *(_QWORD*)(v119[0] + 40);
		while ((_BYTE)v96)
		{
			v96 = *(char*)(v97 + 1);
			v98 = v93[1];
			++v97;
			++v93;
			v95 = v96 - v98;
			if (v96 != v98)
				goto LABEL_115;
		}
	LABEL_117:
		v89 = (_QWORD*)v89[3];
		goto LABEL_118;
	}
LABEL_119:
	if (v91 != v88)
	{
		v99 = (char*)v91[4];
		LOBYTE(v100) = *v90;
		v101 = (char)*v90 - *v99;
		if (!v101)
		{
			v102 = *(_QWORD*)(v119[0] + 40);
			while ((_BYTE)v100)
			{
				v100 = *(char*)(v102 + 1);
				v103 = v99[1];
				++v102;
				++v99;
				v101 = v100 - v103;
				if (v100 != v103)
					goto LABEL_124;
			}
			goto LABEL_125;
		}
	LABEL_124:
		if (v101 >= 0)
		{
		LABEL_125:
			v104 = sub_14018B280(48i64, 0);
			if (v104 != (int*)-32i64)
			{
				*((_QWORD*)v104 + 4) = v90;
				*((_QWORD*)v104 + 5) = v111;
			}
			v91[3] = v104;
			v105 = v7[412];
			if (v91 == *(_QWORD**)(v105 + 24))
				*(_QWORD*)(v105 + 24) = v104;
			goto LABEL_135;
		}
	}
	v104 = sub_14018B280(48i64, 0);
	if (v104 != (int*)-32i64)
	{
		*((_QWORD*)v104 + 4) = v90;
		*((_QWORD*)v104 + 5) = v111;
	}
	v91[2] = v104;
	v106 = (_QWORD*)v7[412];
	if (v91 == v106)
	{
		v106[1] = v104;
		*(_QWORD*)(v7[412] + 24i64) = v104;
	}
	else if (v91 == (_QWORD*)v106[2])
	{
		v106[2] = v104;
	}
LABEL_135:
	*((_QWORD*)v104 + 1) = v91;
	*((_QWORD*)v104 + 2) = 0i64;
	*((_QWORD*)v104 + 3) = 0i64;
	result = sub_1400081C0((__int64)v104, (_QWORD*)(v7[412] + 8i64));
	++v7[413];
	return result;
}
// 1400EB907: conditional instruction was optimized away because r11.8!=0
// 1400EBF6D: conditional instruction was optimized away because r10.8==0
// 1400EB9BB: variable 'v36' is possibly undefined
// 1400EB9F3: variable 'v38' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A17880: using guessed type wchar_t aUnknownaddon_0[15];
// 140A178A0: using guessed type wchar_t aUnknownfunctio_0[18];
// 140A17930: using guessed type wchar_t aAddonSEventSHa[64];
// 140C3C530: using guessed type int dword_140C3C530;
// 140C3C540: using guessed type _BYTE byte_140C3C540[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 1400EB7D0: using guessed type char var_68[16];

