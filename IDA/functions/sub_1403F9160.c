#include "../winhttp.h"

//----- (00000001403F9160) ----------------------------------------------------
void __fastcall sub_1403F9160(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int v5; // r15d
	double v6; // xmm0_8
	__int64* v7; // rcx
	__int64 v8; // rax
	int* v9; // rax
	int v10; // xmm1_4
	float* v11; // r14
	__int64 v12; // rdi
	int v13; // eax
	int* v14; // rax
	__int64 v15; // r8
	int v16; // r12d
	__m128 v17; // xmm10
	float v18; // xmm9_4
	int v19; // r15d
	int* v20; // rdi
	int* v21; // r14
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v27; // rsi
	__int64 v28; // r9
	__int64 v29; // rbx
	__int64 k; // rax
	__int64 v31; // r8
	__m128 v32; // xmm8
	int* v33; // rsi
	unsigned __int64 v34; // r14
	__m128 v35; // xmm4
	__m128 v36; // xmm5
	__m128 v37; // xmm1
	float v38; // xmm13_4
	__m128 v39; // xmm14
	__m128 v40; // xmm15
	__m128 v41; // xmm12
	__m128 v42; // xmm0
	void(__fastcall * **v43)(_QWORD); // r13
	__m128* v44; // rax
	__int64* v45; // rcx
	__int64* v46; // rcx
	__int64 v47; // rax
	unsigned int* v48; // rax
	__m128i v49; // xmm3
	__m128 v50; // xmm6
	__int64 v51; // r8
	__int32 v52; // xmm10_4
	__m128 v53; // xmm3
	__m128 v54; // xmm2
	__m128 v55; // xmm5
	__m128 v56; // xmm1
	int v57; // ecx
	float v58; // xmm1_4
	int v59; // ecx
	int v60; // r12d
	int v61; // r15d
	int v62; // ebx
	int v63; // ecx
	float v64; // xmm0_4
	int* v65; // rdx
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64 v68; // r15
	__m128 v69; // xmm6
	__m128 v70; // xmm7
	__m128 v71; // xmm9
	__int64 v72; // rbx
	int* v73; // rax
	__int64 v74; // r13
	int* v75; // rsi
	int* v76; // r12
	__int64 v77; // r8
	int* v78; // rdx
	int v79; // xmm0_4
	__int128 v80; // xmm0
	void(__fastcall * **v81)(_QWORD); // rcx
	__m128 v82; // xmm0
	__int64 v83; // r14
	_QWORD* v84; // rbx
	__int64 v85; // rcx
	__int64 v86; // rcx
	__int64 v87; // rcx
	__int64 v88; // rax
	__int64 m; // rax
	__int64 n; // rax
	__m128 v91; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v92; // [rsp+50h] [rbp-B0h]
	int* v93; // [rsp+60h] [rbp-A0h]
	char v94[8]; // [rsp+68h] [rbp-98h] BYREF
	int* v95; // [rsp+70h] [rbp-90h]
	__int64 v96; // [rsp+78h] [rbp-88h]
	__int64 v97; // [rsp+88h] [rbp-78h] BYREF
	unsigned __int64 v98; // [rsp+90h] [rbp-70h]
	int* v99; // [rsp+98h] [rbp-68h]
	int* v100; // [rsp+A0h] [rbp-60h]
	int v101[4]; // [rsp+A8h] [rbp-58h] BYREF
	int* v102; // [rsp+B8h] [rbp-48h]
	__m128 v103; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v104; // [rsp+D0h] [rbp-30h]
	void(__fastcall * **v105)(_QWORD); // [rsp+D8h] [rbp-28h]
	__int64 v106; // [rsp+E0h] [rbp-20h] BYREF
	int* v107; // [rsp+E8h] [rbp-18h]
	__int128 v108; // [rsp+F0h] [rbp-10h]
	__int128 v109; // [rsp+140h] [rbp+40h]
	__int64 v110; // [rsp+260h] [rbp+160h] BYREF
	int v111; // [rsp+268h] [rbp+168h]
	__int64 v112; // [rsp+270h] [rbp+170h]
	int v113; // [rsp+278h] [rbp+178h]

	v111 = dword_140C636A8;
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v112 = v2;
	v95 = sub_14018B280(80i64, 0);
	v96 = 0i64;
	*(_BYTE*)v95 = 0;
	*((_QWORD*)v95 + 1) = 0i64;
	*((_QWORD*)v95 + 2) = v95;
	*((_QWORD*)v95 + 3) = v95;
	v3 = *(_QWORD*)(a1 + 32160);
	if (v3 != *(_QWORD*)v3)
	{
		while (1)
		{
			v3 = *(_QWORD*)(v3 + 8);
			v4 = *(_QWORD*)(v3 + 80);
			if (!v4)
				goto LABEL_8;
			v5 = *(_DWORD*)(v3 + 16) + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4);
			if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 80) + 16i64))(*(_QWORD*)(v3 + 80)))
				goto LABEL_8;
			v6 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 80) + 120i64))(*(_QWORD*)(v3 + 80));
			v7 = *(__int64**)(v3 + 80);
			v8 = *v7;
			v101[0] = LODWORD(v6);
			v9 = (int*)(*(__int64(__fastcall**)(__int64*, __m128*))(v8 + 136))(v7, &v103);
			v10 = v9[1];
			v101[1] = *v9;
			LODWORD(v6) = v9[2];
			v101[2] = v10;
			v101[3] = LODWORD(v6);
			v11 = sub_1403FB0A0((__int64)v94, (float*)v101);
			sub_1401529E0((__int64)v11, &v110, v3 + 24);
			v12 = v110;
			if (v110 == *((_QWORD*)v11 + 1))
				goto LABEL_7;
			if (*(_DWORD*)(v12 + 64)
				+ (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v110 + 128) + 48i64))(*(_QWORD*)(v110 + 128)) < v5)
				break;
		LABEL_8:
			if (v3 == **(_QWORD**)(a1 + 32160))
			{
				v2 = v112;
				goto LABEL_10;
			}
		}
		v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 80) + 56i64))(*(_QWORD*)(v3 + 80));
		*(_DWORD*)(v3 + 16) = v111 - v13;
	LABEL_7:
		v14 = sub_1403FB300((__int64)v11, v3 + 24);
		sub_140474EC0((__int64)v14, v3 + 16);
		goto LABEL_8;
	}
