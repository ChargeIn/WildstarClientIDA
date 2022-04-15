#include "../winhttp.h"

//----- (0000000140187260) ----------------------------------------------------
__int64 __fastcall sub_140187260(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int* v3; // rbx
	_QWORD* v4; // r13
	__int64 v6; // rax
	int* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r15
	__int64 v10; // r14
	__int64 v11; // rdx
	__int64 v12; // r8
	unsigned int v13; // r12d
	__int64 v14; // r13
	__int64 v15; // rax
	__int64 v16; // r8
	__int64 v17; // rdx
	float v18; // xmm6_4
	__int64 v19; // rax
	__int64 v20; // rdi
	__int64 v21; // rsi
	__int64 v22; // rax
	int* v23; // rax
	__int64 v24; // rax
	__int64 v25; // r15
	bool v26; // zf
	__int64 v27; // rsi
	__int64 v28; // rax
	int* v29; // rax
	__int64 v30; // rax
	__int64 v31; // r15
	__int64 v32; // rsi
	__int64 v33; // rax
	int* v34; // rax
	__int64 v35; // rax
	__int64 v36; // r15
	__int64 v37; // rsi
	__int64 v38; // rax
	int* v39; // rax
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64 v48; // rcx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rsi
	__int64 v55; // rdi
	__int64 v56; // rax
	int* v57; // rax
	__int64 v58; // rdx
	__int64 v59; // r8
	_QWORD* v60; // r14
	__int64 v61; // rcx
	unsigned int v62; // r12d
	__int64 v63; // rax
	__int64 v64; // r8
	__int64 v65; // rdx
	float v66; // xmm6_4
	__int64 v67; // rdi
	__int64 v68; // r14
	__int64 v69; // rax
	int* v70; // rax
	__int64 v71; // rax
	__int64 v72; // r15
	__int64 v73; // r14
	__int64 v74; // rax
	int* v75; // rax
	__int64 v76; // rax
	__int64 v77; // r15
	__int64 v78; // r14
	__int64 v79; // rax
	int* v80; // rax
	__int64 v81; // rax
	__int64 v82; // r15
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
	__int64 v93; // rcx
	__int64 v94; // rax
	__int64 v95; // rax
	__int64 v96; // rcx
	__int64 v97; // rcx
	__int64 v98; // rax
	__int64 v99; // rsi
	__int64 v100; // rdi
	__int64 v101; // rax
	int* v102; // rax
	__int64 v103; // rdx
	__int64 v104; // r8
	__int64 v105; // rax
	unsigned int v106; // r12d
	__int64 v107; // r13
	__int64 v108; // rax
	__int64 v109; // r8
	__int64 v110; // rdx
	float v111; // xmm6_4
	__int64 v112; // rdi
	__int64 v113; // r14
	__int64 v114; // rax
	int* v115; // rax
	__int64 v116; // rax
	__int64 v117; // r15
	__int64 v118; // r14
	__int64 v119; // rax
	int* v120; // rax
	__int64 v121; // rax
	__int64 v122; // r15
	__int64 v123; // r14
	__int64 v124; // rax
	int* v125; // rax
	__int64 v126; // rax
	__int64 v127; // r15
	__int64 v128; // r14
	__int64 v129; // rax
	int* v130; // rax
	__int64 v131; // rax
	__int64 v132; // r15
	__int64 v133; // r14
	__int64 v134; // rax
	int* v135; // rax
	__int64 v136; // rax
	__int64 v137; // r15
	__int64 v138; // r14
	__int64 v139; // rax
	int* v140; // rax
	__int64 v141; // rax
	__int64 v142; // rcx
	__int64 v143; // rax
	__int64 v144; // rax
	__int64 v145; // rcx
	__int64 v146; // rcx
	__int64 v147; // rax
	__int64 v148; // rcx
	__int64 v149; // rax
	__int64 v150; // rax
	__int64 v151; // rcx
	__int64 v152; // rcx
	__int64 v153; // rax
	__int128 v154; // [rsp+20h] [rbp-E0h]
	__int128 v155; // [rsp+20h] [rbp-E0h]
	__int128 v156; // [rsp+20h] [rbp-E0h]
	__int64 v157; // [rsp+30h] [rbp-D0h]
	__int64 v158; // [rsp+38h] [rbp-C8h]
	int v161[100]; // [rsp+50h] [rbp-B0h] BYREF

	v2 = *(_QWORD*)(a2 + 8);
	v3 = *(int**)(a1 + 16);
	v4 = (_QWORD*)a2;
	v158 = v2;
	v6 = sub_1401A6C70(a2, (int*)L"ID");
	sub_1401A4C50(v6 + 32, v3);
	v7 = (int*)off_140A3FB38[*(int*)(a1 + 40)];
	v8 = sub_1401A6C70((__int64)v4, (int*)L"PlaybackType");
	sub_1401A4C50(v8 + 32, v7);
	v9 = v2 + 128;
	v157 = v2 + 128;
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 + 128) + 16i64))(v2 + 128);
	if (v10)
	{
		*(_QWORD*)(v10 + 8) = v2;
		*(_QWORD*)(v10 + 16) = 0i64;
		*(_DWORD*)(v10 + 24) = 0;
		*(_QWORD*)(v10 + 32) = 0i64;
		*(_QWORD*)(v10 + 40) = 0i64;
		*(_QWORD*)(v10 + 48) = 0i64;
		*(_QWORD*)(v10 + 56) = 0i64;
		*(_QWORD*)(v10 + 64) = 0i64;
		*(_QWORD*)(v10 + 72) = 0i64;
		*(_QWORD*)(v10 + 80) = 0i64;
		*(_QWORD*)v10 = off_140B5EBA0;
		*(_DWORD*)(v10 + 88) = 0;
		*(_QWORD*)(v10 + 96) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	*(_QWORD*)(v10 + 80) = v9;
	sub_1401A4C50(v10 + 24, (int*)&word_140A3FAB8);
	v13 = 0;
	if ((unsigned int)((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 5))
	{
		v14 = a1 + 48;
		while (1)
		{
			v15 = sub_140188E00(v14, v11, v12);
			v16 = *(_QWORD*)(v15 + 8);
			if (v13 >= (unsigned __int64)((*(_QWORD*)(v15 + 16) - v16) >> 5))
				return 2147500037i64;
			v17 = 32i64 * v13;
			v18 = *(float*)(v17 + v16 + 16);
			v154 = *(_OWORD*)(v17 + v16);
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
			v20 = v19;
			if (v19)
			{
				*(_QWORD*)(v19 + 8) = v2;
				*(_QWORD*)(v19 + 16) = 0i64;
				*(_DWORD*)(v19 + 24) = 0;
				*(_QWORD*)(v19 + 32) = 0i64;
				*(_QWORD*)(v19 + 40) = 0i64;
				*(_QWORD*)(v19 + 48) = 0i64;
				*(_QWORD*)(v19 + 56) = 0i64;
				*(_QWORD*)(v19 + 64) = 0i64;
				*(_QWORD*)(v19 + 72) = 0i64;
				*(_QWORD*)(v19 + 80) = 0i64;
				*(_DWORD*)(v19 + 88) = 0;
				*(_QWORD*)v19 = off_140B5EBA0;
				*(_QWORD*)(v19 + 96) = 0i64;
			}
			else
			{
				v20 = 0i64;
			}
			*(_QWORD*)(v20 + 80) = v9;
			if ((*(_DWORD*)(v20 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v20 + 32), 0);
			*(_DWORD*)(v20 + 24) = 0;
			*(_QWORD*)(v20 + 32) = 0i64;
			*(_QWORD*)(v20 + 40) = 0i64;
			v21 = 0i64;
			do
				++v21;
			while (word_140A3FAD0[v21]);
			v22 = 2 * (v21 + 1);
			if (!is_mul_ok(v21 + 1, 2ui64))
				v22 = -1i64;
			v23 = sub_14018B280(v22, 0);
			*(_QWORD*)(v20 + 32) = v23;
			sub_1407DB590(v23, (int*)word_140A3FAD0, 2 * v21 + 2);
			v24 = *(_QWORD*)(v20 + 32);
			*(_DWORD*)(v20 + 24) = 512;
			*(_QWORD*)(v20 + 40) = v24 + 2 * v21;
			v25 = sub_1401A6C70(v20, (int*)L"Time");
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", v18);
			if ((*(_DWORD*)(v25 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v25 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v25 + 32) = 0;
			*(_QWORD*)(v25 + 40) = 0i64;
			*(_QWORD*)(v25 + 48) = 0i64;
			v27 = 0i64;
			if (!v26)
			{
				do
					++v27;
				while (*((_WORD*)v161 + v27));
			}
			v28 = 2 * (v27 + 1);
			if (!is_mul_ok(v27 + 1, 2ui64))
				v28 = -1i64;
			v29 = sub_14018B280(v28, 0);
			*(_QWORD*)(v25 + 40) = v29;
			sub_1407DB590(v29, v161, 2 * v27 + 2);
			v30 = *(_QWORD*)(v25 + 40);
			*(_DWORD*)(v25 + 32) = 512;
			*(_QWORD*)(v25 + 48) = v30 + 2 * v27;
			v31 = sub_1401A6C70(v20, &dword_1409E12F4);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *(float*)&v154);
			if ((*(_DWORD*)(v31 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v31 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v31 + 32) = 0;
			*(_QWORD*)(v31 + 40) = 0i64;
			*(_QWORD*)(v31 + 48) = 0i64;
			v32 = 0i64;
			if (!v26)
			{
				do
					++v32;
				while (*((_WORD*)v161 + v32));
			}
			v33 = 2 * (v32 + 1);
			if (!is_mul_ok(v32 + 1, 2ui64))
				v33 = -1i64;
			v34 = sub_14018B280(v33, 0);
			*(_QWORD*)(v31 + 40) = v34;
			sub_1407DB590(v34, v161, 2 * v32 + 2);
			v35 = *(_QWORD*)(v31 + 40);
			*(_DWORD*)(v31 + 32) = 512;
			*(_QWORD*)(v31 + 48) = v35 + 2 * v32;
			v36 = sub_1401A6C70(v20, &dword_1409E1414);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *((float*)&v154 + 1));
			if ((*(_DWORD*)(v36 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v36 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v36 + 32) = 0;
			*(_QWORD*)(v36 + 40) = 0i64;
			*(_QWORD*)(v36 + 48) = 0i64;
			v37 = 0i64;
			if (!v26)
			{
				do
					++v37;
				while (*((_WORD*)v161 + v37));
			}
			v38 = 2 * (v37 + 1);
			if (!is_mul_ok(v37 + 1, 2ui64))
				v38 = -1i64;
			v39 = sub_14018B280(v38, 0);
			*(_QWORD*)(v36 + 40) = v39;
			sub_1407DB590(v39, v161, 2 * v37 + 2);
			v40 = *(_QWORD*)(v36 + 40);
			*(_DWORD*)(v36 + 32) = 512;
			*(_QWORD*)(v36 + 48) = v40 + 2 * v37;
			if (*(_QWORD*)(v20 + 8) == *(_QWORD*)(v10 + 8))
			{
				v41 = *(_QWORD*)(v20 + 16);
				if (v41)
				{
					v42 = *(_QWORD*)(v41 + 48);
					if (v20 == v42)
						*(_QWORD*)(v41 + 48) = *(_QWORD*)(v42 + 72);
					v43 = *(_QWORD*)(v41 + 56);
					if (v20 == v43)
						*(_QWORD*)(v41 + 56) = *(_QWORD*)(v43 + 64);
					v44 = *(_QWORD*)(v20 + 64);
					if (v44)
						*(_QWORD*)(v44 + 72) = *(_QWORD*)(v20 + 72);
					v45 = *(_QWORD*)(v20 + 72);
					if (v45)
						*(_QWORD*)(v45 + 64) = *(_QWORD*)(v20 + 64);
					*(_QWORD*)(v20 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v20 + 80) + 32i64))(*(_QWORD*)(v20 + 80));
				}
				v46 = *(_QWORD*)(v10 + 56);
				if (v46)
				{
					*(_QWORD*)(v46 + 72) = v20;
					*(_QWORD*)(v20 + 64) = *(_QWORD*)(v10 + 56);
					*(_QWORD*)(v10 + 56) = v20;
				}
				else
				{
					*(_QWORD*)(v10 + 56) = v20;
					*(_QWORD*)(v10 + 48) = v20;
					*(_QWORD*)(v20 + 64) = 0i64;
				}
				*(_QWORD*)(v20 + 72) = 0i64;
				*(_QWORD*)(v20 + 16) = v10;
			}
			v9 = v157;
			if (++v13 >= (unsigned int)((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 5))
			{
				v4 = (_QWORD*)a2;
				break;
			}
			v2 = v158;
		}
	}
	if (*(_QWORD*)(v10 + 8) == v4[1])
	{
		v48 = *(_QWORD*)(v10 + 16);
		if (v48)
		{
			v49 = *(_QWORD*)(v48 + 48);
			if (v10 == v49)
				*(_QWORD*)(v48 + 48) = *(_QWORD*)(v49 + 72);
			v50 = *(_QWORD*)(v48 + 56);
			if (v10 == v50)
				*(_QWORD*)(v48 + 56) = *(_QWORD*)(v50 + 64);
			v51 = *(_QWORD*)(v10 + 64);
			if (v51)
				*(_QWORD*)(v51 + 72) = *(_QWORD*)(v10 + 72);
			v52 = *(_QWORD*)(v10 + 72);
			if (v52)
				*(_QWORD*)(v52 + 64) = *(_QWORD*)(v10 + 64);
			*(_QWORD*)(v10 + 16) = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 80) + 32i64))(*(_QWORD*)(v10 + 80));
		}
		v53 = v4[7];
		if (v53)
		{
			*(_QWORD*)(v53 + 72) = v10;
			*(_QWORD*)(v10 + 64) = v4[7];
			v4[7] = v10;
		}
		else
		{
			v4[7] = v10;
			v4[6] = v10;
			*(_QWORD*)(v10 + 64) = 0i64;
		}
		*(_QWORD*)(v10 + 72) = 0i64;
		*(_QWORD*)(v10 + 16) = v4;
	}
	v54 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	if (v54)
	{
		*(_QWORD*)(v54 + 16) = 0i64;
		*(_QWORD*)(v54 + 8) = v158;
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
		v54 = 0i64;
	}
	*(_QWORD*)(v54 + 80) = v9;
	if ((*(_DWORD*)(v54 + 24) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(v54 + 32), 0);
	*(_DWORD*)(v54 + 24) = 0;
	*(_QWORD*)(v54 + 32) = 0i64;
	*(_QWORD*)(v54 + 40) = 0i64;
	v55 = 0i64;
	do
		++v55;
	while (word_140A3FAA0[v55]);
	v56 = 2 * (v55 + 1);
	if (!is_mul_ok(v55 + 1, 2ui64))
		v56 = -1i64;
	v57 = sub_14018B280(v56, 0);
	*(_QWORD*)(v54 + 32) = v57;
	sub_1407DB590(v57, (int*)word_140A3FAA0, 2 * v55 + 2);
	v60 = (_QWORD*)a1;
	v61 = *(_QWORD*)(v54 + 32) + 2 * v55;
	*(_DWORD*)(v54 + 24) = 512;
	v62 = 0;
	*(_QWORD*)(v54 + 40) = v61;
	if ((unsigned int)((__int64)(v60[16] - v60[15]) >> 5))
	{
		while (1)
		{
			v63 = sub_140188E00(a1 + 104, v58, v59);
			v64 = *(_QWORD*)(v63 + 8);
			if (v62 >= (unsigned __int64)((*(_QWORD*)(v63 + 16) - v64) >> 5))
				return 2147500037i64;
			v65 = 32i64 * v62;
			v66 = *(float*)(v65 + v64 + 16);
			v155 = *(_OWORD*)(v65 + v64);
			v67 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
			if (v67)
			{
				*(_QWORD*)(v67 + 16) = 0i64;
				*(_QWORD*)(v67 + 8) = v158;
				*(_DWORD*)(v67 + 24) = 0;
				*(_QWORD*)(v67 + 32) = 0i64;
				*(_QWORD*)(v67 + 40) = 0i64;
				*(_QWORD*)(v67 + 48) = 0i64;
				*(_QWORD*)(v67 + 56) = 0i64;
				*(_QWORD*)(v67 + 64) = 0i64;
				*(_QWORD*)(v67 + 72) = 0i64;
				*(_QWORD*)v67 = off_140B5EBA0;
				*(_QWORD*)(v67 + 80) = 0i64;
				*(_DWORD*)(v67 + 88) = 0;
				*(_QWORD*)(v67 + 96) = 0i64;
			}
			else
			{
				v67 = 0i64;
			}
			*(_QWORD*)(v67 + 80) = v9;
			if ((*(_DWORD*)(v67 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v67 + 32), 0);
			*(_DWORD*)(v67 + 24) = 0;
			*(_QWORD*)(v67 + 32) = 0i64;
			*(_QWORD*)(v67 + 40) = 0i64;
			v68 = 0i64;
			do
				++v68;
			while (word_140A3FA78[v68]);
			v69 = 2 * (v68 + 1);
			if (!is_mul_ok(v68 + 1, 2ui64))
				v69 = -1i64;
			v70 = sub_14018B280(v69, 0);
			*(_QWORD*)(v67 + 32) = v70;
			sub_1407DB590(v70, (int*)word_140A3FA78, 2 * v68 + 2);
			v71 = *(_QWORD*)(v67 + 32);
			*(_DWORD*)(v67 + 24) = 512;
			*(_QWORD*)(v67 + 40) = v71 + 2 * v68;
			v72 = sub_1401A6C70(v67, (int*)L"Time");
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", v66);
			if ((*(_DWORD*)(v72 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v72 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v72 + 32) = 0;
			*(_QWORD*)(v72 + 40) = 0i64;
			*(_QWORD*)(v72 + 48) = 0i64;
			v73 = 0i64;
			if (!v26)
			{
				do
					++v73;
				while (*((_WORD*)v161 + v73));
			}
			v74 = 2 * (v73 + 1);
			if (!is_mul_ok(v73 + 1, 2ui64))
				v74 = -1i64;
			v75 = sub_14018B280(v74, 0);
			*(_QWORD*)(v72 + 40) = v75;
			sub_1407DB590(v75, v161, 2 * v73 + 2);
			v76 = *(_QWORD*)(v72 + 40);
			*(_DWORD*)(v72 + 32) = 512;
			*(_QWORD*)(v72 + 48) = v76 + 2 * v73;
			v77 = sub_1401A6C70(v67, &dword_1409E138C);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *(float*)&v155);
			if ((*(_DWORD*)(v77 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v77 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v77 + 32) = 0;
			*(_QWORD*)(v77 + 40) = 0i64;
			*(_QWORD*)(v77 + 48) = 0i64;
			v78 = 0i64;
			if (!v26)
			{
				do
					++v78;
				while (*((_WORD*)v161 + v78));
			}
			v79 = 2 * (v78 + 1);
			if (!is_mul_ok(v78 + 1, 2ui64))
				v79 = -1i64;
			v80 = sub_14018B280(v79, 0);
			*(_QWORD*)(v77 + 40) = v80;
			sub_1407DB590(v80, v161, 2 * v78 + 2);
			v81 = *(_QWORD*)(v77 + 40);
			*(_DWORD*)(v77 + 32) = 512;
			*(_QWORD*)(v77 + 48) = v81 + 2 * v78;
			v82 = sub_1401A6C70(v67, &dword_1409E126C);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *((float*)&v155 + 1));
			if ((*(_DWORD*)(v82 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v82 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v82 + 32) = 0;
			*(_QWORD*)(v82 + 40) = 0i64;
			*(_QWORD*)(v82 + 48) = 0i64;
			v83 = 0i64;
			if (!v26)
			{
				do
					++v83;
				while (*((_WORD*)v161 + v83));
			}
			v84 = 2 * (v83 + 1);
			if (!is_mul_ok(v83 + 1, 2ui64))
				v84 = -1i64;
			v85 = sub_14018B280(v84, 0);
			*(_QWORD*)(v82 + 40) = v85;
			sub_1407DB590(v85, v161, 2 * v83 + 2);
			v86 = *(_QWORD*)(v82 + 40);
			*(_DWORD*)(v82 + 32) = 512;
			*(_QWORD*)(v82 + 48) = v86 + 2 * v83;
			if (*(_QWORD*)(v67 + 8) == *(_QWORD*)(v54 + 8))
			{
				v87 = *(_QWORD*)(v67 + 16);
				if (v87)
				{
					v88 = *(_QWORD*)(v87 + 48);
					if (v67 == v88)
						*(_QWORD*)(v87 + 48) = *(_QWORD*)(v88 + 72);
					v89 = *(_QWORD*)(v87 + 56);
					if (v67 == v89)
						*(_QWORD*)(v87 + 56) = *(_QWORD*)(v89 + 64);
					v90 = *(_QWORD*)(v67 + 64);
					if (v90)
						*(_QWORD*)(v90 + 72) = *(_QWORD*)(v67 + 72);
					v91 = *(_QWORD*)(v67 + 72);
					if (v91)
						*(_QWORD*)(v91 + 64) = *(_QWORD*)(v67 + 64);
					*(_QWORD*)(v67 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v67 + 80) + 32i64))(*(_QWORD*)(v67 + 80));
				}
				v92 = *(_QWORD*)(v54 + 56);
				if (v92)
				{
					*(_QWORD*)(v92 + 72) = v67;
					*(_QWORD*)(v67 + 64) = *(_QWORD*)(v54 + 56);
					*(_QWORD*)(v54 + 56) = v67;
				}
				else
				{
					*(_QWORD*)(v54 + 56) = v67;
					*(_QWORD*)(v54 + 48) = v67;
					*(_QWORD*)(v67 + 64) = 0i64;
				}
				*(_QWORD*)(v67 + 72) = 0i64;
				*(_QWORD*)(v67 + 16) = v54;
			}
			v60 = (_QWORD*)a1;
			v9 = v157;
			if (++v62 >= (unsigned int)((__int64)(*(_QWORD*)(a1 + 128) - *(_QWORD*)(a1 + 120)) >> 5))
			{
				v4 = (_QWORD*)a2;
				break;
			}
		}
	}
	if (*(_QWORD*)(v54 + 8) == v4[1])
	{
		v93 = *(_QWORD*)(v54 + 16);
		if (v93)
		{
			v94 = *(_QWORD*)(v93 + 48);
			if (v54 == v94)
				*(_QWORD*)(v93 + 48) = *(_QWORD*)(v94 + 72);
			v95 = *(_QWORD*)(v93 + 56);
			if (v54 == v95)
				*(_QWORD*)(v93 + 56) = *(_QWORD*)(v95 + 64);
			v96 = *(_QWORD*)(v54 + 64);
			if (v96)
				*(_QWORD*)(v96 + 72) = *(_QWORD*)(v54 + 72);
			v97 = *(_QWORD*)(v54 + 72);
			if (v97)
				*(_QWORD*)(v97 + 64) = *(_QWORD*)(v54 + 64);
			*(_QWORD*)(v54 + 16) = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v54 + 80) + 32i64))(*(_QWORD*)(v54 + 80));
		}
		v98 = v4[7];
		if (v98)
		{
			*(_QWORD*)(v98 + 72) = v54;
			*(_QWORD*)(v54 + 64) = v4[7];
			v4[7] = v54;
		}
		else
		{
			v4[7] = v54;
			v4[6] = v54;
			*(_QWORD*)(v54 + 64) = 0i64;
		}
		*(_QWORD*)(v54 + 72) = 0i64;
		*(_QWORD*)(v54 + 16) = v4;
	}
	v99 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	if (v99)
	{
		*(_QWORD*)(v99 + 16) = 0i64;
		*(_QWORD*)(v99 + 8) = v158;
		*(_DWORD*)(v99 + 24) = 0;
		*(_QWORD*)(v99 + 32) = 0i64;
		*(_QWORD*)(v99 + 40) = 0i64;
		*(_QWORD*)(v99 + 48) = 0i64;
		*(_QWORD*)(v99 + 56) = 0i64;
		*(_QWORD*)(v99 + 64) = 0i64;
		*(_QWORD*)(v99 + 72) = 0i64;
		*(_QWORD*)v99 = off_140B5EBA0;
		*(_QWORD*)(v99 + 80) = 0i64;
		*(_DWORD*)(v99 + 88) = 0;
		*(_QWORD*)(v99 + 96) = 0i64;
	}
	else
	{
		v99 = 0i64;
	}
	*(_QWORD*)(v99 + 80) = v9;
	if ((*(_DWORD*)(v99 + 24) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(v99 + 32), 0);
	*(_DWORD*)(v99 + 24) = 0;
	*(_QWORD*)(v99 + 32) = 0i64;
	*(_QWORD*)(v99 + 40) = 0i64;
	v100 = 0i64;
	do
		++v100;
	while (word_140A3FA78[v100]);
	v101 = 2 * (v100 + 1);
	if (!is_mul_ok(v100 + 1, 2ui64))
		v101 = -1i64;
	v102 = sub_14018B280(v101, 0);
	*(_QWORD*)(v99 + 32) = v102;
	sub_1407DB590(v102, (int*)word_140A3FA78, 2 * v100 + 2);
	v105 = *(_QWORD*)(v99 + 32);
	*(_DWORD*)(v99 + 24) = 512;
	v106 = 0;
	*(_QWORD*)(v99 + 40) = v105 + 2 * v100;
	if ((unsigned int)((__int64)(v60[23] - v60[22]) >> 5))
	{
		v107 = (__int64)(v60 + 20);
		while (1)
		{
			v108 = sub_140188E00(v107, v103, v104);
			v109 = *(_QWORD*)(v108 + 8);
			if (v106 >= (unsigned __int64)((*(_QWORD*)(v108 + 16) - v109) >> 5))
				return 2147500037i64;
			v110 = 32i64 * v106;
			v111 = *(float*)(v110 + v109 + 16);
			v156 = *(_OWORD*)(v110 + v109);
			v112 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
			if (v112)
			{
				*(_QWORD*)(v112 + 16) = 0i64;
				*(_QWORD*)(v112 + 8) = v158;
				*(_DWORD*)(v112 + 24) = 0;
				*(_QWORD*)(v112 + 32) = 0i64;
				*(_QWORD*)(v112 + 40) = 0i64;
				*(_QWORD*)(v112 + 48) = 0i64;
				*(_QWORD*)(v112 + 56) = 0i64;
				*(_QWORD*)(v112 + 64) = 0i64;
				*(_QWORD*)(v112 + 72) = 0i64;
				*(_QWORD*)v112 = off_140B5EBA0;
				*(_QWORD*)(v112 + 80) = 0i64;
				*(_DWORD*)(v112 + 88) = 0;
				*(_QWORD*)(v112 + 96) = 0i64;
			}
			else
			{
				v112 = 0i64;
			}
			*(_QWORD*)(v112 + 80) = v9;
			if ((*(_DWORD*)(v112 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v112 + 32), 0);
			*(_DWORD*)(v112 + 24) = 0;
			*(_QWORD*)(v112 + 32) = 0i64;
			*(_QWORD*)(v112 + 40) = 0i64;
			v113 = 0i64;
			do
				++v113;
			while (word_140A3FA60[v113]);
			v114 = 2 * (v113 + 1);
			if (!is_mul_ok(v113 + 1, 2ui64))
				v114 = -1i64;
			v115 = sub_14018B280(v114, 0);
			*(_QWORD*)(v112 + 32) = v115;
			sub_1407DB590(v115, (int*)word_140A3FA60, 2 * v113 + 2);
			v116 = *(_QWORD*)(v112 + 32);
			*(_DWORD*)(v112 + 24) = 512;
			*(_QWORD*)(v112 + 40) = v116 + 2 * v113;
			v117 = sub_1401A6C70(v112, (int*)L"Time");
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", v111);
			if ((*(_DWORD*)(v117 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v117 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v117 + 32) = 0;
			*(_QWORD*)(v117 + 40) = 0i64;
			*(_QWORD*)(v117 + 48) = 0i64;
			v118 = 0i64;
			if (!v26)
			{
				do
					++v118;
				while (*((_WORD*)v161 + v118));
			}
			v119 = 2 * (v118 + 1);
			if (!is_mul_ok(v118 + 1, 2ui64))
				v119 = -1i64;
			v120 = sub_14018B280(v119, 0);
			*(_QWORD*)(v117 + 40) = v120;
			sub_1407DB590(v120, v161, 2 * v118 + 2);
			v121 = *(_QWORD*)(v117 + 40);
			*(_DWORD*)(v117 + 32) = 512;
			*(_QWORD*)(v117 + 48) = v121 + 2 * v118;
			v122 = sub_1401A6C70(v112, &dword_1409E1134);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *(float*)&v156);
			if ((*(_DWORD*)(v122 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v122 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v122 + 32) = 0;
			*(_QWORD*)(v122 + 40) = 0i64;
			*(_QWORD*)(v122 + 48) = 0i64;
			v123 = 0i64;
			if (!v26)
			{
				do
					++v123;
				while (*((_WORD*)v161 + v123));
			}
			v124 = 2 * (v123 + 1);
			if (!is_mul_ok(v123 + 1, 2ui64))
				v124 = -1i64;
			v125 = sub_14018B280(v124, 0);
			*(_QWORD*)(v122 + 40) = v125;
			sub_1407DB590(v125, v161, 2 * v123 + 2);
			v126 = *(_QWORD*)(v122 + 40);
			*(_DWORD*)(v122 + 32) = 512;
			*(_QWORD*)(v122 + 48) = v126 + 2 * v123;
			v127 = sub_1401A6C70(v112, &dword_1409E12CC);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *((float*)&v156 + 1));
			if ((*(_DWORD*)(v127 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v127 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v127 + 32) = 0;
			*(_QWORD*)(v127 + 40) = 0i64;
			*(_QWORD*)(v127 + 48) = 0i64;
			v128 = 0i64;
			if (!v26)
			{
				do
					++v128;
				while (*((_WORD*)v161 + v128));
			}
			v129 = 2 * (v128 + 1);
			if (!is_mul_ok(v128 + 1, 2ui64))
				v129 = -1i64;
			v130 = sub_14018B280(v129, 0);
			*(_QWORD*)(v127 + 40) = v130;
			sub_1407DB590(v130, v161, 2 * v128 + 2);
			v131 = *(_QWORD*)(v127 + 40);
			*(_DWORD*)(v127 + 32) = 512;
			*(_QWORD*)(v127 + 48) = v131 + 2 * v128;
			v132 = sub_1401A6C70(v112, &dword_1409E12A4);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *((float*)&v156 + 2));
			if ((*(_DWORD*)(v132 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v132 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v132 + 32) = 0;
			*(_QWORD*)(v132 + 40) = 0i64;
			*(_QWORD*)(v132 + 48) = 0i64;
			v133 = 0i64;
			if (!v26)
			{
				do
					++v133;
				while (*((_WORD*)v161 + v133));
			}
			v134 = 2 * (v133 + 1);
			if (!is_mul_ok(v133 + 1, 2ui64))
				v134 = -1i64;
			v135 = sub_14018B280(v134, 0);
			*(_QWORD*)(v132 + 40) = v135;
			sub_1407DB590(v135, v161, 2 * v133 + 2);
			v136 = *(_QWORD*)(v132 + 40);
			*(_DWORD*)(v132 + 32) = 512;
			*(_QWORD*)(v132 + 48) = v136 + 2 * v133;
			v137 = sub_1401A6C70(v112, &dword_1409E144C);
			sub_1401A4C20(v161, 0xC8ui64, (__int64)L"%.8g", *((float*)&v156 + 3));
			if ((*(_DWORD*)(v137 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v137 + 40), 0);
			v26 = LOWORD(v161[0]) == 0;
			*(_DWORD*)(v137 + 32) = 0;
			*(_QWORD*)(v137 + 40) = 0i64;
			*(_QWORD*)(v137 + 48) = 0i64;
			v138 = 0i64;
			if (!v26)
			{
				do
					++v138;
				while (*((_WORD*)v161 + v138));
			}
			v139 = 2 * (v138 + 1);
			if (!is_mul_ok(v138 + 1, 2ui64))
				v139 = -1i64;
			v140 = sub_14018B280(v139, 0);
			*(_QWORD*)(v137 + 40) = v140;
			sub_1407DB590(v140, v161, 2 * v138 + 2);
			v141 = *(_QWORD*)(v137 + 40);
			*(_DWORD*)(v137 + 32) = 512;
			*(_QWORD*)(v137 + 48) = v141 + 2 * v138;
			if (*(_QWORD*)(v112 + 8) == *(_QWORD*)(v99 + 8))
			{
				v142 = *(_QWORD*)(v112 + 16);
				if (v142)
				{
					v143 = *(_QWORD*)(v142 + 48);
					if (v112 == v143)
						*(_QWORD*)(v142 + 48) = *(_QWORD*)(v143 + 72);
					v144 = *(_QWORD*)(v142 + 56);
					if (v112 == v144)
						*(_QWORD*)(v142 + 56) = *(_QWORD*)(v144 + 64);
					v145 = *(_QWORD*)(v112 + 64);
					if (v145)
						*(_QWORD*)(v145 + 72) = *(_QWORD*)(v112 + 72);
					v146 = *(_QWORD*)(v112 + 72);
					if (v146)
						*(_QWORD*)(v146 + 64) = *(_QWORD*)(v112 + 64);
					*(_QWORD*)(v112 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v112 + 80) + 32i64))(*(_QWORD*)(v112 + 80));
				}
				v147 = *(_QWORD*)(v99 + 56);
				if (v147)
				{
					*(_QWORD*)(v147 + 72) = v112;
					*(_QWORD*)(v112 + 64) = *(_QWORD*)(v99 + 56);
					*(_QWORD*)(v99 + 56) = v112;
				}
				else
				{
					*(_QWORD*)(v99 + 56) = v112;
					*(_QWORD*)(v99 + 48) = v112;
					*(_QWORD*)(v112 + 64) = 0i64;
				}
				*(_QWORD*)(v112 + 72) = 0i64;
				*(_QWORD*)(v112 + 16) = v99;
			}
			if (++v106 >= (unsigned int)((__int64)(*(_QWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176)) >> 5))
			{
				v4 = (_QWORD*)a2;
				break;
			}
			v9 = v157;
		}
	}
	if (*(_QWORD*)(v99 + 8) == v4[1])
	{
		v148 = *(_QWORD*)(v99 + 16);
		if (v148)
		{
			v149 = *(_QWORD*)(v148 + 48);
			if (v99 == v149)
				*(_QWORD*)(v148 + 48) = *(_QWORD*)(v149 + 72);
			v150 = *(_QWORD*)(v148 + 56);
			if (v99 == v150)
				*(_QWORD*)(v148 + 56) = *(_QWORD*)(v150 + 64);
			v151 = *(_QWORD*)(v99 + 64);
			if (v151)
				*(_QWORD*)(v151 + 72) = *(_QWORD*)(v99 + 72);
			v152 = *(_QWORD*)(v99 + 72);
			if (v152)
				*(_QWORD*)(v152 + 64) = *(_QWORD*)(v99 + 64);
			*(_QWORD*)(v99 + 16) = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v99 + 80) + 32i64))(*(_QWORD*)(v99 + 80));
		}
		v153 = v4[7];
		if (v153)
		{
			*(_QWORD*)(v153 + 72) = v99;
			*(_QWORD*)(v99 + 64) = v4[7];
			v4[7] = v99;
		}
		else
		{
			v4[7] = v99;
			v4[6] = v99;
			*(_QWORD*)(v99 + 64) = 0i64;
		}
		*(_QWORD*)(v99 + 72) = 0i64;
		*(_QWORD*)(v99 + 16) = v4;
	}
	return 0i64;
}
// 140187393: variable 'v11' is possibly undefined
// 140187393: variable 'v12' is possibly undefined
// 140187963: variable 'v58' is possibly undefined
// 140187963: variable 'v59' is possibly undefined
// 140187F33: variable 'v103' is possibly undefined
// 140187F33: variable 'v104' is possibly undefined
// 1409E1134: using guessed type int dword_1409E1134;
// 1409E126C: using guessed type int dword_1409E126C;
// 1409E12A4: using guessed type int dword_1409E12A4;
// 1409E12CC: using guessed type int dword_1409E12CC;
// 1409E12F4: using guessed type int dword_1409E12F4;
// 1409E138C: using guessed type int dword_1409E138C;
// 1409E1414: using guessed type int dword_1409E1414;
// 1409E144C: using guessed type int dword_1409E144C;
// 1409E1AB4: using guessed type wchar_t aId_1[3];
// 140A3FA18: using guessed type wchar_t aPlaybacktype[13];
// 140A3FA60: using guessed type __int16 word_140A3FA60[];
// 140A3FA78: using guessed type __int16 word_140A3FA78[];
// 140A3FA90: using guessed type wchar_t aTime_1[5];
// 140A3FAA0: using guessed type __int16 word_140A3FAA0[];
// 140A3FAB8: using guessed type __int16 word_140A3FAB8;
// 140A3FAD0: using guessed type __int16 word_140A3FAD0[];
// 140A3FB38: using guessed type wchar_t *off_140A3FB38[3];
// 140A45280: using guessed type wchar_t a8g[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

