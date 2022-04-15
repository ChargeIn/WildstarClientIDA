#include "../winhttp.h"

//----- (000000014039E4D0) ----------------------------------------------------
void __fastcall sub_14039E4D0(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rcx
	_OWORD* v12; // rax
	__int64 v13; // rcx
	_OWORD* v14; // rdi
	__int128 v15; // xmm6
	__int128 v16; // xmm7
	__m128* v17; // rax
	__m128 v18; // xmm3
	__m128 v19; // xmm0
	__m128 v20; // xmm2
	__int64 v21; // rcx
	float v22; // xmm1_4
	float v23; // xmm7_4
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int32 v26; // xmm6_4
	__int64 v27; // rcx
	float v28; // xmm6_4
	__int64 v29; // rcx
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rdx
	__m128 v34; // [rsp+40h] [rbp-59h] BYREF
	__m128 v35; // [rsp+50h] [rbp-49h] BYREF
	__m128 v36; // [rsp+60h] [rbp-39h]
	__m128 v37; // [rsp+70h] [rbp-29h] BYREF
	void(__fastcall * v38)(__int64); // [rsp+80h] [rbp-19h]
	__int64 v39; // [rsp+88h] [rbp-11h]
	__int64 v40; // [rsp+90h] [rbp-9h] BYREF
	int v41; // [rsp+98h] [rbp-1h]
	__int64 v42; // [rsp+A0h] [rbp+7h]
	__int64 v43; // [rsp+A8h] [rbp+Fh]
	int v44; // [rsp+B0h] [rbp+17h]
	__int64 v45; // [rsp+B8h] [rbp+1Fh]
	__int64 v46; // [rsp+100h] [rbp+67h] BYREF
	int v47; // [rsp+108h] [rbp+6Fh] BYREF
	int v48; // [rsp+10Ch] [rbp+73h]

	if (a2)
	{
		v46 = a1;
		v4 = qword_140C65898;
		if (a2 == *(_QWORD*)(qword_140C65898 + 120))
		{
			v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 192));
			if (v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5))
			{
				if (*(_DWORD*)(v4 + 30936))
				{
					*(_DWORD*)(v4 + 30936) = 0;
				}
				else if (*(_DWORD*)(v4 + 30956))
				{
					*(_DWORD*)(v4 + 30956) = 0;
				}
			}
			else
			{
				v6 = *(_DWORD*)(v4 + 32136);
				if (v6)
				{
					v7 = sub_1403D90D0(qword_140C65898, v6);
					sub_1403A0F80(v4, v7, a3, a4);
				}
				if (*(int*)(v4 + 26184) < 11)
				{
					if ((unsigned int)sub_14039EE60(v4))
						*(_DWORD*)(v4 + 27936) = 1;
					v37.m128_i32[0] = 0;
					v37.m128_u64[1] = sub_14001C280(v4);
					v39 = 0i64;
					v38 = sub_14039EA90;
					sub_140195960(v4 + 26200, 0, (__int64)&v37, 4);
				}
			}
			v8 = qword_140C65898;
			*(_DWORD*)(v4 + 26340) = dword_140C636A8 - 3000;
			v9 = sub_1403D90D0(v8, *(_DWORD*)(*(_QWORD*)(v4 + 120) + 192i64));
			if (v9 && *(_DWORD*)(v9 + 128) == 7 && (v10 = *(_QWORD*)(v4 + 120), *(_QWORD*)(v10 + 5864)))
			{
				if (sub_14047BE40(v10))
					goto LABEL_23;
				v11 = *(_QWORD*)(v4 + 28608);
				if (!v11)
					goto LABEL_23;
				v12 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
				v13 = qword_140C65898;
				v14 = v12;
				v15 = *v12;
				v16 = v12[1];
				*v12 = *(_OWORD*)(qword_140C65898 + 28688);
				v12[1] = *(_OWORD*)(v13 + 28704);
				if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 28608) + 48i64))(*(_QWORD*)(v4 + 28608)))
				{
					*v14 = v15;
					v14[1] = v16;
					sub_14039E400(v4);
				}
				else
				{
				LABEL_23:
					v17 = *(__m128**)(v4 + 120);
					v40 = 16449i64;
					v18 = v17[286];
					v19 = _mm_add_ps(*(__m128*)(qword_140C65898 + 28672), *(__m128*)(qword_140C65898 + 28656));
					v41 = 1;
					v42 = 0i64;
					v43 = 0i64;
					v44 = 0;
					v45 = 0i64;
					v47 = 0;
					v35 = _mm_add_ps(v18, _mm_mul_ps(v19, (__m128)xmmword_140B7AC50));
					v34 = v35;
					v20 = _mm_sub_ps(*(__m128*)(qword_140C65898 + 28672), *(__m128*)(qword_140C65898 + 28656));
					v21 = *(_QWORD*)(v4 + 29256);
					v46 = 0i64;
					v48 = 1065353216;
					v37 = v35;
					v36 = _mm_mul_ps(v20, (__m128)xmmword_140B7AC50);
					v22 = _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
					v34.m128_f32[1] = _mm_shuffle_ps(v35, v35, 85).m128_f32[0] + (float)(v22 * 2.5);
					v35.m128_f32[1] = _mm_shuffle_ps(v35, v35, 85).m128_f32[0] + (float)(v22 * -0.5);
					if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v21 + 424i64))(
						v21,
						&v35,
						&v34,
						&v47,
						&v46,
						&v40))
					{
						goto LABEL_36;
					}
					if (v46)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
						v46 = 0i64;
					}
					v23 = v36.m128_f32[0];
					v24 = *(_QWORD*)(v4 + 29256);
					v40 = 16449i64;
					v41 = 1;
					v42 = 0i64;
					v43 = 0i64;
					v44 = 0;
					v35.m128_f32[0] = v35.m128_f32[0] - v36.m128_f32[0];
					v34.m128_f32[0] = v34.m128_f32[0] - v36.m128_f32[0];
					v45 = 0i64;
					v47 = 0;
					v48 = 1065353216;
					if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v24 + 424i64))(
						v24,
						&v35,
						&v34,
						&v47,
						&v46,
						&v40))
					{
						goto LABEL_36;
					}
					if (v46)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
						v46 = 0i64;
					}
					v25 = *(_QWORD*)(v4 + 29256);
					v26 = v37.m128_i32[0];
					v40 = 16449i64;
					v35.m128_f32[0] = v37.m128_f32[0] + v23;
					v34.m128_f32[0] = v37.m128_f32[0] + v23;
					v41 = 1;
					v42 = 0i64;
					v43 = 0i64;
					v44 = 0;
					v45 = 0i64;
					v47 = 0;
					v48 = 1065353216;
					if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v25 + 424i64))(
						v25,
						&v35,
						&v34,
						&v47,
						&v46,
						&v40))
					{
						goto LABEL_36;
					}
					if (v46)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
						v46 = 0i64;
					}
					v27 = *(_QWORD*)(v4 + 29256);
					v40 = 16449i64;
					v41 = 1;
					v35.m128_i32[0] = v26;
					v34.m128_i32[0] = v26;
					v28 = v36.m128_f32[2];
					v42 = 0i64;
					v43 = 0i64;
					v44 = 0;
					v45 = 0i64;
					v35.m128_f32[2] = v35.m128_f32[2] - v36.m128_f32[2];
					v34.m128_f32[2] = v34.m128_f32[2] - v36.m128_f32[2];
					v47 = 0;
					v48 = 1065353216;
					if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v27 + 424i64))(
						v27,
						&v35,
						&v34,
						&v47,
						&v46,
						&v40))
					{
						goto LABEL_36;
					}
					if (v46)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
						v46 = 0i64;
					}
					v29 = *(_QWORD*)(v4 + 29256);
					v35.m128_f32[2] = v37.m128_f32[2] + v28;
					v34.m128_f32[2] = v37.m128_f32[2] + v28;
					v40 = 16449i64;
					v41 = 1;
					v42 = 0i64;
					v43 = 0i64;
					v44 = 0;
					v45 = 0i64;
					v47 = 0;
					v48 = 1065353216;
					if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v29 + 424i64))(
						v29,
						&v35,
						&v34,
						&v47,
						&v46,
						&v40))
					{
					LABEL_36:
						sub_14039E400(v4);
					}
					if (v46)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
				}
			}
			else
			{
				v30 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(v4 + 120) + 192i64));
				if (v30)
				{
					if (*(_DWORD*)(v30 + 128) == 9)
					{
						v31 = sub_14047B6D0(*(_QWORD*)(v4 + 120));
						if (v31)
						{
							v32 = *(_QWORD*)(v31 + 184);
							if (v32)
							{
								v33 = *(unsigned int*)(v32 + 100);
								if ((_DWORD)v33)
									(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(v4 + 120) + 5512i64)
										+ 16i64))(
											*(_QWORD*)(*(_QWORD*)(v4 + 120) + 5512i64),
											v33,
											0i64,
											0i64,
											0i64,
											0i64,
											0i64);
							}
						}
					}
				}
			}
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

