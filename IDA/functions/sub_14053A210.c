//----- (000000014053A210) ----------------------------------------------------
void __fastcall sub_14053A210(__m128* a1)
{
	__m128* v2; // rsi
	int v3; // r15d
	int v4; // r12d
	__int64 v5; // rbx
	int v6; // eax
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // r14
	__m128* v10; // r8
	__m128* v11; // r9
	float v12; // xmm7_4
	__m128* v13; // r8
	__m128* v14; // r9
	__m128 v15; // xmm0
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // r14
	__m128 v18; // xmm1
	__m128 v19; // xmm6
	float v20; // xmm6_4
	__int64 v21; // rax
	float v22; // xmm6_4
	__int64 v23; // rax
	__int32 v24; // xmm1_4
	__int64 v25; // rdx
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	__m128* v28; // rbx
	__int32 v29; // xmm1_4
	unsigned __int64 v30; // rbx
	__int64 v31; // r8
	__int64 v32; // rax
	int* v33; // rax
	__m128 v34; // [rsp+98h] [rbp-80h] BYREF
	int v35; // [rsp+A8h] [rbp-70h] BYREF
	int v36; // [rsp+ACh] [rbp-6Ch]
	__m128 v37; // [rsp+B8h] [rbp-60h] BYREF
	__int128 v38; // [rsp+C8h] [rbp-50h]
	__int64 v39; // [rsp+D8h] [rbp-40h] BYREF
	__m128 v40; // [rsp+E8h] [rbp-30h] BYREF
	__m128 v41; // [rsp+F8h] [rbp-20h] BYREF
	__m256 v42; // [rsp+108h] [rbp-10h] BYREF
	__int128 v43; // [rsp+128h] [rbp+10h]
	__int128 v44; // [rsp+138h] [rbp+20h]
	__m128 v45; // [rsp+148h] [rbp+30h] BYREF
	__int128 v46; // [rsp+158h] [rbp+40h]
	int v47; // [rsp+168h] [rbp+50h]
	__int64 v48; // [rsp+170h] [rbp+58h]

	if (!a1[1746].m128_i32[0])
	{
		v2 = (__m128*)a1[1609].m128_u64[0];
		v42 = ymmword_140C78390;
		v3 = 0;
		v4 = 0;
		v43 = xmmword_140C783B0;
		v34 = 0i64;
		v44 = xmmword_140C783C0;
		if (v2)
		{
			v5 = a1[1742].m128_i64[1];
			if (v5 && ((v6 = *(_DWORD*)(*(_QWORD*)(v5 + 112) + 124i64), v6 == 4) || (unsigned int)(v6 - 7) <= 1))
			{
				v7 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
				v8 = a1[1880].m128_u64[1];
				v34 = v2[286];
				v9 = v7;
				(*(void(__fastcall**)(unsigned __int64, int*))(*(_QWORD*)v8 + 224i64))(v8, &v35);
				v10 = (__m128*)a1[1818].m128_u64[1];
				v11 = v10;
				if (!v10)
				{
					v11 = (__m128*)a1[1818].m128_u64[0];
					v10 = v11;
				}
				v12 = 0.0;
				v37 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v35), (__m128)0i64),
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v36), (__m128)0i64));
				sub_140251700(&v40, v37.m128_f32, v10 + 10, v11 + 18, v9);
				v13 = (__m128*)a1[1818].m128_u64[1];
				v14 = v13;
				if (!v13)
				{
					v14 = (__m128*)a1[1818].m128_u64[0];
					v13 = v14;
				}
				v15 = (__m128)0x3F800000u;
				v37 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v35), (__m128)0x3F800000u),
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v36), (__m128)0i64));
				sub_140251700(&v41, v37.m128_f32, v13 + 10, v14 + 18, v9);
				v16 = a1[1828].m128_u64[1];
				v45.m128_u64[0] = 16449i64;
				v45.m128_i32[2] = 0;
				v46 = 0ui64;
				v47 = 0;
				v48 = 0i64;
				v37.m128_u64[0] = 0x3F80000000000000i64;
				if ((*(unsigned int(__fastcall**)(unsigned __int64, __m128*, __m128*, __m128*, __int64*, __m128*))(*(_QWORD*)v16 + 424i64))(
					v16,
					&v40,
					&v41,
					&v37,
					&v39,
					&v45))
				{
					*(double*)v15.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
					v15.m128_f32[0] = v15.m128_f32[0] * 0.99000001;
					v34 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v41, v40), _mm_shuffle_ps(v15, v15, 0)), v40);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
					v3 = 1;
				}
				v17 = v2[208].m128_u64[1];
				v18 = _mm_sub_ps(v2[286], v34);
				v19 = _mm_mul_ps(v18, v18);
				v20 = fsqrt(
					(float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
					+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0]);
				if (v17)
				{
					v12 = sub_14047A940(v2) * *(float*)(v17 + 140);
				}
				else
				{
					v21 = sub_14022D500(v2[13].m128_u32[2]);
					if (v21)
						v12 = *(float*)(v21 + 40);
				}
				v22 = fabs(v20 - v12);
				v23 = *(_QWORD*)(v5 + 72);
				v37.m128_u64[1] = 0i64;
				*(_QWORD*)&v38 = 0i64;
				v24 = *(_DWORD*)(v23 + 4);
				a1[1745] = v34;
				v37.m128_i32[0] = v24;
				*((_QWORD*)&v38 + 1) = &v34;
				v45 = v37;
				v46 = v38;
				sub_1401B0590((int*)&v45, (__int64)&v42);
				v25 = *(_QWORD*)(v5 + 112);
				if (v22 >= *(float*)(v25 + 108) && v22 <= *(float*)(v25 + 112) && (unsigned int)sub_14047D830(v2, &v34))
					v4 = sub_140565D40(v26, v5, &v34);
			}
			else
			{
				a1[1745] = v2[286];
			}
			v27 = a1[1742].m128_u64[1];
			if (v27 && *(_QWORD*)(v27 + 104))
			{
				v28 = (__m128*)a1[1588].m128_u64[1];
				if (v28)
				{
					do
					{
						if (v3)
						{
							v28[8].m128_i32[2] = 2 - (v4 != 0i64);
							v29 = v2[300].m128_i32[0];
							v28[6] = v34;
							v28[7].m128_i32[0] = v29;
						}
						else
						{
							sub_14054D0F0((__int64)v28, 1);
						}
						v28 = (__m128*)v28->m128_u64[1];
					} while (v28);
				}
				else if (v3)
				{
					v30 = 0i64;
					do
					{
						v31 = *(_QWORD*)(v27 + 96);
						v32 = *(_QWORD*)(v31 + 8 * v30);
						if ((*(_BYTE*)(v32 + 68) & 0x40) == 0
							&& (!*(_DWORD*)(v32 + 80)
								|| (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
									+ 24i64))(
										qword_140C659A0,
										*(_QWORD*)(qword_140C65898 + 120),
										*(unsigned int*)(*(_QWORD*)(v31 + 8 * v30) + 80i64),
										0i64,
										0i64,
										0))
							&& (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1[1742].m128_u64[1] + 96) + 8 * v30) + 68i64) & 0x100) != 0)
						{
							v33 = sub_14018B280(320i64, 0);
							if (v33)
								sub_140549E10(
									(__int64)v33,
									**(_DWORD**)(a1[1742].m128_u64[1] + 112),
									*(_QWORD*)(*(_QWORD*)(a1[1742].m128_u64[1] + 96) + 8 * v30),
									v2->m128_i32[2],
									&v34,
									v2[300].m128_i32[0],
									v2->m128_i32[2],
									0,
									&a1[1588].m128_i64[1],
									1,
									0,
									0,
									*(_DWORD*)(*(_QWORD*)(a1[1742].m128_u64[1] + 8) + 108i64),
									0,
									0i64);
						}
						v27 = a1[1742].m128_u64[1];
						++v30;
					} while (v30 < *(_QWORD*)(v27 + 104));
				}
			}
		}
	}
}
// 14053A4D9: conditional instruction was optimized away because rbx.8!=0
// 14053A5F7: conditional instruction was optimized away because rcx.8!=0
// 14053A54C: variable 'v26' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

