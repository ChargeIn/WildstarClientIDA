#include "../winhttp.h"

//----- (0000000140048CE0) ----------------------------------------------------
__int64 __fastcall sub_140048CE0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
	__int64 v5; // rcx
	__int64 v9; // rcx
	__int64** v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // esi
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	__int128 v18; // xmm7
	__int128 v19; // xmm8
	__int64* v20; // rcx
	__int128 v21; // xmm9
	__int64 v22; // rax
	__m128 v23; // xmm2
	__m128 v24; // xmm0
	__m128 v25; // xmm6
	__int64 v26; // rax
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx
	unsigned int v30; // eax
	int* v31; // rax
	int* v32; // rdi
	int* v33; // rcx
	__int64 v35; // [rsp+48h] [rbp-C0h] BYREF
	int v36; // [rsp+50h] [rbp-B8h]
	__m256 v37; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v38; // [rsp+78h] [rbp-90h]
	__int128 v39; // [rsp+88h] [rbp-80h]
	__int64 v40; // [rsp+98h] [rbp-70h]
	__int128 v41; // [rsp+A8h] [rbp-60h]
	__m128 v42; // [rsp+B8h] [rbp-50h]
	__int128 v43; // [rsp+C8h] [rbp-40h]
	__int128 v44; // [rsp+D8h] [rbp-30h]
	__int128 v45; // [rsp+E8h] [rbp-20h]
	__m128 v46; // [rsp+F8h] [rbp-10h]
	__int128 v47; // [rsp+108h] [rbp+0h]
	__int128 v48; // [rsp+118h] [rbp+10h]
	__int128 v49; // [rsp+128h] [rbp+20h]
	int v50; // [rsp+138h] [rbp+30h]
	int v51; // [rsp+13Ch] [rbp+34h]
	int v52; // [rsp+140h] [rbp+38h]
	__int64 v53; // [rsp+218h] [rbp+110h] BYREF

	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v9 = *(_QWORD*)(a1 + 24);
	v10 = (__int64**)(a1 + 24);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*v10 = 0i64;
	}
	v11 = *a2;
	v53 = 0i64;
	v12 = (*(__int64(__fastcall**)(__int64*))(v11 + 32))(a2);
	v13 = (*(__int64(__fastcall**)(__int64, __int64, __int64*, __int64))(*(_QWORD*)v12 + 40i64))(v12, a3, &v53, 32i64);
	if (v13 >= 0)
	{
		v14 = *a2;
		v37 = ymmword_140C78390;
		v40 = 0i64;
		v38 = xmmword_140C783B0;
		v39 = xmmword_140C783C0;
		v13 = (*(__int64(__fastcall**)(__int64*, _QWORD, __m256*, __int64, int, int, __int64, _DWORD))(v14 + 184))(
			a2,
			a4,
			&v37,
			v53,
			1,
			3,
			a1 + 24,
			0);
		if (v13 >= 0)
		{
			v15 = (*(__int64(__fastcall**)(__int64*))(**v10 + 328))(*v10);
			(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64*, unsigned int, __int64, int, int, __int64), __int64))(*(_QWORD*)v15 + 648i64))(
				v15,
				sub_140048710,
				a1);
			v16 = (*(__int64(__fastcall**)(__int64*))(**v10 + 328))(*v10);
			v35 = 0i64;
			v36 = 0;
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v16 + 240i64))(v16, &v35);
			v17 = (*(__int64(__fastcall**)(__int64*))(**v10 + 328))(*v10);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 736i64))(v17);
			v18 = xmmword_140C78410;
			v19 = xmmword_140C78420;
			v20 = *v10;
			v50 = 0;
			v21 = xmmword_140C78430;
			v22 = *v20;
			v23 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85);
			v24 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170);
			v47 = 0i64;
			v51 = v23.m128_i32[0];
			v52 = v24.m128_i32[0];
			v48 = xmmword_140C78410;
			v43 = xmmword_140C78410;
			v49 = xmmword_140C78420;
			v25 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v24), _mm_unpacklo_ps(v23, (__m128)0x3F800000u));
			v42 = v25;
			v46 = v25;
			v44 = xmmword_140C78420;
			v41 = xmmword_140C78430;
			v45 = xmmword_140C78430;
			if ((*(__int64(__fastcall**)(__int64*))(v22 + 328))(v20))
			{
				v26 = (*(__int64(__fastcall**)(__int64*))(**v10 + 328))(*v10);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 936i64))(v26);
			}
			*(_QWORD*)(a1 + 5076) = 0i64;
			v27 = *(_QWORD*)(a1 + 5040);
			if (v27)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
				*(_QWORD*)(a1 + 5040) = 0i64;
			}
			v28 = *(_QWORD**)(a1 + 5056);
			if (v28)
				*v28 = *(_QWORD*)(a1 + 5064);
			v29 = *(_QWORD*)(a1 + 5064);
			if (v29)
				*(_QWORD*)(v29 + 5056) = *(_QWORD*)(a1 + 5056);
			*(_QWORD*)(a1 + 5056) = 0i64;
			*(_QWORD*)(a1 + 5064) = 0i64;
			*(_OWORD*)(a1 + 4944) = v18;
			*(_OWORD*)(a1 + 4960) = v19;
			*(_OWORD*)(a1 + 4976) = v21;
			*(__m128*)(a1 + 4992) = v25;
			*(_DWORD*)(a1 + 5084) = 0;
			v30 = sub_140048880(a1);
			sub_140049A80(a1, 0, v30, 1, 1.0, 0.0, 1, 0);
			if (!*(_QWORD*)(a1 + 8))
			{
				v31 = sub_14018B280(24i64, 0);
				v32 = v31;
				if (v31)
				{
					*(_QWORD*)v31 = off_140B55048;
					v31[2] = 1;
					*(_QWORD*)v31 = off_140B55048;
				}
				else
				{
					v32 = 0i64;
				}
				v33 = *(int**)(a1 + 8);
				if (v33 != v32)
				{
					if (v33)
						(*(void(__fastcall**)(int*))(*(_QWORD*)v33 + 8i64))(v33);
					*(_QWORD*)(a1 + 8) = v32;
				}
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = a1;
			}
		}
	}
	if (v53)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 8i64))(v53);
	return (unsigned int)v13;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

