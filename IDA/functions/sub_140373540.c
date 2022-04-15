//----- (0000000140373540) ----------------------------------------------------
void __fastcall sub_140373540(__int64 a1)
{
	int v2; // eax
	int v3; // ebx
	__int64 v4; // rbx
	_DWORD* v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // r14d
	int v13; // ebx
	__int64 v14; // rcx
	__int64 v15; // rsi
	__int64 v16; // rax
	int* v17; // r15
	__int64 v18; // rax
	unsigned int v19; // r14d
	int* v20; // r12
	__int64 v21; // r11
	__m128* v22; // r10
	__int128 v23; // xmm0
	unsigned __int16* v24; // r9
	__int64 v25; // r11
	float v26; // xmm0_4
	float* v27; // r10
	__int64 v28; // r9
	__int64 v29; // r11
	float v30; // xmm0_4
	__int64 v31; // r10
	unsigned __int16* v32; // r9
	float v33; // xmm0_4
	__m128* v34; // rcx
	__m128i v35; // xmm0
	__m128* v36; // rdx
	unsigned __int16 v37; // ax
	__m128* v38; // rax
	__m128 v39; // xmm12
	float v40; // xmm6_4
	float v41; // xmm4_4
	__m128 v42; // xmm11
	float v43; // xmm8_4
	__m128 v44; // xmm7
	float v45; // xmm10_4
	__m128 v46; // xmm3
	__m128 v47; // xmm2
	unsigned __int64 v48; // rdx
	__int64 v49; // r11
	__int64 v50; // r9
	unsigned int v51; // eax
	unsigned __int16* v52; // rdx
	__int64* v53; // rcx
	__int64 v54; // r8
	__int64 v55; // rax
	__int64 v56; // r14
	_QWORD* v57; // rbx
	unsigned __int64 v58; // rdx
	unsigned int v59; // eax
	int v60; // r12d
	int v61; // r15d
	__m128 v62; // xmm12
	__m128 v63; // xmm13
	__m128 v64; // xmm14
	__m128 v65; // xmm15
	__int64 v66; // r14
	float* v67; // rdi
	__int64 v68; // rcx
	int v69; // edx
	__int32 v70; // r13d
	__m128i v71; // xmm3
	__m128* v72; // rax
	float v73; // xmm8_4
	float v74; // xmm10_4
	float v75; // xmm11_4
	__m128* v76; // rax
	__int32 v77; // xmm6_4
	float v78; // xmm7_4
	float v79; // xmm9_4
	__m128* v80; // rax
	__int32 v81; // xmm0_4
	__int32 v82; // xmm1_4
	__int32 v83; // xmm2_4
	unsigned int v84; // ebx
	unsigned int v85; // r11d
	unsigned int v86; // r10d
	unsigned int v87; // r9d
	unsigned int v88; // r8d
	unsigned int v89; // edx
	int v90; // ecx
	int v91; // ecx
	unsigned int v92; // eax
	__int64 v93; // rdx
	__m128* v94; // rcx
	unsigned int v95; // r9d
	__m128 v96; // xmm0
	__m128 v97; // xmm1
	unsigned __int8 v98; // r8
	__int64 v99; // rax
	__m128* v100; // rcx
	__m128 v101; // xmm1
	__m128 v102; // xmm1
	__m128 v103; // xmm2
	__m128 v104; // xmm3
	__m128 v105; // xmm0
	__m128 v106; // xmm1
	__m128 v107; // xmm3
	__m128 v108; // xmm1
	__m128i v109; // xmm1
	__m128 v110; // xmm0
	__m128 v111; // xmm3
	__m128 v112; // xmm4
	__m128 v113; // xmm2
	__m128i v114; // xmm2
	__m128i v115; // xmm0
	__m128 v116; // xmm2
	__m128 v117; // xmm0
	__m128 v118; // xmm3
	__m128 v119; // xmm4
	__m128 v120; // xmm2
	__int64 v121; // rcx
	__m128i v122; // xmm2
	__m128 v123; // xmm3
	__m128 v124; // xmm4
	__m128 v125; // xmm2
	__m128i v126; // xmm2
	int v127; // [rsp+30h] [rbp-D0h]
	int v128[3]; // [rsp+34h] [rbp-CCh]
	__m128 TlsValue; // [rsp+40h] [rbp-C0h] BYREF
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64 v131; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int128 v132; // [rsp+68h] [rbp-98h] BYREF
	LPVOID v133[2]; // [rsp+78h] [rbp-88h]
	__m128i v134; // [rsp+90h] [rbp-70h] BYREF
	LPVOID lpTlsValue; // [rsp+A0h] [rbp-60h]
	__int64 v136; // [rsp+A8h] [rbp-58h]
	__int128 v137; // [rsp+B0h] [rbp-50h] BYREF
	LPVOID v138; // [rsp+C0h] [rbp-40h]
	__int64 v139; // [rsp+C8h] [rbp-38h]
	__m128 v140; // [rsp+D0h] [rbp-30h] BYREF
	LPVOID v141; // [rsp+E0h] [rbp-20h]
	int* v142; // [rsp+F0h] [rbp-10h]
	__int64 v143[256]; // [rsp+100h] [rbp+0h] BYREF
	unsigned __int128 v144; // [rsp+900h] [rbp+800h] BYREF
	__m128 v145; // [rsp+910h] [rbp+810h]
	__m128 v146; // [rsp+920h] [rbp+820h]
	__m128 v147; // [rsp+930h] [rbp+830h]
	__int64 v148[4]; // [rsp+950h] [rbp+850h] BYREF
	__m128 v149; // [rsp+970h] [rbp+870h]

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 40i64))(*(_QWORD*)(a1 + 16), 0i64);
	v3 = v2;
	if (v2 < 0)
	{
		if (v2 == -1608318974)
		{
		LABEL_8:
			v14 = *(_QWORD*)(a1 + 24);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 24) = 0i64;
			}
			*(_QWORD*)(a1 + 80) = 0i64;
			return;
		}
		TlsValue = (__m128)(unsigned __int64) & off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v140 = TlsValue;
		*(_QWORD*)&v132 = &off_140B5E648;
		*((_QWORD*)&v132 + 1) = L"Result";
		v141 = Value;
		v133[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v132);
		LODWORD(v133[1]) = v3;
		v4 = *(_QWORD*)(a1 + 64);
		v134.m128i_i64[0] = (__int64)&off_140B5E648;
		v145 = *(__m128*)v133;
		*(_QWORD*)&v132 = &off_140B5E640;
		v134.m128i_i64[1] = (__int64)L"FileName";
		v144 = v132;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v134);
		v5 = &unk_140C8A67C;
		v134.m128i_i64[0] = (__int64)&off_140B5E638;
		v6 = 0x141DEF7E0i64;
	LABEL_6:
		v131 = v6;
		v136 = v4;
		v137 = (__int128)v134;
		v138 = lpTlsValue;
		v139 = v4;
		v13 = sub_1401971E0(v5, 20, &v131, &v137, &v144, &v140);
		v134.m128i_i64[0] = (__int64)&off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v132 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v133[0]);
		TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v13)
			DebugBreak();
		goto LABEL_8;
	}
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
	v8 = *(__int64**)(a1 + 24);
	v9 = *v8;
	v10 = v7;
	TlsValue.m128_u64[0] = v7;
	v11 = (*(__int64(__fastcall**)(__int64*))(v9 + 16))(v8);
	Value = 0i64;
	TlsValue.m128_u64[1] = v10 + v11;
	v12 = sub_14030CAC0((unsigned __int64*)&TlsValue, v10 + 1584, v10);
	if (v12 < 0)
	{
		TlsValue = (__m128)(unsigned __int64) & off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v140 = TlsValue;
		*(_QWORD*)&v132 = &off_140B5E648;
		*((_QWORD*)&v132 + 1) = L"Result";
		v141 = Value;
		v133[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v132);
		v4 = *(_QWORD*)(a1 + 64);
		LODWORD(v133[1]) = v12;
		v134.m128i_i64[0] = (__int64)&off_140B5E648;
		*(_QWORD*)&v132 = &off_140B5E640;
		v145 = *(__m128*)v133;
		v134.m128i_i64[1] = (__int64)L"FileName";
		v144 = v132;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v134);
		v5 = &unk_140C8A678;
		v134.m128i_i64[0] = (__int64)&off_140B5E638;
		v6 = 0x141DEF790i64;
		goto LABEL_6;
	}
	*(_QWORD*)(a1 + 80) = v10;
	v15 = a1 + 88;
	sub_140327210(a1 + 88, *(_QWORD*)(v10 + 600) + 24i64);
	v16 = 112i64 * *(unsigned int*)(*(_QWORD*)(a1 + 80) + 384i64);
	if (!is_mul_ok(*(unsigned int*)(*(_QWORD*)(a1 + 80) + 384i64), 0x70ui64))
		v16 = -1i64;
	v17 = sub_14018B280(v16, 8u);
	v18 = (unsigned __int64)*(unsigned int*)(*(_QWORD*)(a1 + 80) + 384i64) << 6;
	if (!is_mul_ok(*(unsigned int*)(*(_QWORD*)(a1 + 80) + 384i64), 0x40ui64))
		v18 = -1i64;
	v19 = 0;
	v20 = sub_14018B280(v18, 0);
	v142 = v20;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 80) + 384i64))
	{
		do
		{
			v21 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 392i64) + 352i64 * v19;
			v22 = (__m128*) & v17[28 * v19];
			if (*(_DWORD*)(v21 + 16))
			{
				sub_1401ADB90((__m128i*) & v137, *(unsigned __int16**)(v21 + 32));
				v23 = v137;
			}
			else
			{
				v23 = xmmword_140B7B240;
			}
			*v22 = (__m128)v23;
			if (*(_DWORD*)(v21 + 64))
			{
				if (COERCE_FLOAT(COERCE_UNSIGNED_INT(sub_1401C9770(*(unsigned __int16**)(v21 + 80))) & 0x7FFFFFFF) > 0.0000099999997)
				{
					v26 = sub_1401C9770(v24);
					*v27 = *v27 / v26;
				}
				if (fabs(sub_1401C9770((unsigned __int16*)(*(_QWORD*)(v25 + 80) + 2i64))) > 0.0000099999997)
				{
					v30 = sub_1401C9770((unsigned __int16*)(v28 + 2));
					*(float*)(v31 + 4) = *(float*)(v31 + 4) / v30;
				}
				if (fabs(sub_1401C9770((unsigned __int16*)(*(_QWORD*)(v29 + 80) + 4i64))) > 0.0000099999997)
				{
					v33 = sub_1401C9770(v32);
					v22->m128_f32[2] = v22->m128_f32[2] / v33;
				}
			}
			v34 = v22 + 1;
			if (*(_DWORD*)(v21 + 112))
			{
				v35 = _mm_loadl_epi64((const __m128i*) * (_QWORD*)(v21 + 128));
				*v34 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v35, v35), 0x10u)),
					(__m128)xmmword_140B7AB20);
			}
			else
			{
				*v34 = (__m128)xmmword_140C78450;
			}
			v36 = v22 + 2;
			if (*(_DWORD*)(v21 + 160))
				*v36 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * *(unsigned int**)(v21 + 176),
						(__m128) * (unsigned int*)(*(_QWORD*)(v21 + 176) + 8i64)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(v21 + 176) + 4i64), (__m128)0i64));
			else
				*v36 = 0i64;
			v37 = *(_WORD*)(v21 + 4);
			if (v37 != 0xFFFF)
			{
				v38 = (__m128*) & v17[28 * v37];
				*v22 = _mm_mul_ps(*v38, *v22);
				v39 = (__m128)v22[1].m128_u32[3];
				v40 = v38[1].m128_f32[0];
				v41 = v38[1].m128_f32[3];
				v42 = (__m128)LODWORD(v40);
				v43 = v38[1].m128_f32[1];
				v44 = (__m128)v22[1].m128_u32[1];
				v45 = v38[1].m128_f32[2];
				v46 = v44;
				v47 = v44;
				v42.m128_f32[0] = (float)((float)((float)(v40 * v39.m128_f32[0]) + (float)(v22[1].m128_f32[0] * v41))
					+ (float)(v22[1].m128_f32[2] * v43))
					- (float)(v22[1].m128_f32[1] * v45);
				v46.m128_f32[0] = (float)((float)((float)(v44.m128_f32[0] * v41) - (float)(v22[1].m128_f32[2] * v40))
					+ (float)(v43 * v39.m128_f32[0]))
					+ (float)(v45 * v34->m128_f32[0]);
				v47.m128_f32[0] = (float)((float)((float)(v44.m128_f32[0] * v40) + (float)(v22[1].m128_f32[2] * v41))
					- (float)(v43 * v34->m128_f32[0]))
					+ (float)(v45 * v39.m128_f32[0]);
				v39.m128_f32[0] = (float)((float)((float)(v39.m128_f32[0] * v41) - (float)(v40 * v34->m128_f32[0]))
					- (float)(v44.m128_f32[0] * v43))
					- (float)(v45 * v22[1].m128_f32[2]);
				*v34 = _mm_unpacklo_ps(_mm_unpacklo_ps(v42, v47), _mm_unpacklo_ps(v46, v39));
				*v36 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 85), v38[4]),
							_mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 0), v38[3])),
						_mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 170), v38[5])),
					v38[6]);
			}
			v146.m128_u64[0] = (unsigned __int64)&v22[1];
			v146.m128_u64[1] = (unsigned __int64)&v22[2];
			v144 = 0ui64;
			v148[0] = 0i64;
			v145 = (__m128)(unsigned __int64)v22;
			v148[1] = 0i64;
			v148[2] = (__int64)v22;
			v148[3] = 0i64;
			v149 = v146;
			sub_1401AFF00((__int64)v148, (__int64)&v22[3]);
			*((_QWORD*)&v132 + 1) = v48;
			*(_QWORD*)&v132 = v49 + 272;
			v144 = __PAIR128__(v48, v49 + 272);
			sub_1401AFB10((__m128**) & v144, (__m128*) & v20[16 * (unsigned __int64)v19++]);
		} while (v19 < *(_DWORD*)(*(_QWORD*)(a1 + 80) + 384i64));
		v15 = a1 + 88;
	}
	sub_14018B900((__int64)v17, 0);
	v50 = *(_QWORD*)(a1 + 80);
	v51 = *(_DWORD*)(v50 + 432);
	if (v51)
	{
		v52 = *(unsigned __int16**)(v50 + 440);
		v53 = v143;
		v54 = v51;
		do
		{
			v55 = *v52;
			++v53;
			++v52;
			*(v53 - 1) = (__int64)&v20[16 * v55];
			--v54;
		} while (v54);
	}
	v56 = *(_QWORD*)(v50 + 600);
	v57 = (_QWORD*)(a1 + 312);
	v58 = *(unsigned int*)(v56 + 24);
	*(_QWORD*)&v137 = v56;
	*(_QWORD*)&v132 = a1 + 312;
	sub_140374D60((__int64*)(a1 + 312), v58);
	v59 = 0;
	v60 = 0;
	v61 = 0;
	LODWORD(v131) = 0;
	if (*(_DWORD*)(v56 + 24))
	{
		v62 = v146;
		v63 = v145;
		v64 = (__m128)v144;
		v65 = v147;
		do
		{
			v66 = v59;
			v67 = (float*)(*v57 + 76i64 * v59);
			v68 = v59 * *(_QWORD*)(v15 + 88);
			if (*(_DWORD*)(v15 + 176) == 1)
			{
				v69 = *(_DWORD*)(v68 + *(_QWORD*)v15 + 4);
				v70 = *(_DWORD*)(v68 + *(_QWORD*)v15);
				v127 = *(_DWORD*)(v68 + *(_QWORD*)v15 + 8);
				v128[0] = v69;
			}
			else
			{
				v71 = (__m128i)_mm_mul_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)v15 + v68)),
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)v15 + v68 + 4))),
						_mm_unpacklo_ps(
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)v15 + v68 + 2)),
							(__m128)0i64)),
					(__m128)xmmword_140B7A650);
				*(_QWORD*)&v144 = v71.m128i_i64[0];
				v70 = v71.m128i_i32[0];
				v128[0] = v71.m128i_i32[1];
				v127 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 8));
			}
			v72 = sub_1407B08C0((unsigned __int8*)(*(_QWORD*)(v15 + 8) + v59 * *(_QWORD*)(v15 + 96)), (__m128*) & v134);
			v73 = v72->m128_f32[0];
			v74 = v72->m128_f32[1];
			v75 = v72->m128_f32[2];
			v76 = sub_1407B08C0((unsigned __int8*)(*(_QWORD*)(v15 + 16) + *(_QWORD*)(v15 + 104) * v66), &v140);
			v77 = v76->m128_i32[0];
			v78 = v76->m128_f32[1];
			v79 = v76->m128_f32[2];
			v80 = sub_1407B08C0((unsigned __int8*)(*(_QWORD*)(v15 + 24) + v66 * *(_QWORD*)(v15 + 112)), &TlsValue);
			v81 = v80->m128_i32[0];
			v82 = v80->m128_i32[1];
			v83 = v80->m128_i32[2];
			v84 = *(_DWORD*)(*(_QWORD*)(v15 + 120) * v66 + *(_QWORD*)(v15 + 32));
			v85 = *(_DWORD*)(v66 * *(_QWORD*)(v15 + 128) + *(_QWORD*)(v15 + 40));
			v86 = *(_DWORD*)(*(_QWORD*)(v15 + 136) * v66 + *(_QWORD*)(v15 + 48));
			v87 = *(_DWORD*)(v66 * *(_QWORD*)(v15 + 144) + *(_QWORD*)(v15 + 56));
			v88 = *(_DWORD*)(*(_QWORD*)(v15 + 152) * v66 + *(_QWORD*)(v15 + 64));
			v89 = *(_DWORD*)(v66 * *(_QWORD*)(v15 + 160) + *(_QWORD*)(v15 + 72));
			v90 = v128[0];
			LOBYTE(v80) = *(_BYTE*)(*(_QWORD*)(v15 + 168) * v66 + *(_QWORD*)(v15 + 80));
			*(_DWORD*)v67 = v70;
			*((_DWORD*)v67 + 1) = v90;
			v67[3] = v73;
			*((_DWORD*)v67 + 6) = v77;
			*((_DWORD*)v67 + 9) = v81;
			v91 = v127;
			*((_DWORD*)v67 + 13) = v85;
			*((_DWORD*)v67 + 12) = v84;
			v67[4] = v74;
			v67[7] = v78;
			*((_DWORD*)v67 + 10) = v82;
			v67[5] = v75;
			v67[8] = v79;
			*((_DWORD*)v67 + 11) = v83;
			*((_DWORD*)v67 + 14) = v86;
			*((_DWORD*)v67 + 15) = v87;
			*((_DWORD*)v67 + 2) = v91;
			*((_DWORD*)v67 + 16) = v88;
			*((_DWORD*)v67 + 17) = v89;
			*((_BYTE*)v67 + 72) = (_BYTE)v80;
			v92 = *((_DWORD*)v67 + 13);
			if (v92 != v60 || v84 != v61)
			{
				v61 = *((_DWORD*)v67 + 12);
				v60 = *((_DWORD*)v67 + 13);
				v127 = v60;
				v93 = 0i64;
				v94 = (__m128*)v143[(unsigned __int8)v61];
				v128[0] = v61;
				v95 = 1;
				v96 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v92);
				v96.m128_f32[0] = v96.m128_f32[0] * 0.0039215689;
				v97 = _mm_shuffle_ps(v96, v96, 0);
				v64 = _mm_mul_ps(*v94, v97);
				v63 = _mm_mul_ps(v94[1], v97);
				v62 = _mm_mul_ps(v94[2], v97);
				v65 = _mm_mul_ps(v94[3], v97);
				do
				{
					v98 = *((_BYTE*)&v127 + v93 + 1);
					if (!v98)
						break;
					v99 = *((unsigned __int8*)v128 + v93 + 1);
					++v95;
					++v93;
					v100 = (__m128*)v143[v99];
					v101 = (__m128)COERCE_UNSIGNED_INT((float)v98);
					v101.m128_f32[0] = v101.m128_f32[0] * 0.0039215689;
					v102 = _mm_shuffle_ps(v101, v101, 0);
					v64 = _mm_add_ps(_mm_mul_ps(*v100, v102), v64);
					v63 = _mm_add_ps(_mm_mul_ps(v100[1], v102), v63);
					v62 = _mm_add_ps(_mm_mul_ps(v100[2], v102), v62);
					v65 = _mm_add_ps(_mm_mul_ps(v100[3], v102), v65);
				} while (v95 < 4);
			}
			v103 = _mm_unpacklo_ps((__m128) * ((unsigned int*)v67 + 1), (__m128)0i64);
			v104 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)v67, (__m128) * ((unsigned int*)v67 + 2)), v103);
			v103.m128_f32[0] = v74;
			v105 = _mm_shuffle_ps(v104, v104, 85);
			v106 = _mm_shuffle_ps(v104, v104, 0);
			v107 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 170), v62);
			v108 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v106, v64), _mm_mul_ps(v105, v63)), v107);
			v107.m128_f32[0] = v73;
			v109 = (__m128i)_mm_add_ps(v108, v65);
			*(_DWORD*)v67 = _mm_cvtsi128_si32(v109);
			v110 = (__m128)_mm_srli_si128(v109, 4);
			*((_DWORD*)v67 + 1) = _mm_cvtsi128_si32((__m128i)v110);
			*((_DWORD*)v67 + 2) = _mm_cvtsi128_si32(_mm_srli_si128(v109, 8));
			v110.m128_f32[0] = v75;
			v111 = _mm_unpacklo_ps(_mm_unpacklo_ps(v107, v110), _mm_unpacklo_ps(v103, (__m128)0i64));
			v112 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v111, v111, 0), v64),
					_mm_mul_ps(_mm_shuffle_ps(v111, v111, 85), v63)),
				_mm_mul_ps(_mm_shuffle_ps(v111, v111, 170), v62));
			v113 = _mm_mul_ps(v112, v112);
			v113.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v113.m128_f32[0] + _mm_shuffle_ps(v113, v113, 85).m128_f32[0])
					+ _mm_shuffle_ps(v113, v113, 170).m128_f32[0]);
			v114 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v112);
			*((_DWORD*)v67 + 3) = _mm_cvtsi128_si32(v114);
			v115 = v114;
			v116 = (__m128)_mm_srli_si128(v114, 8);
			v117 = (__m128)_mm_srli_si128(v115, 4);
			*((_DWORD*)v67 + 4) = _mm_cvtsi128_si32((__m128i)v117);
			*((_DWORD*)v67 + 5) = _mm_cvtsi128_si32((__m128i)v116);
			v117.m128_f32[0] = v79;
			v116.m128_f32[0] = v78;
			v118 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * ((unsigned int*)v67 + 6), v117),
				_mm_unpacklo_ps(v116, (__m128)0i64));
			v119 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v118, v118, 0), v64),
					_mm_mul_ps(_mm_shuffle_ps(v118, v118, 85), v63)),
				_mm_mul_ps(_mm_shuffle_ps(v118, v118, 170), v62));
			v120 = _mm_mul_ps(v119, v119);
			v121 = v137;
			v57 = (_QWORD*)v132;
			LODWORD(v131) = v131 + 1;
			v59 = v131;
			v120.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v120.m128_f32[0] + _mm_shuffle_ps(v120, v120, 85).m128_f32[0])
					+ _mm_shuffle_ps(v120, v120, 170).m128_f32[0]);
			v122 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v120, v120, 0), v119);
			*((_DWORD*)v67 + 6) = _mm_cvtsi128_si32(v122);
			*((_DWORD*)v67 + 7) = _mm_cvtsi128_si32(_mm_srli_si128(v122, 4));
			*((_DWORD*)v67 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v122, 8));
			v123 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * ((unsigned int*)v67 + 9), (__m128) * ((unsigned int*)v67 + 11)),
				_mm_unpacklo_ps((__m128) * ((unsigned int*)v67 + 10), (__m128)0i64));
			v124 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v123, v123, 0), v64),
					_mm_mul_ps(_mm_shuffle_ps(v123, v123, 85), v63)),
				_mm_mul_ps(_mm_shuffle_ps(v123, v123, 170), v62));
			v125 = _mm_mul_ps(v124, v124);
			v125.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v125.m128_f32[0] + _mm_shuffle_ps(v125, v125, 85).m128_f32[0])
					+ _mm_shuffle_ps(v125, v125, 170).m128_f32[0]);
			v126 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v125, v125, 0), v124);
			*((_DWORD*)v67 + 9) = _mm_cvtsi128_si32(v126);
			*((_DWORD*)v67 + 10) = _mm_cvtsi128_si32(_mm_srli_si128(v126, 4));
			*((_DWORD*)v67 + 11) = _mm_cvtsi128_si32(_mm_srli_si128(v126, 8));
		} while (v59 < *(_DWORD*)(v121 + 24));
	}
	sub_14018B900((__int64)v142, 0);
}
// 1403739D2: variable 'v22' is possibly undefined
// 1403739D6: variable 'v21' is possibly undefined
// 1403739F9: variable 'v24' is possibly undefined
// 1403739FE: variable 'v27' is possibly undefined
// 140373A0C: variable 'v25' is possibly undefined
// 140373A23: variable 'v28' is possibly undefined
// 140373A2C: variable 'v31' is possibly undefined
// 140373A3C: variable 'v29' is possibly undefined
// 140373A59: variable 'v32' is possibly undefined
// 140373CC0: variable 'v48' is possibly undefined
// 140373CCB: variable 'v49' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A650: using guessed type __int128 xmmword_140B7A650;
// 140B7AB20: using guessed type __int128 xmmword_140B7AB20;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140373540: using guessed type __int64 var_990[256];

