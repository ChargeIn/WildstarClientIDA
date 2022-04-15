#include "../winhttp.h"

//----- (00000001404D8DB0) ----------------------------------------------------
void __fastcall sub_1404D8DB0(__m128* a1, __int64 a2, double a3, double a4, __int64 a5)
{
	__int64 v6; // rsi
	int v7; // eax
	__int32 v8; // eax
	unsigned __int64 v9; // rdx
	__int64 v10; // r14
	int v11; // eax
	int v12; // ebx
	__int64 v13; // rax
	__int64 v14; // r14
	__int64 v15; // rsi
	int v16; // eax
	__int64 v17; // rax
	int v18; // eax
	unsigned int v19; // ebx
	__int64 v20; // rax
	__int64 v21; // rcx
	int v22; // edx
	unsigned __int64 v23; // rsi
	unsigned __int64 v24; // rax
	int v25; // eax
	__int64 v26; // rax
	int v27; // ebx
	int v28; // eax
	unsigned __int64 v29; // rax
	int v30; // edx
	unsigned __int64 v31; // rax
	int v32; // ebx
	__int64 v33; // rax
	unsigned __int64 v34; // rbx
	unsigned __int32 v35; // r14d
	__int64 v36; // rcx
	int v37; // eax
	unsigned __int32 v38; // r14d
	unsigned __int64 v39; // rsi
	unsigned __int64 v40; // r15
	unsigned __int64 i; // rbx
	__int64 v42; // rcx
	__int64 v43; // rax
	__m128* v44; // r8
	__m128* v45; // r9
	__int64 v46; // r11
	__m128* v47; // r8
	__m128* v48; // r9
	__m128 v49; // xmm0
	__int64 v50; // rcx
	unsigned __int64 v51; // rbx
	void(__fastcall * **v52)(_QWORD, __m128*); // rcx
	unsigned int v53; // [rsp+20h] [rbp-39h]
	__m128 v54; // [rsp+30h] [rbp-29h] BYREF
	__m128 v55; // [rsp+40h] [rbp-19h] BYREF
	__m128 v56; // [rsp+50h] [rbp-9h] BYREF
	__int64 v57; // [rsp+60h] [rbp+7h] BYREF
	int v58; // [rsp+68h] [rbp+Fh]
	__int64 v59; // [rsp+70h] [rbp+17h]
	__int64 v60; // [rsp+78h] [rbp+1Fh]
	int v61; // [rsp+80h] [rbp+27h]
	__int64 v62; // [rsp+88h] [rbp+2Fh]
	__int64 v63; // [rsp+C0h] [rbp+67h] BYREF
	int v64; // [rsp+C8h] [rbp+6Fh] BYREF
	int v65; // [rsp+CCh] [rbp+73h]

	a1[1881].m128_i32[3] = a1[1881].m128_i32[1];
	a1[1882].m128_i32[0] = a1[1881].m128_i32[2];
	v6 = a1[1742].m128_i64[1];
	if (v6)
	{
		v7 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 124i64);
		if (v7 == 4 || (unsigned int)(v7 - 7) <= 1)
		{
			v8 = a1[1743].m128_i32[1];
			switch (v8)
			{
			case 0:
				if (a1[1743].m128_i32[2] == 4)
				{
					v9 = a1[1743].m128_u32[3];
					if (v9 < *(_QWORD*)(qword_140C65898 + 2712))
					{
						v10 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 2704) + 8 * v9);
						if (v10)
						{
							v11 = sub_14039A040(qword_140C65898, v9, 0i64, 0, 0, 0i64);
							v12 = v11;
							if (v11 && v11 != 317)
							{
								v13 = sub_1405A4B80(v10, 1);
								sub_1403A12A0((__int64)a1, v12, v13, 0);
							}
							goto LABEL_31;
						}
					}
				}
			LABEL_30:
				v12 = v63;
			LABEL_31:
				v21 = a1[7].m128_i64[1];
				if (((v12 - 67) & 0xFFFFFFFD) != 0 || !v21 || !sub_14047BFD0(v21))
					sub_1403A1510((__int64)a1);
				return;
			case 1:
				v14 = qword_140C65898;
				v15 = sub_1403AC780(qword_140C65898 + 160, &a1[1743].m128_i32[2]);
				if (v15)
				{
					v16 = sub_1403998E0(v14, &a1[1743].m128_i32[2], 0, 0i64);
					v12 = v16;
					if (v16 && v16 != 317 && sub_14056A030(v15))
					{
						v17 = sub_14056A030(v15);
						sub_1403A12A0((__int64)a1, v12, v17, 0);
					}
					goto LABEL_31;
				}
				goto LABEL_30;
			case 2:
				v18 = sub_14039AC90(
					qword_140C65898,
					a1[7].m128_i64[1],
					a1[1744].m128_i32[0],
					a1[1743].m128_i32[3],
					**(_DWORD**)(v6 + 112));
				goto LABEL_25;
			case 4:
				v19 = **(_DWORD**)(v6 + 112);
				v20 = sub_14039DF50((__int64)a1);
				v53 = v19;
				break;
			case 3:
				v20 = sub_1403D90D0((__int64)a1, a1[1743].m128_i32[0]);
				if (!v20)
					goto LABEL_30;
				v53 = **(_DWORD**)(v6 + 112);
				break;
			case 5:
				v18 = sub_14039B340(qword_140C65898, **(_DWORD**)(v6 + 112));
			LABEL_25:
				v12 = v18;
				if (v18 && v18 != 317)
					sub_1403A12A0((__int64)a1, v18, v6, 0);
				goto LABEL_31;
			default:
				goto LABEL_30;
			}
			v18 = sub_14039AC90(qword_140C65898, v20, a1[1744].m128_i32[0], a1[1743].m128_i32[3], v53);
			goto LABEL_25;
		}
	}
	v22 = a1[1612].m128_i32[1];
	if (!v22)
	{
		v37 = dword_140C45130;
		if (*(_DWORD*)qword_140C63750 < dword_140C45130)
			v37 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C45140 + v37))
			sub_14055B0E0((__int64)a1, 0, a3, a4);
		v38 = a1[1612].m128_u32[3];
		v39 = 0i64;
		if (v38)
		{
			v40 = a1[1874].m128_u64[1];
			for (i = 0i64; i < v40; ++i)
			{
				v42 = *(_QWORD*)(a1[1874].m128_u64[0] + 8 * i);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v42 + 16i64))(v42, v38);
			}
		}
		if (!a1[1649].m128_u64[1])
		{
			v43 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
			v44 = (__m128*)a1[1818].m128_u64[1];
			v45 = v44;
			if (!v44)
			{
				v45 = (__m128*)a1[1818].m128_u64[0];
				v44 = v45;
			}
			v56 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a1[1881].m128_i32[1]), (__m128)0i64),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a1[1881].m128_i32[2]), (__m128)0i64));
			sub_140251700(&v54, v56.m128_f32, v44 + 10, v45 + 18, v43);
			v47 = (__m128*)a1[1818].m128_u64[1];
			v48 = v47;
			if (!v47)
			{
				v48 = (__m128*)a1[1818].m128_u64[0];
				v47 = v48;
			}
			v49 = (__m128)0x3F800000u;
			v56 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a1[1881].m128_i32[1]), (__m128)0x3F800000u),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a1[1881].m128_i32[2]), (__m128)0i64));
			sub_140251700(&v55, v56.m128_f32, v47 + 10, v48 + 18, v46);
			v63 = 0i64;
			v50 = *(_QWORD*)(qword_140C65898 + 29256);
			v57 = 17i64;
			v58 = 0;
			v59 = 0i64;
			v60 = 0i64;
			v61 = 0;
			v62 = 0i64;
			v64 = 0;
			v65 = 1065353216;
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v50 + 424i64))(
				v50,
				&v54,
				&v55,
				&v64,
				&v63,
				&v57))
			{
				*(double*)v49.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v63 + 16i64))(v63);
				v51 = a1[1874].m128_u64[1];
				v56 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v55, v54), _mm_shuffle_ps(v49, v49, 0)), v54);
				if (v51)
				{
					do
					{
						v52 = *(void(__fastcall****)(_QWORD, __m128*))(a1[1874].m128_u64[0] + 8 * v39);
						(**v52)(v52, &v56);
						++v39;
					} while (v39 < v51);
				}
				if (a1[1803].m128_i32[0])
					sub_140559180((__int64)&a1[1803], &v56);
			}
			else
			{
				sub_1400EA3E0(a1[1844].m128_i64[0], "GameClickSky", byte_1409D0F0F);
				if (a1[1803].m128_i32[0])
					sub_1405598D0((__int64)&a1[1803]);
			}
			if (v63)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 8i64))(v63);
		}
		return;
	}
	v23 = 0i64;
	if (!a1[1803].m128_i32[0]
		|| ((v24 = a1[1609].m128_u64[0]) != 0 ? (v25 = *(_DWORD*)(v24 + 264)) : (v25 = 0), v22 != v25))
	{
		if (!sub_1404DAEB0(qword_140C65898, 0) || (unsigned int)sub_14055A260((__m128*)a1[1843].m128_i32))
			sub_14055B0E0((__int64)a1, a1[1612].m128_i32[1], a3, a4);
	LABEL_63:
		v34 = a1[1874].m128_u64[1];
		v35 = a1[1612].m128_u32[1];
		if (v34)
		{
			do
			{
				v36 = *(_QWORD*)(a1[1874].m128_u64[0] + 8 * v23);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v36 + 8i64))(v36, v35);
				++v23;
			} while (v23 < v34);
		}
		return;
	}
	v26 = sub_1403D90D0((__int64)a1, v22);
	if (!v26)
		goto LABEL_63;
	v27 = **(_DWORD**)(v26 + 6408);
	v28 = sub_14045A950(a1[7].m128_i64[1], *(_DWORD*)(v26 + 8));
	if (v27 != 101 && v28)
	{
		v29 = a1[7].m128_u64[1];
		if (v29 && !*(_DWORD*)(v29 + 592) && !a1[1652].m128_i32[2])
		{
			v30 = a1[1612].m128_i32[1];
			if (v30)
			{
				sub_14055B0E0((__int64)a1, v30, a3, a4);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D98 + 64i64))(qword_140C89D98, 0i64);
			}
			return;
		}
	LABEL_49:
		sub_1404D9450(a1, 1u, a3, a4, a5);
		return;
	}
	if (v28 == 2)
		goto LABEL_63;
	v31 = a1[7].m128_u64[1];
	if (!v31 || *(_DWORD*)(v31 + 592) || a1[1652].m128_i32[2] || sub_1404DAF50(qword_140C65898))
		goto LABEL_49;
	v32 = a1[1612].m128_i32[1];
	sub_14055B0E0((__int64)a1, v32, a3, a4);
	if (v32)
	{
		v33 = sub_1403D90D0((__int64)a1, v32);
		if (v33)
		{
			if (*(_DWORD*)(v33 + 592))
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D98 + 64i64))(qword_140C89D98, 0i64);
			else
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D88 + 64i64))(qword_140C89D88, 0i64);
		}
	}
}
// 1404D933B: variable 'v46' is possibly undefined
// 1409D0F0F: using guessed type _BYTE byte_1409D0F0F[15];
// 140C45130: using guessed type int dword_140C45130;
// 140C45140: using guessed type int dword_140C45140;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C89D88: using guessed type __int64 qword_140C89D88;
// 140C89D98: using guessed type __int64 qword_140C89D98;

