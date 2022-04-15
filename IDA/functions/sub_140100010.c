//----- (0000000140100010) ----------------------------------------------------
__int64 __fastcall sub_140100010(__int64 a1, __m128* a2, __m128* a3, float a4, char a5)
{
	float v9; // xmm6_4
	__m128 v10; // xmm0
	int v11; // xmm6_4
	int v12; // ecx
	unsigned int v13; // r14d
	int v14; // eax
	__m128 v15; // xmm0
	int v16; // r8d
	int v17; // edx
	unsigned int* v18; // rax
	int v19; // r8d
	int v20; // ecx
	__m128i v21; // xmm1
	__m128i v22; // xmm3
	__m128 v23; // xmm7
	__m128i v24; // xmm3
	__m128i v25; // xmm1
	__m128 v26; // xmm6
	unsigned int* v27; // rax
	signed int* v28; // r13
	__m128 v29; // xmm0
	__m128 v30; // xmm4
	__m128i v31; // xmm3
	__m128i v32; // xmm1
	__m128i v33; // xmm3
	_DWORD* v34; // r10
	signed int* v35; // r10
	__m128* v36; // r8
	_DWORD* v37; // r10
	unsigned __int64 v38; // rcx
	unsigned __int64 v39; // r8
	__int64 v40; // rdx
	__m128* v41; // rcx
	unsigned __int64 v42; // rax
	__m128* v43; // rax
	__m128 v44; // xmm2
	int* v45; // rcx
	unsigned __int64 v46; // rax
	signed int v47; // r12d
	__int64 v48; // rax
	signed int v49; // r13d
	unsigned int v50; // edi
	int* v51; // rsi
	unsigned __int8 v52; // r9
	signed int v53; // edx
	__int64 v54; // rax
	signed int v55; // r8d
	char* v56; // rcx
	signed int v57; // r15d
	__int64 v58; // rax
	signed int v59; // r12d
	unsigned int v60; // edi
	int v61; // eax
	signed int* v62; // rsi
	int v63; // xmm0_4
	unsigned __int8 v64; // r9
	signed int v65; // edx
	__int64 v66; // rax
	signed int v67; // r8d
	float v68; // xmm0_4
	int v70; // [rsp+28h] [rbp-D8h]
	int v71; // [rsp+38h] [rbp-C8h]
	int v72; // [rsp+38h] [rbp-C8h]
	__m128 v73; // [rsp+50h] [rbp-B0h] BYREF
	BOOL v74; // [rsp+60h] [rbp-A0h]
	__int64 v75[2]; // [rsp+68h] [rbp-98h] BYREF
	__int64 v76; // [rsp+78h] [rbp-88h]
	__m128 v77; // [rsp+80h] [rbp-80h] BYREF
	__m128 v78; // [rsp+90h] [rbp-70h]
	int v79; // [rsp+A0h] [rbp-60h] BYREF
	int v80; // [rsp+A4h] [rbp-5Ch]
	float v81; // [rsp+B0h] [rbp-50h]
	float v82; // [rsp+B4h] [rbp-4Ch]
	__m128 v83; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v84[4]; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v85[6]; // [rsp+110h] [rbp+10h] BYREF
	__m128 v86; // [rsp+170h] [rbp+70h] BYREF
	unsigned __int64 v87; // [rsp+180h] [rbp+80h]
	__int64 v88; // [rsp+188h] [rbp+88h]
	float v89[6]; // [rsp+190h] [rbp+90h] BYREF

	v76 = sub_1400FE680(*(_QWORD*)a1);
	if (v76)
	{
		v9 = *(float*)(a1 + 84) - *(float*)(a1 + 80);
		v10 = 0i64;
		LODWORD(v75[0]) = 0;
		*(float*)&v11 = (float)(v9 * a4) + *(float*)(a1 + 80);
		v74 = v11;
		v12 = v11;
		if (v11 < 0)
			v12 = 0x80000000 - v11;
		v13 = 0;
		v14 = abs32(v12);
		v74 = v14 > 84;
		if (v14 > 84)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
			v15 = *a2;
			v86.m128_u64[1] = (unsigned __int64)&v73;
			LODWORD(v87) = v11;
			v88 = 0i64;
			v73 = _mm_mul_ps(_mm_add_ps(v15, a2[1]), (__m128)xmmword_140B7AC50);
			v85[1] = v87;
			v86.m128_i32[0] = 1065353216;
			v10 = v86;
			v85[0] = (__int128)v86;
			sub_1401B0840((int*)v85, (__int64)v84);
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v84);
		}
		if (*(_BYTE*)(a1 + 96))
		{
			v16 = (int)a2[1].m128_f32[0];
			v17 = (int)a2[1].m128_f32[1];
			v73.m128_i32[0] = (int)a2->m128_f32[0];
			v73.m128_u64[1] = __PAIR64__(v17, v16);
			v73.m128_i32[1] = (int)a2->m128_f32[1];
			v18 = sub_14014E8D0(a1 + 112, v75, (unsigned int*)&v73);
			v19 = (int)a2[1].m128_f32[1];
			v20 = (int)a2->m128_f32[1];
			v73.m128_i32[2] = (int)a2[1].m128_f32[0];
			v21 = _mm_cvtsi32_si128(v18[3]);
			v22 = _mm_cvtsi32_si128(v18[2]);
			v73.m128_i32[1] = v20;
			v73.m128_i32[3] = v19;
			v23 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(0))));
			v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v18), _mm_cvtsi32_si128(0));
			v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18[1]), _mm_cvtsi32_si128(0));
			v73.m128_i32[0] = (int)a2->m128_f32[0];
			v26 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v24, v25));
			v27 = sub_14014E8D0(a1 + 208, v75, (unsigned int*)&v73);
			v28 = (signed int*)(a1 + 32);
			v29 = (__m128)_mm_cvtsi32_si128(0);
			v30 = _mm_sub_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v27[2]), (__m128i)v29),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v27[3]), (__m128i)v29))),
				v23);
			v31 = _mm_cvtsi32_si128(*v27);
			v32 = _mm_cvtsi32_si128(v27[1]);
			LODWORD(v27) = *(unsigned __int8*)(a1 + 58);
			v75[0] = a1 + 32;
			v33 = _mm_unpacklo_epi32(v31, (__m128i)v29);
			v29.m128_f32[0] = a4;
			v10 = _mm_shuffle_ps(v29, v29, 0);
			v78 = _mm_add_ps(_mm_mul_ps(v30, v10), v23);
			v77 = _mm_add_ps(
				_mm_mul_ps(
					_mm_sub_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi32(v33, _mm_unpacklo_epi32(v32, _mm_cvtsi32_si128(0)))), v26),
					v10),
				v26);
			sub_1400FF280((_DWORD*)(a1 + 8), (_DWORD*)(a1 + 32), &v77, v86.m128_f32, 1, (int)v27);
			sub_1400FF280(v34, (_DWORD*)(a1 + 32), &v77, v89, 0, *(unsigned __int8*)(a1 + 57));
		}
		else
		{
			v28 = (signed int*)(a1 + 32);
			v70 = *(unsigned __int8*)(a1 + 58);
			v75[0] = a1 + 32;
			sub_1400FF280((_DWORD*)(a1 + 8), (_DWORD*)(a1 + 32), a2, v86.m128_f32, 1, v70);
			sub_1400FF280(v37, (_DWORD*)(a1 + 32), v36, v89, 0, *(unsigned __int8*)(a1 + 57));
		}
		v38 = *(unsigned int*)(a1 + 92);
		v39 = *(_QWORD*)(qword_140C63678 + 48);
		v40 = *(_QWORD*)(qword_140C63678 + 40);
		if (v38 >= v39)
			v41 = *(__m128**)(qword_140C63678 + 40);
		else
			v41 = (__m128*)(v40 + 32 * v38);
		v42 = *(unsigned int*)(a1 + 88);
		if (v42 >= v39)
			v43 = *(__m128**)(qword_140C63678 + 40);
		else
			v43 = (__m128*)(v40 + 32 * v42);
		v44 = *v41;
		v10.m128_f32[0] = a4;
		v45 = (int*)v89;
		v83 = _mm_mul_ps(*a3, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v44, *v43), _mm_shuffle_ps(v10, v10, 0)), *v43));
		if (*(_BYTE*)(a1 + 56))
		{
			v46 = a1 - (_QWORD)v89;
			v75[0] = (__int64)v89;
			v73.m128_u64[0] = a1 - (_QWORD)v89;
			do
			{
				if (*(_BYTE*)(a1 + 57))
				{
					v47 = *(_DWORD*)(a1 + 4i64 * (4 - v13) + 32);
					v48 = 5 - v13;
				}
				else
				{
					v47 = *(int*)((char*)v45 + v46 + 32);
					v45 = (int*)v75[0];
					v48 = v13 + 1;
				}
				v49 = *(_DWORD*)(a1 + 4 * v48 + 32);
				if (v47 < v49)
				{
					v80 = *v45;
					v82 = v89[v13 + 1];
					if (*(float*)&v80 < v82)
					{
						v50 = 0;
						v51 = (int*)&v86;
						do
						{
							if (!a5 || (v13 & 0xFFFFFFFB) == 0 || (v50 & 0xFFFFFFFB) == 0)
							{
								v52 = *(_BYTE*)(a1 + 58);
								if (v52)
								{
									v53 = *(_DWORD*)(a1 + 4i64 * (4 - v50) + 8);
									v54 = 5 - v50;
								}
								else
								{
									v53 = *(int*)((char*)v51 + a1 - (_QWORD)&v86 + 8);
									v54 = v50 + 1;
								}
								v55 = *(_DWORD*)(a1 + 4 * v54 + 8);
								if (v53 < v55)
								{
									v79 = *v51;
									v81 = v86.m128_f32[v50 + 1];
									if (*(float*)&v79 < v81)
									{
										v71 = *(unsigned __int8*)(a1 + 57);
										v78 = _mm_cvtepi32_ps(
											_mm_unpacklo_epi32(
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(v55), _mm_cvtsi32_si128(0)),
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(0))));
										v77 = _mm_cvtepi32_ps(
											_mm_unpacklo_epi32(
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(v53), _mm_cvtsi32_si128(0)),
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(0))));
										(*(void(__fastcall**)(__int64, __int64, __m128*, int*, int*, __m128*, int, int, _DWORD))(*(_QWORD*)qword_140C65680 + 232i64))(
											qword_140C65680,
											v76,
											&v77,
											&v79,
											&v79,
											&v83,
											1,
											v71,
											v52);
									}
								}
							}
							++v50;
							++v51;
						} while (v50 < 5);
					}
					v45 = (int*)v75[0];
				}
				v46 = v73.m128_u64[0];
				++v45;
				++v13;
				v75[0] = (__int64)v45;
			} while (v13 < 5);
		}
		else
		{
			v56 = (char*)v89 - a1;
			v73.m128_u64[0] = (unsigned __int64)v89 - a1;
			do
			{
				if (*(_BYTE*)(a1 + 57))
				{
					v57 = *(_DWORD*)(a1 + 4i64 * (4 - v13) + 32);
					v58 = 5 - v13;
				}
				else
				{
					v57 = *v28;
					v56 = (char*)v73.m128_u64[0];
					v58 = v13 + 1;
				}
				v59 = *(_DWORD*)(a1 + 4 * v58 + 32);
				if (v57 < v59)
				{
					v60 = 0;
					v61 = *(_DWORD*)(a1 + 4i64 * (v13 + 1) + 32);
					v77.m128_i32[1] = *(signed int*)((char*)v28 + (_QWORD)v56 - 32);
					v80 = v77.m128_i32[1];
					v62 = v35;
					v63 = SLODWORD(v89[v13 + 1]);
					v78.m128_f32[1] = (float)((float)v61 + v77.m128_f32[1]) - (float)*v28;
					v82 = *(float*)&v63;
					do
					{
						if (!a5 || (v13 & 0xFFFFFFFB) == 0 || (v60 & 0xFFFFFFFB) == 0)
						{
							v64 = *(_BYTE*)(a1 + 58);
							if (v64)
							{
								v65 = *(_DWORD*)(a1 + 4i64 * (4 - v60) + 8);
								v66 = 5 - v60;
							}
							else
							{
								v65 = *v62;
								v66 = v60 + 1;
							}
							v67 = *(_DWORD*)(a1 + 4 * v66 + 8);
							if (v65 < v67)
							{
								v77.m128_i32[0] = *(signed int*)((char*)v62 + (_QWORD)&v86 - a1 - 8);
								v79 = v77.m128_i32[0];
								v68 = v86.m128_f32[v60 + 1];
								v78.m128_f32[0] = (float)((float)*(int*)(a1 + 4i64 * (v60 + 1) + 8) + v77.m128_f32[0]) - (float)*v62;
								v81 = v68;
								v72 = *(unsigned __int8*)(a1 + 57);
								v84[1] = (__int128)_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(0))));
								v84[0] = (__int128)_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v65), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(0))));
								(*(void(__fastcall**)(__int64, __int64, __int128*, __m128*, int*, __m128*, int, int, _DWORD))(*(_QWORD*)qword_140C65680 + 232i64))(
									qword_140C65680,
									v76,
									v84,
									&v77,
									&v79,
									&v83,
									1,
									v72,
									v64);
							}
						}
						++v60;
						++v62;
					} while (v60 < 5);
					v28 = (signed int*)v75[0];
				}
				v56 = (char*)v73.m128_u64[0];
				++v28;
				++v13;
				v75[0] = (__int64)v28;
				v35 = (signed int*)(a1 + 8);
			} while (v13 < 5);
		}
		if (v74)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return 0i64;
}
// 1401002CA: variable 'v34' is possibly undefined
// 140100322: variable 'v37' is possibly undefined
// 140100322: variable 'v36' is possibly undefined
// 1401005DC: variable 'v35' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140100010: using guessed type float var_90[6];

