//----- (0000000140476BC0) ----------------------------------------------------
void __fastcall sub_140476BC0(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rcx
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r10
	__int64 v12; // rax
	__m128* v13; // r12
	__int64 v14; // rdi
	int v15; // r13d
	__int64 v16; // r15
	int v17; // xmm11_4
	__int64 v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rcx
	int v21; // r9d
	float v22; // xmm4_4
	int v23; // edx
	int v24; // r8d
	int v25; // eax
	float v26; // xmm0_4
	int v27; // eax
	float v28; // xmm4_4
	float v29; // xmm3_4
	float v30; // xmm0_4
	int v31; // eax
	__int64 v32; // rdx
	int v33; // eax
	__int64 v34; // rcx
	int v35; // eax
	int v36; // edx
	int v37; // eax
	float v38; // xmm4_4
	float v39; // xmm1_4
	int v40; // eax
	__int64 v41; // rcx
	int v42; // eax
	int v43; // r11d
	__int64 v44; // rcx
	int v45; // eax
	int v46; // r11d
	__m128 v47; // xmm4
	__m128 v48; // xmm8
	__m128 v49; // xmm3
	__m128 v50; // xmm6
	int v51; // r8d
	__int32 v52; // r9d
	int v53; // eax
	__m128 v54; // xmm1
	__m128 v55; // xmm8
	__m128 v56; // xmm6
	__m128 v57; // xmm0
	int v58; // eax
	int v59; // eax
	__m128 v60; // xmm1
	int v61; // eax
	__m128 v62; // xmm2
	__m128* v63; // rbx
	bool v64; // zf
	__int64 v65; // rax
	__m128 v66; // xmm7
	__int64 v67; // rax
	__m128* v68; // rax
	__m128 v69; // xmm1
	__int64 v70; // rax
	int v71; // edx
	__int64 v72; // r9
	int v73; // r8d
	__m128 v74; // xmm1
	__int64 v75; // rbx
	__int64 v76; // r14
	float v77; // xmm0_4
	float v78; // xmm1_4
	float v79; // xmm3_4
	float v80; // xmm0_4
	int v81; // eax
	int v82; // r13d
	float v83; // xmm0_4
	float v84; // xmm1_4
	__m128 v85; // xmm2
	__int128 v86; // xmm9
	__int128 v87; // xmm7
	__m128 v88; // xmm1
	__m128 v89; // xmm1
	__int64 v90; // rdi
	int* v91; // rax
	__int64 v92; // rsi
	__int64 v93; // rbx
	int* v94; // r14
	__m128 v95; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v96; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v97; // [rsp+38h] [rbp-C8h]
	int* v98; // [rsp+48h] [rbp-B8h]
	int* v99; // [rsp+50h] [rbp-B0h]
	int* v100; // [rsp+58h] [rbp-A8h]
	__int64 v101; // [rsp+60h] [rbp-A0h]
	float v102; // [rsp+68h] [rbp-98h]
	int v103; // [rsp+6Ch] [rbp-94h]
	int v104; // [rsp+70h] [rbp-90h]
	int v105; // [rsp+74h] [rbp-8Ch]
	__int128 v106; // [rsp+80h] [rbp-80h]
	__int128 v107; // [rsp+90h] [rbp-70h]
	__m128 v108; // [rsp+B0h] [rbp-50h]
	__m128 v109; // [rsp+C0h] [rbp-40h]

	if (!a3 || !*(_QWORD*)(a3 + 5872) && !*(_QWORD*)(a3 + 5880))
		return;
	v5 = *(_QWORD*)(a3 + 3840);
	if (!v5 || (v6 = *(_DWORD*)(v5 + 128), ((v6 - 3) & 0xFFFFFFF9) != 0) || v6 == 5)
		v5 = a3;
	if (!*(_QWORD*)(v5 + 5872) && !*(_QWORD*)(v5 + 5880) || !*(_QWORD*)(a3 + 6184))
		return;
	v7 = sub_1405B3F90(a3);
	v8 = *(_QWORD*)(v7 + 5872);
	if (!v8)
		v8 = *(_QWORD*)(v7 + 5880);
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 256i64))(v8))
		return;
	v9 = sub_1405B3F90(a3);
	v10 = *(_QWORD*)(v9 + 5872);
	if (!v10)
		v10 = *(_QWORD*)(v9 + 5880);
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v10 + 264i64))(
		v10,
		0i64,
		0i64,
		1i64) == 1)
		return;
	v11 = qword_140C65898;
	v12 = *(_QWORD*)(qword_140C65898 + 29504);
	v13 = *(__m128**)(a3 + 6184);
	v14 = v13[2].m128_i64[0];
	v15 = dword_140C636A8;
	v16 = 0i64;
	v95.m128_i32[0] = 0;
	v17 = *(_DWORD*)(v12 + 88);
	if (!*(_BYTE*)(v14 + 824))
	{
		v18 = 0i64;
		if (*(_QWORD*)(v14 + 816))
		{
			while (1)
			{
				v19 = *(_QWORD*)(*(_QWORD*)(v14 + 808) + 8 * v18);
				if (!(*(unsigned __int8(__fastcall**)(__int64, __m128*))(*(_QWORD*)v19 + 72i64))(v19, &v95))
					break;
				if ((unsigned __int64)++v18 >= *(_QWORD*)(v14 + 816))
				{
					v11 = qword_140C65898;
					goto LABEL_22;
				}
			}
			v13->m128_i32[0] = dword_140C636A8;
			return;
		}
	LABEL_22:
		*(_BYTE*)(v14 + 824) = 1;
	}
	v20 = *(_QWORD*)(v13[2].m128_u64[0] + 840);
	v21 = *(_DWORD*)qword_140C63750;
	v22 = (float)(int)v20;
	if (v20 < 0)
		v22 = v22 + 1.8446744e19;
	v23 = dword_140C47480;
	v24 = dword_140C473C0;
	v25 = dword_140C47480;
	if (v21 < dword_140C47480)
		v25 = *(_DWORD*)qword_140C63750;
	v26 = (float)dword_140C47490[v25];
	v27 = dword_140C474E0;
	if (v21 < dword_140C474E0)
		v27 = *(_DWORD*)qword_140C63750;
	if (v21 < dword_140C47480)
		v23 = *(_DWORD*)qword_140C63750;
	v28 = v22 - v26;
	v29 = (float)dword_140C474F0[v27];
	v30 = (float)dword_140C47490[v23];
	v31 = dword_140C47420;
	if (v21 < dword_140C47420)
		v31 = *(_DWORD*)qword_140C63750;
	v32 = v31;
	v33 = dword_140C473C0;
	if (v21 < dword_140C473C0)
		v33 = *(_DWORD*)qword_140C63750;
	v34 = v33;
	v35 = dword_140C47430[v32];
	v36 = dword_140C475A0;
	v37 = v35 - dword_140C473D0[v34];
	v38 = v28 / (float)(v29 - v30);
	if (v21 < dword_140C473C0)
		v24 = *(_DWORD*)qword_140C63750;
	v39 = (float)v37 * fmaxf(0.0, fminf(v38, 1.0));
	v40 = dword_140C475A0;
	if (v21 < dword_140C475A0)
		v40 = *(_DWORD*)qword_140C63750;
	v41 = v40;
	v42 = dword_140C475A0;
	v43 = dword_140C475B0[v41] + (int)(float)(v39 + (float)dword_140C473D0[v24]);
	if (v21 < dword_140C475A0)
		v42 = *(_DWORD*)qword_140C63750;
	v44 = v42;
	v45 = dword_140DC3008;
	v46 = dword_140C475B0[v44] + v43;
	if ((dword_140DC3008 & 1) != 0)
	{
		v47 = (__m128)xmmword_140DC3010;
	}
	else
	{
		v47 = (__m128)xmmword_140B7A740;
		v45 = dword_140DC3008 | 1;
		xmmword_140DC3010 = xmmword_140B7A740;
		dword_140DC3008 |= 1u;
	}
	if ((v45 & 2) != 0)
	{
		v48 = (__m128)xmmword_140DC3020;
	}
	else
	{
		v48 = (__m128)xmmword_140B7ACD0;
		v45 |= 2u;
		xmmword_140DC3020 = xmmword_140B7ACD0;
		dword_140DC3008 = v45;
	}
	if ((v45 & 4) == 0)
	{
		v45 |= 4u;
		xmmword_140DC3030 = xmmword_140B7B240;
		dword_140DC3008 = v45;
	}
	if ((v45 & 8) != 0)
	{
		v49 = (__m128)xmmword_140DC3040;
	}
	else
	{
		v45 |= 8u;
		dword_140DC3008 = v45;
		v49 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7AA80), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		xmmword_140DC3040 = (__int128)v49;
	}
	if ((v45 & 0x10) != 0)
	{
		v50 = (__m128)xmmword_140DC3050;
	}
	else
	{
		dword_140DC3008 = v45 | 0x10;
		v50 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B670), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		xmmword_140DC3050 = (__int128)v50;
	}
	v51 = *(_DWORD*)qword_140C63750;
	v52 = v13->m128_i32[0];
	v53 = dword_140C475A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C475A0)
		v53 = *(_DWORD*)qword_140C63750;
	if (v15 - dword_140C475B0[v53] - v52 >= 0)
	{
		if (v15 - v52 - v46 >= 0)
			return;
		v58 = dword_140C475A0;
		if (v51 < dword_140C475A0)
			v58 = *(_DWORD*)qword_140C63750;
		if (v15 + dword_140C475B0[v58] - v52 - v46 >= 0)
		{
			v59 = dword_140C475A0;
			if (v51 < dword_140C475A0)
				v59 = *(_DWORD*)qword_140C63750;
			v60 = 0i64;
			v61 = v15 + dword_140C475B0[v59] - v52 - v46;
			if (v51 < dword_140C475A0)
				v36 = *(_DWORD*)qword_140C63750;
			v60.m128_f32[0] = (float)v61 / (float)dword_140C475B0[v36];
			v62 = _mm_shuffle_ps(v60, v60, 0);
			v48 = _mm_add_ps(v48, _mm_mul_ps(_mm_sub_ps(v47, v48), v62));
			v50 = _mm_add_ps(v50, _mm_mul_ps(_mm_sub_ps(v49, v50), v62));
		}
	}
	else
	{
		v54 = 0i64;
		v55 = _mm_sub_ps(v48, v47);
		v56 = _mm_sub_ps(v50, v49);
		if (v51 < dword_140C475A0)
			v36 = *(_DWORD*)qword_140C63750;
		v54.m128_f32[0] = (float)(v15 - v52) / (float)dword_140C475B0[v36];
		v57 = _mm_shuffle_ps(v54, v54, 0);
		v48 = _mm_add_ps(_mm_mul_ps(v55, v57), v47);
		v50 = _mm_add_ps(_mm_mul_ps(v56, v57), v49);
	}
	if ((_DWORD)qword_140C7DC60)
	{
		v48 = v47;
		v50 = v49;
	}
	v63 = *(__m128**)(v11 + 29096);
	if (!v63)
		v63 = *(__m128**)(v11 + 29088);
	v64 = (*(unsigned int(__fastcall**)(__int64*, __int64))(*a1 + 848))(a1, 25i64) == 0;
	v65 = *a1;
	if (v64)
	{
		v64 = (*(unsigned int(__fastcall**)(__int64*, __int64))(v65 + 848))(a1, 1i64) == 0;
		v67 = *a1;
		if (v64)
		{
			if ((*(unsigned int(__fastcall**)(__int64*, __int64))(v67 + 848))(a1, 9i64))
			{
				v66 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __m128*, __int64))(*a1 + 856))(a1, &v95, 9i64);
			}
			else
			{
				v68 = *(__m128**)(qword_140C65898 + 29096);
				if (!v68)
					v68 = *(__m128**)(qword_140C65898 + 29088);
				v69 = *(__m128*)(a3 + 4576);
				v66 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v69, v69, 85), v68[7]),
							_mm_mul_ps(_mm_shuffle_ps(v69, v69, 0), v68[6])),
						_mm_mul_ps(_mm_shuffle_ps(v69, v69, 170), v68[8])),
					v68[9]);
			}
		}
		else
		{
			v66 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __m128*, __int64))(v67 + 856))(a1, &v95, 1i64);
		}
	}
	else
	{
		v66 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __m128*, __int64))(v65 + 856))(a1, &v95, 25i64);
	}
	v70 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v71 = dword_140C463C0;
	v72 = v70;
	v73 = *(_DWORD*)qword_140C63750;
	LODWORD(v70) = *(_DWORD*)(v70 + 8);
	v74 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v66, v66, 85), v63[15]),
				_mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v63[14])),
			_mm_mul_ps(_mm_shuffle_ps(v66, v66, 170), v63[16])),
		v63[17]);
	v75 = qword_140C65898;
	v76 = qword_140C65898 + 31712;
	v95 = v74;
	v77 = _mm_shuffle_ps(v74, v74, 255).m128_f32[0];
	v78 = v74.m128_f32[0] * 0.5;
	v79 = 1.0 / v77;
	v80 = (float)(int)v70;
	v81 = dword_140C463C0;
	if (v73 < dword_140C463C0)
		v71 = v73;
	if (v73 < dword_140C463C0)
		v81 = v73;
	v82 = v15 - v13->m128_i32[0];
	v83 = (float)(v80 / *((float*)&xmmword_140C463D0 + v81)) * (float)((float)(v78 * v79) + 0.5);
	v84 = (float)*(int*)(v72 + 12);
	v95.m128_f32[0] = v83;
	v85 = v13[1];
	v95.m128_f32[1] = (float)(v84 / *((float*)&xmmword_140C463D0 + v71))
		* (float)(0.5 - (float)((float)(v95.m128_f32[1] * 0.5) * v79));
	v86 = (__int128)v95;
	v87 = (__int128)v95;
	v88 = _mm_sub_ps(v95, v85);
	v89 = _mm_mul_ps(v88, v88);
	if ((float)(v89.m128_f32[0] + _mm_shuffle_ps(v89, v89, 85).m128_f32[0]) > 1.0)
	{
		v13[1] = v95;
	}
	else
	{
		v86 = (__int128)v85;
		v87 = (__int128)v85;
	}
	v90 = v13[2].m128_i64[0];
	v97 = 0i64;
	v96 = v90;
	v91 = sub_14018B280(16i64, 0);
	v92 = (__int64)v91;
	v98 = v91;
	v99 = v91;
	v100 = v91 + 4;
	if (v91)
		*(_WORD*)v91 = 0;
	v102 = (float)v82;
	v106 = v87;
	v107 = v86;
	v103 = v17;
	v101 = v76;
	v105 = 1;
	v104 = 0;
	v108 = v50;
	v109 = v48;
	if (v90)
		(**(void(__fastcall***)(__int64))v90)(v90);
	v93 = *(_QWORD*)(v75 + 31848);
	v94 = sub_14018B280(176i64, 0);
	if (v94 != (int*)-16i64)
	{
		sub_1403F4AD0((__int64)(v94 + 4), (__int64)&v96);
		v92 = (__int64)v98;
		v16 = v97;
		v90 = v96;
	}
	*(_QWORD*)v94 = v93;
	*((_QWORD*)v94 + 1) = *(_QWORD*)(v93 + 8);
	**(_QWORD**)(v93 + 8) = v94;
	*(_QWORD*)(v93 + 8) = v94;
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	if (v90)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v90 + 8i64))(v90);
	if (v92)
		sub_14018B900(v92, 0);
}
// 140B7A740: using guessed type __int128 xmmword_140B7A740;
// 140B7AA80: using guessed type __int128 xmmword_140B7AA80;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7ACD0: using guessed type __int128 xmmword_140B7ACD0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B670: using guessed type __int128 xmmword_140B7B670;
// 140C463C0: using guessed type int dword_140C463C0;
// 140C463D0: using guessed type __int128 xmmword_140C463D0;
// 140C473C0: using guessed type int dword_140C473C0;
// 140C473D0: using guessed type int dword_140C473D0[16];
// 140C47420: using guessed type int dword_140C47420;
// 140C47430: using guessed type int dword_140C47430[16];
// 140C47480: using guessed type int dword_140C47480;
// 140C47490: using guessed type int dword_140C47490[16];
// 140C474E0: using guessed type int dword_140C474E0;
// 140C474F0: using guessed type int dword_140C474F0[16];
// 140C475A0: using guessed type int dword_140C475A0;
// 140C475B0: using guessed type int dword_140C475B0[28];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140DC3008: using guessed type int dword_140DC3008;
// 140DC3010: using guessed type __int128 xmmword_140DC3010;
// 140DC3020: using guessed type __int128 xmmword_140DC3020;
// 140DC3030: using guessed type __int128 xmmword_140DC3030;
// 140DC3040: using guessed type __int128 xmmword_140DC3040;
// 140DC3050: using guessed type __int128 xmmword_140DC3050;

