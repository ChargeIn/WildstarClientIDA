#include "../winhttp.h"

//----- (00000001406DB9D0) ----------------------------------------------------
__int64 __fastcall sub_1406DB9D0(__int64 a1, __m128* a2, float a3, __int64 a4)
{
	__m128 v4; // xmm1
	__m128 v5; // xmm0
	float* v6; // r13
	__int64 v8; // rsi
	__int64 result; // rax
	__int64 v11; // rdi
	float v12; // xmm8_4
	__m128 v13; // xmm0
	float v14; // xmm7_4
	__m128 v15; // xmm3
	int v16; // ecx
	__m128 v17; // xmm2
	int v18; // ecx
	__m128 v19; // xmm6
	__m128 v20; // xmm5
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm4
	__m128 v24; // xmm2
	__m128 v25; // xmm1
	__m128 v26; // xmm0
	int v27; // eax
	__m128 v28; // xmm0
	__m128 v29; // xmm0
	int v30; // ebx
	__int64 v31; // rax
	__m128 v32; // xmm4
	__m128 v33; // xmm5
	int v34; // eax
	unsigned int v35; // r14d
	float v36; // xmm10_4
	unsigned __int64 v37; // r15
	int* v38; // r12
	__m128 v39; // xmm6
	__m128 v40; // xmm8
	float v41; // xmm11_4
	float v42; // xmm7_4
	float v43; // xmm9_4
	int v44; // ecx
	int v45; // edx
	__int32 v46; // xmm13_4
	int v47; // r8d
	float v48; // xmm12_4
	__int64 v49; // rax
	int* v50; // rsi
	__int64 v51; // r15
	__int64 v52; // rdi
	char* v53; // r15
	unsigned __int64 v54; // rax
	unsigned __int64 v55; // rdi
	char* v56; // rax
	__int64 v57; // rax
	unsigned __int64 v58; // rcx
	bool v59; // cf
	__m128* v60; // rax
	int* v61; // r8
	__int64 v62; // r9
	int* v63; // r15
	unsigned __int64 v64; // rdi
	__int64 v65; // rdi
	int* v66; // rdx
	signed __int64 v67; // rcx
	__int64 v68; // rax
	float v70; // xmm1_4
	float v71; // xmm2_4
	float v72; // xmm3_4
	int* v73; // rax
	int* v74; // rdi
	__int64 v75; // rcx
	int* v76; // rax
	__int64 v77; // r13
	int* v78; // r15
	unsigned __int64 v79; // r8
	unsigned int v80; // edi
	__int64 v81; // rcx
	__int64 v82; // rbx
	__int64 v83; // rcx
	__int64 v84; // rcx
	__int64 v85; // rax
	int v86; // [rsp+38h] [rbp-C8h] BYREF
	int v87; // [rsp+3Ch] [rbp-C4h]
	int v88; // [rsp+40h] [rbp-C0h]
	int v89; // [rsp+48h] [rbp-B8h] BYREF
	int v90; // [rsp+4Ch] [rbp-B4h]
	__int64 v91; // [rsp+50h] [rbp-B0h]
	__int64 v92; // [rsp+58h] [rbp-A8h]
	int v93[4]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v94; // [rsp+70h] [rbp-90h]
	__int128 v95; // [rsp+80h] [rbp-80h]
	__m128 v96; // [rsp+90h] [rbp-70h] BYREF
	__m128 v97; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v98; // [rsp+B0h] [rbp-50h]
	float* v99; // [rsp+B8h] [rbp-48h]
	__m128* v100; // [rsp+C0h] [rbp-40h]
	__int64 v101; // [rsp+C8h] [rbp-38h] BYREF
	int* v102; // [rsp+D0h] [rbp-30h]
	int* v103; // [rsp+D8h] [rbp-28h]
	__int64 v104; // [rsp+E0h] [rbp-20h]
	char v105[32]; // [rsp+F0h] [rbp-10h] BYREF
	float v106; // [rsp+110h] [rbp+10h]
	float v107; // [rsp+118h] [rbp+18h]
	float v108; // [rsp+120h] [rbp+20h]
	float v109; // [rsp+128h] [rbp+28h]
	int v110[130]; // [rsp+338h] [rbp+238h] BYREF

	v4 = *a2;
	v5 = *(__m128*)(a1 + 1168);
	v6 = (float*)a4;
	v99 = (float*)a4;
	v100 = a2;
	v8 = a1;
	v98 = a1;
	result = _mm_movemask_ps(_mm_cmpneq_ps(v5, v4)) & 7;
	if ((_BYTE)result || a3 != *(float*)(a1 + 1184))
	{
		v11 = *(_QWORD*)(qword_140C65898 + 29248);
		v12 = a3 * 512.0;
		v92 = v11;
		v13 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(v4, v4, 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C456D8, (__m128)(unsigned int)dword_140C456D8, 0))),
			(__m128)xmmword_140B7B460);
		v93[0] = (int)v13.m128_f32[0];
		v93[1] = (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0];
		result = (*(__int64(__fastcall**)(__int64, int*, char*))(*(_QWORD*)v11 + 120i64))(v11, v93, v105);
		if ((int)result >= 0)
		{
			v15 = (__m128)LODWORD(v108);
			v14 = 1.0 / a3;
			v15.m128_f32[0] = (float)((float)(v108 - v106) * (float)(1.0 / a3)) + 0.5;
			v16 = (int)v15.m128_f32[0];
			if ((int)v15.m128_f32[0] != 0x80000000 && (float)v16 != v15.m128_f32[0])
				v15 = (__m128)COERCE_UNSIGNED_INT((float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1)));
			v17 = (__m128)LODWORD(v109);
			v17.m128_f32[0] = (float)((float)(v109 - v107) * v14) + 0.5;
			v18 = (int)v17.m128_f32[0];
			if ((int)v17.m128_f32[0] != 0x80000000 && (float)v18 != v17.m128_f32[0])
				v17 = (__m128)COERCE_UNSIGNED_INT((float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1)));
			v19 = (__m128)a2->m128_u32[0];
			v97 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64));
			v19.m128_f32[0] = v19.m128_f32[0] - (float)(v12 * 0.5);
			*(_DWORD*)(v8 + 1120) = v19.m128_i32[0];
			v20 = (__m128)a2->m128_u32[2];
			v21 = v19;
			v20.m128_f32[0] = v20.m128_f32[0] - (float)(v12 * 0.5);
			v22 = v20;
			*(float*)(v8 + 1136) = v19.m128_f32[0] + v12;
			v21.m128_f32[0] = (float)((float)(v19.m128_f32[0] + v12) - v19.m128_f32[0]) * 0.5;
			*(float*)(v8 + 1144) = v20.m128_f32[0] + v12;
			*(_DWORD*)(v8 + 1128) = v20.m128_i32[0];
			v22.m128_f32[0] = (float)((float)(v20.m128_f32[0] + v12) - v20.m128_f32[0]) * 0.5;
			v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0i64), _mm_unpacklo_ps(v22, (__m128)0i64));
			v24 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C456D8, (__m128)(unsigned int)dword_140C456D8, 0);
			v25 = _mm_mul_ps(_mm_shuffle_ps(*(__m128*)(v8 + 1120), *(__m128*)(v8 + 1120), 136), v24);
			v96 = _mm_add_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0i64), _mm_unpacklo_ps(v20, (__m128)0i64)), v23);
			v26 = _mm_mul_ps(_mm_add_ps((__m128)xmmword_140B7AC50, v25), (__m128)xmmword_140B7B460);
			v89 = (int)v26.m128_f32[0];
			v27 = (int)_mm_shuffle_ps(v26, v26, 85).m128_f32[0];
			v28 = _mm_mul_ps(_mm_shuffle_ps(*(__m128*)(v8 + 1136), *(__m128*)(v8 + 1136), 136), v24);
			v90 = v27;
			v29 = _mm_mul_ps(_mm_add_ps(v28, (__m128)xmmword_140B7AC50), (__m128)xmmword_140B7B460);
			v30 = (int)_mm_shuffle_ps(v29, v29, 85).m128_f32[0];
			v31 = *(_QWORD*)v11;
			v88 = v30;
			result = (*(__int64(__fastcall**)(__int64, int*, char*))(v31 + 120))(v11, &v89, v105);
			if ((int)result >= 0)
			{
				v32 = (__m128) * (unsigned int*)(v8 + 1120);
				v33 = (__m128) * (unsigned int*)(v8 + 1128);
				v34 = v90;
				v35 = 0;
				v36 = v97.m128_f32[0];
				v87 = v90;
				v37 = 0i64;
				v33.m128_f32[0] = (float)(v33.m128_f32[0] - v107) * v14;
				v32.m128_f32[0] = (float)(v32.m128_f32[0] - v106) * v14;
				v91 = 0i64;
				v38 = 0i64;
				v39 = _mm_xor_ps(v32, (__m128)xmmword_140B7B530);
				v40 = _mm_xor_ps(v33, (__m128)xmmword_140B7B530);
				v41 = v97.m128_f32[1];
				v42 = v97.m128_f32[0] - v32.m128_f32[0];
				v43 = v97.m128_f32[1] - v33.m128_f32[0];
				*(_QWORD*)&v94 = __PAIR64__(v40.m128_u32[0], v39.m128_u32[0]);
				*(float*)&v95 = v97.m128_f32[0] - v32.m128_f32[0];
				*((float*)&v95 + 1) = v97.m128_f32[1] - v33.m128_f32[0];
				v96 = _mm_unpacklo_ps(_mm_unpacklo_ps(v39, (__m128)0i64), _mm_unpacklo_ps(v40, (__m128)0i64));
				if (v90 <= v30)
				{
					v44 = v89;
					v45 = (int)v29.m128_f32[0];
					v46 = v96.m128_i32[0];
					v47 = v88;
					v48 = v96.m128_f32[0] + v97.m128_f32[0];
					do
					{
						v86 = v44;
						if (v44 <= v45)
						{
							do
							{
								if ((*(int(__fastcall**)(__int64, int*, char*))(*(_QWORD*)v11 + 120i64))(v11, &v86, v105) >= 0)
								{
									v49 = 0i64;
									v50 = 0i64;
									v104 = 0i64;
									if (LOWORD(v110[0]))
									{
										do
											++v49;
										while (*((_WORD*)v110 + v49));
									}
									v51 = (2 * v49) >> 1;
									if ((unsigned __int64)(v51 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
									{
										v50 = sub_14018B280(2 * (v51 + 1), 0);
										v104 = (__int64)v50 + 2 * v51 + 2;
									}
									v52 = 2 * v51;
									sub_1407DB590(v50, v110, 2 * v51);
									v53 = (char*)v50 + v52;
									if ((int*)((char*)v50 + v52))
										*(_WORD*)v53 = 0;
									v54 = 0i64;
									do
										++v54;
									while (aArea_1[v54]);
									v55 = v52 >> 1;
									if (v54 <= v55)
									{
										v56 = (char*)sub_14010A450(v50, v53, L".area", (__int16*)&aArea_1[v54]);
										if (v56 != v53)
										{
											v57 = (v56 - (char*)v50) >> 1;
											if ((int)v57 >= 0)
											{
												v58 = (int)v57;
												v96.m128_u64[0] = (v53 - (char*)v50) >> 1;
												v59 = v55 < (int)v57;
												v60 = &v96;
												v97.m128_u64[0] = v58;
												if (!v59)
													v60 = &v97;
												v61 = 0i64;
												v62 = 0i64;
												v63 = (int*)((char*)v50 + 2 * v60->m128_u64[0]);
												v64 = ((signed __int64)(2 * v60->m128_u64[0]) >> 1) + 1;
												if (v64 <= 0x7FFFFFFFFFFFFFFEi64)
												{
													v65 = 2 * v64;
													v61 = sub_14018B280(v65, 0);
													v62 = (__int64)v61 + v65;
												}
												v66 = v61;
												if (v50 != v63)
												{
													v67 = (char*)v50 - (char*)v61;
													do
													{
														if (v66)
															*(_WORD*)v66 = *(_WORD*)((char*)v66 + v67);
														v66 = (int*)((char*)v66 + 2);
													} while ((int*)((char*)v66 + v67) != v63);
												}
												if (v66)
													*(_WORD*)v66 = 0;
												v102 = v61;
												v103 = v66;
												v104 = v62;
												if (v50)
													sub_14018B900((__int64)v50, 0);
												v68 = 0i64;
												while (aTex_9[++v68] != 0)
													;
												sub_14001C310(&v101, (int*)L".tex", (int*)&aTex_9[v68]);
												v50 = v102;
											}
										}
									}
									if (v39.m128_f32[0] >= *v6
										&& (v70 = v6[4], v39.m128_f32[0] < v70)
										&& (v71 = v6[1], v40.m128_f32[0] >= v71)
										&& (v72 = v6[5], v40.m128_f32[0] < v72)
										&& v42 >= *v6
										&& v42 < v70
										&& v43 >= v71
										&& v43 < v72)
									{
										v37 = v91;
									}
									else
									{
										v73 = sub_14018B280(80i64, 0);
										v74 = v73;
										if (v73)
										{
											v75 = 0i64;
											*((_QWORD*)v73 + 1) = 0i64;
											*((_QWORD*)v73 + 2) = 0i64;
											*((_QWORD*)v73 + 3) = 0i64;
											if (*(_WORD*)v50)
											{
												do
													++v75;
												while (*((_WORD*)v50 + v75));
											}
											sub_14001C1B0(v73, v50, (__int64)v50 + 2 * v75);
											*((_QWORD*)v74 + 4) = 0i64;
											*((_OWORD*)v74 + 3) = v94;
											*((_OWORD*)v74 + 4) = v95;
											v76 = sub_14018B280(72i64, 0);
											if (v76)
												*((_QWORD*)v74 + 4) = sub_1400FE080((__int64)v76, v50);
											else
												*((_QWORD*)v74 + 4) = 0i64;
										}
										else
										{
											v74 = 0i64;
										}
										v77 = v91 + 1;
										v78 = sub_14018DB00((__int64)v38, v91 + 1, 8i64);
										v79 = 8 * v91;
										*(_QWORD*)&v78[2 * v91] = v74;
										if (v38 != v78)
										{
											sub_1407DB590(v78, v38, v79);
											if (v38)
												(*(void(__fastcall**)(int*))(*((_QWORD*)v38 - 2) + 8i64))(v38 - 4);
											v38 = v78;
										}
										v37 = v77;
										v91 = v77;
										v6 = v99;
									}
									if (v50)
										sub_14018B900((__int64)v50, 0);
									v11 = v92;
								}
								v39.m128_f32[0] = v39.m128_f32[0] + v36;
								v42 = v42 + v36;
								++v86;
								LODWORD(v94) = v39.m128_i32[0];
								*(float*)&v95 = v42;
							} while (v86 <= (int)v29.m128_f32[0]);
							v44 = v89;
							v34 = v87;
							v45 = (int)v29.m128_f32[0];
							v47 = v88;
						}
						++v34;
						v40.m128_f32[0] = v40.m128_f32[0] + v41;
						v43 = v43 + v41;
						v39.m128_i32[0] = v46;
						v42 = v48;
						v87 = v34;
						*(_QWORD*)&v94 = __PAIR64__(v40.m128_u32[0], v46);
						*(_QWORD*)&v95 = __PAIR64__(LODWORD(v43), LODWORD(v48));
					} while (v34 <= v47);
					v8 = v98;
				}
				v80 = 0;
				if (*(_QWORD*)(v8 + 1200))
				{
					v81 = 0i64;
					do
					{
						v82 = *(_QWORD*)(*(_QWORD*)(v8 + 1192) + 8 * v81);
						if (v82)
						{
							v83 = *(_QWORD*)(v82 + 32);
							if (v83)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v83 + 8i64))(v83);
								*(_QWORD*)(v82 + 32) = 0i64;
							}
							v84 = *(_QWORD*)(v82 + 8);
							if (v84)
								sub_14018B900(v84, 0);
							sub_14018B900(v82, 0);
						}
						v81 = ++v80;
					} while ((unsigned __int64)v80 < *(_QWORD*)(v8 + 1200));
				}
				*(_QWORD*)(v8 + 1200) = 0i64;
				if (v37)
				{
					v85 = 0i64;
					do
					{
						sub_140033260((__int64*)(v8 + 1192), &v38[2 * v85]);
						v85 = ++v35;
					} while (v35 < v37);
				}
				result = (__int64)v100;
				*(_BYTE*)(v8 + 2066) = 1;
				*(_OWORD*)(v8 + 1168) = *(_OWORD*)result;
				*(float*)(v8 + 1184) = a3;
				if (v38)
					return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v38 - 2) + 8i64))(v38 - 4);
			}
		}
	}
	return result;
}
// 140B3D580: using guessed type wchar_t aTex_9[5];
// 140B3D590: using guessed type wchar_t aArea_1[6];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B460: using guessed type __int128 xmmword_140B7B460;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C456D8: using guessed type int dword_140C456D8;
// 140C65898: using guessed type __int64 qword_140C65898;

