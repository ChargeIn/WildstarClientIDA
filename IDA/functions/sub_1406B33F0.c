#include "../winhttp.h"

//----- (00000001406B33F0) ----------------------------------------------------
void __fastcall sub_1406B33F0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r9
	int v10; // r13d
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int16* v16; // r9
	unsigned __int16* v17; // r8
	int v18; // edx
	__int64 v19; // rax
	_QWORD* v20; // rax
	unsigned __int16* v21; // r10
	__int64 v22; // rcx
	int v23; // edx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	unsigned __int16* v26; // r10
	int v27; // r8d
	_QWORD* v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rbx
	unsigned __int16* v31; // r9
	_QWORD* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rdi
	unsigned __int16* v35; // r9
	__int64 v36; // rcx
	int* v37; // rdi
	__int64 v38; // rax
	int* v39; // r12
	__int64 v40; // rbx
	unsigned __int64 v41; // rbx
	_QWORD* v42; // rax
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // rdx
	unsigned __int64 v46; // r12
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	__int64 v49; // rax
	__int64* v50; // rax
	unsigned __int64 v51; // rdx
	_QWORD* v52; // rax
	__int64 v53; // rdx
	unsigned __int64* v54; // rdx
	unsigned __int64 v55; // r8
	__int64 v56; // rax
	float v57; // xmm0_4
	__int64* v58; // rax
	__int64 v59; // rbx
	_QWORD* v60; // rax
	__int64 v61; // rcx
	__int64 v62; // rdi
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // r9
	__int64 v66; // rbx
	int v67; // ecx
	_QWORD* v68; // rax
	__int64 v69; // rcx
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // r9
	int v73; // ebx
	_QWORD* v74; // rax
	__int64 v75; // r10
	unsigned __int64* v76; // rdx
	unsigned __int64 v77; // r8
	_DWORD* v78; // rcx
	__int64* v79; // rax
	int v80; // ebx
	_QWORD* v81; // rax
	__int64 v82; // r10
	unsigned __int64* v83; // rdx
	unsigned __int64 v84; // r8
	_DWORD* v85; // rcx
	__int64* v86; // rax
	BOOL v87; // ebx
	_QWORD* v88; // rax
	__int64 v89; // r10
	unsigned __int64* v90; // rdx
	unsigned __int64 v91; // r8
	BOOL* v92; // rcx
	__int64* v93; // rax
	int v94; // ebx
	_QWORD* v95; // rax
	__int64 v96; // r10
	unsigned __int64* v97; // rdx
	_DWORD* v98; // rcx
	__int64* v99; // rax
	_QWORD* v100; // rax
	__int64 v101; // r10
	__int64 v102; // rdx
	int v103; // r11d
	_QWORD* v104; // rax
	__int64 v105; // r10
	__int64 v106; // rdx
	int v107; // r11d
	unsigned int v108; // r13d
	__int64 v109; // rdi
	__int64 v110; // rbx
	int* v111; // r12
	unsigned int v112; // ecx
	char v113; // al
	char v114; // al
	char v115; // al
	char v116; // al
	char v117; // al
	char v118; // al
	char v119; // al
	char v120; // al
	unsigned __int64 v121; // rcx
	__int16 v122; // ax
	int* v123; // rax
	__int64 v124; // rax
	__int64 v125; // rax
	_QWORD* v126; // rbx
	__int64* v127; // r12
	int v128; // r12d
	_QWORD* v129; // rax
	__int64 v130; // rdx
	int v131; // r10d
	_QWORD* v132; // rax
	__int64 v133; // r10
	__int64 v134; // rdx
	__int64 v135; // rdx
	int v136; // edi
	int v137; // ebx
	__int64* v138; // rax
	__int64 v139; // r9
	__int64 v140; // rcx
	__int64 v141; // rdx
	__int64 v142; // [rsp+48h] [rbp-C0h] BYREF
	unsigned __int16* v143; // [rsp+50h] [rbp-B8h]
	__int64 v144; // [rsp+58h] [rbp-B0h]
	__int64(__fastcall * *v145)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v146; // [rsp+70h] [rbp-98h]
	_QWORD* v147; // [rsp+78h] [rbp-90h]
	int v148; // [rsp+80h] [rbp-88h]
	char v149[8]; // [rsp+88h] [rbp-80h] BYREF
	int v150; // [rsp+90h] [rbp-78h]
	_QWORD* v151; // [rsp+98h] [rbp-70h]
	char v152[32]; // [rsp+A8h] [rbp-60h] BYREF
	char v153[1216]; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v154; // [rsp+588h] [rbp+480h] BYREF
	__int64(__fastcall * v155)(__int64, int, unsigned int*); // [rsp+590h] [rbp+488h]
	__int64 v156; // [rsp+598h] [rbp+490h] BYREF
	__int64 v157; // [rsp+5A0h] [rbp+498h] BYREF
	__int64 v158; // [rsp+5A8h] [rbp+4A0h]
	__int64 v159; // [rsp+5B0h] [rbp+4A8h]
	char v160[16]; // [rsp+5B8h] [rbp+4B0h] BYREF
	int* v161; // [rsp+5C8h] [rbp+4C0h]
	int v162; // [rsp+5D0h] [rbp+4C8h]
	int v163; // [rsp+5D4h] [rbp+4CCh]
	int v164; // [rsp+5D8h] [rbp+4D0h]
	int v165; // [rsp+5DCh] [rbp+4D4h]
	int v166; // [rsp+5E0h] [rbp+4D8h]
	int v167; // [rsp+5E4h] [rbp+4DCh]
	int v168; // [rsp+5E8h] [rbp+4E0h]
	int v169; // [rsp+5ECh] [rbp+4E4h]
	__int64* v170; // [rsp+5F0h] [rbp+4E8h]
	int v171; // [rsp+5F8h] [rbp+4F0h]
	int v172; // [rsp+5FCh] [rbp+4F4h]
	int v173; // [rsp+600h] [rbp+4F8h]
	__int64 v174; // [rsp+608h] [rbp+500h]
	__int64* v175; // [rsp+610h] [rbp+508h]
	int v176; // [rsp+618h] [rbp+510h]
	__int64 v177; // [rsp+620h] [rbp+518h]
	__int64* v178; // [rsp+628h] [rbp+520h]
	__int64 v179[93]; // [rsp+728h] [rbp+620h] BYREF
	__int64 v180; // [rsp+A10h] [rbp+908h]
	__int64(__fastcall * v181)(__int64, int, unsigned int*); // [rsp+A18h] [rbp+910h]
	__int64 v182; // [rsp+A28h] [rbp+920h]
	int v183; // [rsp+BC8h] [rbp+AC0h]
	int v184; // [rsp+BCCh] [rbp+AC4h]
	int v185[80]; // [rsp+BE8h] [rbp+AE0h] BYREF
	unsigned __int16 v186[32]; // [rsp+D28h] [rbp+C20h] BYREF
	_WORD v187[40]; // [rsp+D68h] [rbp+C60h] BYREF

	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return;
	}
	v147 = a1;
	v4 = a1[4];
	v145 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v148 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v8 = sub_1400578C0((__int64)a1);
	v9 = *(_QWORD*)(a2 + 8);
	v10 = v8;
	LODWORD(v146) = v8;
	sub_14001B370(v186, 30i64, L"%I64u", v9);
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v12 = a1[2];
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v12, L"strId", v186);
	a1[2] -= 16i64;
	if (*(_DWORD*)(a2 + 80)
		&& *(_QWORD*)(a2 + 88)
		&& (v155 = sub_14062A080,
			v154 = qword_140C65898 + 27592,
			(unsigned int)sub_1403F82F0(qword_140C65898, 0, (__int64*)(a2 + 80), v187, 0x21u, &v154, 0i64)))
	{
		v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v15 = a1[2];
		v16 = v187;
		v17 = L"strSenderName";
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	}
	else
	{
		v18 = *(_DWORD*)(a2 + 48);
		if (v18 && (v19 = sub_1404835C0(qword_140C65918, v18)) != 0 && sub_14034BDD0(v13, *(_DWORD*)(v19 + 8)))
		{
			v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			v17 = L"strSenderName";
		}
		else
		{
			sub_14034BDD0(v13, 108);
			v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			v17 = L"strSenderName";
		}
		v15 = a1[2];
		v16 = v21;
		*(_QWORD*)v15 = *v20;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v20 + 2);
	}
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v15, v17, v16);
	a1[2] -= 16i64;
	v23 = *(_DWORD*)(a2 + 40);
	if (v23)
		sub_14034BDD0(v22, v23);
	v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v25 = a1[2];
	*(_QWORD*)v25 = *v24;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v25, L"strSubject", v26);
	a1[2] -= 16i64;
	v27 = *(_DWORD*)(a2 + 44);
	if (v27)
	{
		sub_1406B1300(&v142, *(_DWORD*)(a2 + 20), v27, *(int**)(a2 + 32), 0);
		v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v29 = a1[2];
		v30 = (__int64)v143;
		v31 = v143;
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v29, L"strBody", v31);
		a1[2] -= 16i64;
		sub_1406B1300(&v142, *(_DWORD*)(a2 + 20), *(_DWORD*)(a2 + 44), *(int**)(a2 + 32), 1);
		v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v33 = a1[2];
		v34 = (__int64)v143;
		v35 = v143;
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v33, L"strBodyAML", v35);
		a1[2] -= 16i64;
		if (v34)
			sub_14018B900(v34, 0);
		if (!v30)
			goto LABEL_31;
		v36 = v30;
	}
	else
	{
		v37 = *(int**)(a2 + 32);
		v38 = 0i64;
		v39 = 0i64;
		if (*(_WORD*)v37)
		{
			do
				++v38;
			while (*((_WORD*)v37 + v38));
		}
		v40 = (2 * v38) >> 1;
		if ((unsigned __int64)(v40 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v39 = sub_14018B280(2 * (v40 + 1), 0);
		v41 = 2 * v40;
		sub_1407DB590(v39, v37, v41);
		if ((int*)((char*)v39 + v41))
			*(_WORD*)((char*)v39 + v41) = 0;
		v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v43 = a1[2];
		*(_QWORD*)v43 = *v42;
		*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v43, L"strBody", (unsigned __int16*)v39);
		a1[2] -= 16i64;
		if (!v39)
			goto LABEL_31;
		v36 = (__int64)v39;
	}
	sub_14018B900(v36, 0);
LABEL_31:
	v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v45 = a1[2];
	*(_QWORD*)v45 = *v44;
	*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
	a1[2] += 16i64;
	v46 = -1i64;
	v47 = (unsigned __int64*)sub_14018F0E0(&v142, L"fDeliveryTime")[1];
	if (v47)
	{
		v48 = -1i64;
		do
			++v48;
		while (*((_BYTE*)v47 + v48));
		sub_140058710((__int64)a1, v47, v48);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v49 = a1[2];
	*(_QWORD*)v49 = 0i64;
	*(_DWORD*)(v49 + 8) = 3;
	a1[2] += 16i64;
	v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v51 = *(_QWORD*)(a2 + 112);
	LODWORD(v156) = 0;
	sub_1401E83A0((float*)&v156, v51);
	v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v53 = a1[2];
	*(_QWORD*)v53 = *v52;
	*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
	a1[2] += 16i64;
	v54 = (unsigned __int64*)sub_14018F0E0(&v142, L"fExpirationTime")[1];
	if (v54)
	{
		v55 = -1i64;
		do
			++v55;
		while (*((_BYTE*)v54 + v55));
		sub_140058710((__int64)a1, v54, v55);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v56 = a1[2];
	v57 = *(float*)&v156;
	*(_DWORD*)(v56 + 8) = 3;
	*(double*)v56 = v57;
	a1[2] += 16i64;
	v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v59 = *(_QWORD*)(a2 + 64);
	v159 = 0i64;
	v158 = 1i64;
	v60 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	v61 = v158;
	v62 = v159;
	*v60 = v59;
	v60[1] = v61;
	v60[2] = v62;
	v63 = a1[4];
	v64 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v65 = a1[2];
	v154 = v64;
	LODWORD(v155) = 4;
	sub_14005E8E0((__int64)a1, v63 + 160, (int*)&v154, v65);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	sub_1400FB540((__int64)&v145);
	a1[2] -= 16i64;
	v66 = *(_QWORD*)(a2 + 56);
	v67 = 1;
	if ((unsigned int)(*(_DWORD*)(a2 + 52) - 1) <= 0xD)
		v67 = *(_DWORD*)(a2 + 52);
	LODWORD(v158) = v67;
	v68 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	v69 = v158;
	*v68 = v66;
	v68[1] = v69;
	v68[2] = v62;
	v70 = a1[4];
	v71 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v72 = a1[2];
	v154 = v71;
	LODWORD(v155) = 4;
	sub_14005E8E0((__int64)a1, v70 + 160, (int*)&v154, v72);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	sub_1400FB540((__int64)&v145);
	a1[2] -= 16i64;
	v73 = (*(_DWORD*)(a2 + 76) >> 1) & 1;
	v74 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v75 = *v74;
	*(_DWORD*)(v75 + 8) = *((_DWORD*)v74 + 2);
	a1[2] += 16i64;
	v76 = (unsigned __int64*)sub_14018F0E0(&v142, L"bIsRead")[1];
	if (v76)
	{
		v77 = -1i64;
		do
			++v77;
		while (*((_BYTE*)v76 + v77));
		sub_140058710((__int64)a1, v76, v77);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v78 = (_DWORD*)a1[2];
	v78[2] = 1;
	*v78 = v73 != 0;
	a1[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v79, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v80 = (*(_DWORD*)(a2 + 76) >> 2) & 1;
	v81 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v82 = *v81;
	*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
	a1[2] += 16i64;
	v83 = (unsigned __int64*)sub_14018F0E0(&v142, L"bIsSaved")[1];
	if (v83)
	{
		v84 = -1i64;
		do
			++v84;
		while (*((_BYTE*)v83 + v84));
		sub_140058710((__int64)a1, v83, v84);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v85 = (_DWORD*)a1[2];
	v85[2] = 1;
	*v85 = v80 != 0;
	a1[2] += 16i64;
	v86 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v86, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v87 = (*(_DWORD*)(a2 + 76) & 8) == 0;
	v88 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v89 = *v88;
	*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
	a1[2] += 16i64;
	v90 = (unsigned __int64*)sub_14018F0E0(&v142, L"bIsReturnable")[1];
	if (v90)
	{
		v91 = -1i64;
		do
			++v91;
		while (*((_BYTE*)v90 + v91));
		sub_140058710((__int64)a1, v90, v91);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v92 = (BOOL*)a1[2];
	v92[2] = 1;
	*v92 = v87;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v94 = (*(_DWORD*)(a2 + 76) >> 5) & 1;
	v95 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v96 = *v95;
	*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
	a1[2] += 16i64;
	v97 = (unsigned __int64*)sub_14018F0E0(&v142, L"bNoExpiry")[1];
	if (v97)
	{
		do
			++v46;
		while (*((_BYTE*)v97 + v46));
		sub_140058710((__int64)a1, v97, v46);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v143)
		sub_14018B900((__int64)v143, 0);
	v98 = (_DWORD*)a1[2];
	v98[2] = 1;
	*v98 = v94 != 0;
	a1[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v100 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v101 = *v100;
	*(_DWORD*)(v101 + 8) = *((_DWORD*)v100 + 2);
	a1[2] += 16i64;
	sub_1400F0630((__int64)a1, v102, L"bIsGift", v103);
	a1[2] -= 16i64;
	v104 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v105 = *v104;
	*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v106, L"eSenderType", v107);
	a1[2] -= 16i64;
	sub_1400FA0F0((__int64)&v142, (__int64)a1, 1);
	v108 = 0;
	v109 = 0i64;
	do
	{
		if (v108 >= *(_DWORD*)(a2 + 96))
			break;
		v110 = *(_QWORD*)(a2 + 104);
		v111 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v109 + v110), 0i64);
		if (v111)
		{
			sub_1400FA0F0((__int64)v149, (__int64)a1, 1);
			sub_14040FAE0((__int64)v179);
			if (v183 <= 6)
			{
				v179[1] = (__int64)v111;
				v183 = 6;
			}
			v154 = 0i64;
			v155 = 0i64;
			v112 = *(_DWORD*)(v109 + v110 + 24) >> 3;
			BYTE1(v155) = *(_DWORD*)(v109 + v110 + 24) & 7;
			v113 = v112;
			v112 >>= 3;
			LOBYTE(v155) = v113 & 7;
			v114 = v112;
			v112 >>= 1;
			HIDWORD(v155) = v114 & 1;
			v115 = v112;
			v112 >>= 3;
			v154 = v115 & 7;
			v116 = v112;
			v112 >>= 3;
			BYTE1(v154) = v116 & 7;
			v117 = v112;
			v112 >>= 3;
			*(_DWORD*)((char*)&v154 + 2) = v117 & 7;
			v118 = v112;
			v112 >>= 3;
			BYTE3(v154) = v118 & 7;
			v119 = v112;
			v112 >>= 3;
			WORD2(v154) = v119 & 7;
			v120 = v112;
			v112 >>= 3;
			BYTE5(v154) = v120 & 7;
			HIWORD(v154) = v112 & 7;
			HIBYTE(v154) = (v112 >> 3) & 7;
			v156 = 0i64;
			v121 = *(_QWORD*)(v109 + v110 + 32) >> 4;
			LOBYTE(v156) = *(_QWORD*)(v109 + v110 + 32) & 0xF;
			v122 = v121;
			v121 >>= 10;
			*(_DWORD*)((char*)&v156 + 2) = v122 & 0x3FF;
			WORD2(v156) = v121 & 0x3FF;
			HIWORD(v156) = (v121 >> 10) & 0x3FF;
			LODWORD(v158) = 1;
			v157 = 0i64;
			sub_14040BD50((__int64)&v157, *(_QWORD*)(v109 + v110 + 16), (__int64)v111);
			sub_14041FD30((__int64)v160, 0);
			v123 = (int*)sub_140445210((__int64)v152);
			v161 = v111;
			v162 = *v123;
			v163 = v123[1];
			v164 = v123[2];
			v165 = v123[3];
			v166 = v123[4];
			v167 = v123[5];
			v168 = v123[6];
			v169 = v123[7];
			LODWORD(v123) = *(_DWORD*)(v109 + v110 + 40);
			v172 = 1;
			v171 = (int)v123;
			v173 = 5;
			v176 = 8;
			v174 = v109 + v110 + 44;
			v175 = &v157;
			v170 = &v156;
			v177 = v109 + v110 + 64;
			v178 = &v154;
			sub_1400B52A0((__int64)v185);
			if (!(unsigned int)sub_14040C310((__int64)v160, (__int64)v185, qword_140C658F0, 0i64, 0i64, 0i64))
			{
				sub_140412570((__int64)v179, v185, 0, 6);
				if (v184 <= 6)
				{
					v184 = 6;
					v180 = v154;
					v181 = v155;
					if (v179[0])
					{
						v124 = *(_QWORD*)(v179[0] + 88);
						if (v124)
						{
							if (*(int*)(v124 + 8) < 1)
							{
								v184 = 0;
								v180 = 0i64;
								v181 = 0i64;
							}
						}
					}
				}
			}
			v125 = sub_14040FC60((__int64)v153, (__int64)v179);
			v126 = v151;
			v127 = (__int64*)v125;
			if ((unsigned int)sub_140415BB0(v151, v125))
			{
				sub_1400FB540((__int64)v149);
				v126[2] -= 16i64;
			}
			sub_14040FDF0(v127);
			v128 = v150;
			v129 = sub_14005C3C0(*(_QWORD*)(v126[4] + 160i64), v150);
			v130 = v126[2];
			*(_QWORD*)v130 = *v129;
			*(_DWORD*)(v130 + 8) = *((_DWORD*)v129 + 2);
			v126[2] += 16i64;
			sub_1400F06F0((__int64)v126, v130, L"nStackCount", v131);
			v126[2] -= 16i64;
			v132 = sub_14005C3C0(*(_QWORD*)(v126[4] + 160i64), v128);
			*(_QWORD*)v133 = *v132;
			*(_DWORD*)(v133 + 8) = *((_DWORD*)v132 + 2);
			v126[2] += 16i64;
			sub_1400F06F0((__int64)v126, v134, L"nServerIndex", v108 + 1);
			v126[2] -= 16i64;
			sub_1400FB1D0((__int64)&v142);
			if (v179[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v179[0] + 8i64))(v179[0]);
				v179[0] = 0i64;
			}
			if (v182)
				sub_14018B900(v182, 0);
			sub_1400579E0((__int64)v126, v135, v128);
		}
		++v108;
		v109 += 96i64;
	} while (v108 < 0xA);
	v136 = (int)v143;
	sub_1400FB2A0((__int64)&v145, (__int64)L"arAttachments", (int)v143);
	v137 = v146;
	v138 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v146);
	v139 = a1[2];
	v140 = v144;
	v141 = *v138;
	*(_QWORD*)v139 = *v138;
	*(_DWORD*)(v139 + 8) = *((_DWORD*)v138 + 2);
	a1[2] += 16i64;
	if (v140)
		sub_1400579E0(v140, v141, v136);
	sub_1400579E0((__int64)a1, v141, v137);
}
// 1406B35BD: variable 'v13' is possibly undefined
// 1406B3614: variable 'v21' is possibly undefined
// 1406B363A: variable 'v22' is possibly undefined
// 1406B367D: variable 'v26' is possibly undefined
// 1406B3B3B: variable 'v75' is possibly undefined
// 1406B3C00: variable 'v82' is possibly undefined
// 1406B3CC6: variable 'v89' is possibly undefined
// 1406B3D90: variable 'v96' is possibly undefined
// 1406B3E59: variable 'v101' is possibly undefined
// 1406B3E6B: variable 'v102' is possibly undefined
// 1406B3E6B: variable 'v103' is possibly undefined
// 1406B3E9D: variable 'v105' is possibly undefined
// 1406B3EAF: variable 'v106' is possibly undefined
// 1406B3EAF: variable 'v107' is possibly undefined
// 1406B426F: variable 'v131' is possibly undefined
// 1406B429E: variable 'v133' is possibly undefined
// 1406B42B0: variable 'v134' is possibly undefined
// 1406B42F9: variable 'v135' is possibly undefined
// 1406B437B: variable 'v141' is possibly undefined
// 140B36D58: using guessed type wchar_t aI64u_5[6];
// 140B36E60: using guessed type wchar_t aBisreturnable[14];
// 140B36E80: using guessed type wchar_t aBnoexpiry[10];
// 140B36E98: using guessed type wchar_t aBisread[8];
// 140B36EA8: using guessed type wchar_t aBissaved[9];
// 140B36EE0: using guessed type wchar_t aFdeliverytime[14];
// 140B36F00: using guessed type wchar_t aFexpirationtim[16];
// 140B36F20: using guessed type wchar_t aStrbodyaml[11];
// 140B36F38: using guessed type wchar_t aStrbody_1[8];
// 140B36F48: using guessed type wchar_t aStrsubject[11];
// 140B36F60: using guessed type wchar_t aStrbody_0[8];
// 140B36F70: using guessed type wchar_t aStrsendername_0[14];
// 140B36F90: using guessed type wchar_t aStrsendername_1[14];
// 140B36FB0: using guessed type wchar_t aStrid[6];
// 140B36FC0: using guessed type wchar_t aStrsendername[14];
// 140B370A8: using guessed type wchar_t aNserverindex[13];
// 140B370C8: using guessed type wchar_t aArattachments[14];
// 140B37108: using guessed type wchar_t aNstackcount[12];
// 140B37120: using guessed type wchar_t aBisgift[8];
// 140B37130: using guessed type wchar_t aEsendertype[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 1406B33F0: using guessed type unsigned __int16 var_D0[32];
// 1406B33F0: using guessed type _WORD var_90[40];
// 1406B33F0: using guessed type char var_D70[8];
// 1406B33F0: using guessed type char var_D50[32];
// 1406B33F0: using guessed type int var_210[80];
// 1406B33F0: using guessed type char var_D30[1216];

