//----- (00000001409037C1) ----------------------------------------------------
__int64 __fastcall sub_1409037C1(
	__int64 a1,
	__int64 a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	double a5,
	void* a6,
	__int64 a7,
	__int64 a8,
	__int64 a9,
	__int64 a10,
	__int64 a11,
	__int64 a12,
	int a13,
	int a14,
	int a15,
	int a16,
	int a17,
	__int64 a18,
	int a19,
	int a20,
	int a21,
	int a22,
	int a23,
	int a24,
	int a25,
	int a26,
	int a27,
	__int128* a28,
	int a29,
	__int128* a30,
	__int128* a31)
{
	int v31; // ebx
	int v32; // ebp
	int v33; // edi
	int v34; // esi
	int v35; // r12d
	int v36; // edx
	__int64 i; // rbp
	__m128d v39; // xmm0
	int v40; // eax
	unsigned int* v41; // rcx
	__int64 v42; // rax
	__int64 v43; // rdi
	unsigned __int64 v44; // r9
	int v45; // r10d
	unsigned __int64 v46; // rdi
	__int64 v47; // r9
	unsigned __int64 v48; // rsi
	__int64 v49; // r9
	unsigned __int64 v50; // r10
	__int64 v51; // rax
	unsigned __int64 v52; // rdi
	__int64 v53; // r11
	unsigned __int64 v54; // r9
	unsigned int epi16; // ebx
	int v56; // esi
	int v57; // ecx
	unsigned __int64 v58; // r9
	int v59; // edx
	unsigned __int64 v60; // rdi
	unsigned int v61; // r9d
	int v62; // ebx
	__int64 v63; // r11
	unsigned __int64 v64; // r9
	unsigned __int64 v65; // rax
	unsigned __int64 v66; // r10
	int v67; // edx
	double v68; // xmm2_8
	double v69; // xmm3_8
	double v70; // xmm1_8
	double v71; // xmm6_8
	double v72; // xmm2_8
	double v73; // xmm6_8
	__m128d v74; // xmm1
	int v75; // edx
	double v76; // xmm3_8
	__m128d v77; // xmm1
	__m128i v78; // xmm4
	char* v79; // rax
	__m128d v80; // xmm2
	__m128d v81; // xmm0
	double v82; // xmm3_8
	__m128d v83; // xmm5
	__m128d v84; // xmm0
	__m128d v85; // xmm5
	__m128d v86; // xmm0
	double v87; // xmm3_8
	__m128d v88; // xmm2
	__m128i v89; // xmm3
	double v90; // xmm7_8
	__m128d v91; // xmm6
	__m128d v92; // xmm2
	__m128d v93; // xmm5
	double v94; // xmm7_8
	__m128d v95; // xmm6
	double v96; // xmm0_8
	unsigned __int64 v97; // rax
	unsigned __int64 v98; // r9
	unsigned __int64 v99; // r9
	unsigned __int64 v100; // rbx
	unsigned __int64 v101; // r11
	unsigned __int64 v102; // rbx
	__int64 v103; // r9
	unsigned __int64 v104; // rbx
	unsigned __int64 v105; // r11
	unsigned __int64 v106; // rbx
	int v107; // [rsp+20h] [rbp+20h]
	int v108; // [rsp+48h] [rbp+48h]
	int v109; // [rsp+50h] [rbp+50h]
	int v110; // [rsp+58h] [rbp+58h]
	int v111; // [rsp+60h] [rbp+60h]

	v36 = v107;
	v110 = v31;
	v109 = v34;
	v108 = v33;
	v111 = v32;
	for (i = 0i64; i < 2; ++i)
	{
		if ((v36 & 1) != 0)
		{
			a1 = (__int64)&unk_140E4FC00;
			a5 = *((double*)&a18 + i);
			a6 = &unk_140E4FC00;
			v39 = (__m128d) * (unsigned __int64*)&a5;
			v40 = _mm_extract_epi16((__m128i) * (unsigned __int64*)&a5, 3) & 0x7FF0;
			if (v40 == 32752)
			{
				v96 = a5 - a5;
			}
			else
			{
				v41 = (unsigned int*)((char*)&unk_140E4FC00 + (((unsigned int)(v40 - 16224) >> 7) & 0xFFFC) + 224);
				v42 = ((unsigned int)(*(_QWORD*)&a5 >> 21) | 0x80000000) >> 11;
				a3 = ((unsigned __int64)(unsigned int)(LODWORD(a5) * v41[4]
					+ ((v42 * v41[6] + (unsigned __int64)(LODWORD(a5) * v41[5])) >> 32)
					+ ((LODWORD(a5) * (unsigned __int64)v41[5]) >> 32)
					+ v42 * v41[5]) << 32) | ((_DWORD)v42 * v41[6] + LODWORD(a5) * v41[5]);
				v43 = v41[2];
				v44 = LODWORD(a5) * v43;
				v45 = LODWORD(a5) * v43;
				v46 = (((unsigned int)v44
					+ ((LODWORD(a5) * v41[3]
						+ ((LODWORD(a5) * v41[4]
							+ ((v42 * v41[6] + (unsigned __int64)(LODWORD(a5) * v41[5])) >> 32)
							+ ((LODWORD(a5) * (unsigned __int64)v41[5]) >> 32)
							+ v42 * v41[5]) >> 32)
						+ ((LODWORD(a5) * (unsigned __int64)v41[4]) >> 32)
						+ v42 * v41[4]) >> 32)
					+ ((LODWORD(a5) * (unsigned __int64)v41[3]) >> 32)
					+ v42 * v41[3]) >> 32)
					+ HIDWORD(v44)
					+ v42 * v43;
				v47 = v41[1];
				v48 = LODWORD(a5) * v47;
				v49 = v42 * v47;
				v50 = (unsigned int)(LODWORD(a5) * v41[3]
					+ ((LODWORD(a5) * v41[4]
						+ ((v42 * v41[6] + (unsigned __int64)(LODWORD(a5) * v41[5])) >> 32)
						+ ((LODWORD(a5) * (unsigned __int64)v41[5]) >> 32)
						+ v42 * v41[5]) >> 32)
					+ ((LODWORD(a5) * (unsigned __int64)v41[4]) >> 32)
					+ v42 * v41[4]) | ((unsigned __int64)(unsigned int)(v45
						+ ((LODWORD(a5) * v41[3]
							+ ((LODWORD(a5) * v41[4]
								+ ((v42 * v41[6]
									+ (unsigned __int64)(LODWORD(a5) * v41[5])) >> 32)
								+ ((LODWORD(a5)
									* (unsigned __int64)v41[5]) >> 32)
								+ v42 * v41[5]) >> 32)
							+ ((LODWORD(a5) * (unsigned __int64)v41[4]) >> 32)
							+ v42 * v41[4]) >> 32)
						+ ((LODWORD(a5) * (unsigned __int64)v41[3]) >> 32)
						+ v42 * v41[3]) << 32);
				v51 = *v41;
				v52 = (unsigned int)v48 + v46;
				v53 = (unsigned int)v52;
				v54 = HIDWORD(v52) + HIDWORD(v48) + v49;
				epi16 = _mm_extract_epi16((__m128i) * (unsigned __int64*)&a5, 3);
				v56 = epi16 & 0x8000;
				v57 = 8 * ((_DWORD)v41 - ((unsigned int)&unk_140E4FC00 + 224)) + 19 - (((epi16 >> 4) & 0x7FF) - 1023);
				v58 = v51 * LODWORD(a5) + v54;
				v59 = v57 + 32;
				if (v57 < 1)
				{
					LODWORD(a1) = -v57;
					v98 = ((unsigned int)v52 | (v58 << 32)) << a1;
					v60 = v98;
					if ((v98 & 0x80000000) != 0i64)
					{
						v103 = (unsigned int)v98 >> a1;
						v104 = 0x100000000ui64 >> a1;
						v105 = (0 - __PAIR128__(v50, a3)) >> 64;
						a1 = -(__int64)a3;
						v106 = v104 - (((a3 != 0) + v50 != 0) + v103);
						a3 = -(__int64)a3;
						v50 = v105;
						a4 = v106;
						v62 = 0x8000;
						LODWORD(v60) = (v60 >> 3) + 0x20000000;
					}
					else
					{
						a4 = (unsigned int)v98 >> a1;
						v62 = 0;
						v60 >>= 3;
					}
				}
				else
				{
					LODWORD(a1) = 29 - v57;
					LODWORD(v60) = (_DWORD)v58 << a1;
					v61 = ((_DWORD)v58 << a1) & 0x1FFFFFFF;
					if ((v60 & 0x10000000) != 0)
					{
						v99 = v53 | ((unsigned __int64)(v61 >> a1) << 32);
						v100 = (unsigned __int64)(0x20000000u >> a1) << 32;
						LODWORD(v60) = v60 + 0x20000000;
						v101 = (0 - __PAIR128__(v50, a3)) >> 64;
						a1 = -(__int64)a3;
						v102 = v100 - (((a3 != 0) + v50 != 0) + v99);
						a3 = -(__int64)a3;
						v50 = v101;
						a4 = v102;
						v62 = 0x8000;
					}
					else
					{
						v62 = 0;
						a4 = v53 | ((unsigned __int64)(v61 >> a1) << 32);
					}
				}
				if (a4 || (v59 += 64, a4 = v50, v50 = a3, a3 = 0i64, a4) || (v59 += 64, a4 = v50, v50 = 0i64, a4))
				{
					_BitScanReverse64((unsigned __int64*)&v63, a4);
					LODWORD(a1) = 29 - v63;
					if ((int)v63 >= 29)
					{
						if ((_DWORD)v63 != 29)
						{
							v97 = a4;
							a4 >>= (unsigned __int8)v63 - 29;
							v59 -= v63 - 29;
							LODWORD(a1) = 64 - (v63 - 29);
							v50 = (v97 << a1) | (v50 >> ((unsigned __int8)v63 - 29));
						}
					}
					else
					{
						v64 = a4 << a1;
						v65 = v50;
						v66 = v50 << a1;
						v59 += a1;
						LODWORD(a1) = 64 - a1;
						a3 >>= a1;
						a4 = (v65 >> a1) | v64;
						v50 = a3 | v66;
					}
					v67 = v62 ^ (v56 | (-16 * v59 + 16368));
					v68 = *((double*)&unk_140E4FC00 + 26);
					v39.m128d_f64[0] = (double)(int)a4 * *(double*)_mm_insert_epi16((__m128i)0i64, v67, 3).m128i_i64;
					v69 = (double)(int)(v50 >> 1) * *(double*)_mm_insert_epi16((__m128i)0i64, v67 - 1008, 3).m128i_i64;
					v70 = *(double*)_mm_move_epi64((__m128i)v39).m128i_i64;
					v39.m128d_f64[0] = v39.m128d_f64[0] * v68;
					LOBYTE(v51) = ((__int16)v56 >> 15) ^ (((__int16)v56 >> 15) + ((unsigned int)v60 >> 29));
					v71 = *((double*)&unk_140E4FC00 + 27) * (v70 + v69) + v69 * v68;
					v72 = *(double*)_mm_move_epi64((__m128i)v39).m128i_i64;
					v39.m128d_f64[0] = v39.m128d_f64[0] + v71;
					v73 = v71 + v72 - v39.m128d_f64[0];
				}
				else
				{
					v39 = 0i64;
					v73 = 0.0;
				}
				v74 = (__m128d)_mm_loadl_epi64((const __m128i*) & unk_140E4FC00 + 7);
				v74.m128d_f64[0] = v74.m128d_f64[0] * v39.m128d_f64[0];
				v75 = (int)v74.m128d_f64[0];
				v74.m128d_f64[0] = v74.m128d_f64[0] + *((double*)&unk_140E4FC00 + 16) - *((double*)&unk_140E4FC00 + 16);
				v76 = *((double*)&unk_140E4FC00 + 10) * v74.m128d_f64[0];
				v77 = _mm_unpacklo_pd(v74, v74);
				v78 = _mm_move_epi64((__m128i)v39);
				v79 = (char*)&unk_140E4FC00 + 32 * ((8 * (_BYTE)v51 + (_BYTE)v75) & 0x3Fu) + 400;
				v80 = _mm_mul_pd(*((__m128d*) & unk_140E4FC00 + 4), v77);
				v39.m128d_f64[0] = v39.m128d_f64[0] - v76;
				*(double*)v78.m128i_i64 = *(double*)v78.m128i_i64 - v76;
				v81 = _mm_unpacklo_pd(v39, v39);
				v82 = *(double*)_mm_move_epi64(v78).m128i_i64;
				*(double*)v78.m128i_i64 = *(double*)v78.m128i_i64 - v80.m128d_f64[0];
				v83 = _mm_mul_pd(*((__m128d*) & unk_140E4FC00 + 3), v81);
				v84 = _mm_sub_pd(v81, v80);
				v85 = _mm_mul_pd(v83, v84);
				v86 = _mm_mul_pd(v84, v84);
				v87 = v82 - *(double*)v78.m128i_i64 - v80.m128d_f64[0];
				v88 = *(__m128d*)v79;
				v77.m128d_f64[0] = v77.m128d_f64[0] * *((double*)&unk_140E4FC00 + 12) - v87;
				v89 = _mm_loadl_epi64((const __m128i*)(v79 + 24));
				v88.m128d_f64[0] = *(double*)v79 + *(double*)v89.m128i_i64;
				v90 = *((double*)v79 + 1) * *(double*)v78.m128i_i64 - v88.m128d_f64[0];
				v77.m128d_f64[0] = v77.m128d_f64[0] - v73;
				v88.m128d_f64[0] = v88.m128d_f64[0] * *(double*)v78.m128i_i64;
				v91 = _mm_mul_pd(*((__m128d*) & unk_140E4FC00 + 1), v86);
				*(double*)v89.m128i_i64 = *(double*)v89.m128i_i64 * *(double*)v78.m128i_i64;
				v92 = _mm_mul_pd(v88, v86);
				*(double*)v78.m128i_i64 = *(double*)v78.m128i_i64 * *(double*)v79;
				v93 = _mm_mul_pd(_mm_add_pd(v85, *((__m128d*) & unk_140E4FC00 + 2)), _mm_mul_pd(v86, v86));
				v86.m128d_f64[0] = *(double*)_mm_move_epi64(v89).m128i_i64;
				*(double*)v89.m128i_i64 = *(double*)v89.m128i_i64 + *((double*)v79 + 1);
				v77.m128d_f64[0] = v77.m128d_f64[0] * v90;
				v94 = *(double*)_mm_move_epi64(v78).m128i_i64;
				*(double*)v78.m128i_i64 = *(double*)v78.m128i_i64 + *(double*)v89.m128i_i64;
				v95 = _mm_mul_pd(_mm_add_pd(_mm_add_pd(v91, unk_140E4FC00), v93), v92);
				v96 = *(double*)_mm_move_epi64(v78).m128i_i64
					+ v77.m128d_f64[0]
					+ *((double*)v79 + 2)
					+ *((double*)v79 + 1)
					- *(double*)v89.m128i_i64
					+ v86.m128d_f64[0]
					+ *(double*)v89.m128i_i64
					- *(double*)v78.m128i_i64
					+ v94
					+ v95.m128d_f64[0]
					+ _mm_unpackhi_pd(v95, v95).m128d_f64[0];
			}
			LODWORD(a7) = LODWORD(v96);
			*((double*)&a28 + i) = v96;
			v36 = v107;
		}
		v36 >>= 1;
		v107 = v36;
	}
	return sub_140903819(
		a1,
		v36,
		a3,
		a4,
		LODWORD(a5),
		(_DWORD)a6,
		a7,
		v35,
		v108,
		v109,
		v110,
		v111,
		a13,
		a14,
		a15,
		a16,
		a17,
		a18,
		a19,
		a20,
		a21,
		a22,
		a23,
		a24,
		a25,
		a26,
		a27,
		(_DWORD)a28,
		a29,
		a30,
		a31);
}
// 1409037C7: variable 'v31' is possibly undefined
// 1409037CC: variable 'v34' is possibly undefined
// 1409037D1: variable 'v33' is possibly undefined
// 1409037DB: variable 'v32' is possibly undefined
// 140903811: variable 'v35' is possibly undefined
// 140903819: using guessed type __int64 __fastcall sub_140903819(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int128 *__struct_ptr, __int128 *__struct_ptr);

