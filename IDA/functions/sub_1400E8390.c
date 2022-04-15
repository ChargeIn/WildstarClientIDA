#include "../winhttp.h"

//----- (00000001400E8390) ----------------------------------------------------
__int64 __fastcall sub_1400E8390(__int64 a1)
{
	char v2; // al
	__int64 v3; // rdx
	__int64* v4; // rcx
	bool v5; // zf
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	int v9; // edi
	int v10; // r13d
	int v11; // r14d
	int v12; // r15d
	int v13; // eax
	unsigned int v14; // r12d
	int v15; // eax
	unsigned int v16; // edi
	int v17; // eax
	unsigned int v18; // r14d
	int v19; // eax
	__m128i v20; // xmm2
	__int64 v21; // rax
	__int64 v22; // rax
	unsigned int v23; // eax
	__int64 v24; // rcx
	unsigned __int64 v25; // rbx
	__int64 v26; // rdi
	int v27; // r14d
	int v28; // r15d
	int v29; // r12d
	int v30; // eax
	unsigned int v31; // r13d
	int v32; // eax
	unsigned int v33; // r14d
	int v34; // eax
	unsigned int v35; // r15d
	int v36; // eax
	__m128i v37; // xmm2
	unsigned int v38; // eax
	__int64 v39; // rcx
	unsigned int v40; // edi
	__m128* v41; // r8
	__int64 v42; // rdi
	__int64 v43; // rax
	__int64* v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rax
	__int64 v47; // rax
	char v48; // al
	__int64* v49; // rcx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rbx
	int v53; // edi
	int v54; // r13d
	int v55; // r14d
	int v56; // r15d
	int v57; // eax
	unsigned int v58; // r12d
	int v59; // eax
	unsigned int v60; // edi
	int v61; // eax
	unsigned int v62; // r14d
	int v63; // eax
	__m128i v64; // xmm2
	__int64 v65; // rax
	__int64* v66; // rcx
	__int64 v67; // rax
	__int64 v68; // rax
	__int64 v69; // rax
	__m128 v71[2]; // [rsp+50h] [rbp-39h] BYREF
	__m128 v72; // [rsp+70h] [rbp-19h] BYREF
	__m128 v73; // [rsp+80h] [rbp-9h] BYREF
	__m128 v74; // [rsp+90h] [rbp+7h]
	__m128 v75; // [rsp+A0h] [rbp+17h] BYREF
	__m128 v76; // [rsp+B0h] [rbp+27h]
	int v77; // [rsp+F0h] [rbp+67h]

	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 4i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
	sub_1400E7DF0(a1, *(int**)(a1 + 2912), (__int64)&v73, (__int64)&v75);
	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 136i64))(*(_QWORD*)(a1 + 2912));
	v4 = *(__int64**)(a1 + 2912);
	v5 = v2 == 0;
	v6 = *v4;
	if (v5)
	{
		if ((*(__int64 (**)(void))(v6 + 168))())
		{
			v71[0].m128_i32[1] = (int)v73.m128_f32[1];
			v44 = *(__int64**)(a1 + 2912);
			v71[0].m128_i32[0] = (int)v73.m128_f32[0];
			v45 = *v44;
			v71[0].m128_i32[2] = (int)v74.m128_f32[0];
			v71[0].m128_i32[3] = (int)v74.m128_f32[1];
			v46 = (*(__int64(__fastcall**)(__int64*))(v45 + 168))(v44);
			sub_1400CC7C0(v46, (int*)v71);
			v47 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 168i64))(*(_QWORD*)(a1 + 2912));
			sub_1400D0A00(v47, 0);
		}
		else if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 152i64))(*(_QWORD*)(a1 + 2912)))
		{
			v7 = *(_QWORD*)(a1 + 2936);
			if (v7)
			{
				v72 = (__m128)xmmword_140B7B240;
				v71[0].m128_i32[1] = (int)v73.m128_f32[1];
				v71[0].m128_i32[3] = (int)v74.m128_f32[1];
				v71[0].m128_i32[2] = (int)v74.m128_f32[0];
				v71[0].m128_i32[0] = (int)v73.m128_f32[0];
				sub_14010D640(v7, (unsigned int*)v71, (unsigned int)(int)v74.m128_f32[0], &v72);
				v8 = *(_QWORD*)(a1 + 2936);
				v9 = (int)v74.m128_f32[0];
				v10 = (int)v74.m128_f32[1];
				v11 = (int)v73.m128_f32[0];
				v12 = (int)v73.m128_f32[1];
				if (*(_BYTE*)(v8 + 992))
					v13 = *(_DWORD*)(v8 + 1000);
				else
					v13 = sub_14010CF80(*(_QWORD*)(a1 + 2936));
				v14 = v11 + v13;
				if (*(_BYTE*)(v8 + 992))
					v15 = *(_DWORD*)(v8 + 1004);
				else
					v15 = sub_14010D0A0(v8);
				v16 = v9 - v15;
				if (*(_BYTE*)(v8 + 992))
					v17 = *(_DWORD*)(v8 + 996);
				else
					v17 = sub_14010D1C0(v8);
				v18 = v12 + v17;
				if (*(_BYTE*)(v8 + 992))
					v19 = *(_DWORD*)(v8 + 1008);
				else
					v19 = sub_14010D2F0(v8);
				v20 = _mm_cvtsi32_si128(0);
				v74 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), v20),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10 - v19), v20)));
				v73 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v20),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), v20)));
			}
			v21 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 152i64))(*(_QWORD*)(a1 + 2912));
			sub_140141820(v21, (__int128*)&v73, *(float*)(v21 + 828) + 1.0);
		}
		else if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 144i64))(*(_QWORD*)(a1 + 2912)))
		{
			v22 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 144i64))(*(_QWORD*)(a1 + 2912));
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 72i64))(v22))
			{
				v23 = sub_140142170(qword_140C63678, L"TooltipText");
				v24 = *(_QWORD*)(a1 + 2936);
				v25 = v23;
				if (v24)
				{
					v72 = (__m128)xmmword_140B7B240;
					v71[0].m128_i32[1] = (int)v73.m128_f32[1];
					v71[0].m128_i32[3] = (int)v74.m128_f32[1];
					v71[0].m128_i32[2] = (int)v74.m128_f32[0];
					v71[0].m128_i32[0] = (int)v73.m128_f32[0];
					sub_14010D640(v24, (unsigned int*)v71, (unsigned int)(int)v74.m128_f32[0], &v72);
					v26 = *(_QWORD*)(a1 + 2936);
					v77 = (int)v74.m128_f32[1];
					v27 = (int)v74.m128_f32[0];
					v28 = (int)v73.m128_f32[0];
					v29 = (int)v73.m128_f32[1];
					if (*(_BYTE*)(v26 + 992))
						v30 = *(_DWORD*)(v26 + 1000);
					else
						v30 = sub_14010CF80(v26);
					v31 = v28 + v30;
					if (*(_BYTE*)(v26 + 992))
						v32 = *(_DWORD*)(v26 + 1004);
					else
						v32 = sub_14010D0A0(v26);
					v33 = v27 - v32;
					if (*(_BYTE*)(v26 + 992))
						v34 = *(_DWORD*)(v26 + 996);
					else
						v34 = sub_14010D1C0(v26);
					v35 = v29 + v34;
					if (*(_BYTE*)(v26 + 992))
						v36 = *(_DWORD*)(v26 + 1008);
					else
						v36 = sub_14010D2F0(v26);
					v37 = _mm_cvtsi32_si128(0);
					v74 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), v37),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v77 - v36), v37)));
					v73 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), v37),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), v37)));
				}
				else
				{
					v71[0] = _mm_sub_ps(v73, (__m128)xmmword_140B7A350);
					v71[1] = _mm_add_ps(v74, (__m128)xmmword_140B7A350);
					v72 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B660), (__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v38 = sub_140141F10(qword_140C63678, &v72);
					v39 = qword_140C63678;
					v40 = v38;
					if ((unsigned __int64)v38 >= *(_QWORD*)(qword_140C63678 + 48))
						v41 = *(__m128**)(qword_140C63678 + 40);
					else
						v41 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * v38);
					if (*(_QWORD*)(qword_140C63650 + 1848))
					{
						sub_140103E60(
							*(_QWORD**)(qword_140C63650 + 1848),
							v71,
							v41,
							0,
							COERCE_INT(
								(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
								* *(float*)(qword_140C63650 + 1860)));
						v39 = qword_140C63678;
					}
					sub_1401429A0(v39, v40);
				}
				if (v25 >= *(_QWORD*)(qword_140C63678 + 48))
					v42 = *(_QWORD*)(qword_140C63678 + 40);
				else
					v42 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v25;
				v43 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 144i64))(*(_QWORD*)(a1 + 2912));
				(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
					qword_140C65680,
					v43,
					0i64,
					-1i64,
					&v73,
					20,
					v42,
					1,
					0i64);
				sub_1401429A0(qword_140C63678, v25);
			}
		}
	}
	else
	{
		LOBYTE(v3) = 1;
		(*(void(__fastcall**)(__int64*, __int64, __m128*))(v6 + 240))(v4, v3, &v73);
	}
	v48 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 136i64))(*(_QWORD*)(a1 + 2912));
	v49 = *(__int64**)(a1 + 2912);
	v5 = v48 == 0;
	v50 = *v49;
	if (v5)
	{
		if ((*(__int64 (**)(void))(v50 + 176))())
		{
			v71[0].m128_i32[1] = (int)v75.m128_f32[1];
			v66 = *(__int64**)(a1 + 2912);
			v71[0].m128_i32[0] = (int)v75.m128_f32[0];
			v67 = *v66;
			v71[0].m128_i32[2] = (int)v76.m128_f32[0];
			v71[0].m128_i32[3] = (int)v76.m128_f32[1];
			v68 = (*(__int64(__fastcall**)(__int64*))(v67 + 176))(v66);
			sub_1400CC7C0(v68, (int*)v71);
			v69 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 176i64))(*(_QWORD*)(a1 + 2912));
			sub_1400D0A00(v69, 0);
		}
		else if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 160i64))(*(_QWORD*)(a1 + 2912)))
		{
			v51 = *(_QWORD*)(a1 + 2936);
			if (v51)
			{
				v72 = (__m128)xmmword_140B7B240;
				v71[0].m128_i32[1] = (int)v75.m128_f32[1];
				v71[0].m128_i32[3] = (int)v76.m128_f32[1];
				v71[0].m128_i32[2] = (int)v76.m128_f32[0];
				v71[0].m128_i32[0] = (int)v75.m128_f32[0];
				sub_14010D640(v51, (unsigned int*)v71, (unsigned int)(int)v76.m128_f32[0], &v72);
				v52 = *(_QWORD*)(a1 + 2936);
				v53 = (int)v76.m128_f32[0];
				v54 = (int)v76.m128_f32[1];
				v55 = (int)v75.m128_f32[0];
				v56 = (int)v75.m128_f32[1];
				if (*(_BYTE*)(v52 + 992))
					v57 = *(_DWORD*)(v52 + 1000);
				else
					v57 = sub_14010CF80(*(_QWORD*)(a1 + 2936));
				v58 = v55 + v57;
				if (*(_BYTE*)(v52 + 992))
					v59 = *(_DWORD*)(v52 + 1004);
				else
					v59 = sub_14010D0A0(v52);
				v60 = v53 - v59;
				if (*(_BYTE*)(v52 + 992))
					v61 = *(_DWORD*)(v52 + 996);
				else
					v61 = sub_14010D1C0(v52);
				v62 = v56 + v61;
				if (*(_BYTE*)(v52 + 992))
					v63 = *(_DWORD*)(v52 + 1008);
				else
					v63 = sub_14010D2F0(v52);
				v64 = _mm_cvtsi32_si128(0);
				v76 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), v64),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v54 - v63), v64)));
				v75 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), v64),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), v64)));
			}
			v65 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2912) + 160i64))(*(_QWORD*)(a1 + 2912));
			sub_140141820(v65, (__int128*)&v75, *(float*)(v65 + 828) + 1.0);
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64*, _QWORD, __m128*))(v50 + 240))(v49, 0i64, &v75);
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 1400E8417: variable 'v3' is possibly undefined
// 140A17718: using guessed type wchar_t aTooltiptext[12];
// 140B7A350: using guessed type __int128 xmmword_140B7A350;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B660: using guessed type __int128 xmmword_140B7B660;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

