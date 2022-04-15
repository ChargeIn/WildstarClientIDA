//----- (0000000140706140) ----------------------------------------------------
void __fastcall sub_140706140(__int64 a1, __int64 a2, unsigned int** a3, int a4)
{
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r11d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	__int64 v16; // rcx
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	unsigned __int16* v20; // r11
	__int64 v21; // rcx
	unsigned int v22; // edx
	int v23; // edi
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	__int64 v27; // rbx
	unsigned __int64 v28; // r12
	int v29; // r15d
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	_DWORD* v35; // rcx
	__int64* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	int v40; // r11d
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	int v44; // r11d
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	int v48; // r11d
	_QWORD* v49; // rax
	__int64 v50; // r10
	__int64 v51; // rdx
	__int64 v52; // rbx
	unsigned __int64* v53; // rdx
	unsigned __int64 v54; // r8
	_DWORD* v55; // rax
	__int64* v56; // rax
	unsigned int v57; // edx
	__int64 v58; // rcx
	__int64 v59; // rcx
	_QWORD* v60; // rdi
	__int64 v61; // rax
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // r9
	unsigned int v65; // edx
	__int64 v66; // rcx
	_QWORD* v67; // rdi
	_QWORD* v68; // rax
	__int64 v69; // rbx
	__int64 v70; // rax
	__int64 v71; // r9
	int v72; // edi
	_QWORD* v73; // rax
	__int64 v74; // r10
	__int64 v75; // rdx
	__int64 v76; // rbx
	unsigned __int64* v77; // rdx
	unsigned __int64 v78; // r8
	_DWORD* v79; // rcx
	__int64* v80; // rax
	_QWORD* v81; // rax
	__int64 v82; // r10
	__int64 v83; // rdx
	__int64 v84; // rbx
	unsigned __int64* v85; // rdx
	unsigned __int64 v86; // r8
	_DWORD* v87; // rax
	__int64* v88; // rax
	float* v89; // rdi
	__int64 v90; // rbx
	__int64 v91; // rax
	int v92; // eax
	float v93; // xmm6_4
	int v94; // ebx
	_QWORD* v95; // rax
	__int64 v96; // rdx
	unsigned __int64* v97; // rdx
	unsigned __int64 v98; // r8
	__int64 v99; // rax
	__int64* v100; // rax
	float v101; // xmm6_4
	_QWORD* v102; // rax
	__int64 v103; // r10
	unsigned __int64* v104; // rdx
	unsigned __int64 v105; // r8
	__int64 v106; // rax
	__int64* v107; // rax
	float v108; // xmm6_4
	_QWORD* v109; // rax
	__int64 v110; // r10
	unsigned __int64* v111; // rdx
	__int64 v112; // rax
	__int64* v113; // rax
	unsigned int v114; // r12d
	__m128 v115; // xmm3
	__m128 v116; // xmm2
	unsigned int v117; // ecx
	__int64 v118; // rax
	unsigned int v119; // ebx
	__int64 v120; // rax
	__int64 v121; // rcx
	__int64 v122; // rdx
	__int64(__fastcall * **v123)(_QWORD); // rax
	_QWORD* v124; // rax
	__int64 v125; // r10
	__int64 v126; // rdx
	__int64 v127; // rdx
	__m128 v128; // [rsp+40h] [rbp-49h] BYREF
	__int64 v129; // [rsp+50h] [rbp-39h]
	__int128 v130; // [rsp+60h] [rbp-29h] BYREF
	__int64 v131; // [rsp+70h] [rbp-19h]
	__int64 v132; // [rsp+78h] [rbp-11h] BYREF
	__int64 v133; // [rsp+80h] [rbp-9h]
	__int64 v134; // [rsp+88h] [rbp-1h]
	int v135; // [rsp+F0h] [rbp+67h]
	unsigned __int64 v136; // [rsp+F8h] [rbp+6Fh] BYREF
	unsigned int v137; // [rsp+108h] [rbp+7Fh]

	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"idNode", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v14, L"eType", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_14034BDD0(v16, (*a3)[1]);
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v19, L"strName", v20);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = **a3;
	if (a4)
	{
		v23 = sub_1404AD9B0(qword_140C659D0, v22);
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v26 = *(_QWORD*)(v25 + 16);
		*(_QWORD*)v26 = *v24;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v25 + 16) += 16i64;
		v27 = *(_QWORD*)(a2 + 16);
		v28 = -1i64;
		v29 = 0;
		v30 = (unsigned __int64*)sub_14018F0E0(&v132, L"bUnlocked")[1];
		if (!v30)
		{
			*(_DWORD*)(*(_QWORD*)(v27 + 16) + 8i64) = 0;
			*(_QWORD*)(v27 + 16) += 16i64;
			goto LABEL_12;
		}
		v31 = -1i64;
		do
			++v31;
		while (*((_BYTE*)v30 + v31));
	}
	else
	{
		v23 = sub_1404ADA70(v21, v22);
		v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v34 = *(_QWORD*)(v33 + 16);
		*(_QWORD*)v34 = *v32;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v32 + 2);
		*(_QWORD*)(v33 + 16) += 16i64;
		v27 = *(_QWORD*)(a2 + 16);
		v28 = -1i64;
		v29 = 0;
		v30 = (unsigned __int64*)sub_14018F0E0(&v132, L"bUnlocked")[1];
		if (!v30)
		{
			*(_DWORD*)(*(_QWORD*)(v27 + 16) + 8i64) = 0;
			*(_QWORD*)(v27 + 16) += 16i64;
			goto LABEL_12;
		}
		v31 = -1i64;
		do
			++v31;
		while (*((_BYTE*)v30 + v31));
	}
	sub_140058710(v27, v30, v31);
