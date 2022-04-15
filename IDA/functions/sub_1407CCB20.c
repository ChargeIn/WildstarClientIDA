//----- (00000001407CCB20) ----------------------------------------------------
__int64 __fastcall sub_1407CCB20(__int64 a1, __m128* a2, int a3)
{
	__int64 v3; // r14
	__int64 v6; // rax
	int v7; // r8d
	char v8; // cl
	__m128 v9; // xmm1
	unsigned int v10; // edx
	_DWORD* v11; // rbx
	float v12; // xmm4_4
	int v13; // edx
	__m128 v14; // xmm10
	__m128 v15; // xmm14
	__m128 v16; // xmm3
	__int128 v17; // xmm1
	__m128 v18; // xmm11
	int v19; // xmm2_4
	__int64* v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__m128 v24; // xmm4
	__m128 v25; // xmm5
	__int64 v26; // r8
	__m128 v27; // xmm9
	__m128 v28; // xmm15
	__int64 v29; // r9
	__m128* v30; // rdx
	int* v31; // r11
	__int64 v32; // r10
	__int64 v33; // rsi
	__m128 v34; // xmm7
	__m128 v35; // xmm6
	__m128 v36; // xmm3
	__m128 v37; // xmm2
	__m128 v38; // xmm0
	__m128 v39; // xmm5
	__m128 v40; // xmm4
	__m128 v41; // xmm2
	__m128 v42; // xmm1
	__m128 v43; // xmm8
	__m128 v44; // xmm3
	__m128 v45; // xmm2
	__m128 v46; // xmm3
	__m128 v47; // xmm7
	__m128 v48; // xmm3
	__m128 v49; // xmm2
	__m128 v50; // xmm3
	__m128 v51; // xmm3
	__m128 v52; // xmm3
	__m128 v53; // xmm2
	__int64 v54; // r13
	__int64 v55; // rcx
	__int64 v56; // r8
	int v57; // esi
	int v58; // r14d
	__int64 result; // rax
	__m128 v60; // xmm6
	__m128 v61; // xmm7
	__m128 v62; // xmm8
	__m128 v63; // xmm9
	int v64; // r11d
	int* v65; // r15
	__m128 v66; // xmm5
	__m128 v67; // xmm4
	int v68; // r8d
	__m128* v69; // r9
	int* v70; // r10
	int v71; // eax
	__m128 v72; // xmm3
	__int64 v73; // rdx
	__int64 v74; // rax
	__m128 v75; // xmm3
	__m128 v76; // xmm2
	int v77; // [rsp+28h] [rbp-E0h]
	int v78; // [rsp+2Ch] [rbp-DCh]
	int v79; // [rsp+30h] [rbp-D8h]
	int v80; // [rsp+34h] [rbp-D4h]
	_DWORD v81[2]; // [rsp+38h] [rbp-D0h]
	__int64 v82; // [rsp+40h] [rbp-C8h]
	__m128 v83; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v84; // [rsp+58h] [rbp-B0h]
	__m128 v85; // [rsp+68h] [rbp-A0h]
	__m128 v86; // [rsp+78h] [rbp-90h]
	__m128 v87; // [rsp+88h] [rbp-80h] BYREF
	__int128 v88; // [rsp+98h] [rbp-70h] BYREF
	__int128 v89[4]; // [rsp+A8h] [rbp-60h] BYREF
	int v90; // [rsp+E8h] [rbp-20h] BYREF
	int v91[3]; // [rsp+ECh] [rbp-1Ch]
	float v92; // [rsp+F8h] [rbp-10h]
	int v93; // [rsp+FCh] [rbp-Ch]
	__int64 v94; // [rsp+100h] [rbp-8h]
	int v95; // [rsp+108h] [rbp+0h]
	int v96[3]; // [rsp+10Ch] [rbp+4h]
	int v97[10]; // [rsp+118h] [rbp+10h] BYREF

	v3 = a1;
	v82 = a1;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6560) + 24i64))(*(_QWORD*)(a1 + 6560));
	v7 = a3 - 1;
	v8 = a3;
	v9 = (__m128)0x3F000000u;
	v14 = 0i64;
	v10 = *(_DWORD*)(v6 + 4);
	v96[0] = 0x40000000;
	v94 = 0x40000000i64;
	v15 = 0i64;
	v91[0] = 1065353216;
	v11 = &unk_140C55808;
	v12 = (float)(int)(v10 >> v8);
	LODWORD(v6) = v10 >> v7;
	v13 = 0;
	v79 = 0;
	v95 = 0;
	v90 = 0;
	v14.m128_f32[0] = (float)(int)v6;
	*(float*)&v91[2] = v12;
	*(float*)&v96[2] = (float)(int)v6;
	v92 = (float)(int)v6;
	v15.m128_f32[0] = (float)v7;
	v16 = v14;
	v9.m128_f32[0] = 0.5 / (float)(int)v6;
	v16.m128_f32[0] = (float)(int)v6 * 0.5;
	v87 = _mm_shuffle_ps(v9, v9, 0);
	v17 = 0i64;
	v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v16), _mm_unpacklo_ps(v16, (__m128)0i64));
	*(float*)&v91[1] = v12 - 1.0;
	*(float*)&v19 = (float)(int)v6 - 2.0;
	v80 = v19;
	v93 = v19;
	do
	{
		v20 = *(__int64**)(v3 + 6560);
		v88 = v17;
		v21 = *v20;
		v96[1] = v19;
		v97[0] = 1051372203;
		v97[1] = 1056964608;
		v97[2] = 1051372203;
		v97[3] = 1056964608;
		v97[4] = 1065353216;
		v97[5] = 1056964608;
		v97[6] = 1051372203;
		v97[7] = 1056964608;
		v97[8] = 1051372203;
		(*(void(__fastcall**)(__int64*, __int128*, _QWORD, __m128*))(v21 + 120))(v20, &v88, (unsigned int)v13, &v83);
		v22 = 0i64;
		v23 = 0i64;
		v24 = v84;
		v25 = v83;
		v26 = 3i64;
		do
		{
			v27 = (__m128)(unsigned int)v91[v23 - 1];
			v28 = (__m128) * (unsigned int*)((char*)&v92 + v23 * 4);
			v29 = 0i64;
			v30 = a2 + 3;
			v31 = &v97[v23];
			v32 = 0i64;
			v33 = 3i64;
			do
			{
				v34 = (__m128)(unsigned int)v91[v32 - 1];
				v35 = (__m128)(unsigned int)v96[v32 - 1];
				*a2 = _mm_sub_ps(
					_mm_unpacklo_ps(_mm_unpacklo_ps(v34, (__m128)0i64), _mm_unpacklo_ps(v27, (__m128)0x3F800000u)),
					(__m128)xmmword_140B7A490);
				v36 = _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v35, v14), _mm_unpacklo_ps(v28, (__m128)0i64)), v18);
				v37 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v25);
				v38 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 85), v24);
				v39 = (__m128)(unsigned int)v91[v29];
				v40 = (__m128)(unsigned int)v96[v29];
				v41 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v37, v38), _mm_mul_ps(_mm_shuffle_ps(v36, v36, 170), v85)), v86);
				v42 = _mm_unpacklo_ps((__m128)0i64, (__m128)(unsigned int) * v31);
				v30[-2] = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v41, _mm_shuffle_ps(v41, v41, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v41, v41, 85), v15));
				v43 = _mm_unpacklo_ps((__m128)0i64, v42);
				*v30 = v43;
				v30[1] = _mm_sub_ps(
					_mm_unpacklo_ps(_mm_unpacklo_ps(v39, (__m128)0i64), _mm_unpacklo_ps(v27, (__m128)0x3F800000u)),
					(__m128)xmmword_140B7A490);
				v44 = _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v40, v14), _mm_unpacklo_ps(v28, (__m128)0i64)), v18);
				v45 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v83),
							_mm_mul_ps(_mm_shuffle_ps(v44, v44, 85), v84)),
						_mm_mul_ps(_mm_shuffle_ps(v44, v44, 170), v85)),
					v86);
				v46 = v34;
				v47 = (__m128) * (unsigned int*)((char*)&v93 + v22 * 4);
				v30[4] = v43;
				v30[8] = v43;
				v30[2] = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v45, _mm_shuffle_ps(v45, v45, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v45, v45, 85), v15));
				v30[5] = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(v46, (__m128)0i64),
						_mm_unpacklo_ps((__m128)(unsigned int)v91[v22], (__m128)0x3F800000u)),
					(__m128)xmmword_140B7A490);
				v48 = _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v35, v14), _mm_unpacklo_ps(v47, (__m128)0i64)), v18);
				v49 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v83),
							_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v84)),
						_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v85)),
					v86);
				v50 = v39;
				v25 = v83;
				v30[6] = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v49, _mm_shuffle_ps(v49, v49, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v49, v49, 85), v15));
				v30[9] = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(v50, (__m128)0i64),
						_mm_unpacklo_ps((__m128)(unsigned int)v91[v22], (__m128)0x3F800000u)),
					(__m128)xmmword_140B7A490);
				v51 = v40;
				v24 = v84;
				v52 = _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v51, v14), _mm_unpacklo_ps(v47, (__m128)0i64)), v18);
				v53 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v25),
							_mm_mul_ps(_mm_shuffle_ps(v52, v52, 85), v84)),
						_mm_mul_ps(_mm_shuffle_ps(v52, v52, 170), v85)),
					v86);
				v30[10] = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v53, _mm_shuffle_ps(v53, v53, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v53, v53, 85), v15));
				v30[12] = v43;
				v30 += 16;
				a2 += 16;
				++v29;
				++v32;
				v31 += 3;
				--v33;
			} while (v33);
			++v22;
			++v23;
			--v26;
		} while (v26);
		v54 = 4i64;
		do
		{
			v55 = *(_QWORD*)(v3 + 6560);
			v56 = (unsigned int)*(v11 - 2);
			v87 = 0i64;
			(*(void(__fastcall**)(__int64, __m128*, __int64, __int128*))(*(_QWORD*)v55 + 120i64))(v55, &v87, v56, v89);
			v57 = v11[5];
			v58 = v11[6];
			result = (unsigned int)v11[7];
			v77 = v57;
			v78 = v58;
			if (*(&v77 + result) < 3)
			{
				v60 = (__m128)v89[1];
				v61 = (__m128)v89[0];
				v62 = (__m128)v89[2];
				v63 = (__m128)v89[3];
				while (1)
				{
					v64 = 0;
					v65 = &v91[v58 - 1];
					v66 = _mm_unpacklo_ps(
						(__m128)0i64,
						_mm_unpacklo_ps((__m128)0i64, (__m128)(unsigned int)v97[2 * v57 + v57 + v58]));
					do
					{
						v67 = (__m128)(unsigned int) * v65;
						v68 = 0;
						v69 = a2 + 3;
						v70 = &v91[v57 - 1];
						do
						{
							v71 = v57 + v68;
							v72 = _mm_unpacklo_ps((__m128)(unsigned int) * v70, (__m128)0i64);
							++v68;
							v69 += 4;
							a2 += 4;
							++v70;
							a2[-4] = _mm_sub_ps(
								_mm_unpacklo_ps(v72, _mm_unpacklo_ps(v67, (__m128)0x3F800000u)),
								(__m128)xmmword_140B7A490);
							v81[0] = *v11 + *(v11 - 1) * v71;
							v81[1] = v11[3] + v11[2] * (v58 + v64);
							v73 = (int)v81[v11[1]];
							v74 = (int)v11[4];
							v69[-4] = v66;
							v75 = _mm_sub_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128)(unsigned int)v96[v73 - 1], v14),
									_mm_unpacklo_ps((__m128) * ((unsigned int*)&v92 + (int)v81[v74]), (__m128)0i64)),
								v18);
							v76 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v75, v75, 0), v61),
										_mm_mul_ps(_mm_shuffle_ps(v75, v75, 85), v60)),
									_mm_mul_ps(_mm_shuffle_ps(v75, v75, 170), v62)),
								v63);
							v69[-6] = _mm_unpacklo_ps(
								_mm_unpacklo_ps(v76, _mm_shuffle_ps(v76, v76, 170)),
								_mm_unpacklo_ps(_mm_shuffle_ps(v76, v76, 85), v15));
						} while (v68 < 2);
						++v64;
						++v65;
					} while (v64 < 2);
					result = (unsigned int)v11[7];
					if (++ * (&v77 + result) >= 3)
						break;
					v58 = v78;
					v57 = v77;
				}
			}
			v3 = v82;
			v11 += 10;
			--v54;
		} while (v54);
		v19 = v80;
		v17 = 0i64;
		v13 = v79 + 1;
		v79 = v13;
	} while (v13 < 6);
	return result;
}
// 140B7A490: using guessed type __int128 xmmword_140B7A490;

