#include "../winhttp.h"

//----- (0000000140362750) ----------------------------------------------------
__int64 __fastcall sub_140362750(__int64 a1)
{
	unsigned int v2; // r13d
	__int64 v3; // rdx
	__int64 v4; // rax
	__m128 v5; // xmm0
	__m128 v6; // xmm1
	__m128 v7; // xmm3
	__m128 v8; // xmm5
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128 v11; // xmm4
	__m128* v12; // rax
	__m128* v13; // rbx
	float v14; // xmm2_4
	float v15; // xmm7_4
	float v16; // xmm1_4
	float v17; // xmm1_4
	__int64 v18; // rax
	float v19; // xmm0_4
	float v20; // xmm1_4
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // r9
	int v24; // r15d
	__int64 v25; // rax
	float v26; // xmm7_4
	float v27; // xmm8_4
	float v28; // xmm8_4
	__m128 v29; // xmm0
	int v30; // ecx
	int v31; // r12d
	__int64 v32; // r13
	int v33; // r12d
	int v34; // ebp
	int v35; // r14d
	__int64 v36; // rbx
	__m128 v37; // xmm4
	__m128 v38; // xmm2
	__m128 v39; // xmm3
	__m128 v40; // xmm3
	float v41; // xmm0_4
	_QWORD* v42; // rcx
	__int64 v43; // rcx
	_QWORD* v44; // rcx
	__int64 v45; // rcx
	_QWORD* v46; // rcx
	__int64 v47; // rcx
	__int64* v48; // rcx
	__int64 v49; // rax
	__m128 v50; // xmm1
	float v51; // xmm0_4
	int v52; // esi
	__m128* i; // rbx
	__m128* v54; // rax
	float v55; // xmm0_4
	__int64 v56; // r8
	__int64 v57; // r9
	__int64 v58; // r8
	_QWORD* v59; // rcx
	unsigned __int64 v60; // rcx
	__m128 v62; // [rsp+40h] [rbp-A8h]
	int v63[4]; // [rsp+50h] [rbp-98h] BYREF
	int v64[4]; // [rsp+60h] [rbp-88h] BYREF
	int v65; // [rsp+F0h] [rbp+8h]
	int v66; // [rsp+F8h] [rbp+10h]
	unsigned int v67; // [rsp+100h] [rbp+18h]
	__int64 v68; // [rsp+108h] [rbp+20h]

	if (*(_QWORD*)(a1 + 32))
	{
		v2 = (*(_DWORD*)(a1 + 128) >> 21) & 1;
		v67 = v2;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 1i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
		v3 = 135i64;
		if (!v2)
			v3 = 7i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, v3);
		if ((*(_BYTE*)(a1 + 132) & 0x10) != 0)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
		v4 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
			qword_140C65670,
			80i64,
			0i64,
			0i64,
			0);
		if (v4)
		{
			v5 = *(__m128*)(a1 + 1488);
			v6 = *(__m128*)(a1 + 1520);
			v7 = *(__m128*)(a1 + 1472);
			v8 = _mm_unpackhi_ps(v7, v5);
			v9 = _mm_unpacklo_ps(v7, v5);
			v10 = _mm_unpacklo_ps(*(__m128*)(a1 + 1504), v6);
			v11 = _mm_unpackhi_ps(*(__m128*)(a1 + 1504), v6);
			*(__m128*)v4 = _mm_shuffle_ps(v9, v10, 68);
			*(__m128*)(v4 + 16) = _mm_shuffle_ps(v9, v10, 238);
			*(__m128*)(v4 + 32) = _mm_shuffle_ps(v8, v11, 68);
			*(__m128*)(v4 + 48) = _mm_shuffle_ps(v8, v11, 238);
			*(_OWORD*)(v4 + 64) = *(_OWORD*)(a1 + 864);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
		}
		v12 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			64i64,
			0i64);
		v13 = v12;
		if (v12)
		{
			v14 = *(float*)(a1 + 4252);
			v15 = *(float*)(a1 + 4256);
			if (v14 >= v15)
			{
				v12->m128_i32[0] = 0;
				v12->m128_i32[1] = -1082130432;
			}
			else
			{
				v16 = 1.0 / (float)(v15 - v14);
				v12->m128_f32[0] = v16;
				v12->m128_f32[1] = (float)-(float)(v16 * v14) - 1.0;
			}
			v17 = *(float*)(a1 + 140);
			if (v15 >= v17)
			{
				v12->m128_i32[2] = 0;
				v12->m128_i32[3] = -1082130432;
			}
			else
			{
				v12->m128_f32[2] = 1.0 / (float)(v15 - v17);
				v12->m128_f32[3] = -(float)((float)(1.0 / (float)(v15 - v17)) * *(float*)(a1 + 140));
			}
			v18 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 288) + 232i64))(*(_QWORD*)(a1 + 288));
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65688 + 256i64))(
				qword_140C65688,
				v18,
				v13 + 1);
			v19 = (float)(*(float*)&dword_140C44078 * 1.4142135) + v15;
			if (v19 >= *(float*)&dword_140C44204)
			{
				v13[2].m128_u64[0] = 0i64;
			}
			else
			{
				v20 = *(float*)&dword_140C44204 - v19;
				v13[2].m128_f32[0] = 1.0 / (float)(*(float*)&dword_140C44204 - v19);
				v13[2].m128_f32[1] = -(float)((float)(1.0 / v20) * v19);
			}
			v13[3] = _mm_mul_ps(*(__m128*)(a1 + 4112), (__m128)xmmword_140B7B2F0);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
		v21 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 288) + 232i64))(*(_QWORD*)(a1 + 288));
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			v21,
			0i64,
			0i64);
		v24 = *(_DWORD*)(a1 + 2436);
		v25 = 0i64;
		v68 = 0i64;
		v26 = *(float*)(a1 + 136) * *(float*)(a1 + 136);
		v27 = fmaxf(0.0, (float)(*(float*)(a1 + 140) * 0.89999998) - (float)(*(float*)&dword_140C44078 * 1.4142135));
		v28 = v27 * v27;
		v29 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(a1 + 912), *(__m128*)(a1 + 912), 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
			(__m128)xmmword_140B7B480);
		v30 = (int)v29.m128_f32[0];
		v31 = (int)_mm_shuffle_ps(v29, v29, 85).m128_f32[0];
		v66 = (int)v29.m128_f32[0];
		v65 = v31;
		if (v24 < *(_DWORD*)(a1 + 2444))
		{
			v32 = 0i64;
			v33 = v24 - v31;
			while (1)
			{
				v34 = *(_DWORD*)(a1 + 2432);
				if (v34 >= *(_DWORD*)(a1 + 2440))
					goto LABEL_61;
				v35 = v34 - v30;
				do
				{
					v23 = *(unsigned int*)(a1 + 2424);
					v22 = (unsigned int)(v34 >> 31);
					LODWORD(v22) = v34 % (int)v23;
					v36 = *(_QWORD*)(*(_QWORD*)(a1 + 2448)
						+ 8i64
						* (v34 % (int)v23
							+ (_DWORD)v23
							* (v24 % *(_DWORD*)(a1 + 2428) + *(_DWORD*)(a1 + 2428) * (v24 % *(_DWORD*)(a1 + 2428) < 0))
							+ (unsigned int)v23 * (v34 % (int)v23 < 0)));
					if (v36)
					{
						v62 = _mm_mul_ps(_mm_add_ps(*(__m128*)(v36 + 64), *(__m128*)(v36 + 48)), (__m128)xmmword_140B7AC50);
						v37 = (__m128)(_mm_shuffle_ps(v62, v62, 170).m128_f32[0] >= *(float*)(a1 + 920)
							? *(unsigned int*)(v36 + 72)
							: *(_DWORD*)(v36 + 56));
						v38 = (__m128)(v62.m128_f32[1] >= *(float*)(a1 + 916) ? *(unsigned int*)(v36 + 68) : *(_DWORD*)(v36 + 52));
						v39 = (__m128)(v62.m128_f32[0] >= *(float*)(a1 + 912) ? *(unsigned int*)(v36 + 64) : *(_DWORD*)(v36 + 48));
						v40 = _mm_sub_ps(
							_mm_unpacklo_ps(_mm_unpacklo_ps(v39, v37), _mm_unpacklo_ps(v38, (__m128)0i64)),
							*(__m128*)(a1 + 912));
						v41 = _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
						if ((float)((float)(v41 * v41) + (float)(v40.m128_f32[0] * v40.m128_f32[0])) >= v26)
						{
							v63[0] = -1;
							if (*(_QWORD*)(v36 + 128))
							{
								if (!(*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v36 + 16) + 48i64))(
									*(_QWORD*)(v36 + 16),
									v63))
									goto LABEL_59;
								sub_14038A590(v36);
								v42 = *(_QWORD**)(v36 + 128);
								if (v42)
									*v42 = *(_QWORD*)(v36 + 136);
								v43 = *(_QWORD*)(v36 + 136);
								if (v43)
									*(_QWORD*)(v43 + 128) = *(_QWORD*)(v36 + 128);
								*(_QWORD*)(v36 + 128) = 0i64;
								*(_QWORD*)(v36 + 136) = 0i64;
							}
							if ((unsigned int)sub_14035BDF0((__m128*)a1, (__m128*)(v36 + 48)))
							{
								v64[0] = -1;
								if (*(_QWORD*)(v36 + 144))
								{
									if (*(_QWORD*)(v36 + 128))
									{
										if (!(*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v36 + 16) + 48i64))(
											*(_QWORD*)(v36 + 16),
											v64))
											goto LABEL_59;
										sub_14038A590(v36);
										v44 = *(_QWORD**)(v36 + 128);
										if (v44)
											*v44 = *(_QWORD*)(v36 + 136);
										v45 = *(_QWORD*)(v36 + 136);
										if (v45)
											*(_QWORD*)(v45 + 128) = *(_QWORD*)(v36 + 128);
										*(_QWORD*)(v36 + 128) = 0i64;
										*(_QWORD*)(v36 + 136) = 0i64;
									}
									sub_14038A680(v36);
									v46 = *(_QWORD**)(v36 + 144);
									if (v46)
										*v46 = *(_QWORD*)(v36 + 152);
									v47 = *(_QWORD*)(v36 + 152);
									if (v47)
										*(_QWORD*)(v47 + 144) = *(_QWORD*)(v36 + 144);
									*(_QWORD*)(v36 + 144) = 0i64;
									*(_QWORD*)(v36 + 152) = 0i64;
								}
								v48 = (__int64*)(a1 + 2488);
								if (!*(_QWORD*)(v36 + 112))
								{
									*(_QWORD*)(v36 + 112) = v48;
									*(_QWORD*)(v36 + 120) = *v48;
									*v48 = v36;
									v49 = *(_QWORD*)(v36 + 120);
									if (v49)
										*(_QWORD*)(v49 + 112) = v36 + 120;
								}
								++v32;
								v22 = (unsigned int)(v35 >> 31);
								v50 = _mm_sub_ps(
									_mm_max_ps(*(__m128*)(v36 + 48), _mm_min_ps(*(__m128*)(a1 + 912), *(__m128*)(v36 + 64))),
									*(__m128*)(a1 + 864));
								*(_DWORD*)(v36 + 28) = abs32(v35) + abs32(v33);
								v51 = _mm_shuffle_ps(v50, v50, 170).m128_f32[0];
								*(float*)(v36 + 24) = (float)(v51 * v51) + (float)(v50.m128_f32[0] * v50.m128_f32[0]);
							}
						}
					}
				LABEL_59:
					++v34;
					++v35;
				} while (v34 < *(_DWORD*)(a1 + 2440));
				v30 = v66;
				v68 = v32;
			LABEL_61:
				++v24;
				++v33;
				if (v24 >= *(_DWORD*)(a1 + 2444))
				{
					v2 = v67;
					v25 = v68;
					v31 = v65;
					break;
				}
			}
		}
		sub_140370F00(
			(__int64*)(a1 + 2488),
			v22,
			(__int64(__fastcall*)(__int64, __int64, __int64))sub_14038AA00,
			v23,
			v25);
		v52 = 3;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
			6i64,
			0i64);
		for (i = *(__m128**)(a1 + 2488); i; i = *(__m128**)(a1 + 2488))
		{
			v54 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
				+ 256i64))(
					qword_140C65670,
					16i64,
					1i64,
					5i64,
					0);
			if (v54)
			{
				*v54 = _mm_shuffle_ps(i[3], i[3], 136);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
			v55 = i[1].m128_f32[2];
			if (v55 >= v26)
			{
				if (v55 >= v28)
				{
					if (v52 != 2)
					{
						v52 = 2;
						(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
							qword_140C65670,
							*(_QWORD*)(*(_QWORD*)(a1 + 16) + 264i64),
							2i64);
						v56 = v2 + 4;
						goto LABEL_74;
					}
				}
				else if (v52 != 1)
				{
					v52 = 1;
					(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
						qword_140C65670,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 264i64),
						1i64);
					v56 = v2 + 2;
					goto LABEL_74;
				}
			}
			else if (v52)
			{
				v52 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
					qword_140C65670,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 264i64),
					0i64);
				v56 = v2;
			LABEL_74:
				(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 272i64),
					v56);
			}
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * ((i->m128_i32[2] < v66) + 2i64 * (i->m128_i32[3] < v31)) + 288));
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
				qword_140C65670,
				*(_QWORD*)(i[2].m128_u64[0] + 32),
				6i64);
			if (v52)
			{
				v57 = 6144i64;
				v58 = 384i64;
			}
			else
			{
				v57 = 6918i64;
				v58 = 0i64;
			}
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					v58,
					v57,
					0,
					1225,
					0,
					1);
			v59 = (_QWORD*)i[7].m128_u64[0];
			if (v59)
				*v59 = i[7].m128_u64[1];
			v60 = i[7].m128_u64[1];
			if (v60)
				*(_QWORD*)(v60 + 112) = i[7].m128_u64[0];
			i[7].m128_u64[0] = 0i64;
			i[7].m128_u64[1] = 0i64;
		}
	}
	return 0i64;
}
// 140362E1E: variable 'v22' is possibly undefined
// 140362E1E: variable 'v23' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B480: using guessed type __int128 xmmword_140B7B480;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44078: using guessed type int dword_140C44078;
// 140C44204: using guessed type int dword_140C44204;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140362750: using guessed type int var_98[4];
// 140362750: using guessed type int var_88[4];

