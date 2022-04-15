#include "../winhttp.h"

//----- (0000000140438F60) ----------------------------------------------------
_BOOL8 __fastcall sub_140438F60(__int64 a1)
{
	__int64 v1; // r12
	__m128i* v2; // rax
	bool v3; // zf
	__int64 v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // r14
	__int64 v13; // rcx
	_QWORD* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rsi
	__int64 v22; // rdi
	__int64 v23; // rax
	int* v24; // rax
	__int64 v25; // rax
	unsigned int v26; // edi
	__int64 v27; // r13
	__int64 v28; // rdi
	__int64 v29; // rax
	int* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v41; // rax
	__int64 v42; // r14
	__int64 v43; // rbx
	__int64 v44; // rax
	int* v45; // rax
	__int64 v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rax
	__int64 v49; // rax
	__int64 v50; // rcx
	__int64 v51; // rcx
	__int64 v52; // rax
	int* v53; // rdi
	__int64 v54; // rax
	__int64 v55; // r12
	__int64 v56; // rbx
	__int64 v57; // rax
	int* v58; // rax
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v61; // rsi
	__int64 v62; // rbx
	__int64 v63; // rax
	int* v64; // rax
	__int64 v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rax
	__int64 v68; // rax
	__int64 v69; // rcx
	__int64 v70; // rcx
	__int64 v71; // rax
	__int64 v72; // rax
	__int64 v73; // rbx
	__int64 v74; // rdi
	__int64 v75; // rax
	__int64 v76; // rsi
	__int64 v77; // r14
	__int64 v78; // rax
	int* v79; // rax
	__int64 v80; // rax
	unsigned int v81; // r14d
	__int64 v82; // r13
	__int64 v83; // r14
	__int64 v84; // rax
	int* v85; // rax
	__int64 v86; // rax
	__int64 v87; // rcx
	__int64 v88; // rax
	__int64 v89; // rax
	__int64 v90; // rcx
	__int64 v91; // rcx
	__int64 v92; // rax
	__int64 v93; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v96; // rax
	__int64 n; // rax
	__int64 ii; // rax
	int v99; // edi
	__int64 v100; // rcx
	__int64 v101; // r8
	int* v102; // rbx
	__int64 v103; // rcx
	int jj; // eax
	int v105; // eax
	int mm; // eax
	int nn; // eax
	__int64 v108; // rcx
	__int64* v109; // rax
	__int64* v110; // rax
	__int64 v111; // rcx
	int* v113; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v114; // [rsp+50h] [rbp-B8h]
	__int64 v115; // [rsp+58h] [rbp-B0h]
	__int64 v116; // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v117)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v118; // [rsp+70h] [rbp-98h]
	__int64 v119; // [rsp+78h] [rbp-90h]
	__int16 v120; // [rsp+80h] [rbp-88h]
	__int64 v121; // [rsp+88h] [rbp-80h]
	_QWORD* v122; // [rsp+98h] [rbp-70h]
	_QWORD* v123; // [rsp+A0h] [rbp-68h]
	__int64 v124; // [rsp+A8h] [rbp-60h]
	__int64 v125; // [rsp+B0h] [rbp-58h]
	int v126; // [rsp+C4h] [rbp-44h]
	__int64 v127; // [rsp+D0h] [rbp-38h]
	__int64 v128; // [rsp+D8h] [rbp-30h]
	__int64(__fastcall * *v129)(); // [rsp+E8h] [rbp-20h] BYREF
	char* v130; // [rsp+F0h] [rbp-18h]
	char v131; // [rsp+F8h] [rbp-10h] BYREF
	int v132; // [rsp+14Ch] [rbp+44h]
	__int64 v133; // [rsp+150h] [rbp+48h]
	__int128 v134; // [rsp+158h] [rbp+50h]
	__int64(__fastcall * *v135)(); // [rsp+168h] [rbp+60h]
	char* v136; // [rsp+170h] [rbp+68h]
	char v137; // [rsp+178h] [rbp+70h] BYREF
	int v138; // [rsp+1CCh] [rbp+C4h]
	__int64 v139; // [rsp+1D0h] [rbp+C8h]
	__int128 v140; // [rsp+1D8h] [rbp+D0h]
	__int64(__fastcall * *v141)(); // [rsp+1E8h] [rbp+E0h]
	char* v142; // [rsp+1F0h] [rbp+E8h]
	char v143; // [rsp+1F8h] [rbp+F0h] BYREF
	int v144; // [rsp+24Ch] [rbp+144h]
	__int64 v145; // [rsp+250h] [rbp+148h]
	__int128 v146; // [rsp+258h] [rbp+150h]
	__int64(__fastcall * *kk)(); // [rsp+268h] [rbp+160h] BYREF
	char* v148; // [rsp+270h] [rbp+168h]
	char v149; // [rsp+278h] [rbp+170h] BYREF
	int v150; // [rsp+2CCh] [rbp+1C4h]
	__int64 v151; // [rsp+2D0h] [rbp+1C8h]
	__int128 v152; // [rsp+2D8h] [rbp+1D0h]
	int v153[12]; // [rsp+2E8h] [rbp+1E0h] BYREF
	int v154[100]; // [rsp+318h] [rbp+210h] BYREF
	__m128i v155[33]; // [rsp+4A8h] [rbp+3A0h] BYREF

	v115 = a1;
	v1 = a1;
	if ((int)sub_14001B370(
		v155,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"Tutorials.xml") >= 0
		&& v155[0].m128i_i16[0])
	{
		v2 = v155;
		do
		{
			v3 = v2->m128i_i16[1] == 0;
			v2 = (__m128i*)((char*)v2 + 2);
		} while (!v3);
	}
	sub_1401A72E0((__int64)&v117);
	v4 = ((__int64(__fastcall*)(__int64(__fastcall***)()))kk[2])(&kk);
	v5 = (_QWORD*)v4;
	if (v4)
	{
		*(_QWORD*)(v4 + 16) = 0i64;
		*(_QWORD*)(v4 + 8) = &v117;
		*(_DWORD*)(v4 + 24) = 0;
		*(_QWORD*)(v4 + 32) = 0i64;
		*(_QWORD*)(v4 + 40) = 0i64;
		*(_QWORD*)(v4 + 48) = 0i64;
		*(_QWORD*)(v4 + 56) = 0i64;
		*(_QWORD*)(v4 + 64) = 0i64;
		*(_QWORD*)(v4 + 72) = 0i64;
		*(_QWORD*)v4 = off_140B5ED50;
		*(_QWORD*)(v4 + 80) = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	v5[10] = &kk;
	sub_1401A4C50((__int64)(v5 + 3), (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"");
	if (v5[1] == v118)
	{
		v6 = v5[2];
		if (v6)
		{
			v7 = *(_QWORD**)(v6 + 48);
			if (v5 == v7)
				*(_QWORD*)(v6 + 48) = v7[9];
			v8 = *(_QWORD**)(v6 + 56);
			if (v5 == v8)
				*(_QWORD*)(v6 + 56) = v8[8];
			v9 = v5[8];
			if (v9)
				*(_QWORD*)(v9 + 72) = v5[9];
			v10 = v5[9];
			if (v10)
				*(_QWORD*)(v10 + 64) = v5[8];
			v5[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[10] + 32i64))(v5[10]);
		}
		if (v123)
		{
			v123[9] = v5;
			v5[8] = v123;
			v123 = v5;
		}
		else
		{
			v123 = v5;
			v122 = v5;
			v5[8] = 0i64;
		}
		v5[9] = 0i64;
		v5[2] = &v117;
	}
	v11 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v129[2])(&v129);
	v12 = (_QWORD*)v11;
	if (v11)
	{
		*(_QWORD*)(v11 + 16) = 0i64;
		*(_QWORD*)(v11 + 8) = &v117;
		*(_DWORD*)(v11 + 24) = 0;
		*(_QWORD*)(v11 + 32) = 0i64;
		*(_QWORD*)(v11 + 40) = 0i64;
		*(_QWORD*)(v11 + 48) = 0i64;
		*(_QWORD*)(v11 + 56) = 0i64;
		*(_QWORD*)(v11 + 64) = 0i64;
		*(_QWORD*)(v11 + 72) = 0i64;
		*(_QWORD*)(v11 + 80) = 0i64;
		*(_QWORD*)v11 = off_140B5EBA0;
		*(_DWORD*)(v11 + 88) = 0;
		*(_QWORD*)(v11 + 96) = 0i64;
	}
	else
	{
		v12 = 0i64;
	}
	v12[10] = &v129;
	sub_1401A4C50((__int64)(v12 + 3), (int*)L"ViewedTutorials");
	if (v12[1] == v118)
	{
		v13 = v12[2];
		if (v13)
		{
			v14 = *(_QWORD**)(v13 + 48);
			if (v12 == v14)
				*(_QWORD*)(v13 + 48) = v14[9];
			v15 = *(_QWORD**)(v13 + 56);
			if (v12 == v15)
				*(_QWORD*)(v13 + 56) = v15[8];
			v16 = v12[8];
			if (v16)
				*(_QWORD*)(v16 + 72) = v12[9];
			v17 = v12[9];
			if (v17)
				*(_QWORD*)(v17 + 64) = v12[8];
			v12[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v12[10] + 32i64))(v12[10]);
		}
		if (v123)
		{
			v123[9] = v12;
			v12[8] = v123;
			v123 = v12;
		}
		else
		{
			v123 = v12;
			v122 = v12;
			v12[8] = 0i64;
		}
		v12[9] = 0i64;
		v12[2] = &v117;
	}
	v18 = *(_QWORD*)(v1 + 40);
	v19 = *(_QWORD*)(v18 + 16);
	if (v19 != v18)
	{
		do
		{
			v20 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v129[2])(&v129);
			v21 = v20;
			if (v20)
			{
				*(_QWORD*)(v20 + 16) = 0i64;
				*(_QWORD*)(v20 + 8) = &v117;
				*(_DWORD*)(v20 + 24) = 0;
				*(_QWORD*)(v20 + 32) = 0i64;
				*(_QWORD*)(v20 + 40) = 0i64;
				*(_QWORD*)(v20 + 48) = 0i64;
				*(_QWORD*)(v20 + 56) = 0i64;
				*(_QWORD*)(v20 + 64) = 0i64;
				*(_QWORD*)(v20 + 72) = 0i64;
				*(_QWORD*)(v20 + 80) = 0i64;
				*(_QWORD*)v20 = off_140B5EBA0;
				*(_DWORD*)(v20 + 88) = 0;
				*(_QWORD*)(v20 + 96) = 0i64;
			}
			else
			{
				v21 = 0i64;
			}
			*(_QWORD*)(v21 + 80) = &v129;
			if ((*(_DWORD*)(v21 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v21 + 32), 0);
			*(_DWORD*)(v21 + 24) = 0;
			*(_QWORD*)(v21 + 32) = 0i64;
			*(_QWORD*)(v21 + 40) = 0i64;
			v22 = 0i64;
			do
				v3 = aTutorial_4[++v22] == 0;
			while (!v3);
			v23 = 2 * (v22 + 1);
			if (!is_mul_ok(v22 + 1, 2ui64))
				v23 = -1i64;
			v24 = sub_14018B280(v23, 0);
			*(_QWORD*)(v21 + 32) = v24;
			sub_1407DB590(v24, (int*)L"Tutorial", 2 * v22 + 2);
			v25 = *(_QWORD*)(v21 + 32);
			*(_DWORD*)(v21 + 24) = 512;
			*(_QWORD*)(v21 + 40) = v25 + 2 * v22;
			v26 = *(_DWORD*)(v19 + 32);
			v27 = sub_1401A6C70(v21, (int*)L"ID");
			sub_1401A4C20(v154, 0xC8ui64, (__int64)L"%u", v26);
			if ((*(_DWORD*)(v27 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v27 + 40), 0);
			v3 = LOWORD(v154[0]) == 0;
			*(_DWORD*)(v27 + 32) = 0;
			*(_QWORD*)(v27 + 40) = 0i64;
			*(_QWORD*)(v27 + 48) = 0i64;
			v28 = 0i64;
			if (!v3)
			{
				do
					++v28;
				while (*((_WORD*)v154 + v28));
			}
			v29 = 2 * (v28 + 1);
			if (!is_mul_ok(v28 + 1, 2ui64))
				v29 = -1i64;
			v30 = sub_14018B280(v29, 0);
			*(_QWORD*)(v27 + 40) = v30;
			sub_1407DB590(v30, v154, 2 * v28 + 2);
			v31 = *(_QWORD*)(v27 + 40);
			*(_DWORD*)(v27 + 32) = 512;
			*(_QWORD*)(v27 + 48) = v31 + 2 * v28;
			if (*(_QWORD*)(v21 + 8) == v12[1])
			{
				v32 = *(_QWORD*)(v21 + 16);
				if (v32)
				{
					v33 = *(_QWORD*)(v32 + 48);
					if (v21 == v33)
						*(_QWORD*)(v32 + 48) = *(_QWORD*)(v33 + 72);
					v34 = *(_QWORD*)(v32 + 56);
					if (v21 == v34)
						*(_QWORD*)(v32 + 56) = *(_QWORD*)(v34 + 64);
					v35 = *(_QWORD*)(v21 + 64);
					if (v35)
						*(_QWORD*)(v35 + 72) = *(_QWORD*)(v21 + 72);
					v36 = *(_QWORD*)(v21 + 72);
					if (v36)
						*(_QWORD*)(v36 + 64) = *(_QWORD*)(v21 + 64);
					*(_QWORD*)(v21 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v21 + 80) + 32i64))(*(_QWORD*)(v21 + 80));
				}
				v37 = v12[7];
				if (v37)
				{
					*(_QWORD*)(v37 + 72) = v21;
					*(_QWORD*)(v21 + 64) = v12[7];
					v12[7] = v21;
				}
				else
				{
					v12[7] = v21;
					v12[6] = v21;
					*(_QWORD*)(v21 + 64) = 0i64;
				}
				*(_QWORD*)(v21 + 72) = 0i64;
				*(_QWORD*)(v21 + 16) = v12;
			}
			v38 = *(_QWORD*)(v19 + 24);
			if (v38)
			{
				v19 = *(_QWORD*)(v19 + 24);
				for (i = *(_QWORD*)(v38 + 16); i; i = *(_QWORD*)(i + 16))
					v19 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v19 + 8); v19 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v19 = j;
				if (*(_QWORD*)(v19 + 24) != j)
					v19 = j;
			}
		} while (v19 != *(_QWORD*)(v1 + 40));
	}
	v41 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v129[2])(&v129);
	v42 = v41;
	v114 = v41;
	if (v41)
	{
		*(_QWORD*)(v41 + 16) = 0i64;
		*(_QWORD*)(v41 + 8) = &v117;
		*(_DWORD*)(v41 + 24) = 0;
		*(_QWORD*)(v41 + 32) = 0i64;
		*(_QWORD*)(v41 + 40) = 0i64;
		*(_QWORD*)(v41 + 48) = 0i64;
		*(_QWORD*)(v41 + 56) = 0i64;
		*(_QWORD*)(v41 + 64) = 0i64;
		*(_QWORD*)(v41 + 72) = 0i64;
		*(_QWORD*)(v41 + 80) = 0i64;
		*(_QWORD*)v41 = off_140B5EBA0;
		*(_DWORD*)(v41 + 88) = 0;
		*(_QWORD*)(v41 + 96) = 0i64;
	}
	else
	{
		v42 = 0i64;
		v114 = 0i64;
	}
	*(_QWORD*)(v42 + 80) = &v129;
	if ((*(_DWORD*)(v42 + 24) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(v42 + 32), 0);
	*(_DWORD*)(v42 + 24) = 0;
	*(_QWORD*)(v42 + 32) = 0i64;
	*(_QWORD*)(v42 + 40) = 0i64;
	v43 = 0i64;
	do
		v3 = aPendingtutoria_0[++v43] == 0;
	while (!v3);
	v44 = 2 * (v43 + 1);
	if (!is_mul_ok(v43 + 1, 2ui64))
		v44 = -1i64;
	v45 = sub_14018B280(v44, 0);
	*(_QWORD*)(v42 + 32) = v45;
	sub_1407DB590(v45, (int*)L"PendingTutorials", 2 * v43 + 2);
	v46 = *(_QWORD*)(v42 + 32);
	*(_DWORD*)(v42 + 24) = 512;
	*(_QWORD*)(v42 + 40) = v46 + 2 * v43;
	if (*(_QWORD*)(v42 + 8) == v118)
	{
		v47 = *(_QWORD*)(v42 + 16);
		if (v47)
		{
			v48 = *(_QWORD*)(v47 + 48);
			if (v42 == v48)
				*(_QWORD*)(v47 + 48) = *(_QWORD*)(v48 + 72);
			v49 = *(_QWORD*)(v47 + 56);
			if (v42 == v49)
				*(_QWORD*)(v47 + 56) = *(_QWORD*)(v49 + 64);
			v50 = *(_QWORD*)(v42 + 64);
			if (v50)
				*(_QWORD*)(v50 + 72) = *(_QWORD*)(v42 + 72);
			v51 = *(_QWORD*)(v42 + 72);
			if (v51)
				*(_QWORD*)(v51 + 64) = *(_QWORD*)(v42 + 64);
			*(_QWORD*)(v42 + 16) = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v42 + 80) + 32i64))(*(_QWORD*)(v42 + 80));
		}
		if (v123)
		{
			v123[9] = v42;
			*(_QWORD*)(v42 + 64) = v123;
			v123 = (_QWORD*)v42;
		}
		else
		{
			v123 = (_QWORD*)v42;
			v122 = (_QWORD*)v42;
			*(_QWORD*)(v42 + 64) = 0i64;
		}
		*(_QWORD*)(v42 + 72) = 0i64;
		*(_QWORD*)(v42 + 16) = &v117;
	}
	v52 = *(_QWORD*)(v1 + 72);
	v53 = *(int**)(v52 + 16);
	v113 = v53;
	if (v53 != (int*)v52)
	{
		do
		{
			if ((int)sub_14001B370(v153, 24i64, L"%I64d", *((_QWORD*)v53 + 4)) >= 0)
			{
				v54 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v129[2])(&v129);
				v55 = v54;
				if (v54)
				{
					*(_QWORD*)(v54 + 16) = 0i64;
					*(_QWORD*)(v54 + 8) = &v117;
					*(_DWORD*)(v54 + 24) = 0;
					*(_QWORD*)(v54 + 32) = 0i64;
					*(_QWORD*)(v54 + 40) = 0i64;
					*(_QWORD*)(v54 + 48) = 0i64;
					*(_QWORD*)(v54 + 56) = 0i64;
					*(_QWORD*)(v54 + 64) = 0i64;
					*(_QWORD*)(v54 + 72) = 0i64;
					*(_QWORD*)v54 = off_140B5EBA0;
					*(_QWORD*)(v54 + 80) = 0i64;
					*(_DWORD*)(v54 + 88) = 0;
					*(_QWORD*)(v54 + 96) = 0i64;
				}
				else
				{
					v55 = 0i64;
				}
				*(_QWORD*)(v55 + 80) = &v129;
				if ((*(_DWORD*)(v55 + 24) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v55 + 32), 0);
				*(_DWORD*)(v55 + 24) = 0;
				*(_QWORD*)(v55 + 32) = 0i64;
				*(_QWORD*)(v55 + 40) = 0i64;
				v56 = 0i64;
				do
					v3 = aCharacter_3[++v56] == 0;
				while (!v3);
				v57 = 2 * (v56 + 1);
				if (!is_mul_ok(v56 + 1, 2ui64))
					v57 = -1i64;
				v58 = sub_14018B280(v57, 0);
				*(_QWORD*)(v55 + 32) = v58;
				sub_1407DB590(v58, (int*)L"Character", 2 * v56 + 2);
				v59 = *(_QWORD*)(v55 + 32);
				*(_DWORD*)(v55 + 24) = 512;
				*(_QWORD*)(v55 + 40) = v59 + 2 * v56;
				v60 = sub_1401A6C70(v55, (int*)L"ID");
				v61 = v60;
				if ((*(_DWORD*)(v60 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v60 + 40), 0);
				*(_DWORD*)(v61 + 32) = 0;
				*(_QWORD*)(v61 + 40) = 0i64;
				*(_QWORD*)(v61 + 48) = 0i64;
				v62 = 0i64;
				if (LOWORD(v153[0]))
				{
					do
						++v62;
					while (*((_WORD*)v153 + v62));
				}
				v63 = 2 * (v62 + 1);
				if (!is_mul_ok(v62 + 1, 2ui64))
					v63 = -1i64;
				v64 = sub_14018B280(v63, 0);
				*(_QWORD*)(v61 + 40) = v64;
				sub_1407DB590(v64, v153, 2 * v62 + 2);
				v65 = *(_QWORD*)(v61 + 40);
				*(_DWORD*)(v61 + 32) = 512;
				*(_QWORD*)(v61 + 48) = v65 + 2 * v62;
				if (*(_QWORD*)(v55 + 8) == *(_QWORD*)(v42 + 8))
				{
					v66 = *(_QWORD*)(v55 + 16);
					if (v66)
					{
						v67 = *(_QWORD*)(v66 + 48);
						if (v55 == v67)
							*(_QWORD*)(v66 + 48) = *(_QWORD*)(v67 + 72);
						v68 = *(_QWORD*)(v66 + 56);
						if (v55 == v68)
							*(_QWORD*)(v66 + 56) = *(_QWORD*)(v68 + 64);
						v69 = *(_QWORD*)(v55 + 64);
						if (v69)
							*(_QWORD*)(v69 + 72) = *(_QWORD*)(v55 + 72);
						v70 = *(_QWORD*)(v55 + 72);
						if (v70)
							*(_QWORD*)(v70 + 64) = *(_QWORD*)(v55 + 64);
						*(_QWORD*)(v55 + 16) = 0i64;
					}
					else
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v55 + 80) + 32i64))(*(_QWORD*)(v55 + 80));
					}
					v71 = *(_QWORD*)(v42 + 56);
					if (v71)
					{
						*(_QWORD*)(v71 + 72) = v55;
						*(_QWORD*)(v55 + 64) = *(_QWORD*)(v42 + 56);
						*(_QWORD*)(v42 + 56) = v55;
					}
					else
					{
						*(_QWORD*)(v42 + 56) = v55;
						*(_QWORD*)(v42 + 48) = v55;
						*(_QWORD*)(v55 + 64) = 0i64;
					}
					*(_QWORD*)(v55 + 72) = 0i64;
					*(_QWORD*)(v55 + 16) = v42;
				}
				v116 = *((_QWORD*)v53 + 5);
				v72 = *(_QWORD*)(v116 + 8);
				v73 = *(_QWORD*)(v72 + 16);
				if (v73 != v72)
				{
					v74 = v116;
					do
					{
						v75 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v129[2])(&v129);
						v76 = v75;
						if (v75)
						{
							*(_QWORD*)(v75 + 16) = 0i64;
							*(_QWORD*)(v75 + 8) = &v117;
							*(_DWORD*)(v75 + 24) = 0;
							*(_QWORD*)(v75 + 32) = 0i64;
							*(_QWORD*)(v75 + 40) = 0i64;
							*(_QWORD*)(v75 + 48) = 0i64;
							*(_QWORD*)(v75 + 56) = 0i64;
							*(_QWORD*)(v75 + 64) = 0i64;
							*(_QWORD*)(v75 + 72) = 0i64;
							*(_QWORD*)v75 = off_140B5EBA0;
							*(_QWORD*)(v75 + 80) = 0i64;
							*(_DWORD*)(v75 + 88) = 0;
							*(_QWORD*)(v75 + 96) = 0i64;
						}
						else
						{
							v76 = 0i64;
						}
						*(_QWORD*)(v76 + 80) = &v129;
						if ((*(_DWORD*)(v76 + 24) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v76 + 32), 0);
						*(_DWORD*)(v76 + 24) = 0;
						*(_QWORD*)(v76 + 32) = 0i64;
						*(_QWORD*)(v76 + 40) = 0i64;
						v77 = 0i64;
						do
							v3 = aTutorial_5[++v77] == 0;
						while (!v3);
						v78 = 2 * (v77 + 1);
						if (!is_mul_ok(v77 + 1, 2ui64))
							v78 = -1i64;
						v79 = sub_14018B280(v78, 0);
						*(_QWORD*)(v76 + 32) = v79;
						sub_1407DB590(v79, (int*)L"Tutorial", 2 * v77 + 2);
						v80 = *(_QWORD*)(v76 + 32);
						*(_DWORD*)(v76 + 24) = 512;
						*(_QWORD*)(v76 + 40) = v80 + 2 * v77;
						v81 = *(_DWORD*)(v73 + 32);
						v82 = sub_1401A6C70(v76, (int*)L"ID");
						sub_1401A4C20(v154, 0xC8ui64, (__int64)L"%u", v81);
						if ((*(_DWORD*)(v82 + 32) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v82 + 40), 0);
						v3 = LOWORD(v154[0]) == 0;
						*(_DWORD*)(v82 + 32) = 0;
						*(_QWORD*)(v82 + 40) = 0i64;
						*(_QWORD*)(v82 + 48) = 0i64;
						v83 = 0i64;
						if (!v3)
						{
							do
								++v83;
							while (*((_WORD*)v154 + v83));
						}
						v84 = 2 * (v83 + 1);
						if (!is_mul_ok(v83 + 1, 2ui64))
							v84 = -1i64;
						v85 = sub_14018B280(v84, 0);
						*(_QWORD*)(v82 + 40) = v85;
						sub_1407DB590(v85, v154, 2 * v83 + 2);
						v86 = *(_QWORD*)(v82 + 40);
						*(_DWORD*)(v82 + 32) = 512;
						*(_QWORD*)(v82 + 48) = v86 + 2 * v83;
						if (*(_QWORD*)(v76 + 8) == *(_QWORD*)(v55 + 8))
						{
							v87 = *(_QWORD*)(v76 + 16);
							if (v87)
							{
								v88 = *(_QWORD*)(v87 + 48);
								if (v76 == v88)
									*(_QWORD*)(v87 + 48) = *(_QWORD*)(v88 + 72);
								v89 = *(_QWORD*)(v87 + 56);
								if (v76 == v89)
									*(_QWORD*)(v87 + 56) = *(_QWORD*)(v89 + 64);
								v90 = *(_QWORD*)(v76 + 64);
								if (v90)
									*(_QWORD*)(v90 + 72) = *(_QWORD*)(v76 + 72);
								v91 = *(_QWORD*)(v76 + 72);
								if (v91)
									*(_QWORD*)(v91 + 64) = *(_QWORD*)(v76 + 64);
								*(_QWORD*)(v76 + 16) = 0i64;
							}
							else
							{
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v76 + 80) + 32i64))(*(_QWORD*)(v76 + 80));
							}
							v92 = *(_QWORD*)(v55 + 56);
							if (v92)
							{
								*(_QWORD*)(v92 + 72) = v76;
								*(_QWORD*)(v76 + 64) = *(_QWORD*)(v55 + 56);
								*(_QWORD*)(v55 + 56) = v76;
							}
							else
							{
								*(_QWORD*)(v55 + 56) = v76;
								*(_QWORD*)(v55 + 48) = v76;
								*(_QWORD*)(v76 + 64) = 0i64;
							}
							*(_QWORD*)(v76 + 72) = 0i64;
							*(_QWORD*)(v76 + 16) = v55;
						}
						v93 = *(_QWORD*)(v73 + 24);
						if (v93)
						{
							v73 = *(_QWORD*)(v73 + 24);
							for (k = *(_QWORD*)(v93 + 16); k; k = *(_QWORD*)(k + 16))
								v73 = k;
						}
						else
						{
							for (m = *(_QWORD*)(v73 + 8); v73 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
								v73 = m;
							if (*(_QWORD*)(v73 + 24) != m)
								v73 = m;
						}
					} while (v73 != *(_QWORD*)(v74 + 8));
					v53 = v113;
					v42 = v114;
				}
				v1 = v115;
			}
			v96 = *((_QWORD*)v53 + 3);
			if (v96)
			{
				v53 = (int*)*((_QWORD*)v53 + 3);
				v113 = (int*)v96;
				for (n = *(_QWORD*)(v96 + 16); n; n = *(_QWORD*)(n + 16))
				{
					v53 = (int*)n;
					v113 = (int*)n;
				}
			}
			else
			{
				for (ii = *((_QWORD*)v53 + 1); v53 == *(int**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v53 = (int*)ii;
				if (*((_QWORD*)v53 + 3) != ii)
					v53 = (int*)ii;
				v113 = v53;
			}
		} while (v53 != *(int**)(v1 + 72));
	}
	v99 = v126;
	if (!v126)
	{
		v113 = 0i64;
		v99 = sub_1401A7FC0((__int64)&v117, &v113);
		if (v99 >= 0)
		{
			v102 = v113;
			v99 = sub_1401B6F30(v100, v155, v101, (__int64)v113);
			if (v99 >= 0)
			{
				if (v102)
					(*(void(__fastcall**)(int*))(*(_QWORD*)v102 + 8i64))(v102);
				v99 = 0;
			}
			else if (v102)
			{
				(*(void(__fastcall**)(int*))(*(_QWORD*)v102 + 8i64))(v102);
			}
		}
		else if (v113)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v113 + 8i64))(v113);
		}
	}
	v117 = off_140B5EB10;
	sub_1401A59A0((__int64)&v117);
	v103 = v127;
	v126 = 0;
	v127 = 0i64;
	if (v103)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v103 - 16) + 8i64))(v103 - 16);
	sub_14018B900(v128, 0);
	v128 = 0i64;
	kk = off_140B5EA18;
	for (jj = v150; v150; jj = v150)
	{
		v150 = jj - 1;
		sub_14018B900(*(_QWORD*)&v148[8 * jj - 8], 0);
	}
	v151 = 0i64;
	v152 = 0i64;
	if (v148 != &v149)
		sub_14018B900((__int64)v148, 0);
	v141 = off_140B5EA48;
	v105 = v144;
	for (kk = &off_140B5EAD8; v144; v105 = v144)
	{
		v144 = v105 - 1;
		sub_14018B900(*(_QWORD*)&v142[8 * v105 - 8], 0);
	}
	v145 = 0i64;
	v146 = 0i64;
	if (v142 != &v143)
		sub_14018B900((__int64)v142, 0);
	v141 = &off_140B5EAD8;
	v135 = off_140B5EA78;
	for (mm = v138; v138; mm = v138)
	{
		v138 = mm - 1;
		sub_14018B900(*(_QWORD*)&v136[8 * mm - 8], 0);
	}
	v139 = 0i64;
	v140 = 0i64;
	if (v136 != &v137)
		sub_14018B900((__int64)v136, 0);
	v135 = &off_140B5EAD8;
	v129 = off_140B5EAA8;
	for (nn = v132; v132; nn = v132)
	{
		v132 = nn - 1;
		sub_14018B900(*(_QWORD*)&v130[8 * nn - 8], 0);
	}
	v133 = 0i64;
	v134 = 0i64;
	if (v130 != &v131)
		sub_14018B900((__int64)v130, 0);
	v129 = &off_140B5EAD8;
	if (v127)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v127 - 16) + 8i64))(v127 - 16);
	v117 = off_140B5EDE0;
	sub_1401A59A0((__int64)&v117);
	v108 = v119;
	if (v119)
	{
		v109 = *(__int64**)(v119 + 48);
		if (&v117 == (__int64(__fastcall***)())v109)
			*(_QWORD*)(v119 + 48) = v109[9];
		v110 = *(__int64**)(v108 + 56);
		if (&v117 == (__int64(__fastcall***)())v110)
			*(_QWORD*)(v108 + 56) = v110[8];
		v111 = v124;
		if (v124)
		{
			*(_QWORD*)(v124 + 72) = v125;
			v111 = v124;
		}
		if (v125)
			*(_QWORD*)(v125 + 64) = v111;
		v119 = 0i64;
	}
	if ((v120 & 0x200) != 0)
		sub_14018B900(v121, 0);
	return v99 >= 0;
}
// 140439CC7: variable 'v100' is possibly undefined
// 140439CC7: variable 'v101' is possibly undefined
// 1409E41B4: using guessed type wchar_t aU_9[3];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A452D0: using guessed type wchar_t aXmlVersion10En[35];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B02178: using guessed type wchar_t aTutorialsXml_0[14];
// 140B02298: using guessed type wchar_t aId_8[3];
// 140B022A0: using guessed type wchar_t aPendingtutoria_0[17];
// 140B022C4: using guessed type wchar_t aId_6[3];
// 140B022D0: using guessed type wchar_t aTutorial_4[9];
// 140B022E8: using guessed type wchar_t aViewedtutorial_0[16];
// 140B02308: using guessed type wchar_t aTutorial_5[9];
// 140B0231C: using guessed type wchar_t aId_7[3];
// 140B02328: using guessed type wchar_t aCharacter_3[10];
// 140B02340: using guessed type wchar_t aI64d[6];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();
// 140438F60: using guessed type __m128i var_240[33];

