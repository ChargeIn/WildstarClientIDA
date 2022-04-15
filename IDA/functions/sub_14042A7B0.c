#include "../winhttp.h"

//----- (000000014042A7B0) ----------------------------------------------------
void __fastcall sub_14042A7B0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v3; // r8
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64* v21; // r13
	unsigned __int64 i; // r12
	__int64 v23; // rcx
	unsigned __int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // eax
	__int64 v28; // rdx
	__int64 v29; // r14
	int v30; // r15d
	unsigned __int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rsi
	__int64 v34; // rbx
	__int64 v35; // rax
	_QWORD* v36; // r8
	char v37; // dl
	__int64 v38; // rax
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64 v42; // r9
	__int64 v43; // r10
	int v44; // ebx
	__int64 v45; // r9
	_DWORD* v46; // rcx
	unsigned __int64* v47; // r14
	unsigned __int64 v48; // rsi
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // rdx
	__int64 v55; // r9
	_DWORD* v56; // rdx
	__int64 v57; // rcx
	unsigned __int64* v58; // r14
	unsigned __int64 v59; // r12
	unsigned __int64 v60; // rsi
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // r9
	_DWORD* v64; // rdx
	__int64 v65; // rcx
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64* v68; // r15
	__int64 v69; // rbx
	__int64 v70; // rax
	int v71; // eax
	__int64 v72; // rdx
	__int64 v73; // r14
	int v74; // r13d
	unsigned __int64 v75; // rcx
	__int64 v76; // rax
	__int64 v77; // rsi
	__int64 v78; // rbx
	__int64 v79; // rax
	_QWORD* v80; // r8
	char v81; // dl
	__int64 v82; // rax
	__int64 v83; // rax
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // r9
	__int64 v87; // r10
	__int64 v88; // r9
	unsigned int v89; // ebx
	__int64 v90; // r15
	_DWORD* v91; // rcx
	unsigned __int64* v92; // r14
	unsigned __int64 v93; // rsi
	__int64 v94; // rbx
	__int64 v95; // rax
	__int64 v96; // rcx
	_DWORD* v97; // rax
	__int64 v98; // rdx
	__int64 v99; // r8
	__int64 v100; // rsi
	__int64 v101; // r10
	int v102; // r15d
	__int64 v103; // r9
	_DWORD* v104; // rcx
	unsigned __int64* v105; // r14
	unsigned __int64 v106; // rsi
	__int64 v107; // rbx
	__int64 v108; // rax
	__int64 v109; // rcx
	__int64 v110; // rax
	__int64* v111; // rax
	__int64 v112; // r10
	__int64 v113; // r9
	_DWORD* v114; // rcx
	__int64 v115; // rcx
	int v116; // eax
	__int64 v117; // rax
	__int64 v118; // r10
	__int64 v119; // r9
	_DWORD* v120; // rcx
	__int64 v121; // r8
	__int64 v122; // rdx
	__int64 v123; // rcx
	unsigned __int64 v124; // rax
	_QWORD* v125; // rsi
	__int64 v126; // rbx
	__int64 v127; // rax
	int v128; // ebx
	__int64 v129; // rbx
	_QWORD* v130; // rdx
	int v131; // r13d
	__int64 v132; // rdx
	__int64 v133; // rdx
	double v134; // [rsp+38h] [rbp-99h]
	double v135; // [rsp+38h] [rbp-99h]
	double v136; // [rsp+38h] [rbp-99h]
	double v137; // [rsp+38h] [rbp-99h]
	__int64(__fastcall * *v138)(); // [rsp+40h] [rbp-91h] BYREF
	__int64 v139; // [rsp+48h] [rbp-89h]
	_QWORD* v140; // [rsp+50h] [rbp-81h]
	int v141; // [rsp+58h] [rbp-79h]
	__int64 v142; // [rsp+60h] [rbp-71h]
	__int64 v143; // [rsp+68h] [rbp-69h] BYREF
	__int64 v144; // [rsp+70h] [rbp-61h]
	__int64 v145; // [rsp+78h] [rbp-59h]
	unsigned int* v146; // [rsp+80h] [rbp-51h] BYREF
	int v147; // [rsp+88h] [rbp-49h]
	__int64(__fastcall * *v148)(); // [rsp+90h] [rbp-41h] BYREF
	int v149; // [rsp+98h] [rbp-39h]
	_QWORD* v150; // [rsp+A0h] [rbp-31h]
	int v151; // [rsp+A8h] [rbp-29h]
	__int64(__fastcall * *v152)(); // [rsp+B0h] [rbp-21h] BYREF
	int v153; // [rsp+B8h] [rbp-19h]
	_QWORD* v154; // [rsp+C0h] [rbp-11h]
	int v155; // [rsp+C8h] [rbp-9h]
	int v158; // [rsp+148h] [rbp+77h]
	double v159; // [rsp+148h] [rbp+77h]
	double v160; // [rsp+148h] [rbp+77h]
	int v161; // [rsp+148h] [rbp+77h]
	double v162; // [rsp+150h] [rbp+7Fh]
	int v163; // [rsp+150h] [rbp+7Fh]

	v2 = *(_QWORD**)(a1 + 400);
	v3 = v2[4];
	v155 = 1;
	v5 = *(_QWORD*)(v3 + 112);
	v152 = off_140B569F0;
	v154 = v2;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0((__int64)v2);
	v6 = v2[2];
	v7 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	v2[2] += 16i64;
	v8 = sub_1400578C0((__int64)v2);
	v9 = *(_QWORD*)(v2[4] + 160i64);
	LODWORD(v6) = v8;
	v153 = v8;
	v10 = sub_14005C3C0(v9, v8);
	v11 = v2[2];
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v11, L"nBuyOrderCount", v12);
	v2[2] -= 16i64;
	v13 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v6);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v15, L"nSellOrderCount", v16);
	v2[2] -= 16i64;
	v17 = v2[4];
	v148 = off_140B569F0;
	v18 = *(_QWORD*)(v17 + 112);
	v150 = v2;
	v151 = 1;
	if (*(_QWORD*)(v17 + 120) >= v18)
		sub_14005E2C0((__int64)v2);
	v19 = v2[2];
	v20 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	v2[2] += 16i64;
	v21 = (__int64*)(a2 + 2);
	v149 = sub_1400578C0((__int64)v2);
	for (i = 0i64; i < 0xC; i += 4i64)
	{
		v23 = v2[4];
		v138 = off_140B569F0;
		v140 = v2;
		v24 = *(_QWORD*)(v23 + 112);
		v141 = 1;
		if (*(_QWORD*)(v23 + 120) >= v24)
			sub_14005E2C0((__int64)v2);
		v25 = v2[2];
		v26 = sub_14005C1B0((__int64)v2, 0, 0);
		*(_DWORD*)(v25 + 8) = 5;
		*(_QWORD*)v25 = v26;
		v2[2] += 16i64;
		v27 = sub_1400578C0((__int64)v2);
		v28 = v2[4];
		v29 = *v21;
		v30 = v27;
		v31 = *(_QWORD*)(v28 + 112);
		LODWORD(v139) = v27;
		v144 = 1i64;
		v145 = 0i64;
		if (*(_QWORD*)(v28 + 120) >= v31)
			sub_14005E2C0((__int64)v2);
		v32 = v2[5];
		if (v32 == v2[10])
			v33 = v2[15];
		else
			v33 = *(_QWORD*)(**(_QWORD**)(v32 + 8) + 24i64);
		v34 = v2[4];
		v35 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v34 + 16))(
			*(_QWORD*)(v34 + 24),
			0i64,
			0i64,
			72i64);
		v36 = (_QWORD*)v35;
		if (!v35)
			sub_140061040((__int64)v2, 4);
		*(_QWORD*)(v34 + 120) += 72i64;
		v37 = *(_BYTE*)(v2[4] + 32i64);
		*(_BYTE*)(v35 + 8) = 7;
		*(_QWORD*)(v35 + 32) = 24i64;
		*(_QWORD*)(v35 + 16) = 0i64;
		*(_QWORD*)(v35 + 24) = v33;
		*(_BYTE*)(v35 + 9) = v37 & 3;
		*(_QWORD*)v35 = **(_QWORD**)(v2[4] + 176i64);
		**(_QWORD**)(v2[4] + 176i64) = v35;
		v38 = v2[2];
		*(_QWORD*)v38 = v36;
		*(_DWORD*)(v38 + 8) = 7;
		v2[2] += 16i64;
		v39 = v144;
		v36[6] = v29;
		v36[7] = v39;
		v36[8] = v145;
		v40 = v2[4];
		v41 = sub_140062650((__int64)v2, (unsigned __int64*)"Game.Money", 0xAui64);
		v42 = v2[2];
		v146 = (unsigned int*)v41;
		v147 = 4;
		sub_14005E8E0((__int64)v2, v40 + 160, (int*)&v146, v42);
		v2[2] += 16i64;
		sub_140058BF0((__int64)v2, -2);
		sub_1400FB540((__int64)&v138);
		v2[2] -= 16i64;
		v43 = v2[2];
		v44 = *(_DWORD*)((char*)&unk_140AFC8C0 + i);
		v45 = *(_QWORD*)(v2[4] + 160i64);
		v158 = v44;
		if ((unsigned int)(v30 - 1) >= *(_DWORD*)(v45 + 56))
		{
			if ((double)v30 == 0.0)
			{
				v46 = *(_DWORD**)(v45 + 32);
			}
			else
			{
				v162 = (double)v30;
				v46 = (_DWORD*)(*(_QWORD*)(v45 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v162) + HIDWORD(v162)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
			}
			while (v46[6] != 3 || (double)v30 != *((double*)v46 + 2))
			{
				v46 = (_DWORD*)*((_QWORD*)v46 + 4);
				if (!v46)
				{
					v46 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v46 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v30 - 1));
		}
		*(_QWORD*)v43 = *(_QWORD*)v46;
		*(_DWORD*)(v43 + 8) = v46[2];
		v2[2] += 16i64;
		v47 = (unsigned __int64*)sub_14018F0E0(&v138, L"nCount")[1];
		if (v47)
		{
			v48 = -1i64;
			do
				++v48;
			while (*((_BYTE*)v47 + v48));
			if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
				sub_14005E2C0((__int64)v2);
			v49 = v2[2];
			v50 = sub_140062650((__int64)v2, v47, v48);
			*(_DWORD*)(v49 + 8) = 4;
			*(_QWORD*)v49 = v50;
			v44 = v158;
		}
		else
		{
			*(_DWORD*)(v2[2] + 8i64) = 0;
		}
		v51 = v139;
		v2[2] += 16i64;
		if (v51)
			sub_14018B900(v51, 0);
		v52 = v2[2];
		*(_DWORD*)(v52 + 8) = 3;
		*(double*)v52 = (double)v44;
		v2[2] += 16i64;
		v53 = (__int64*)sub_1400580E0((__int64)v2, -3);
		sub_14005EA50((__int64)v2, v53, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
		v2[2] -= 48i64;
		sub_1400FB1D0((__int64)&v148);
		sub_1400579E0((__int64)v2, v54, v30);
		++v21;
	}
	v55 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v153 - 1) >= *(_DWORD*)(v55 + 56))
	{
		if ((double)v153 == 0.0)
		{
			v56 = *(_DWORD**)(v55 + 32);
		}
		else
		{
			v159 = (double)v153;
			v56 = (_DWORD*)(*(_QWORD*)(v55 + 32)
				+ 40 * ((unsigned int)(LODWORD(v159) + HIDWORD(v159)) % (((1i64 << *(_BYTE*)(v55 + 11)) - 1) | 1)));
		}
		while (v56[6] != 3 || (double)v153 != *((double*)v56 + 2))
		{
			v56 = (_DWORD*)*((_QWORD*)v56 + 4);
			if (!v56)
			{
				v56 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v56 = (_DWORD*)(*(_QWORD*)(v55 + 24) + 16i64 * (v153 - 1));
	}
	v57 = v2[2];
	*(_QWORD*)v57 = *(_QWORD*)v56;
	*(_DWORD*)(v57 + 8) = v56[2];
	v2[2] += 16i64;
	v58 = (unsigned __int64*)sub_14018F0E0(&v138, L"arBuyOrderPrices")[1];
	if (v58)
	{
		v60 = -1i64;
		do
			++v60;
		while (*((_BYTE*)v58 + v60));
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v61 = v2[2];
		v62 = sub_140062650((__int64)v2, v58, v60);
		*(_DWORD*)(v61 + 8) = 4;
		*(_QWORD*)v61 = v62;
		v2[2] += 16i64;
		v59 = 0i64;
	}
	else
	{
		v59 = 0i64;
		*(_DWORD*)(v2[2] + 8i64) = 0;
		v2[2] += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v63 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v149 - 1) >= *(_DWORD*)(v63 + 56))
	{
		if ((double)v149 == 0.0)
		{
			v64 = *(_DWORD**)(v63 + 32);
		}
		else
		{
			v160 = (double)v149;
			v64 = (_DWORD*)(*(_QWORD*)(v63 + 32)
				+ 40 * ((unsigned int)(LODWORD(v160) + HIDWORD(v160)) % (((1i64 << *(_BYTE*)(v63 + 11)) - 1) | 1)));
		}
		while (v64[6] != 3 || (double)v149 != *((double*)v64 + 2))
		{
			v64 = (_DWORD*)*((_QWORD*)v64 + 4);
			if (!v64)
			{
				v64 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v64 = (_DWORD*)(*(_QWORD*)(v63 + 24) + 16i64 * (v149 - 1));
	}
	v65 = v2[2];
	*(_QWORD*)v65 = *(_QWORD*)v64;
	*(_DWORD*)(v65 + 8) = v64[2];
	v2[2] += 16i64;
	sub_14005EA50((__int64)v2, (__int64*)(v2[2] - 48i64), (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
	v2[2] -= 48i64;
	v161 = 1;
	if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
		sub_14005E2C0((__int64)v2);
	v66 = v2[2];
	v67 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v66 + 8) = 5;
	*(_QWORD*)v66 = v67;
	v2[2] += 16i64;
	v163 = sub_1400578C0((__int64)v2);
	v142 = 0i64;
	v68 = (__int64*)(a2 + 10);
	v146 = a2 + 10;
	do
	{
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v69 = v2[2];
		v70 = sub_14005C1B0((__int64)v2, 0, 0);
		*(_DWORD*)(v69 + 8) = 5;
		*(_QWORD*)v69 = v70;
		v2[2] += 16i64;
		v71 = sub_1400578C0((__int64)v2);
		v72 = v2[4];
		v73 = *v68;
		v74 = v71;
		v75 = *(_QWORD*)(v72 + 112);
		v139 = 1i64;
		v140 = 0i64;
		if (*(_QWORD*)(v72 + 120) >= v75)
			sub_14005E2C0((__int64)v2);
		v76 = v2[5];
		if (v76 == v2[10])
			v77 = v2[15];
		else
			v77 = *(_QWORD*)(**(_QWORD**)(v76 + 8) + 24i64);
		v78 = v2[4];
		v79 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v78 + 16))(
			*(_QWORD*)(v78 + 24),
			0i64,
			0i64,
			72i64);
		v80 = (_QWORD*)v79;
		if (!v79)
			sub_140061040((__int64)v2, 4);
		*(_QWORD*)(v78 + 120) += 72i64;
		v81 = *(_BYTE*)(v2[4] + 32i64);
		*(_BYTE*)(v79 + 8) = 7;
		*(_QWORD*)(v79 + 32) = 24i64;
		*(_QWORD*)(v79 + 16) = 0i64;
		*(_QWORD*)(v79 + 24) = v77;
		*(_BYTE*)(v79 + 9) = v81 & 3;
		*(_QWORD*)v79 = **(_QWORD**)(v2[4] + 176i64);
		**(_QWORD**)(v2[4] + 176i64) = v79;
		v82 = v2[2];
		*(_QWORD*)v82 = v80;
		*(_DWORD*)(v82 + 8) = 7;
		v2[2] += 16i64;
		v83 = v139;
		v80[6] = v73;
		v80[7] = v83;
		v80[8] = v140;
		v84 = v2[4];
		v85 = sub_140062650((__int64)v2, (unsigned __int64*)"Game.Money", 0xAui64);
		v86 = v2[2];
		v143 = v85;
		LODWORD(v144) = 4;
		sub_14005E8E0((__int64)v2, v84 + 160, (int*)&v143, v86);
		v2[2] += 16i64;
		sub_140058BF0((__int64)v2, -2);
		v87 = v2[2];
		v88 = *(_QWORD*)(v2[4] + 160i64);
		v89 = v74 - 1;
		v90 = (v87 - v2[3]) >> 4;
		if ((unsigned int)(v74 - 1) >= *(_DWORD*)(v88 + 56))
		{
			if ((double)v74 == 0.0)
			{
				v91 = *(_DWORD**)(v88 + 32);
			}
			else
			{
				v134 = (double)v74;
				v91 = (_DWORD*)(*(_QWORD*)(v88 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v134) + HIDWORD(v134)) % (((1i64 << *(_BYTE*)(v88 + 11)) - 1) | 1)));
			}
			while (v91[6] != 3 || (double)v74 != *((double*)v91 + 2))
			{
				v91 = (_DWORD*)*((_QWORD*)v91 + 4);
				if (!v91)
				{
					v91 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v91 = (_DWORD*)(*(_QWORD*)(v88 + 24) + 16i64 * (v74 - 1));
		}
		*(_QWORD*)v87 = *(_QWORD*)v91;
		*(_DWORD*)(v87 + 8) = v91[2];
		v2[2] += 16i64;
		v92 = (unsigned __int64*)sub_14018F0E0(&v138, L"monPrice")[1];
		if (v92)
		{
			v93 = -1i64;
			do
				++v93;
			while (*((_BYTE*)v92 + v93));
			if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
				sub_14005E2C0((__int64)v2);
			v94 = v2[2];
			v95 = sub_140062650((__int64)v2, v92, v93);
			*(_DWORD*)(v94 + 8) = 4;
			*(_QWORD*)v94 = v95;
			v89 = v74 - 1;
		}
		else
		{
			*(_DWORD*)(v2[2] + 8i64) = 0;
		}
		v96 = v139;
		v2[2] += 16i64;
		if (v96)
			sub_14018B900(v96, 0);
		v97 = sub_1400580E0((__int64)v2, v90);
		v98 = v2[2];
		*(_QWORD*)v98 = *(_QWORD*)v97;
		*(_DWORD*)(v98 + 8) = v97[2];
		v99 = v2[2] + 16i64;
		v2[2] = v99;
		sub_14005EA50((__int64)v2, (__int64*)(v99 - 48), (int*)(v99 - 32), (unsigned int*)(v99 - 16));
		v100 = v142;
		v101 = v2[2] - 64i64;
		v2[2] = v101;
		v102 = *(_DWORD*)((char*)&unk_140AFC8C0 + v100);
		v103 = *(_QWORD*)(v2[4] + 160i64);
		if (v89 >= *(_DWORD*)(v103 + 56))
		{
			if ((double)v74 == 0.0)
			{
				v104 = *(_DWORD**)(v103 + 32);
			}
			else
			{
				v135 = (double)v74;
				v104 = (_DWORD*)(*(_QWORD*)(v103 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v135) + HIDWORD(v135)) % (((1i64 << *(_BYTE*)(v103 + 11)) - 1) | 1)));
			}
			while (v104[6] != 3 || (double)v74 != *((double*)v104 + 2))
			{
				v104 = (_DWORD*)*((_QWORD*)v104 + 4);
				if (!v104)
				{
					v104 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v104 = (_DWORD*)(*(_QWORD*)(v103 + 24) + 16i64 * (v74 - 1));
		}
		*(_QWORD*)v101 = *(_QWORD*)v104;
		*(_DWORD*)(v101 + 8) = v104[2];
		v2[2] += 16i64;
		v105 = (unsigned __int64*)sub_14018F0E0(&v138, L"nCount")[1];
		if (v105)
		{
			v106 = -1i64;
			do
				++v106;
			while (*((_BYTE*)v105 + v106));
			if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
				sub_14005E2C0((__int64)v2);
			v107 = v2[2];
			v108 = sub_140062650((__int64)v2, v105, v106);
			v100 = v142;
			*(_DWORD*)(v107 + 8) = 4;
			*(_QWORD*)v107 = v108;
			v89 = v74 - 1;
		}
		else
		{
			*(_DWORD*)(v2[2] + 8i64) = 0;
		}
		v109 = v139;
		v2[2] += 16i64;
		if (v109)
			sub_14018B900(v109, 0);
		v110 = v2[2];
		*(_DWORD*)(v110 + 8) = 3;
		*(double*)v110 = (double)v102;
		v2[2] += 16i64;
		v111 = (__int64*)sub_1400580E0((__int64)v2, -3);
		sub_14005EA50((__int64)v2, v111, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
		v112 = v2[2] - 48i64;
		v2[2] = v112;
		v113 = *(_QWORD*)(v2[4] + 160i64);
		if ((unsigned int)(v163 - 1) >= *(_DWORD*)(v113 + 56))
		{
			if ((double)v163 == 0.0)
			{
				v114 = *(_DWORD**)(v113 + 32);
			}
			else
			{
				v136 = (double)v163;
				v114 = (_DWORD*)(*(_QWORD*)(v113 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v136) + HIDWORD(v136)) % (((1i64 << *(_BYTE*)(v113 + 11)) - 1) | 1)));
			}
			while (v114[6] != 3 || (double)v163 != *((double*)v114 + 2))
			{
				v114 = (_DWORD*)*((_QWORD*)v114 + 4);
				if (!v114)
				{
					v114 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v114 = (_DWORD*)(*(_QWORD*)(v113 + 24) + 16i64 * (v163 - 1));
		}
		*(_QWORD*)v112 = *(_QWORD*)v114;
		*(_DWORD*)(v112 + 8) = v114[2];
		v2[2] += 16i64;
		v115 = v2[2];
		*(_DWORD*)(v115 + 8) = 3;
		v116 = v161++;
		*(double*)v115 = (double)v116;
		v117 = v2[4];
		v118 = v2[2] + 16i64;
		v2[2] = v118;
		v119 = *(_QWORD*)(v117 + 160);
		if (v89 >= *(_DWORD*)(v119 + 56))
		{
			if ((double)v74 == 0.0)
			{
				v120 = *(_DWORD**)(v119 + 32);
			}
			else
			{
				v137 = (double)v74;
				v120 = (_DWORD*)(*(_QWORD*)(v119 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v137) + HIDWORD(v137)) % (((1i64 << *(_BYTE*)(v119 + 11)) - 1) | 1)));
			}
			while (v120[6] != 3 || (double)v74 != *((double*)v120 + 2))
			{
				v120 = (_DWORD*)*((_QWORD*)v120 + 4);
				if (!v120)
				{
					v120 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v120 = (_DWORD*)(*(_QWORD*)(v119 + 24) + 16i64 * (v74 - 1));
		}
		*(_QWORD*)v118 = *(_QWORD*)v120;
		*(_DWORD*)(v118 + 8) = v120[2];
		v121 = v2[2] + 16i64;
		v2[2] = v121;
		sub_14005EA50((__int64)v2, (__int64*)(v121 - 48), (int*)(v121 - 32), (unsigned int*)(v121 - 16));
		v2[2] -= 48i64;
		sub_1400579E0((__int64)v2, v122, v74);
		v68 = (__int64*)(v146 + 2);
		v142 = v100 + 4;
		v146 += 2;
	} while ((unsigned __int64)(v100 + 4) < 0xC);
	sub_1400FB2A0((__int64)&v152, (__int64)L"arSellOrderPrices", v163);
	v123 = v2[4];
	v138 = off_140B569F0;
	v124 = *(_QWORD*)(v123 + 112);
	v125 = v2;
	v140 = v2;
	v141 = 1;
	if (*(_QWORD*)(v123 + 120) >= v124)
		sub_14005E2C0((__int64)v2);
	v126 = v2[2];
	v127 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v126 + 8) = 5;
	*(_QWORD*)v126 = v127;
	v2[2] += 16i64;
	v128 = sub_1400578C0((__int64)v2);
	LODWORD(v139) = v128;
	if (a2[16])
	{
		v129 = 0i64;
		do
		{
			v130 = (_QWORD*)(v129 + *((_QWORD*)a2 + 9));
			if (v130 && (unsigned int)sub_140433640(v125, v130))
			{
				sub_1400FB470((__int64)&v138);
				v125 = v140;
				v140[2] -= 16i64;
			}
			++v59;
			v129 += 56i64;
		} while (v59 < a2[16]);
		v128 = v139;
	}
	v131 = v153;
	sub_1400EA3E0(a1, "CommodityInfoResults", byte_1409EC6DC, *a2, v153, v128);
	if (v125)
		sub_1400579E0((__int64)v125, v132, v128);
	sub_1400579E0((__int64)v2, v132, v163);
	if (v150)
		sub_1400579E0((__int64)v150, v133, v149);
	sub_1400579E0((__int64)v2, v133, v131);
}
// 14042A871: variable 'v12' is possibly undefined
// 14042A8A2: variable 'v14' is possibly undefined
// 14042A8B4: variable 'v15' is possibly undefined
// 14042A8B4: variable 'v16' is possibly undefined
// 14042AC3C: variable 'v54' is possibly undefined
// 14042B48C: variable 'v122' is possibly undefined
// 14042B59F: variable 'v132' is possibly undefined
// 14042B5BC: variable 'v133' is possibly undefined
// 1409EC6DC: using guessed type _BYTE byte_1409EC6DC[4];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B00E20: using guessed type wchar_t aNsellordercoun[16];
// 140B00E40: using guessed type wchar_t aNbuyordercount[15];
// 140B00E60: using guessed type wchar_t aMonprice_0[9];
// 140B00E78: using guessed type wchar_t aArbuyorderpric[17];
// 140B00EA0: using guessed type wchar_t aNcount_8[7];
// 140B00ED8: using guessed type wchar_t aArsellorderpri[18];
// 140B00F00: using guessed type wchar_t aNcount_9[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

