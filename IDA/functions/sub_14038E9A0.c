#include "../winhttp.h"

//----- (000000014038E9A0) ----------------------------------------------------
void __fastcall sub_14038E9A0(__int64 a1)
{
	__m128 v2; // xmm1
	__m128 v3; // xmm2
	int v4; // ecx
	int v5; // r9d
	__m128 v6; // xmm3
	int v7; // ecx
	int v8; // edx
	__m128 v9; // xmm2
	int v10; // ecx
	int v11; // ecx
	int v12; // r8d
	int v13; // r8d
	__int64 v14; // rcx
	int v15; // edx
	int v16; // eax
	int v17; // r8d
	int v18; // ecx
	unsigned __int64 v19; // rbx
	__int64 v20; // rax
	bool v21; // cf
	__int64 v22; // rax
	int* v23; // rax
	int v24; // ecx
	int* v25; // rdx
	_QWORD* v26; // rax
	int v27; // edx
	unsigned int v28; // ebp
	int v29; // eax
	__int64 v30; // rbx
	__int64 v31; // rdi
	__int64* v32; // rdi
	__int64** v33; // rcx
	__int64 v34; // rax
	__int64 v35; // r11
	__int64 v36; // rcx
	__int64 v37; // rax
	_QWORD* k; // rbx
	int* v39; // rax
	_QWORD* v40; // rcx
	__int64 v41; // rcx
	__m128 v42; // [rsp+30h] [rbp-38h] BYREF
	int j; // [rsp+70h] [rbp+8h] BYREF
	int i; // [rsp+74h] [rbp+Ch]
	__int64 v45; // [rsp+78h] [rbp+10h] BYREF

	if (*(_QWORD*)(a1 + 472))
	{
		v2 = (__m128)(unsigned int)dword_140C43FB8;
		v3 = (__m128)(unsigned int)dword_140C43FB8;
		v3.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 352)) + 0.5) * 2048.0;
		v4 = (int)v3.m128_f32[0];
		if ((int)v3.m128_f32[0] != 0x80000000 && (float)v4 != v3.m128_f32[0])
			v3.m128_f32[0] = (float)(v4 - (_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1));
		v6 = (__m128)(unsigned int)dword_140C43FB8;
		v5 = (int)v3.m128_f32[0];
		v6.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 360)) + 0.5) * 2048.0;
		v7 = (int)v6.m128_f32[0];
		if ((int)v6.m128_f32[0] != 0x80000000 && (float)v7 != v6.m128_f32[0])
			v6.m128_f32[0] = (float)(v7 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1));
		v9 = (__m128)(unsigned int)dword_140C43FB8;
		v8 = (int)v6.m128_f32[0];
		v9.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 368)) + 0.5) * 2048.0;
		v10 = (int)v9.m128_f32[0];
		if ((int)v9.m128_f32[0] != 0x80000000 && (float)v10 != v9.m128_f32[0])
			v9.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
		v11 = (int)v9.m128_f32[0] + 1;
		v2.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 376)) + 0.5) * 2048.0;
		v12 = (int)v2.m128_f32[0];
		if ((int)v2.m128_f32[0] != 0x80000000 && (float)v12 != v2.m128_f32[0])
			v2.m128_f32[0] = (float)(v12 - (_mm_movemask_ps(_mm_unpacklo_ps(v2, v2)) & 1));
		v13 = (int)v2.m128_f32[0] + 1;
		if (dword_140C445C8 < v11)
			v11 = dword_140C445C8;
		if (dword_140C445CC < v13)
			v13 = dword_140C445CC;
		if (v5 < (int)qword_140C445C0)
			v5 = qword_140C445C0;
		if (v8 < SHIDWORD(qword_140C445C0))
			v8 = HIDWORD(qword_140C445C0);
		if (v5 >= v11 || v8 >= v13)
		{
			v5 = qword_140C784C0;
			v8 = HIDWORD(qword_140C784C0);
			v11 = qword_140C784C8;
			v13 = HIDWORD(qword_140C784C8);
		}
		if (*(_QWORD*)(a1 + 416) != __PAIR64__(v8, v5) || *(_QWORD*)(a1 + 424) != __PAIR64__(v13, v11))
		{
			*(_DWORD*)(a1 + 416) = v5;
			*(_DWORD*)(a1 + 420) = v8;
			*(_DWORD*)(a1 + 424) = v11;
			*(_DWORD*)(a1 + 428) = v13;
			v14 = *(_QWORD*)(a1 + 432);
			if (v14)
				sub_1403762E0(v14);
			*(_QWORD*)(a1 + 432) = 0i64;
			v15 = *(_DWORD*)(a1 + 416);
			v16 = *(_DWORD*)(a1 + 424);
			if (v15 < v16)
			{
				v17 = *(_DWORD*)(a1 + 420);
				v18 = *(_DWORD*)(a1 + 428);
				if (v17 < v18)
				{
					v19 = (v18 - v17) * (v16 - v15);
					v20 = 32 * v19;
					if (!is_mul_ok(v19, 0x20ui64))
						v20 = -1i64;
					v21 = __CFADD__(v20, 8i64);
					v22 = v20 + 8;
					if (v21)
						v22 = -1i64;
					v23 = sub_14018B280(v22, 0);
					if (v23)
					{
						v24 = v19 - 1;
						*v23 = v19;
						v25 = v23 + 2;
						if ((int)v19 - 1 >= 0)
						{
							v26 = v23 + 6;
							do
							{
								--v24;
								*v26 = 0i64;
								v26[1] = 0i64;
								*(v26 - 2) = 0i64;
								v26 += 4;
							} while (v24 >= 0);
						}
					}
					else
					{
						v25 = 0i64;
					}
					*(_QWORD*)(a1 + 432) = v25;
					v27 = *(_DWORD*)(a1 + 420);
					v28 = 0;
					for (i = v27; v27 < *(_DWORD*)(a1 + 428); i = v27)
					{
						v29 = *(_DWORD*)(a1 + 416);
						for (j = v29; v29 < *(_DWORD*)(a1 + 424); j = v29)
						{
							v30 = 0i64;
							v45 = 0i64;
							if (v29 >= (int)qword_140C44530
								&& v29 < dword_140C44538
								&& v27 >= SHIDWORD(qword_140C44530)
								&& v27 < dword_140C4453C)
							{
								sub_14035BEC0(*(_QWORD*)(a1 + 16), &j, &v45);
								v30 = v45;
							}
							v31 = v28++;
							v32 = (__int64*)(*(_QWORD*)(a1 + 432) + 32 * v31);
							*v32 = v30;
							v32[1] = a1;
							(**(void(__fastcall***)(__int64))v30)(v30);
							v33 = (__int64**)(*v32 + 80);
							if (!v32[2])
							{
								v32[2] = (__int64)v33;
								v32[3] = (__int64)*v33;
								*v33 = v32;
								v34 = v32[3];
								if (v34)
									*(_QWORD*)(v34 + 16) = v32 + 3;
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
							v27 = i;
							v29 = j + 1;
						}
						++v27;
					}
				}
			}
		}
		while (*(_QWORD*)(a1 + 440))
		{
			if (*(_QWORD*)(a1 + 440))
			{
				sub_140390120(*(_QWORD**)(a1 + 440));
				sub_14018B900(v35, 0);
			}
		}
		v36 = *(_QWORD*)(a1 + 16);
		v42 = _mm_add_ps(*(__m128*)(a1 + 112), (__m128)xmmword_140C77870);
		v37 = sub_1403589F0(v36, &v42);
		*(_DWORD*)(a1 + 448) = sub_140358D20(*(_QWORD*)(a1 + 16), v37, (__m128*)(a1 + 352));
		for (k = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 5456i64); k; k = (_QWORD*)k[39])
		{
			if (!(*(unsigned int(__fastcall**)(_QWORD*))(*k + 24i64))(k))
			{
				v39 = sub_14018B280(48i64, 0);
				if (v39)
					sub_140390060(v39, (__int64)k, a1);
			}
		}
		v40 = *(_QWORD**)(a1 + 472);
		if (v40)
			*v40 = *(_QWORD*)(a1 + 480);
		v41 = *(_QWORD*)(a1 + 480);
		if (v41)
			*(_QWORD*)(v41 + 472) = *(_QWORD*)(a1 + 472);
		*(_QWORD*)(a1 + 472) = 0i64;
		*(_QWORD*)(a1 + 480) = 0i64;
	}
}
// 14038ED79: variable 'v35' is possibly undefined
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;
// 140C445C0: using guessed type __int64 qword_140C445C0;
// 140C445C8: using guessed type int dword_140C445C8;
// 140C445CC: using guessed type int dword_140C445CC;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

