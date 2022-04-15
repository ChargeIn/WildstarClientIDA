//----- (0000000140101810) ----------------------------------------------------
unsigned __int64 __fastcall sub_140101810(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	int* v3; // rbx
	__int64 v5; // r14
	unsigned int v6; // edi
	__int64 v7; // rax
	int* v8; // rdx
	__int64 v9; // rbx
	int* v10; // r12
	__int64 v11; // rcx
	__int64 v12; // r8
	unsigned __int64 result; // rax
	_QWORD* v14; // rbx
	__int64 v15; // rdi
	_DWORD* v16; // r13
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rsi
	__int64 v20; // rbx
	__int64 v21; // rax
	int* v22; // rax
	__int64 v23; // rax
	int* v24; // rdi
	bool v25; // zf
	int* v26; // r14
	__int64 v27; // rax
	__int64 v28; // rbx
	unsigned __int64 v29; // rbx
	char* v30; // r15
	int* v31; // rdi
	int* v32; // rcx
	__int64 v33; // rax
	__int64 v34; // r14
	__int64 v35; // rax
	int* v36; // r12
	__int64 v37; // rbx
	__int64* v38; // rax
	int* v39; // rdx
	__int64 v40; // rax
	char* v41; // rbx
	char* v42; // rdi
	unsigned __int64 v43; // rcx
	int* v44; // rcx
	signed __int64 v45; // rbx
	__int64 v46; // rcx
	__int64 v47; // rax
	unsigned int* v48; // r15
	int** v49; // r14
	__int64 v50; // rdi
	__int64 v51; // rbx
	__int64 v52; // rax
	int* v53; // rax
	__int64 v54; // r13
	unsigned int* v55; // r15
	int** v56; // r14
	__int64 v57; // rdi
	__int64 v58; // rbx
	__int64 v59; // rax
	int* v60; // rax
	__int64 v61; // r12
	__int64 v62; // rdi
	__int64 v63; // rbx
	__int64 v64; // rax
	int* v65; // rax
	__int64 v66; // rax
	unsigned int v67; // ebx
	__int64 v68; // rdi
	__int64 v69; // rbx
	__int64 v70; // rax
	int* v71; // rax
	__int64 v72; // rax
	unsigned int v73; // ebx
	__int64 v74; // rdi
	__int64 v75; // rbx
	__int64 v76; // rax
	int* v77; // rax
	__int64 v78; // rax
	__int64 v79; // rax
	int* v80; // r15
	unsigned __int64 v81; // rbx
	__int64 v82; // r8
	__int64 v83; // r9
	__int64 v84; // rdx
	int v85; // r10d
	__m128* v86; // rcx
	__m128i v87; // xmm1
	__m128i v88; // xmm1
	__int64 v89; // rax
	int* v90; // r14
	unsigned __int64 v91; // rbx
	__int64 v92; // r8
	__int64 v93; // r9
	__int64 v94; // rdx
	int v95; // r10d
	__m128* v96; // rcx
	__m128i v97; // xmm1
	__m128i v98; // xmm1
	__int64* v99; // rax
	__int64 v100; // rax
	__int64 v101; // rdi
	__int64 v102; // rbx
	__int64 v103; // rax
	int* v104; // rax
	__int64 v105; // rax
	__int64 v106; // rdi
	__int64 v107; // rbx
	__int64 v108; // rax
	int* v109; // rax
	__int64 v110; // rax
	float v111; // xmm6_4
	float v112; // xmm6_4
	__int64 v113; // rdi
	__int64 v114; // rbx
	__int64 v115; // rax
	int* v116; // rax
	__int64 v117; // rax
	float v118; // xmm6_4
	float v119; // xmm6_4
	__int64 v120; // rdi
	__int64 v121; // rbx
	__int64 v122; // rax
	int* v123; // rax
	__int64 v124; // rax
	__int64 v125; // rcx
	__int64 v126; // rax
	__int64 v127; // rax
	__int64 v128; // rcx
	__int64 v129; // rcx
	__int64 v130; // rax
	__int64 v131; // rcx
	int* v132; // [rsp+20h] [rbp-E0h] BYREF
	int v133; // [rsp+28h] [rbp-D8h]
	_QWORD* v134; // [rsp+30h] [rbp-D0h]
	__int64 v135; // [rsp+38h] [rbp-C8h]
	__int64 v136; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int16* v137; // [rsp+48h] [rbp-B8h]
	__int64 v138; // [rsp+50h] [rbp-B0h]
	__int64 v139; // [rsp+58h] [rbp-A8h]
	__int64 v140; // [rsp+60h] [rbp-A0h]
	_DWORD* v141; // [rsp+68h] [rbp-98h]
	__int64 v142; // [rsp+70h] [rbp-90h] BYREF
	__int64 v143; // [rsp+78h] [rbp-88h] BYREF
	int* v144; // [rsp+80h] [rbp-80h]
	__int64 v145; // [rsp+98h] [rbp-68h] BYREF
	int* v146; // [rsp+A0h] [rbp-60h]
	int v147[6]; // [rsp+B8h] [rbp-48h] BYREF
	int v148[8]; // [rsp+D0h] [rbp-30h] BYREF
	int v149[100]; // [rsp+F0h] [rbp-10h] BYREF

	v2 = *(unsigned __int8*)(a1 + 116);
	v3 = *(int**)(a1 + 32);
	v134 = (_QWORD*)a2;
	v5 = a1;
	v140 = a1;
	v6 = (v2 >> 1) & 1;
	v7 = sub_1401A6C70(a2, (int*)L"Name");
	v8 = (int*)&word_140B7B704;
	if (v3)
		v8 = v3;
	sub_1401A4C50(v7 + 32, v8);
	v9 = sub_1401A6C70(a2, (int*)L"Cycle");
	sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", v6);
	sub_1401A4C50(v9 + 32, v149);
	v10 = 0i64;
	v11 = *(_QWORD*)(v5 + 64) - *(_QWORD*)(v5 + 56);
	v133 = 0;
	v12 = 0i64;
	v135 = 0i64;
	result = (unsigned __int64)((unsigned __int128)(v11 * (__int128)0x6BCA1AF286BCA1Bi64) >> 64) >> 63;
	if ((int)(v11 / 304) > 0)
	{
		v14 = (_QWORD*)a2;
		do
		{
			v15 = v14[1];
			v16 = (_DWORD*)(*(_QWORD*)(v5 + 56) + 304 * v12);
			v17 = *(_QWORD*)(v15 + 128);
			v141 = v16;
			v18 = (*(__int64(__fastcall**)(__int64))(v17 + 16))(v15 + 128);
			v19 = v18;
			if (v18)
			{
				*(_QWORD*)(v18 + 8) = v15;
				*(_QWORD*)(v18 + 16) = 0i64;
				*(_DWORD*)(v18 + 24) = 0;
				*(_QWORD*)(v18 + 32) = 0i64;
				*(_QWORD*)(v18 + 40) = 0i64;
				*(_QWORD*)(v18 + 48) = 0i64;
				*(_QWORD*)(v18 + 56) = 0i64;
				*(_QWORD*)(v18 + 64) = 0i64;
				*(_QWORD*)(v18 + 72) = 0i64;
				*(_QWORD*)(v18 + 80) = 0i64;
				*(_DWORD*)(v18 + 88) = 0;
				*(_QWORD*)v18 = off_140B5EBA0;
				*(_QWORD*)(v18 + 96) = 0i64;
			}
			else
			{
				v19 = 0i64;
			}
			*(_QWORD*)(v19 + 80) = v15 + 128;
			if ((*(_DWORD*)(v19 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v19 + 32), 0);
			*(_DWORD*)(v19 + 24) = 0;
			*(_QWORD*)(v19 + 32) = 0i64;
			*(_QWORD*)(v19 + 40) = 0i64;
			v20 = 0i64;
			do
				++v20;
			while (word_140A1A818[v20]);
			v21 = 2 * (v20 + 1);
			if (!is_mul_ok(v20 + 1, 2ui64))
				v21 = -1i64;
			v22 = sub_14018B280(v21, 0);
			*(_QWORD*)(v19 + 32) = v22;
			sub_1407DB590(v22, (int*)word_140A1A818, 2 * v20 + 2);
			v23 = *(_QWORD*)(v19 + 32);
			*(_DWORD*)(v19 + 24) = 512;
			*(_QWORD*)(v19 + 40) = v23 + 2 * v20;
			if (!*(_QWORD*)v16 || (v24 = *(int**)(*(_QWORD*)v16 + 40i64)) == 0i64)
				v24 = (int*)L"< No Texture Selected >";
			v25 = *(_WORD*)v24 == 0;
			v26 = 0i64;
			v132 = 0i64;
			v27 = 0i64;
			if (!v25)
			{
				do
					++v27;
				while (*((_WORD*)v24 + v27));
			}
			v28 = (2 * v27) >> 1;
			if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v26 = sub_14018B280(2 * (v28 + 1), 0);
				v132 = v26;
			}
			v29 = 2 * v28;
			sub_1407DB590(v26, v24, v29);
			v30 = (char*)v26 + v29;
			if ((int*)((char*)v26 + v29))
				*(_WORD*)v30 = 0;
			v31 = (int*)&unk_1409D4C0C;
			v137 = 0i64;
			v32 = *(int**)(qword_140C63650 + 784);
			v139 = 0i64;
			if (v32)
				v31 = v32;
			v33 = 0i64;
			if (*(_WORD*)v31)
			{
				do
					++v33;
				while (*((_WORD*)v31 + v33));
			}
			v34 = (2 * v33) >> 1;
			if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v10 = sub_14018B280(2 * (v34 + 1), 0);
				v137 = (unsigned __int16*)v10;
				v139 = (__int64)v10 + 2 * v34 + 2;
			}
			sub_1407DB590(v10, v31, 2 * v34);
			v138 = (__int64)v10 + 2 * v34;
			if (v138)
				*((_WORD*)v10 + v34) = 0;
			v35 = 0i64;
			do
				v25 = *((_WORD*)&unk_1409D4C24 + ++v35) == 0;
			while (!v25);
			sub_14001C310(&v136, (int*)&unk_1409D4C24, (int*)((char*)&unk_1409D4C24 + 2 * v35));
			v36 = v132;
			v37 = (v138 - (__int64)v137) >> 1;
			if (!(unsigned int)sub_14018E3E0((__int64)v132, v137, v37))
			{
				v142 = -1i64;
				v38 = (__int64*)&v132;
				v39 = 0i64;
				v132 = (int*)(((v30 - (char*)v36) >> 1) - v37);
				if (v132 == (int*)-1i64)
					v38 = &v142;
				v40 = v37 + *v38;
				v41 = (char*)v36 + 2 * v37;
				v42 = (char*)v36 + 2 * v40;
				v43 = ((v42 - v41) >> 1) + 1;
				if (v43 <= 0x7FFFFFFFFFFFFFFEi64)
					v39 = sub_14018B280(2 * v43, 0);
				v44 = v39;
				if (v41 != v42)
				{
					v45 = v41 - (char*)v39;
					do
					{
						if (v44)
							*(_WORD*)v44 = *(_WORD*)((char*)v44 + v45);
						v44 = (int*)((char*)v44 + 2);
					} while ((char*)v44 + v45 != v42);
				}
				if (v44)
					*(_WORD*)v44 = 0;
				v46 = (__int64)v36;
				v132 = v39;
				v36 = v39;
				if (v46)
					sub_14018B900(v46, 0);
			}
			v47 = sub_1401A6C70(v19, (int*)L"Texture");
			sub_1401A4C50(v47 + 32, v36);
			v48 = (unsigned int*)v148;
			v148[0] = v16[2];
			v49 = (int**)off_140A1AC20;
			v148[1] = v16[3];
			v148[2] = v16[4];
			v148[3] = v16[5];
			v148[4] = v16[6];
			v148[5] = v16[7];
			v147[0] = v16[8];
			v147[1] = v16[9];
			v147[2] = v16[10];
			v147[3] = v16[11];
			v147[4] = v16[12];
			v147[5] = v16[13];
			do
			{
				v50 = sub_1401A6C70(v19, *v49);
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", *v48);
				if ((*(_DWORD*)(v50 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v50 + 40), 0);
				v51 = 0i64;
				*(_DWORD*)(v50 + 32) = 0;
				*(_QWORD*)(v50 + 40) = 0i64;
				*(_QWORD*)(v50 + 48) = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v51;
					while (*((_WORD*)v149 + v51));
				}
				v52 = 2 * (v51 + 1);
				if (!is_mul_ok(v51 + 1, 2ui64))
					v52 = -1i64;
				v53 = sub_14018B280(v52, 0);
				*(_QWORD*)(v50 + 40) = v53;
				sub_1407DB590(v53, v149, 2 * v51 + 2);
				++v49;
				++v48;
				*(_QWORD*)(v50 + 48) = *(_QWORD*)(v50 + 40) + 2 * v51;
				*(_DWORD*)(v50 + 32) = 512;
			} while ((__int64)v49 < (__int64)&off_140A1AC50);
			v54 = (__int64)v141;
			v55 = (unsigned int*)v147;
			v56 = (int**)off_140A1ABD0;
			do
			{
				v57 = sub_1401A6C70(v19, *v56);
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", *v55);
				if ((*(_DWORD*)(v57 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v57 + 40), 0);
				v58 = 0i64;
				*(_DWORD*)(v57 + 32) = 0;
				*(_QWORD*)(v57 + 40) = 0i64;
				*(_QWORD*)(v57 + 48) = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v58;
					while (*((_WORD*)v149 + v58));
				}
				v59 = 2 * (v58 + 1);
				if (!is_mul_ok(v58 + 1, 2ui64))
					v59 = -1i64;
				v60 = sub_14018B280(v59, 0);
				*(_QWORD*)(v57 + 40) = v60;
				sub_1407DB590(v60, v149, 2 * v58 + 2);
				++v56;
				++v55;
				*(_QWORD*)(v57 + 48) = *(_QWORD*)(v57 + 40) + 2 * v58;
				*(_DWORD*)(v57 + 32) = 512;
			} while ((__int64)v56 < (__int64)off_140A1AC00);
			v61 = (__int64)v132;
			if (*(_BYTE*)(v54 + 56))
			{
				v62 = sub_1401A6C70(v19, (int*)L"Stretchy");
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", 1i64);
				if ((*(_DWORD*)(v62 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v62 + 40), 0);
				v63 = 0i64;
				*(_DWORD*)(v62 + 32) = 0;
				*(_QWORD*)(v62 + 40) = 0i64;
				*(_QWORD*)(v62 + 48) = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v63;
					while (*((_WORD*)v149 + v63));
				}
				v64 = 2 * (v63 + 1);
				if (!is_mul_ok(v63 + 1, 2ui64))
					v64 = -1i64;
				v65 = sub_14018B280(v64, 0);
				*(_QWORD*)(v62 + 40) = v65;
				sub_1407DB590(v65, v149, 2 * v63 + 2);
				v66 = *(_QWORD*)(v62 + 40);
				*(_DWORD*)(v62 + 32) = 512;
				*(_QWORD*)(v62 + 48) = v66 + 2 * v63;
			}
			v67 = *(_DWORD*)(v54 + 72);
			v68 = sub_1401A6C70(v19, (int*)L"HotspotX");
			sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", v67);
			if ((*(_DWORD*)(v68 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v68 + 40), 0);
			v25 = LOWORD(v149[0]) == 0;
			*(_DWORD*)(v68 + 32) = 0;
			*(_QWORD*)(v68 + 40) = 0i64;
			*(_QWORD*)(v68 + 48) = 0i64;
			v69 = 0i64;
			if (!v25)
			{
				do
					++v69;
				while (*((_WORD*)v149 + v69));
			}
			v70 = 2 * (v69 + 1);
			if (!is_mul_ok(v69 + 1, 2ui64))
				v70 = -1i64;
			v71 = sub_14018B280(v70, 0);
			*(_QWORD*)(v68 + 40) = v71;
			sub_1407DB590(v71, v149, 2 * v69 + 2);
			v72 = *(_QWORD*)(v68 + 40);
			*(_DWORD*)(v68 + 32) = 512;
			*(_QWORD*)(v68 + 48) = v72 + 2 * v69;
			v73 = *(_DWORD*)(v54 + 76);
			v74 = sub_1401A6C70(v19, (int*)L"HotspotY");
			sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", v73);
			if ((*(_DWORD*)(v74 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v74 + 40), 0);
			v25 = LOWORD(v149[0]) == 0;
			*(_DWORD*)(v74 + 32) = 0;
			*(_QWORD*)(v74 + 40) = 0i64;
			*(_QWORD*)(v74 + 48) = 0i64;
			v75 = 0i64;
			if (!v25)
			{
				do
					++v75;
				while (*((_WORD*)v149 + v75));
			}
			v76 = 2 * (v75 + 1);
			if (!is_mul_ok(v75 + 1, 2ui64))
				v76 = -1i64;
			v77 = sub_14018B280(v76, 0);
			*(_QWORD*)(v74 + 40) = v77;
			sub_1407DB590(v77, v149, 2 * v75 + 2);
			v78 = *(_QWORD*)(v74 + 40);
			*(_DWORD*)(v74 + 32) = 512;
			*(_QWORD*)(v74 + 48) = v78 + 2 * v75;
			sub_14018EFA0(&v145, (__int64)L"%.3f", *(float*)(v54 + 60));
			v79 = sub_1401A6C70(v19, (int*)L"Duration");
			v80 = v146;
			sub_1401A4C50(v79 + 32, v146);
			v81 = *(unsigned int*)(v54 + 88);
			v82 = qword_140C63678;
			if (v81 >= *(_QWORD*)(qword_140C63678 + 48))
				goto LABEL_88;
			v83 = *(_QWORD*)(qword_140C63678 + 40);
			v84 = 32i64 * (unsigned int)v81;
			v85 = *(_DWORD*)(v84 + v83 + 16);
			if ((unsigned int)(v85 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v84 + v83 + 16) = v85 + 1;
			if (v81 >= *(_QWORD*)(v82 + 48))
				LABEL_88:
			v86 = *(__m128**)(v82 + 40);
			else
				v86 = (__m128*)(*(_QWORD*)(v82 + 40) + 32 * v81);
			v87 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, *v86), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v88 = _mm_packus_epi16(v87, v87);
			sub_14018EFA0(&v143, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v88, v88)));
			sub_1401429A0(qword_140C63678, v81);
			v89 = sub_1401A6C70(v19, (int*)L"StartColor");
			v90 = v144;
			sub_1401A4C50(v89 + 32, v144);
			v91 = *(unsigned int*)(v54 + 92);
			v92 = qword_140C63678;
			if (v91 >= *(_QWORD*)(qword_140C63678 + 48))
				goto LABEL_94;
			v93 = *(_QWORD*)(qword_140C63678 + 40);
			v94 = 32i64 * (unsigned int)v91;
			v95 = *(_DWORD*)(v94 + v93 + 16);
			if ((unsigned int)(v95 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v94 + v93 + 16) = v95 + 1;
			if (v91 >= *(_QWORD*)(v92 + 48))
				LABEL_94:
			v96 = *(__m128**)(v92 + 40);
			else
				v96 = (__m128*)(*(_QWORD*)(v92 + 40) + 32 * v91);
			v97 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, *v96), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v98 = _mm_packus_epi16(v97, v97);
			v99 = sub_14018EFA0(&v145, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v98, v98)));
			if (v99 != &v143)
			{
				sub_14001C480((__int64)&v143, (int*)v99[1], (int*)v99[2]);
				v90 = v144;
			}
			if (v146)
				sub_14018B900((__int64)v146, 0);
			sub_1401429A0(qword_140C63678, v91);
			v100 = sub_1401A6C70(v19, (int*)L"EndColor");
			sub_1401A4C50(v100 + 32, v90);
			if (*(_BYTE*)(v54 + 57))
			{
				v101 = sub_1401A6C70(v19, (int*)L"FlipX");
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", 1i64);
				if ((*(_DWORD*)(v101 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v101 + 40), 0);
				*(_DWORD*)(v101 + 32) = 0;
				*(_QWORD*)(v101 + 40) = 0i64;
				*(_QWORD*)(v101 + 48) = 0i64;
				v102 = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v102;
					while (*((_WORD*)v149 + v102));
				}
				v103 = 2 * (v102 + 1);
				if (!is_mul_ok(v102 + 1, 2ui64))
					v103 = -1i64;
				v104 = sub_14018B280(v103, 0);
				*(_QWORD*)(v101 + 40) = v104;
				sub_1407DB590(v104, v149, 2 * v102 + 2);
				v105 = *(_QWORD*)(v101 + 40);
				*(_DWORD*)(v101 + 32) = 512;
				*(_QWORD*)(v101 + 48) = v105 + 2 * v102;
			}
			if (*(_BYTE*)(v54 + 58))
			{
				v106 = sub_1401A6C70(v19, (int*)L"FlipY");
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", 1i64);
				if ((*(_DWORD*)(v106 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v106 + 40), 0);
				*(_DWORD*)(v106 + 32) = 0;
				*(_QWORD*)(v106 + 40) = 0i64;
				*(_QWORD*)(v106 + 48) = 0i64;
				v107 = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v107;
					while (*((_WORD*)v149 + v107));
				}
				v108 = 2 * (v107 + 1);
				if (!is_mul_ok(v107 + 1, 2ui64))
					v108 = -1i64;
				v109 = sub_14018B280(v108, 0);
				*(_QWORD*)(v106 + 40) = v109;
				sub_1407DB590(v109, v149, 2 * v107 + 2);
				v110 = *(_QWORD*)(v106 + 40);
				*(_DWORD*)(v106 + 32) = 512;
				*(_QWORD*)(v106 + 48) = v110 + 2 * v107;
			}
			v111 = *(float*)(v54 + 80);
			if (v111 > 0.0)
			{
				v112 = (float)(v111 / *(float*)&dword_140C3C248) * 360.0;
				v113 = sub_1401A6C70(v19, (int*)L"StartOrientation");
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", (unsigned int)(int)v112);
				if ((*(_DWORD*)(v113 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v113 + 40), 0);
				*(_DWORD*)(v113 + 32) = 0;
				*(_QWORD*)(v113 + 40) = 0i64;
				*(_QWORD*)(v113 + 48) = 0i64;
				v114 = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v114;
					while (*((_WORD*)v149 + v114));
				}
				v115 = 2 * (v114 + 1);
				if (!is_mul_ok(v114 + 1, 2ui64))
					v115 = -1i64;
				v116 = sub_14018B280(v115, 0);
				*(_QWORD*)(v113 + 40) = v116;
				sub_1407DB590(v116, v149, 2 * v114 + 2);
				v117 = *(_QWORD*)(v113 + 40);
				*(_DWORD*)(v113 + 32) = 512;
				*(_QWORD*)(v113 + 48) = v117 + 2 * v114;
			}
			v118 = *(float*)(v54 + 84);
			if (v118 > 0.0)
			{
				v119 = (float)(v118 / *(float*)&dword_140C3C248) * 360.0;
				v120 = sub_1401A6C70(v19, (int*)L"EndOrientation");
				sub_1401A4C20(v149, 0xC8ui64, (__int64)L"%d", (unsigned int)(int)v119);
				if ((*(_DWORD*)(v120 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v120 + 40), 0);
				v121 = 0i64;
				*(_DWORD*)(v120 + 32) = 0;
				*(_QWORD*)(v120 + 40) = 0i64;
				*(_QWORD*)(v120 + 48) = 0i64;
				if (LOWORD(v149[0]))
				{
					do
						++v121;
					while (*((_WORD*)v149 + v121));
				}
				v122 = 2 * (v121 + 1);
				if (!is_mul_ok(v121 + 1, 2ui64))
					v122 = -1i64;
				v123 = sub_14018B280(v122, 0);
				*(_QWORD*)(v120 + 40) = v123;
				sub_1407DB590(v123, v149, 2 * v121 + 2);
				v124 = *(_QWORD*)(v120 + 40);
				*(_DWORD*)(v120 + 32) = 512;
				*(_QWORD*)(v120 + 48) = v124 + 2 * v121;
			}
			v14 = v134;
			if (*(_QWORD*)(v19 + 8) == v134[1])
			{
				v125 = *(_QWORD*)(v19 + 16);
				if (v125)
				{
					v126 = *(_QWORD*)(v125 + 48);
					if (v19 == v126)
						*(_QWORD*)(v125 + 48) = *(_QWORD*)(v126 + 72);
					v127 = *(_QWORD*)(v125 + 56);
					if (v19 == v127)
						*(_QWORD*)(v125 + 56) = *(_QWORD*)(v127 + 64);
					v128 = *(_QWORD*)(v19 + 64);
					if (v128)
						*(_QWORD*)(v128 + 72) = *(_QWORD*)(v19 + 72);
					v129 = *(_QWORD*)(v19 + 72);
					if (v129)
						*(_QWORD*)(v129 + 64) = *(_QWORD*)(v19 + 64);
					*(_QWORD*)(v19 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v19 + 80) + 32i64))(*(_QWORD*)(v19 + 80));
				}
				v130 = v14[7];
				if (v130)
				{
					*(_QWORD*)(v130 + 72) = v19;
					*(_QWORD*)(v19 + 64) = v14[7];
					v14[7] = v19;
				}
				else
				{
					v14[7] = v19;
					v14[6] = v19;
					*(_QWORD*)(v19 + 64) = 0i64;
				}
				*(_QWORD*)(v19 + 72) = 0i64;
				*(_QWORD*)(v19 + 16) = v14;
			}
			if (v90)
				sub_14018B900((__int64)v90, 0);
			if (v80)
				sub_14018B900((__int64)v80, 0);
			if (v137)
				sub_14018B900((__int64)v137, 0);
			if (v61)
				sub_14018B900(v61, 0);
			v5 = v140;
			v12 = v135 + 1;
			v131 = *(_QWORD*)(v140 + 64) - *(_QWORD*)(v140 + 56);
			v10 = 0i64;
			++v133;
			++v135;
			result = (unsigned __int64)((unsigned __int128)(v131 * (__int128)0x6BCA1AF286BCA1Bi64) >> 64) >> 63;
		} while (v133 < (int)(v131 / 304));
	}
	return result;
}
// 1409D585C: using guessed type wchar_t asc_1409D585C[3];
// 1409D5884: using guessed type wchar_t asc_1409D5884[3];
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A1A818: using guessed type __int16 word_140A1A818[8];
// 140A1A828: using guessed type wchar_t aTexture[8];
// 140A1A838: using guessed type wchar_t aDuration[9];
// 140A1A850: using guessed type wchar_t aStartcolor[11];
// 140A1A868: using guessed type wchar_t aStartorientati[17];
// 140A1A890: using guessed type wchar_t aEndorientation[15];
// 140A1A8D8: using guessed type wchar_t aEndcolor[9];
// 140A1A8F0: using guessed type wchar_t aStretchy[9];
// 140A1A908: using guessed type wchar_t aFlipx[6];
// 140A1A918: using guessed type wchar_t aFlipy[6];
// 140A1A9B8: using guessed type wchar_t aCycle[6];
// 140A1AA20: using guessed type wchar_t a3f[5];
// 140A1ABD0: using guessed type wchar_t *off_140A1ABD0[17];
// 140A1AC00: using guessed type wchar_t *off_140A1AC00[11];
// 140A1AC20: using guessed type wchar_t *off_140A1AC20[7];
// 140A1AC50: using guessed type wchar_t *off_140A1AC50;
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A32B28: using guessed type wchar_t aHotspoty[9];
// 140A32B40: using guessed type wchar_t aHotspotx[9];
// 140B56A88: using guessed type wchar_t aNoTextureSelec[24];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C3C248: using guessed type int dword_140C3C248;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;

