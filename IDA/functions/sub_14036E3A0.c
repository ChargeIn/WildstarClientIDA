#include "../winhttp.h"

//----- (000000014036E3A0) ----------------------------------------------------
__int64 __fastcall sub_14036E3A0(
	__int64 a1,
	__int64 a2,
	__m128* a3,
	__int64 a4,
	unsigned __int64 a5,
	_QWORD* a6,
	__int64 a7)
{
	__m128* v7; // rbx
	__int64* v8; // r14
	int* v12; // rcx
	int v13; // xmm7_4
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__int64 result; // rax
	__int64 v17; // rcx
	float v18; // xmm6_4
	int v19; // edx
	int v20; // eax
	__int64 v21; // rbx
	__int64 v22; // rcx
	__int128* v23; // rax
	__int64 v24; // rcx
	__int128 v25; // xmm0
	__int64 v26; // r15
	__m128* v27; // rax
	__m128* v28; // rax
	__m128 v29; // xmm4
	__m128 v30; // xmm5
	__m128 v31; // xmm6
	__m128* v32; // rdx
	__m128 v33; // xmm8
	char* v34; // rcx
	__m128 v35; // xmm3
	__int64 v36; // rcx
	__m128* v37; // rax
	__int64 v38; // rdx
	__m128 v39; // xmm3
	__m128 v40; // xmm2
	char* v41; // rax
	__int128 v42; // xmm0
	__int64 v43; // rax
	__int64 v44; // rax
	int v45; // eax
	int v46; // [rsp+30h] [rbp-D0h] BYREF
	__m128* v47; // [rsp+38h] [rbp-C8h]
	unsigned __int64 v48; // [rsp+40h] [rbp-C0h]
	__int128 v49; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v50; // [rsp+60h] [rbp-A0h]
	char v51[96]; // [rsp+90h] [rbp-70h] BYREF
	int v52[56]; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v53[6]; // [rsp+1D0h] [rbp+D0h] BYREF

	++* (_DWORD*)(a1 + 848);
	v7 = (__m128*)a2;
	v47 = (__m128*)a2;
	v8 = (__int64*)(a1 + 288);
	v48 = a5;
	v12 = (int*)(a1 + 288);
	if (a7)
		sub_14036EA20((__int64)v12, a7);
	else
		sub_1407E4830(v12, 0i64, 0x230ui64);
	if (!*v8)
		*v8 = *(_QWORD*)(a1 + 2560);
	if (!*(_QWORD*)(a1 + 296))
		*(_QWORD*)(a1 + 296) = *(_QWORD*)(a1 + 2568);
	v13 = 0;
	if (*(float*)(a1 + 792) == 0.0)
		*(_DWORD*)(a1 + 792) = 1065353216;
	if (!*(_QWORD*)(a1 + 800))
		*(_QWORD*)(a1 + 800) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 360i64);
	*(__m128*)(a1 + 912) = a3[3];
	*(float*)(a1 + 1916) = 2.0
		/ (float)((float)*(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670
			+ 584i64))(qword_140C65670)
			+ 12)
			* *(float*)(a4 + 20));
	v14 = _mm_sub_ps(*(__m128*)(a1 + 912), *(__m128*)(a1 + 864));
	v15 = _mm_mul_ps(v14, v14);
	*(float*)(a1 + 956) = fsqrt(
		(float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
		+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0]);
	*(_QWORD*)(a1 + 1600) = *a6;
	result = sub_14036EC90(a1, v7, a3, a4, a5);
	if ((int)result >= 0)
	{
		result = sub_140355BF0((__m128*)a1);
		if ((int)result >= 0)
		{
			result = sub_1403563C0(a1);
			if ((int)result >= 0)
			{
				if ((*(_DWORD*)(a1 + 128) & 0x800000) != 0)
					return 0i64;
				v17 = *(_QWORD*)(a1 + 16);
				LODWORD(v49) = -1;
				sub_140350420(v17, (__int64)&v49);
				v46 = *(unsigned __int8*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24))
					+ 40);
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65688 + 280i64))(qword_140C65688, &v46);
				if ((*(_BYTE*)(a1 + 128) & 0x10) != 0)
				{
					sub_1407E4830(v52, 0i64, 0xE0ui64);
					if ((*(unsigned int(__fastcall**)(__int64, __int64, int*, __int64, _QWORD))(*(_QWORD*)a1 + 440i64))(
						a1,
						a1 + 912,
						v52,
						320i64,
						0i64))
					{
						v18 = *(float*)&v52[36] - *(float*)(a1 + 916);
					}
					else
					{
						v18 = 0.0;
					}
					v19 = v52[37];
					*(_DWORD*)(a1 + 4336) = v18 > 0.0;
					*(_QWORD*)&v49 = 0i64;
					v20 = sub_140354930(a1, v19, (int**)&v49);
					v21 = v49;
					if (v20 < 0)
						*(_DWORD*)(a1 + 4340) = 0;
					else
						*(float*)(a1 + 4340) = (float)*(int*)(v49 + 36);
					if (*(_QWORD*)(a1 + 4784) != v21)
					{
						if (v21)
							(**(void(__fastcall***)(__int64))v21)(v21);
						v22 = *(_QWORD*)(a1 + 4784);
						if (v22)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
						*(_QWORD*)(a1 + 4784) = v21;
					}
					v23 = (__int128*)(a1 + 2944);
					v24 = 12i64;
					do
					{
						v25 = *v23++;
						v23[87] = v25;
						v23[99] = v23[11];
						--v24;
					} while (v24);
					v26 = a1 + 2720;
					sub_140367B30(a1, *v8, a1 + 2720, v21);
					*(float*)(a1 + 3476) = v18;
					if (v21)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
					v7 = v47;
				}
				else
				{
					v26 = a1 + 2720;
					sub_140367B30(a1, *v8, a1 + 2720, 0i64);
					*(_DWORD*)(a1 + 4336) = 0;
				}
				if ((*(_DWORD*)(a1 + 128) & 0x20001) != 131073
					|| (result = sub_14036F190(a1, v7, a3, a4), (int)result >= 0)
					&& (result = sub_14036EC90(a1, v7, a3, a4, v48), (int)result >= 0))
				{
					if ((*(_DWORD*)(a1 + 132) & 0x20000000) != 0)
					{
						*(_QWORD*)&v49 = 0x3E8000003E800000i64;
						*(_QWORD*)&v50 = 0x3F4000003F400000i64;
						*(_OWORD*)(a1 + 1872) = v49;
						*(_OWORD*)(a1 + 1888) = v50;
						v27 = (__m128*)sub_140359840((__m128*)a1, (__int64)&v49, (__m128*)(a1 + 1872));
						v28 = sub_1401B20F0(v53, v27);
						v29 = *(__m128*)(a1 + 1024);
						v30 = *(__m128*)(a1 + 1040);
						v31 = *(__m128*)(a1 + 1056);
						v32 = v28 + 6;
						v33 = *(__m128*)(a1 + 1072);
						if (v28 < &v28[6])
						{
							v34 = (char*)(v51 - (char*)v28);
							do
							{
								_mm_prefetch(&v28[1].m128_i8[8], 0);
								v35 = *v28++;
								_mm_stream_ps(
									(float*)((char*)v28[-1].m128_f32 + (_QWORD)v34),
									_mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_mul_ps(_mm_shuffle_ps(v35, v35, 85), v30),
												_mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v29)),
											_mm_mul_ps(_mm_shuffle_ps(v35, v35, 170), v31)),
										_mm_mul_ps(_mm_shuffle_ps(v35, v35, 255), v33)));
							} while (v28 < v32);
						}
						_mm_sfence();
						v36 = 6i64;
						v37 = (__m128*)v51;
						v38 = 6i64;
						do
						{
							v39 = *v37++;
							v40 = _mm_mul_ps(v39, v39);
							v40.m128_f32[0] = 1.0
								/ fsqrt(
									(float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
									+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0]);
							v37[-1] = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v39);
							--v38;
						} while (v38);
						v41 = v51;
						do
						{
							v42 = *(_OWORD*)v41;
							v41 += 16;
							*(_OWORD*)&v41[a1 + 1680 - (_QWORD)v51 - 16] = v42;
							--v36;
						} while (v36);
					}
					sub_1402C8730(a1 + 3504, v26);
					sub_140262C40(a1 + 3504, (__m128*)(a1 + 960), (__int128*)(a1 + 1088));
					sub_140359A20(a1);
					sub_140359E70((__m128*)a1);
					v43 = *(_QWORD*)(a1 + 5432);
					if (v43 && (v44 = *(_QWORD*)(v43 + 24)) != 0)
					{
						*(_DWORD*)(a1 + 2624) = *(_DWORD*)(v44 + 32);
					}
					else if (*(float*)(a1 + 948) <= 0.0)
					{
						*(_DWORD*)(a1 + 2624) = 0;
					}
					result = sub_1403724F0(a1 + 2624, a1, *(_QWORD*)(a1 + 2560));
					if ((int)result >= 0)
					{
						if ((*(_DWORD*)(a1 + 132) & 0xA000) == 40960)
						{
							result = sub_1403617A0(a1);
							if ((int)result < 0)
								return result;
							return 0i64;
						}
						v45 = *(_DWORD*)(a1 + 128);
						if ((v45 & 1) != 0)
						{
							if ((v45 & 0x20000) != 0)
							{
								if (!(*(unsigned int(__fastcall**)(_QWORD, __int128*, _QWORD))(**(_QWORD**)(a1 + 4296) + 40i64))(
									*(_QWORD*)(a1 + 4296),
									&v49,
									0i64))
								{
									if ((_DWORD)v49)
										v13 = 1065353216;
									*(_DWORD*)(a1 + 4292) = v13;
									*(_DWORD*)(a1 + 4304) = 0;
								}
							}
							else
							{
								*(_DWORD*)(a1 + 4292) = 0;
							}
							result = sub_14035FC90(a1);
							if ((int)result >= 0)
							{
								if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 776)) != -1)
									(*(void(__fastcall**)(_QWORD))(a1 + 784))(*(_QWORD*)(a1 + 776));
								return 0i64;
							}
						}
						else
						{
							if ((v45 & 2) == 0)
								return 0i64;
							result = sub_140361040(a1);
							if ((int)result >= 0)
								return 0i64;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 14036E3A0: using guessed type __m128 var_E0[6];