LABEL_12:
	if (v133)
		sub_14018B900(v133, 0);
	v35 = *(_DWORD**)(v27 + 16);
	*v35 = v23 != 0;
	v35[2] = 1;
	*(_QWORD*)(v27 + 16) += 16i64;
	v36 = (__int64*)sub_1400580E0(v27, -3);
	sub_14005EA50(v27, v36, (int*)(*(_QWORD*)(v27 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v27 + 16) - 16i64));
	*(_QWORD*)(v27 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v39 = *(_QWORD*)(v38 + 16);
	*(_QWORD*)v39 = *v37;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
	*(_QWORD*)(v38 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v39, L"nRecommendedMinLevel", v40);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v43 = *(_QWORD*)(v42 + 16);
	*(_QWORD*)v43 = *v41;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(v42 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v43, L"nRecommendedMaxLevel", v44);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if ((*a3)[8])
	{
		v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v47 = *(_QWORD*)(v46 + 16);
		*(_QWORD*)v47 = *v45;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v45 + 2);
		*(_QWORD*)(v46 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v47, L"nAutoUnlockLevel", v48);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if ((*a3)[4] != 1)
	{
		v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v51 = *(_QWORD*)(v50 + 16);
		*(_QWORD*)v51 = *v49;
		*(_DWORD*)(v51 + 8) = *((_DWORD*)v49 + 2);
		*(_QWORD*)(v50 + 16) += 16i64;
		v52 = *(_QWORD*)(a2 + 16);
		v53 = (unsigned __int64*)sub_14018F0E0(&v132, L"bRapidTransportAllowed")[1];
		if (v53)
		{
			v54 = -1i64;
			do
				++v54;
			while (*((_BYTE*)v53 + v54));
			sub_140058710(v52, v53, v54);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v52 + 16) + 8i64) = 0;
			*(_QWORD*)(v52 + 16) += 16i64;
		}
		if (v133)
			sub_14018B900(v133, 0);
		v55 = *(_DWORD**)(v52 + 16);
		*v55 = 1;
		v55[2] = 1;
		*(_QWORD*)(v52 + 16) += 16i64;
		v56 = (__int64*)sub_1400580E0(v52, -3);
		sub_14005EA50(v52, v56, (int*)(*(_QWORD*)(v52 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v52 + 16) - 16i64));
		*(_QWORD*)(v52 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v57 = **a3;
		*(_QWORD*)&v130 = 0i64;
		*((_QWORD*)&v130 + 1) = 1i64;
		v131 = 0i64;
		if ((unsigned int)sub_1404ADC50(v58, v57, &v130, 0))
		{
			v60 = *(_QWORD**)(a2 + 16);
			v61 = sub_140059170(v60, 0x18ui64);
			*(_OWORD*)v61 = v130;
			*(_QWORD*)(v61 + 16) = v131;
			v62 = v60[4];
			v63 = sub_140062650((__int64)v60, (unsigned __int64*)"Game.Money", 0xAui64);
			v64 = v60[2];
			v128.m128_u64[0] = v63;
			v128.m128_i32[2] = 4;
			sub_14005E8E0((__int64)v60, v62 + 160, (int*)&v128, v64);
			v60[2] += 16i64;
			sub_140058BF0((__int64)v60, -2);
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v65 = **a3;
		v132 = 0i64;
		v133 = 1i64;
		v134 = 0i64;
		v128.m128_u64[0] = 0i64;
		v128.m128_u64[1] = 1i64;
		v129 = 0i64;
		if (sub_1404ADE10(v59, v65, &v132, &v128) && v130 == *(_OWORD*)&v128 && v131 == v129)
		{
			v67 = *(_QWORD**)(a2 + 16);
			v68 = (_QWORD*)sub_140059170(v67, 0x18ui64);
			*v68 = v132;
			v68[1] = v133;
			v68[2] = v134;
			v69 = v67[4];
			v70 = sub_140062650((__int64)v67, (unsigned __int64*)"Game.Money", 0xAui64);
			v71 = v67[2];
			v128.m128_u64[0] = v70;
			v128.m128_i32[2] = 4;
			sub_14005E8E0((__int64)v67, v69 + 160, (int*)&v128, v71);
			v67[2] += 16i64;
			sub_140058BF0((__int64)v67, -2);
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v72 = sub_1404ADFE0(v66, **a3);
		v73 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v75 = *(_QWORD*)(v74 + 16);
		*(_QWORD*)v75 = *v73;
		*(_DWORD*)(v75 + 8) = *((_DWORD*)v73 + 2);
		*(_QWORD*)(v74 + 16) += 16i64;
		v76 = *(_QWORD*)(a2 + 16);
		v77 = (unsigned __int64*)sub_14018F0E0(&v132, L"bTransportAllowed")[1];
		if (v77)
		{
			v78 = -1i64;
			do
				++v78;
			while (*((_BYTE*)v77 + v78));
			sub_140058710(v76, v77, v78);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v76 + 16) + 8i64) = 0;
			*(_QWORD*)(v76 + 16) += 16i64;
		}
		if (v133)
			sub_14018B900(v133, 0);
		v79 = *(_DWORD**)(v76 + 16);
		v79[2] = 1;
		*v79 = v72 != 0;
		*(_QWORD*)(v76 + 16) += 16i64;
		v80 = (__int64*)sub_1400580E0(v76, -3);
		sub_14005EA50(v76, v80, (int*)(*(_QWORD*)(v76 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v76 + 16) - 16i64));
		*(_QWORD*)(v76 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if ((*a3)[4] != 2)
	{
		v81 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v83 = *(_QWORD*)(v82 + 16);
		*(_QWORD*)v83 = *v81;
		*(_DWORD*)(v83 + 8) = *((_DWORD*)v81 + 2);
		*(_QWORD*)(v82 + 16) += 16i64;
		v84 = *(_QWORD*)(a2 + 16);
		v85 = (unsigned __int64*)sub_14018F0E0(&v132, L"bTaxiAllowed")[1];
		if (v85)
		{
			v86 = -1i64;
			do
				++v86;
			while (*((_BYTE*)v85 + v86));
			sub_140058710(v84, v85, v86);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v84 + 16) + 8i64) = 0;
			*(_QWORD*)(v84 + 16) += 16i64;
		}
		if (v133)
			sub_14018B900(v133, 0);
		v87 = *(_DWORD**)(v84 + 16);
		*v87 = 1;
		v87[2] = 1;
		*(_QWORD*)(v84 + 16) += 16i64;
		v88 = (__int64*)sub_1400580E0(v84, -3);
		sub_14005EA50(v84, v88, (int*)(*(_QWORD*)(v84 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v84 + 16) - 16i64));
		*(_QWORD*)(v84 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v89 = (float*)sub_14024B980((*a3)[6]);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v90 = *(_QWORD*)(a1 + 16);
	v91 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v90 + 8) = 5;
	*(_QWORD*)v90 = v91;
	*(_QWORD*)(a1 + 16) += 16i64;
	v92 = sub_1400578C0(a1);
	v93 = v89[3];
	v94 = v92;
	v135 = v92;
	v95 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v92);
	v96 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v96 = *v95;
	*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v97 = (unsigned __int64*)sub_14018F0E0(&v132, word_1409F87E4)[1];
	if (v97)
	{
		v98 = -1i64;
		do
			++v98;
		while (*((_BYTE*)v97 + v98));
		sub_140058710(a1, v97, v98);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v133)
		sub_14018B900(v133, 0);
	v99 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v99 + 8) = 3;
	*(double*)v99 = v93;
	*(_QWORD*)(a1 + 16) += 16i64;
	v100 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v100, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v101 = v89[4];
	v102 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v94);
	*(_QWORD*)v103 = *v102;
	*(_DWORD*)(v103 + 8) = *((_DWORD*)v102 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v104 = (unsigned __int64*)sub_14018F0E0(&v132, word_1409F875C)[1];
	if (v104)
	{
		v105 = -1i64;
		do
			++v105;
		while (*((_BYTE*)v104 + v105));
		sub_140058710(a1, v104, v105);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v133)
		sub_14018B900(v133, 0);
	v106 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v106 + 8) = 3;
	*(double*)v106 = v101;
	*(_QWORD*)(a1 + 16) += 16i64;
	v107 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v107, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v108 = v89[5];
	v109 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v94);
	*(_QWORD*)v110 = *v109;
	*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v111 = (unsigned __int64*)sub_14018F0E0(&v132, word_1409F8734)[1];
	if (v111)
	{
		do
			++v28;
		while (*((_BYTE*)v111 + v28));
		sub_140058710(a1, v111, v28);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v133)
		sub_14018B900(v133, 0);
	v112 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v112 + 8) = 3;
	*(double*)v112 = v108;
	*(_QWORD*)(a1 + 16) += 16i64;
	v113 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v113, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	sub_1400FB2A0(a2, (__int64)L"tLocation", v94);
	v114 = qword_140C77760;
	v115 = _mm_unpacklo_ps((__m128) * ((unsigned int*)v89 + 3), (__m128) * ((unsigned int*)v89 + 5));
	v116 = _mm_unpacklo_ps((__m128) * ((unsigned int*)v89 + 4), (__m128)0i64);
	v137 = HIDWORD(qword_140C77760);
	v117 = (*a3)[6];
	v128 = _mm_unpacklo_ps(v115, v116);
	v118 = sub_14024B980(v117);
	v119 = 0;
	if (v118)
		v119 = *(_DWORD*)(v118 + 44);
	v120 = sub_14024B980((*a3)[6]);
	v122 = 0i64;
	if (v120)
		v122 = *(unsigned int*)(v120 + 40);
	if (qword_140C658F8)
	{
		v136 = __PAIR64__(v137, v114);
		v123 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v121, v122, v119, v128.m128_f32, 0i64, 1, (__int64*)&v136);
		if (v123)
			v29 = (**v123)(v123);
	}
	v124 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v126 = *(_QWORD*)(v125 + 16);
	*(_QWORD*)v126 = *v124;
	*(_DWORD*)(v126 + 8) = *((_DWORD*)v124 + 2);
	*(_QWORD*)(v125 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v126, L"idMapZone", v29);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1400579E0(a1, v127, v135);
}
// 14070618D: variable 'v9' is possibly undefined
// 1407061B0: variable 'v11' is possibly undefined
// 1407061DE: variable 'v13' is possibly undefined
// 140706201: variable 'v15' is possibly undefined
// 140706216: variable 'v16' is possibly undefined
// 140706236: variable 'v18' is possibly undefined
// 140706259: variable 'v20' is possibly undefined
// 140706297: variable 'v25' is possibly undefined
// 1407062F0: variable 'v21' is possibly undefined
// 14070630F: variable 'v33' is possibly undefined
// 1407063ED: variable 'v38' is possibly undefined
// 140706410: variable 'v40' is possibly undefined
// 14070643E: variable 'v42' is possibly undefined
// 140706461: variable 'v44' is possibly undefined
// 140706494: variable 'v46' is possibly undefined
// 1407064B7: variable 'v48' is possibly undefined
// 1407064EB: variable 'v50' is possibly undefined
// 1407065BB: variable 'v58' is possibly undefined
// 14070668B: variable 'v59' is possibly undefined
// 140706769: variable 'v66' is possibly undefined
// 140706788: variable 'v74' is possibly undefined
// 140706864: variable 'v82' is possibly undefined
// 140706A4E: variable 'v103' is possibly undefined
// 140706B0C: variable 'v110' is possibly undefined
// 140706C49: variable 'v121' is possibly undefined
// 140706C76: variable 'v125' is possibly undefined
// 140706CD0: variable 'v127' is possibly undefined
// 1409F8734: using guessed type unsigned __int16 word_1409F8734[2];
// 1409F875C: using guessed type unsigned __int16 word_1409F875C[2];
// 1409F87E4: using guessed type unsigned __int16 word_1409F87E4[2];
// 140B41DA0: using guessed type wchar_t aStrname_93[8];
// 140B41DB0: using guessed type wchar_t aEtype_44[6];
// 140B41DC0: using guessed type wchar_t aIdnode_0[7];
// 140B41EC8: using guessed type wchar_t aIdmapzone[10];
// 140B41EE0: using guessed type wchar_t aTlocation_1[10];
// 140B41EF8: using guessed type wchar_t aBtaxiallowed[13];
// 140B41F18: using guessed type wchar_t aBtransportallo[18];
// 140B41FA8: using guessed type wchar_t aBrapidtranspor[23];
// 140B41FD8: using guessed type wchar_t aNautounlocklev[17];
// 140B42000: using guessed type wchar_t aNrecommendedma_0[21];
// 140B42030: using guessed type wchar_t aNrecommendedmi_0[21];
// 140B42060: using guessed type wchar_t aBunlocked_5[10];
// 140B42078: using guessed type wchar_t aBunlocked_4[10];
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 140C77760: using guessed type __int64 qword_140C77760;