LABEL_10:
	if (v96)
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65680 + 136i64))();
		v16 = *(_DWORD*)(v2 + 8);
		v17 = (__m128)0x3F800000u;
		v18 = 1.0;
		v19 = *(_DWORD*)(v2 + 12);
		v20 = (int*)*((_QWORD*)v95 + 2);
		v113 = v16;
		LODWORD(v112) = v19;
		v93 = v20;
		while (v20 != v95)
		{
			v98 = 0i64;
			v21 = 0i64;
			v99 = 0i64;
			v100 = 0i64;
			if (v96)
			{
				sub_1403FB510(&v97, v96);
				v21 = v99;
			}
			v22 = *((_QWORD*)v20 + 7);
			v23 = *(_QWORD*)(v22 + 16);
			if (v23 != v22)
			{
				do
				{
					v15 = v23 + 64;
					if (v21 == v100)
					{
						sub_1403FDF10(&v97, (__int64)v21, v15);
						v21 = v99;
					}
					else
					{
						if (v21)
							sub_140474E10((__int64)v21, v23 + 64);
						v21 += 28;
						v99 = v21;
					}
					v24 = *(_QWORD*)(v23 + 24);
					if (v24)
					{
						v23 = *(_QWORD*)(v23 + 24);
						for (i = *(_QWORD*)(v24 + 16); i; i = *(_QWORD*)(i + 16))
							v23 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v23 + 8); v23 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v23 = j;
						if (*(_QWORD*)(v23 + 24) != j)
							v23 = j;
					}
				} while (v23 != *((_QWORD*)v20 + 7));
			}
			v27 = v98;
			if ((int*)v98 != v21)
			{
				v28 = 0i64;
				v29 = (__int64)((__int64)v21 - v98) / 112;
				for (k = v29; k != 1; ++v28)
					k >>= 1;
				sub_1403FF250(
					v98,
					(unsigned __int64)v21,
					v15,
					2 * v28,
					(unsigned __int8(__fastcall*)(__int64, __int64))sub_140400DE0);
				if (v29 <= 16)
				{
					sub_1403FF6D0(v27, v21, (unsigned __int8(__fastcall*)(__int64, _DWORD*))sub_140400DE0);
				}
				else
				{
					sub_1403FF6D0(v27, (int*)(v27 + 1792), (unsigned __int8(__fastcall*)(__int64, _DWORD*))sub_140400DE0);
					sub_1403FFE90(v27 + 1792, (__int64)v21, v31, (unsigned __int8(__fastcall*)(__int64, _DWORD*))sub_140400DE0);
				}
			}
			v32 = 0i64;
			if ((int*)v27 != v21)
			{
				v33 = v21 - 12;
				v34 = v98;
				v102 = v33;
				v35 = (__m128)COERCE_UNSIGNED_INT((float)v19);
				v36 = (__m128)COERCE_UNSIGNED_INT((float)v16);
				v37 = v35;
				v36.m128_f32[0] = v36.m128_f32[0] * 0.5;
				v35.m128_f32[0] = v35.m128_f32[0] * 0.5;
				v37.m128_f32[0] = v37.m128_f32[0] * 0.25;
				v38 = (float)(v19 / 4);
				v39 = _mm_unpacklo_ps(_mm_unpacklo_ps(v36, (__m128)0i64), _mm_unpacklo_ps(v37, (__m128)0i64));
				v40 = _mm_unpacklo_ps(_mm_unpacklo_ps(v36, (__m128)0i64), _mm_unpacklo_ps(v35, (__m128)0i64));
				v41 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(_mm_unpacklo_epi8((__m128i)0i64, (__m128i)0i64), (__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				do
				{
					v42 = 0i64;
					(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)v33 + 48i64))(*(_QWORD*)v33);
					v43 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)v33 + 96i64))(*(_QWORD*)v33);
					*(double*)v42.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)v33 + 112i64))(*(_QWORD*)v33);
					v44 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)v33 + 88i64))(*(_QWORD*)v33);
					v45 = *(__int64**)v33;
					v103 = _mm_mul_ps(*v44, _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps(v17, v42)));
					v42.m128_f32[0] = (*(float(__fastcall**)(__int64*))(*v45 + 120))(v45);
					v46 = *(__int64**)v33;
					v47 = **(_QWORD**)v33;
					*(float*)&v110 = v18 * v42.m128_f32[0];
					v48 = (unsigned int*)(*(__int64(__fastcall**)(__int64*, int*))(v47 + 24))(v46, v101);
					v49 = _mm_cvtsi32_si128(0);
					v50 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v48), v49),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v48[1]), v49)));
					*(double*)v42.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)v33 + 128i64))(*(_QWORD*)v33);
					v51 = *((_QWORD*)v33 - 6);
					v92 = v39;
					v52 = v42.m128_i32[0];
					v91 = 0i64;
					(*(void(__fastcall**)(__int64, void(__fastcall***)(_QWORD), __int64, __int64, __m128*, int, __m128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
						qword_140C65680,
						v43,
						v51,
						-1i64,
						&v91,
						1280,
						&v103,
						1);
					v53 = (__m128)v92.m128_u32[0];
					v54 = (__m128)v92.m128_u32[1];
					v53.m128_f32[0] = (float)(v92.m128_f32[0] - v91.m128_f32[0]) * 0.5;
					v54.m128_f32[0] = (float)(v92.m128_f32[1] - v91.m128_f32[1]) * 0.5;
					v55 = _mm_add_ps(
						_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v32, (__m128)0i64)),
						_mm_add_ps(
							_mm_sub_ps(
								v40,
								_mm_unpacklo_ps(_mm_unpacklo_ps(v53, (__m128)0i64), _mm_unpacklo_ps(v54, (__m128)0i64))),
							v50));
					v56 = _mm_add_ps(v91, v55);
					v91 = v56;
					v92 = _mm_add_ps(v92, v55);
					v57 = (int)v56.m128_f32[0];
					if ((int)v56.m128_f32[0] != 0x80000000 && (float)v57 != v56.m128_f32[0])
						v56.m128_f32[0] = (float)(v57 - (_mm_movemask_ps(_mm_unpacklo_ps(v56, v56)) & 1));
					v91.m128_i32[0] = v56.m128_i32[0];
					v58 = v92.m128_f32[0];
					v59 = (int)v92.m128_f32[0];
					if ((int)v92.m128_f32[0] != 0x80000000 && (float)v59 != v92.m128_f32[0])
						v58 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps((__m128)v92.m128_u32[0], (__m128)v92.m128_u32[0])) & 1) + v59);
					v92.m128_f32[0] = v58;
					v60 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670)
						+ 12);
					v61 = *(_DWORD*)(sub_14014E670(
						(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 2648i64),
						(int*)L"ActionBarsLeft")
						+ 36);
					v62 = *(_DWORD*)(sub_14014E670(
						(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 2648i64),
						(int*)L"ActionBarsRight")
						+ 36);
					v63 = *(_DWORD*)(sub_14014E670(
						(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 2648i64),
						(int*)L"CenterTextBottom")
						+ 36);
					if ((v91.m128_f32[0] >= (float)v62 || v91.m128_f32[0] <= (float)v61)
						&& (v92.m128_f32[0] >= (float)v62 || v92.m128_f32[0] <= (float)v61))
					{
						v63 = v60;
					}
					v64 = (float)v63;
					if (v92.m128_f32[1] > (float)v63)
					{
						v32 = (__m128)COERCE_UNSIGNED_INT((float)v63);
						v32.m128_f32[0] = v64 - v92.m128_f32[1];
						v91.m128_f32[1] = v91.m128_f32[1] + (float)(v64 - v92.m128_f32[1]);
						v92.m128_f32[1] = v92.m128_f32[1] + (float)(v64 - v92.m128_f32[1]);
					}
					v65 = (int*)*((_QWORD*)v33 - 6);
					v66 = qword_140C65898;
					v67 = 0i64;
					v105 = v43;
					v104 = 0i64;
					v107 = 0i64;
					v108 = 0i64;
					if (v33[4])
					{
						if (*(_WORD*)v65)
						{
							do
								++v67;
							while (*((_WORD*)v65 + v67));
						}
						sub_14001C1B0(&v106, v65, (__int64)v65 + 2 * v67);
						v68 = (__int64)v105;
						v69 = v91;
						v70 = v92;
						v71 = v103;
						if (v105)
							(**v105)(v105);
						v72 = *(_QWORD*)(v66 + 31880);
					}
					else
					{
						if (*(_WORD*)v65)
						{
							do
								++v67;
							while (*((_WORD*)v65 + v67));
						}
						sub_14001C1B0(&v106, v65, (__int64)v65 + 2 * v67);
						v68 = (__int64)v105;
						v69 = v91;
						v70 = v92;
						v71 = v103;
						if (v105)
							(**v105)(v105);
						v72 = *(_QWORD*)(v66 + 31864);
					}
					v73 = sub_14018B280(176i64, 0);
					v74 = v104;
					v75 = v73 + 4;
					v76 = v73;
					if (v73 != (int*)-16i64)
					{
						v77 = v108;
						v78 = v107;
						*(_QWORD*)v75 = v104;
						*((_QWORD*)v73 + 3) = v68;
						*((_QWORD*)v73 + 5) = 0i64;
						*((_QWORD*)v73 + 6) = 0i64;
						*((_QWORD*)v73 + 7) = 0i64;
						sub_14001C1B0((_QWORD*)v73 + 4, v78, v77);
						*((_QWORD*)v75 + 6) = 0i64;
						v79 = v110;
						v75[14] = 0;
						v75[15] = v79;
						v80 = v109;
						v75[16] = v52;
						v75[17] = 1;
						*((__m128*)v75 + 5) = v69;
						*((__m128*)v75 + 6) = v70;
						*((_OWORD*)v75 + 7) = v80;
						*((__m128*)v75 + 8) = v71;
						*((__m128*)v75 + 9) = v41;
						if (*(_QWORD*)v75)
							(***(void(__fastcall****)(_QWORD))v75)(*(_QWORD*)v75);
						v81 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v75 + 1);
						if (v81)
							(**v81)(v81);
					}
					*(_QWORD*)v76 = v72;
					*((_QWORD*)v76 + 1) = *(_QWORD*)(v72 + 8);
					**(_QWORD**)(v72 + 8) = v76;
					*(_QWORD*)(v72 + 8) = v76;
					if (v68)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v68 + 8i64))(v68);
					if (v74)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v74 + 8i64))(v74);
					if (v107)
						sub_14018B900((__int64)v107, 0);
					v82 = _mm_sub_ps(v92, v91);
					v32.m128_f32[0] = v32.m128_f32[0] - _mm_shuffle_ps(v82, v82, 85).m128_f32[0];
					if (v32.m128_f32[0] > v38)
						break;
					v18 = *(float*)&v110;
					v17 = (__m128)0x3F800000u;
					v33 = v102 - 28;
					v102 = v33;
				} while (v33 + 12 != (int*)v34);
				v83 = (__int64)v99;
				v27 = v98;
				v20 = v93;
				v18 = *(float*)&v110;
				v17 = (__m128)0x3F800000u;
				v19 = v112;
				v16 = v113;
				if ((int*)v98 != v99)
				{
					v84 = (_QWORD*)(v98 + 64);
					do
					{
						if (qword_140C65898)
						{
							v85 = *(_QWORD*)(qword_140C65898 + 29504);
							if (v85)
								sub_1400EA3E0(v85, "MessageFinished", byte_1409EB834, v84 - 8);
						}
						v86 = *(v84 - 1);
						if (v86)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v86 + 8i64))(v86);
							*(v84 - 1) = 0i64;
						}
						if (*v84)
						{
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v84 + 8i64))(*v84);
							*v84 = 0i64;
						}
						v87 = *(v84 - 6);
						if (v87)
							sub_14018B900(v87, 0);
						v84 += 14;
					} while (v84 - 8 != (_QWORD*)v83);
				}
			}
			if (v27)
				sub_14018B900(v27, 0);
			v88 = *((_QWORD*)v20 + 3);
			if (v88)
			{
				v20 = (int*)*((_QWORD*)v20 + 3);
				v93 = (int*)v88;
				for (m = *(_QWORD*)(v88 + 16); m; m = *(_QWORD*)(m + 16))
				{
					v20 = (int*)m;
					v93 = (int*)m;
				}
			}
			else
			{
				for (n = *((_QWORD*)v20 + 1); v20 == *(int**)(n + 24); n = *(_QWORD*)(n + 8))
					v20 = (int*)n;
				if (*((_QWORD*)v20 + 3) != n)
					v20 = (int*)n;
				v93 = v20;
			}
		}
		if (v96)
		{
			sub_1403FD820((__int64)v94, *((_QWORD**)v95 + 1));
			*((_QWORD*)v95 + 2) = v95;
			*((_QWORD*)v95 + 1) = 0i64;
			*((_QWORD*)v95 + 3) = v95;
			v96 = 0i64;
		}
	}
	sub_14018B900((__int64)v95, 0);
}
// 1403F94E1: variable 'v15' is possibly undefined
// 1403F9513: variable 'v31' is possibly undefined
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140B01620: using guessed type wchar_t aCentertextbott[17];
// 140B01648: using guessed type wchar_t aActionbarsrigh[16];
// 140B01668: using guessed type wchar_t aActionbarsleft[15];
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403F9160: using guessed type char var_1E8[8];

