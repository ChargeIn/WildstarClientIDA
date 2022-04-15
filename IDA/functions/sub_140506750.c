//----- (0000000140506750) ----------------------------------------------------
__int64 __fastcall sub_140506750(
	__int64 a1,
	__int64 a2,
	unsigned int* a3,
	__int64 a4,
	unsigned __int64 a5,
	char a6,
	int a7,
	__int64 a8,
	char a9)
{
	int v12; // ecx
	__int64 v13; // rcx
	float v14; // xmm0_4
	__int64 v15; // rcx
	char v16; // r15
	__int64 v17; // r12
	unsigned int v18; // esi
	__int64 v19; // r14
	__int64 v20; // rbx
	__int64 v21; // r15
	unsigned int v22; // eax
	__m128i v23; // xmm3
	float v24; // xmm5_4
	__m128i v25; // xmm2
	__m128 v26; // xmm4
	__m128i v27; // xmm3
	__int64 v28; // r14
	_QWORD* v29; // rcx
	int v30; // eax
	__int64* v31; // rbx
	__int64 v32; // rcx
	int v34; // [rsp+48h] [rbp-C0h] BYREF
	unsigned int v35; // [rsp+4Ch] [rbp-BCh]
	int v36; // [rsp+50h] [rbp-B8h]
	unsigned int v37; // [rsp+54h] [rbp-B4h]
	__int64 v38; // [rsp+58h] [rbp-B0h] BYREF
	float v39; // [rsp+68h] [rbp-A0h]
	int v40; // [rsp+6Ch] [rbp-9Ch]
	__int64 v41; // [rsp+78h] [rbp-90h] BYREF
	__int64 v42; // [rsp+80h] [rbp-88h]
	__int64 v43; // [rsp+88h] [rbp-80h]
	__int64 v44; // [rsp+90h] [rbp-78h]
	__int128 v45; // [rsp+98h] [rbp-70h] BYREF
	__m128 v46; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v47; // [rsp+B8h] [rbp-50h]
	__int128 v48; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v49; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v50; // [rsp+E0h] [rbp-28h]
	unsigned int v51; // [rsp+158h] [rbp+50h]

	v12 = (int)(a3[3] - a3[1] - HIDWORD(qword_140C46108)) / 2 + a3[1];
	a3[1] = v12;
	v13 = (unsigned int)(HIDWORD(qword_140C46108) + v12);
	a3[3] = v13;
	LODWORD(v14) = sub_140506520(v13, *(_QWORD*)(a2 + 32), a4, a5, a6).m128_u32[0];
	if (a7 == 1)
	{
		*a3 += (int)(a3[2] - (int)v14 - *a3) / 2;
	}
	else if (a7 == 2)
	{
		*a3 = a3[2] - (int)v14;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a4 + 32i64))(a4);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a4 + 24i64))(a4);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a4 + 32i64))(a4);
	*a3 += 2;
	v15 = *(_QWORD*)(a2 + 32);
	v51 = 0;
	v16 = 0;
	v42 = 0i64;
	v43 = 0i64;
	v44 = 0i64;
	sub_140505590(v15, (__int64)&v41, a5);
	v17 = v43;
	v18 = 0;
	v19 = v42;
	v20 = v42;
	if (v42 != v43)
	{
		do
		{
			if (v18 >= 4)
				break;
			if (!a6 || *(_QWORD*)v20 || *(_DWORD*)(v20 + 48) == 1 && !v16)
			{
				sub_14018EFA0(&v49, (__int64)L"%llu", *(_QWORD*)v20);
				v48 = xmmword_140B7B240;
				v21 = v50;
				v38 = 0i64;
				v39 = 1000.0;
				v40 = 1148846080;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64*, int, __int128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
					qword_140C65680,
					a4,
					v50,
					-1i64,
					&v38,
					1024,
					&v48,
					1);
				v22 = a3[3];
				v23 = _mm_cvtsi32_si128(a3[2]);
				v35 = a3[1];
				v37 = v22;
				v24 = (float)(v39 - *(float*)&v38) + 1.0;
				v25 = _mm_cvtsi32_si128(0);
				v26 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v23, v25), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), v25)));
				v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), v25);
				v47 = v26;
				v46 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v27, _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), v25)));
				v47.m128_f32[0] = v46.m128_f32[0] + v24;
				v34 = (int)(float)(v46.m128_f32[0] + v24) + 2;
				v36 = qword_140C46108 + v34;
				v51 += qword_140C46108 + (int)v24 + 2;
				v28 = a2 + 48i64 * v18;
				if (sub_1401099E0(v28 + 40))
				{
					v29 = *(_QWORD**)(v28 + 40);
					v45 = xmmword_140B7B240;
					if (v29)
						sub_140103CF0(
							v29,
							(unsigned int*)&v34,
							(__m128*) & v45,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v28 + 48)) * *(float*)(v28 + 52)));
				}
				v30 = 6;
				if (a9)
					v30 = 1030;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
					+ 264i64))(
						qword_140C65680,
						a4,
						v21,
						-1i64,
						&v46,
						v30,
						a8,
						1);
				*a3 = v36 + 2;
				if (v21)
					sub_14018B900(v21, 0);
				v16 = 1;
			}
			v20 += 88i64;
			++v18;
		} while (v20 != v17);
		v19 = v42;
	}
	if (v19 != v17)
	{
		v31 = (__int64*)(v19 + 24);
		do
		{
			v32 = v31[5];
			if (v32)
				sub_14018B900(v32, 0);
			if (*v31)
				sub_14018B900(*v31, 0);
			v31 += 11;
		} while (v31 - 3 != (__int64*)v17);
	}
	if (v19)
		sub_14018B900(v19, 0);
	return v51;
}
// 140B102E8: using guessed type wchar_t aLlu_4[5];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C46108: using guessed type __int64 qword_140C46108;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

