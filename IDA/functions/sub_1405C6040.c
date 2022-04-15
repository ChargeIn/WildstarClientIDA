//----- (00000001405C6040) ----------------------------------------------------
__int64 __fastcall sub_1405C6040(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r10
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	unsigned __int16* v13; // r11
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	unsigned __int16* v17; // r11
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	unsigned __int16* v21; // r11
	int v22; // r15d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // rsi
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // rbx
	unsigned __int64 v29; // r8
	_DWORD* v30; // rcx
	__int64* v31; // rax
	float v32; // xmm6_4
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	__int64 v36; // rsi
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // rax
	__int64* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	int v44; // r11d
	int v45; // r15d
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	__int64 v49; // rsi
	unsigned __int64* v50; // rdx
	unsigned __int64 v51; // r8
	_DWORD* v52; // rcx
	__int64* v53; // rax
	int v54; // r15d
	_QWORD* v55; // rax
	__int64 v56; // r10
	__int64 v57; // rdx
	__int64 v58; // rsi
	unsigned __int64* v59; // rdx
	unsigned __int64 v60; // r8
	_DWORD* v61; // rcx
	__int64* v62; // rax
	int v63; // r15d
	_QWORD* v64; // rax
	__int64 v65; // r10
	__int64 v66; // rdx
	__int64 v67; // rsi
	unsigned __int64* v68; // rdx
	unsigned __int64 v69; // r8
	_DWORD* v70; // rcx
	__int64* v71; // rax
	int v72; // r15d
	_QWORD* v73; // rax
	__int64 v74; // r10
	__int64 v75; // rdx
	__int64 v76; // rsi
	unsigned __int64* v77; // rdx
	unsigned __int64 v78; // r8
	_DWORD* v79; // rcx
	__int64* v80; // rax
	int v81; // r15d
	_QWORD* v82; // rax
	__int64 v83; // r10
	__int64 v84; // rdx
	__int64 v85; // rsi
	unsigned __int64* v86; // rdx
	unsigned __int64 v87; // r8
	_DWORD* v88; // rcx
	__int64* v89; // rax
	int v90; // r15d
	_QWORD* v91; // rax
	__int64 v92; // r10
	__int64 v93; // rdx
	__int64 v94; // rsi
	unsigned __int64* v95; // rdx
	unsigned __int64 v96; // r8
	_DWORD* v97; // rcx
	__int64* v98; // rax
	int v99; // r15d
	_QWORD* v100; // rax
	__int64 v101; // r10
	__int64 v102; // rdx
	__int64 v103; // rsi
	unsigned __int64* v104; // rdx
	unsigned __int64 v105; // r8
	_DWORD* v106; // rcx
	__int64* v107; // rax
	int v108; // r15d
	_QWORD* v109; // rax
	__int64 v110; // r10
	__int64 v111; // rdx
	__int64 v112; // rsi
	unsigned __int64* v113; // rdx
	unsigned __int64 v114; // r8
	_DWORD* v115; // rcx
	__int64* v116; // rax
	float v117; // xmm6_4
	_QWORD* v118; // rax
	__int64 v119; // r10
	__int64 v120; // rdx
	__int64 v121; // rsi
	unsigned __int64* v122; // rdx
	__int64 v123; // rax
	__int64* v124; // rax
	_QWORD* v125; // rax
	__int64 v126; // r10
	__int64 v127; // rdx
	int v128; // r11d
	_QWORD* v129; // rax
	__int64 v130; // r10
	__int64 v131; // rdx
	int v132; // r11d
	_QWORD* v133; // rax
	__int64 v134; // r10
	__int64 v135; // rdx
	int v136; // r11d
	__int64 v138; // [rsp+20h] [rbp-48h] BYREF
	__int64 v139; // [rsp+28h] [rbp-40h]

	*(_QWORD*)(a2 + 16) = a3;
	*(_DWORD*)(a2 + 24) = 1;
	*(_DWORD*)(a2 + 8) = -2;
	*(_QWORD*)a2 = off_140B569F0;
	if (*(_QWORD*)(a3[4] + 120i64) >= *(_QWORD*)(a3[4] + 112i64))
		sub_14005E2C0((__int64)a3);
	v6 = a3[2];
	v7 = sub_14005C1B0((__int64)a3, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a3[2] += 16i64;
	v8 = sub_1400578C0((__int64)a3);
	v9 = *(_QWORD*)(a2 + 16);
	*(_DWORD*)(a2 + 8) = v8;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v8);
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v12, L"sprite", v13);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v16, L"textString", v17);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v20, L"countString", v21);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = *(_DWORD*)(a1 + 128);
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	v26 = *(_QWORD*)(a2 + 16);
	v27 = (unsigned __int64*)sub_14018F0E0(&v138, L"globalCooldown")[1];
	v28 = -1i64;
	if (v27)
	{
		v29 = -1i64;
		do
			++v29;
		while (*((_BYTE*)v27 + v29));
		sub_140058710(v26, v27, v29);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v26 + 16) + 8i64) = 0;
		*(_QWORD*)(v26 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v30 = *(_DWORD**)(v26 + 16);
	v30[2] = 1;
	*v30 = v22 != 0;
	*(_QWORD*)(v26 + 16) += 16i64;
	v31 = (__int64*)sub_1400580E0(v26, -3);
	sub_14005EA50(v26, v31, (int*)(*(_QWORD*)(v26 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v26 + 16) - 16i64));
	*(_QWORD*)(v26 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v32 = *(float*)(a1 + 132);
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v35 = *(_QWORD*)(v34 + 16);
	*(_QWORD*)v35 = *v33;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(v34 + 16) += 16i64;
	v36 = *(_QWORD*)(a2 + 16);
	v37 = (unsigned __int64*)sub_14018F0E0(&v138, L"cooldownPercent")[1];
	if (v37)
	{
		v38 = -1i64;
		do
			++v38;
		while (*((_BYTE*)v37 + v38));
		sub_140058710(v36, v37, v38);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v36 + 16) + 8i64) = 0;
		*(_QWORD*)(v36 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v39 = *(_QWORD*)(v36 + 16);
	*(_DWORD*)(v39 + 8) = 3;
	*(double*)v39 = v32;
	*(_QWORD*)(v36 + 16) += 16i64;
	v40 = (__int64*)sub_1400580E0(v36, -3);
	sub_14005EA50(v36, v40, (int*)(*(_QWORD*)(v36 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v36 + 16) - 16i64));
	*(_QWORD*)(v36 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v43 = *(_QWORD*)(v42 + 16);
	*(_QWORD*)v43 = *v41;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(v42 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v43, L"cooldownTime", v44);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v45 = *(_DWORD*)(a1 + 144);
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v48 = *(_QWORD*)(v47 + 16);
	*(_QWORD*)v48 = *v46;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v47 + 16) += 16i64;
	v49 = *(_QWORD*)(a2 + 16);
	v50 = (unsigned __int64*)sub_14018F0E0(&v138, L"casting")[1];
	if (v50)
	{
		v51 = -1i64;
		do
			++v51;
		while (*((_BYTE*)v50 + v51));
		sub_140058710(v49, v50, v51);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v49 + 16) + 8i64) = 0;
		*(_QWORD*)(v49 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v52 = *(_DWORD**)(v49 + 16);
	v52[2] = 1;
	*v52 = v45 != 0;
	*(_QWORD*)(v49 + 16) += 16i64;
	v53 = (__int64*)sub_1400580E0(v49, -3);
	sub_14005EA50(v49, v53, (int*)(*(_QWORD*)(v49 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v49 + 16) - 16i64));
	*(_QWORD*)(v49 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v54 = *(_DWORD*)(a1 + 148);
	v55 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v57 = *(_QWORD*)(v56 + 16);
	*(_QWORD*)v57 = *v55;
	*(_DWORD*)(v57 + 8) = *((_DWORD*)v55 + 2);
	*(_QWORD*)(v56 + 16) += 16i64;
	v58 = *(_QWORD*)(a2 + 16);
	v59 = (unsigned __int64*)sub_14018F0E0(&v138, L"radarSweep")[1];
	if (v59)
	{
		v60 = -1i64;
		do
			++v60;
		while (*((_BYTE*)v59 + v60));
		sub_140058710(v58, v59, v60);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v58 + 16) + 8i64) = 0;
		*(_QWORD*)(v58 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v61 = *(_DWORD**)(v58 + 16);
	v61[2] = 1;
	*v61 = v54 != 0;
	*(_QWORD*)(v58 + 16) += 16i64;
	v62 = (__int64*)sub_1400580E0(v58, -3);
	sub_14005EA50(v58, v62, (int*)(*(_QWORD*)(v58 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v58 + 16) - 16i64));
	*(_QWORD*)(v58 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v63 = *(_DWORD*)(a1 + 152);
	v64 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v66 = *(_QWORD*)(v65 + 16);
	*(_QWORD*)v66 = *v64;
	*(_DWORD*)(v66 + 8) = *((_DWORD*)v64 + 2);
	*(_QWORD*)(v65 + 16) += 16i64;
	v67 = *(_QWORD*)(a2 + 16);
	v68 = (unsigned __int64*)sub_14018F0E0(&v138, L"popIcon")[1];
	if (v68)
	{
		v69 = -1i64;
		do
			++v69;
		while (*((_BYTE*)v68 + v69));
		sub_140058710(v67, v68, v69);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v67 + 16) + 8i64) = 0;
		*(_QWORD*)(v67 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v70 = *(_DWORD**)(v67 + 16);
	v70[2] = 1;
	*v70 = v63 != 0;
	*(_QWORD*)(v67 + 16) += 16i64;
	v71 = (__int64*)sub_1400580E0(v67, -3);
	sub_14005EA50(v67, v71, (int*)(*(_QWORD*)(v67 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v67 + 16) - 16i64));
	*(_QWORD*)(v67 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v72 = *(_DWORD*)(a1 + 156);
	v73 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v75 = *(_QWORD*)(v74 + 16);
	*(_QWORD*)v75 = *v73;
	*(_DWORD*)(v75 + 8) = *((_DWORD*)v73 + 2);
	*(_QWORD*)(v74 + 16) += 16i64;
	v76 = *(_QWORD*)(a2 + 16);
	v77 = (unsigned __int64*)sub_14018F0E0(&v138, L"readyBlingSprite")[1];
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
	if (v139)
		sub_14018B900(v139, 0);
	v79 = *(_DWORD**)(v76 + 16);
	v79[2] = 1;
	*v79 = v72 != 0;
	*(_QWORD*)(v76 + 16) += 16i64;
	v80 = (__int64*)sub_1400580E0(v76, -3);
	sub_14005EA50(v76, v80, (int*)(*(_QWORD*)(v76 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v76 + 16) - 16i64));
	*(_QWORD*)(v76 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v81 = *(_DWORD*)(a1 + 160);
	v82 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v84 = *(_QWORD*)(v83 + 16);
	*(_QWORD*)v84 = *v82;
	*(_DWORD*)(v84 + 8) = *((_DWORD*)v82 + 2);
	*(_QWORD*)(v83 + 16) += 16i64;
	v85 = *(_QWORD*)(a2 + 16);
	v86 = (unsigned __int64*)sub_14018F0E0(&v138, L"blur")[1];
	if (v86)
	{
		v87 = -1i64;
		do
			++v87;
		while (*((_BYTE*)v86 + v87));
		sub_140058710(v85, v86, v87);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v85 + 16) + 8i64) = 0;
		*(_QWORD*)(v85 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v88 = *(_DWORD**)(v85 + 16);
	v88[2] = 1;
	*v88 = v81 != 0;
	*(_QWORD*)(v85 + 16) += 16i64;
	v89 = (__int64*)sub_1400580E0(v85, -3);
	sub_14005EA50(v85, v89, (int*)(*(_QWORD*)(v85 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v85 + 16) - 16i64));
	*(_QWORD*)(v85 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v90 = *(_DWORD*)(a1 + 164);
	v91 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v93 = *(_QWORD*)(v92 + 16);
	*(_QWORD*)v93 = *v91;
	*(_DWORD*)(v93 + 8) = *((_DWORD*)v91 + 2);
	*(_QWORD*)(v92 + 16) += 16i64;
	v94 = *(_QWORD*)(a2 + 16);
	v95 = (unsigned __int64*)sub_14018F0E0(&v138, L"shake")[1];
	if (v95)
	{
		v96 = -1i64;
		do
			++v96;
		while (*((_BYTE*)v95 + v96));
		sub_140058710(v94, v95, v96);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v94 + 16) + 8i64) = 0;
		*(_QWORD*)(v94 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v97 = *(_DWORD**)(v94 + 16);
	v97[2] = 1;
	*v97 = v90 != 0;
	*(_QWORD*)(v94 + 16) += 16i64;
	v98 = (__int64*)sub_1400580E0(v94, -3);
	sub_14005EA50(v94, v98, (int*)(*(_QWORD*)(v94 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v94 + 16) - 16i64));
	*(_QWORD*)(v94 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v99 = *(_DWORD*)(a1 + 168);
	v100 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v102 = *(_QWORD*)(v101 + 16);
	*(_QWORD*)v102 = *v100;
	*(_DWORD*)(v102 + 8) = *((_DWORD*)v100 + 2);
	*(_QWORD*)(v101 + 16) += 16i64;
	v103 = *(_QWORD*)(a2 + 16);
	v104 = (unsigned __int64*)sub_14018F0E0(&v138, L"shatterSprite")[1];
	if (v104)
	{
		v105 = -1i64;
		do
			++v105;
		while (*((_BYTE*)v104 + v105));
		sub_140058710(v103, v104, v105);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v103 + 16) + 8i64) = 0;
		*(_QWORD*)(v103 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v106 = *(_DWORD**)(v103 + 16);
	v106[2] = 1;
	*v106 = v99 != 0;
	*(_QWORD*)(v103 + 16) += 16i64;
	v107 = (__int64*)sub_1400580E0(v103, -3);
	sub_14005EA50(v103, v107, (int*)(*(_QWORD*)(v103 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v103 + 16) - 16i64));
	*(_QWORD*)(v103 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v108 = *(_DWORD*)(a1 + 172);
	v109 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v111 = *(_QWORD*)(v110 + 16);
	*(_QWORD*)v111 = *v109;
	*(_DWORD*)(v111 + 8) = *((_DWORD*)v109 + 2);
	*(_QWORD*)(v110 + 16) += 16i64;
	v112 = *(_QWORD*)(a2 + 16);
	v113 = (unsigned __int64*)sub_14018F0E0(&v138, L"itemUnavailable")[1];
	if (v113)
	{
		v114 = -1i64;
		do
			++v114;
		while (*((_BYTE*)v113 + v114));
		sub_140058710(v112, v113, v114);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v112 + 16) + 8i64) = 0;
		*(_QWORD*)(v112 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v115 = *(_DWORD**)(v112 + 16);
	v115[2] = 1;
	*v115 = v108 != 0;
	*(_QWORD*)(v112 + 16) += 16i64;
	v116 = (__int64*)sub_1400580E0(v112, -3);
	sub_14005EA50(v112, v116, (int*)(*(_QWORD*)(v112 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v112 + 16) - 16i64));
	*(_QWORD*)(v112 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1401181F0(a3, (_DWORD*)(a1 + 192));
	sub_1400FB540(a2);
	a3[2] -= 16i64;
	sub_1401181F0(a3, (_DWORD*)(a1 + 208));
	sub_1400FB540(a2);
	a3[2] -= 16i64;
	v117 = *(float*)(a1 + 132);
	v118 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v120 = *(_QWORD*)(v119 + 16);
	*(_QWORD*)v120 = *v118;
	*(_DWORD*)(v120 + 8) = *((_DWORD*)v118 + 2);
	*(_QWORD*)(v119 + 16) += 16i64;
	v121 = *(_QWORD*)(a2 + 16);
	v122 = (unsigned __int64*)sub_14018F0E0(&v138, L"saturation")[1];
	if (v122)
	{
		do
			++v28;
		while (*((_BYTE*)v122 + v28));
		sub_140058710(v121, v122, v28);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v121 + 16) + 8i64) = 0;
		*(_QWORD*)(v121 + 16) += 16i64;
	}
	if (v139)
		sub_14018B900(v139, 0);
	v123 = *(_QWORD*)(v121 + 16);
	*(_DWORD*)(v123 + 8) = 3;
	*(double*)v123 = v117;
	*(_QWORD*)(v121 + 16) += 16i64;
	v124 = (__int64*)sub_1400580E0(v121, -3);
	sub_14005EA50(v121, v124, (int*)(*(_QWORD*)(v121 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v121 + 16) - 16i64));
	*(_QWORD*)(v121 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v125 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v127 = *(_QWORD*)(v126 + 16);
	*(_QWORD*)v127 = *v125;
	*(_DWORD*)(v127 + 8) = *((_DWORD*)v125 + 2);
	*(_QWORD*)(v126 + 16) += 16i64;
	sub_1400F0630(*(_QWORD*)(a2 + 16), v127, L"lightOverlay", v128);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v129 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v131 = *(_QWORD*)(v130 + 16);
	*(_QWORD*)v131 = *v129;
	*(_DWORD*)(v131 + 8) = *((_DWORD*)v129 + 2);
	*(_QWORD*)(v130 + 16) += 16i64;
	sub_1400F0630(*(_QWORD*)(a2 + 16), v131, L"diffused", v132);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v133 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v135 = *(_QWORD*)(v134 + 16);
	*(_QWORD*)v135 = *v133;
	*(_DWORD*)(v135 + 8) = *((_DWORD*)v133 + 2);
	*(_QWORD*)(v134 + 16) += 16i64;
	sub_1400F0630(*(_QWORD*)(a2 + 16), v135, L"indicatorSprite", v136);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	return a2;
}
// 1405C60E3: variable 'v11' is possibly undefined
// 1405C6106: variable 'v13' is possibly undefined
// 1405C612F: variable 'v15' is possibly undefined
// 1405C6152: variable 'v17' is possibly undefined
// 1405C617B: variable 'v19' is possibly undefined
// 1405C619E: variable 'v21' is possibly undefined
// 1405C61CA: variable 'v24' is possibly undefined
// 1405C62A4: variable 'v34' is possibly undefined
// 1405C637D: variable 'v42' is possibly undefined
// 1405C63A0: variable 'v44' is possibly undefined
// 1405C63CC: variable 'v47' is possibly undefined
// 1405C649E: variable 'v56' is possibly undefined
// 1405C6570: variable 'v65' is possibly undefined
// 1405C6642: variable 'v74' is possibly undefined
// 1405C6714: variable 'v83' is possibly undefined
// 1405C67ED: variable 'v92' is possibly undefined
// 1405C68BF: variable 'v101' is possibly undefined
// 1405C6991: variable 'v110' is possibly undefined
// 1405C6AAA: variable 'v119' is possibly undefined
// 1405C6B80: variable 'v126' is possibly undefined
// 1405C6BA3: variable 'v128' is possibly undefined
// 1405C6BCF: variable 'v130' is possibly undefined
// 1405C6BF2: variable 'v132' is possibly undefined
// 1405C6C1E: variable 'v134' is possibly undefined
// 1405C6C41: variable 'v136' is possibly undefined
// 140B22028: using guessed type wchar_t aSprite_1[7];
// 140B22048: using guessed type wchar_t aSaturation[11];
// 140B22060: using guessed type wchar_t aItemunavailabl[16];
// 140B22098: using guessed type wchar_t aShake[6];
// 140B220A8: using guessed type wchar_t aShattersprite[14];
// 140B220C8: using guessed type wchar_t aReadyblingspri[17];
// 140B220F0: using guessed type wchar_t aBlur[5];
// 140B22100: using guessed type wchar_t aRadarsweep[11];
// 140B22118: using guessed type wchar_t aPopicon[8];
// 140B22128: using guessed type wchar_t aCooldowntime[13];
// 140B22148: using guessed type wchar_t aCasting[8];
// 140B22158: using guessed type wchar_t aGlobalcooldown[15];
// 140B22178: using guessed type wchar_t aCooldownpercen[16];
// 140B22198: using guessed type wchar_t aTextstring[11];
// 140B221B0: using guessed type wchar_t aCountstring[12];
// 140B222F8: using guessed type wchar_t aIndicatorsprit[16];
// 140B22328: using guessed type wchar_t aLightoverlay[13];
// 140B22348: using guessed type wchar_t aDiffused[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

