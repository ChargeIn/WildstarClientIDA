#include "../winhttp.h"

//----- (00000001402605A0) ----------------------------------------------------
void __fastcall sub_1402605A0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned __int64 a4,
	unsigned int a5,
	unsigned int a6,
	__int64 a7)
{
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 i; // rdi
	__int64 v14; // rsi
	__int64 v15; // rcx
	__int64 v16; // rax
	int v17; // eax
	__m128 v18; // xmm0
	__m128 v19; // xmm4
	__m128 v20; // xmm2
	__m128 v21; // xmm3
	__m128 v22; // xmm5
	__m128 v23; // xmm3
	__m128 v24; // xmm1
	__m128 v25; // xmm4
	__int64 v26; // rcx
	unsigned __int64 v27; // rdi
	__int64 v28; // rsi
	__int64 v29; // rax
	__m128 v30; // xmm4
	__m128 v31; // xmm5
	__m128 v32; // xmm3
	__m128 v33; // xmm6
	__m128 v34; // xmm2
	__m128 v35; // xmm1
	__int64 v36; // [rsp+40h] [rbp-C0h] BYREF
	__m128* v37; // [rsp+48h] [rbp-B8h]
	__m128 v38[3]; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v39; // [rsp+80h] [rbp-80h]
	__m128 v40; // [rsp+90h] [rbp-70h] BYREF
	__m128 v41; // [rsp+A0h] [rbp-60h]
	__m128 v42; // [rsp+B0h] [rbp-50h]
	__m128 v43; // [rsp+C0h] [rbp-40h]
	__m128* v44[10]; // [rsp+E0h] [rbp-20h] BYREF

	if (*(float*)(a2 + 76) >= 0.0000099999997)
	{
		v11 = *(_QWORD*)(a2 + 160);
		if (!v11
			|| (LODWORD(v36) = 0, (*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v11 + 32i64))(v11, &v36)))
		{
			v12 = *(_QWORD*)(a2 + 168);
			if (!v12
				|| (LODWORD(v36) = 0, (*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v12 + 32i64))(v12, &v36)))
			{
				for (i = 0i64; i < a4; ++i)
				{
					v14 = *(_QWORD*)(a3 + 8 * i);
					v15 = *(_QWORD*)(v14 + 48);
					if (v15 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v15 + 48i64))(v15))
						sub_140260CF0(a1, v14);
				}
				if (*(_DWORD*)(a1 + 148) != 5)
				{
					v16 = *(_QWORD*)a1;
					*(_DWORD*)(a1 + 148) = 5;
					(*(void(__fastcall**)(__int64))(v16 + 72))(a1);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1672),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						*(_QWORD*)(a1 + 1680));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						2i64,
						*(_QWORD*)(a1 + 1688));
					v17 = *(_DWORD*)(a1 + 48);
					if (v17 == 8 || v17 == 12)
					{
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							3i64,
							*(_QWORD*)(a1 + 1720));
					}
					else if (v17 == 17)
					{
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							3i64,
							*(_QWORD*)(a1 + 1704));
					}
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						4i64,
						*(_QWORD*)(a1 + 1776));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						5i64,
						*(_QWORD*)(a1 + 1784));
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)qword_140C65670
						+ 456i64))(
							qword_140C65670,
							1i64,
							1i64,
							0i64,
							0i64,
							1,
							0);
					(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2136),
						1i64);
					v18 = *(__m128*)(a1 + 304);
					v19 = *(__m128*)(a1 + 320);
					v20 = *(__m128*)(a1 + 336);
					v21 = *(__m128*)(a1 + 288);
					v22 = _mm_unpackhi_ps(v21, v18);
					v23 = _mm_unpacklo_ps(v21, v18);
					v24 = _mm_unpacklo_ps(v19, v20);
					v25 = _mm_unpackhi_ps(v19, v20);
					v40 = _mm_shuffle_ps(v23, v24, 68);
					v41 = _mm_shuffle_ps(v23, v24, 238);
					v42 = _mm_shuffle_ps(v22, v25, 68);
					v43 = _mm_shuffle_ps(v22, v25, 238);
					(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 328i64))(
						qword_140C65670,
						64i64,
						&v40);
					sub_14025F0C0((_QWORD*)a1);
				}
				v36 = a2;
				v37 = (__m128*)(a1 + 160);
				v40.m128_u64[0] = a2;
				v40.m128_u64[1] = a1 + 160;
				sub_1401AFB10((__m128**) & v40, v38);
				sub_14025F120(v26, a2, v38);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 24i64))(*(_QWORD*)(a1 + 2096));
				if (a7)
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
						qword_140C65670,
						a7,
						0i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 4i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
					qword_140C65670,
					a5 | *(_DWORD*)(a1 + 2408),
					a6 | *(_DWORD*)(a1 + 2412),
					64i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					5i64,
					2);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2128),
					0i64);
				sub_140260520(a1);
				if (a7)
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
						qword_140C65670,
						0i64,
						0i64);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 32i64))(*(_QWORD*)(a1 + 2096));
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2096),
					0i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 2i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
					qword_140C65670,
					64i64,
					64i64,
					64i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					1i64,
					2);
				if (a4)
				{
					(*(void(__fastcall**)(__int64, _QWORD, bool))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2216),
						*(float*)(a1 + 332) == 0.0);
					v27 = 0i64;
					v36 = a1 + 224;
					do
					{
						v28 = *(_QWORD*)(a3 + 8 * v27);
						v44[0] = (__m128*)(a1 + 224);
						v37 = *(__m128**)(v28 + 8);
						v44[1] = v37;
						sub_1401AFB10(v44, &v40);
						v29 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
							qword_140C65670,
							112i64,
							0i64);
						if (v29)
						{
							v30 = v41;
							v31 = v42;
							v32 = v43;
							v33 = v40;
							*(_OWORD*)v29 = *(_OWORD*)(a1 + 544);
							*(_OWORD*)(v29 + 16) = *(_OWORD*)(a1 + 560);
							*(_OWORD*)(v29 + 32) = *(_OWORD*)(a1 + 592);
							v34 = _mm_unpacklo_ps(v33, v30);
							*(__m128*)(v29 + 48) = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v33),
										_mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v30)),
									_mm_mul_ps(_mm_shuffle_ps(v39, v39, 170), v31)),
								v32);
							v35 = _mm_unpacklo_ps(v31, v32);
							*(__m128*)(v29 + 64) = _mm_shuffle_ps(v34, v35, 68);
							*(__m128*)(v29 + 80) = _mm_shuffle_ps(v34, v35, 238);
							*(__m128*)(v29 + 96) = _mm_shuffle_ps(_mm_unpackhi_ps(v33, v30), _mm_unpackhi_ps(v31, v32), 68);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
						}
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							6i64,
							*(_QWORD*)(v28 + 48));
						if (*(_QWORD*)(a1 + 2472))
							(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, __int64))(*(_QWORD*)qword_140C65670 + 656i64))(
								qword_140C65670,
								3i64,
								0i64,
								*(unsigned int*)(a1 + 2472),
								0i64,
								*(_DWORD*)(a1 + 2480),
								0,
								1,
								v36);
						else
							(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 648i64))(
								qword_140C65670,
								3i64,
								0i64,
								*(unsigned int*)(a1 + 2480),
								1i64);
						++v27;
					} while (v27 < a4);
				}
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
				sub_14025D7F0(a1, a2, v38);
				if (*(_QWORD*)(a1 + 2472))
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
						+ 656i64))(
							qword_140C65670,
							3i64,
							0i64,
							*(unsigned int*)(a1 + 2472),
							0,
							*(_DWORD*)(a1 + 2480),
							0,
							1);
				else
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
						qword_140C65670,
						3i64,
						0i64,
						*(unsigned int*)(a1 + 2480),
						1);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
					qword_140C65670,
					0i64,
					0i64);
			}
		}
	}
}
// 140260A79: conditional instruction was optimized away because r14.8!=0
// 1402608B8: variable 'v26' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 1402605A0: using guessed type __m128 var_140[3];

