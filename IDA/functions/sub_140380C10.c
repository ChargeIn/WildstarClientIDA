#include "../winhttp.h"

//----- (0000000140380C10) ----------------------------------------------------
__int64 __fastcall sub_140380C10(__int64 a1)
{
	unsigned int v2; // esi
	__int64 v3; // rbx
	__int64 v4; // r14
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rax
	int* v10; // rax
	unsigned __int64 v11; // r8
	unsigned int v12; // ebp
	__int64 v13; // rsi
	void(__fastcall * **v14)(_QWORD); // r14
	int* v15; // rax
	__int64 v16; // rbx
	__m128* v17; // rax
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__int64* v20; // rcx
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__int64 v23; // rax
	__int64* v24; // [rsp+70h] [rbp+8h] BYREF

	v2 = 0;
	if (*(_QWORD*)(a1 + 1032))
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(a1 + 1040);
			v5 = *(_QWORD*)(v4 + 8 * v3);
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*(_QWORD*)(v4 + 8 * v3) = 0i64;
			}
			v3 = ++v2;
		} while ((unsigned __int64)v2 < *(_QWORD*)(a1 + 1032));
	}
	sub_14018B900(*(_QWORD*)(a1 + 1040), 0);
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_OWORD*)(a1 + 1056) = xmmword_140C798C0;
	*(_OWORD*)(a1 + 1072) = xmmword_140C798D0;
	*(_OWORD*)(a1 + 1088) = xmmword_140C783D0;
	*(_DWORD*)(a1 + 1104) = dword_140C783E0;
	result = *(_QWORD*)a1;
	if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 0x10) != 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64**))(**(_QWORD**)(a1 + 16) + 168i64))(
			*(_QWORD*)(a1 + 16),
			&v24);
		if ((int)result >= 0)
		{
			v7 = (*(__int64 (**)(void))(*v24 + 16))();
			v8 = v7;
			*(_QWORD*)(a1 + 1032) = v7;
			if (v7)
			{
				v9 = 8 * v7;
				if (!is_mul_ok(v8, 8ui64))
					v9 = -1i64;
				v10 = sub_14018B280(v9, 0);
			}
			else
			{
				v10 = 0i64;
			}
			v11 = 8i64 * *(_QWORD*)(a1 + 1032);
			*(_QWORD*)(a1 + 1040) = v10;
			sub_1407E4830(v10, 0i64, v11);
			v12 = 0;
			if (*(_QWORD*)(a1 + 1032))
			{
				v13 = 0i64;
				do
				{
					v14 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64*, __int64))(*v24 + 24))(v24, v13);
					v15 = sub_14018B280(240i64, 0);
					v16 = (__int64)v15;
					if (v15)
					{
						*(_QWORD*)v15 = off_140B66020;
						*((_QWORD*)v15 + 26) = 0i64;
						*((_QWORD*)v15 + 27) = 0i64;
						*((_QWORD*)v15 + 28) = 0i64;
						*((_QWORD*)v15 + 29) = 0i64;
						v15[2] = 1;
						*((_QWORD*)v15 + 2) = a1;
						*((_QWORD*)v15 + 3) = 0i64;
						*((_QWORD*)v15 + 5) = 0i64;
						*((_QWORD*)v15 + 6) = 0i64;
						*((_QWORD*)v15 + 7) = 0i64;
						*((_QWORD*)v15 + 8) = 0i64;
						*((_QWORD*)v15 + 9) = 0i64;
						*((_QWORD*)v15 + 10) = 0i64;
						*((_QWORD*)v15 + 11) = 0i64;
						*((_QWORD*)v15 + 12) = 0i64;
					}
					else
					{
						v16 = 0i64;
					}
					if ((int)sub_140392D60(v16, v14) >= 0)
					{
						*(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v13) = v16;
						v17 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v16 + 80i64))(v16, 0i64);
						v18 = _mm_max_ps(*(__m128*)(a1 + 1072), v17[1]);
						*(__m128*)(a1 + 1056) = _mm_min_ps(*(__m128*)(a1 + 1056), *v17);
						*(__m128*)(a1 + 1072) = v18;
					}
					else
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
					}
					v13 = ++v12;
				} while ((unsigned __int64)v12 < *(_QWORD*)(a1 + 1032));
			}
			v19 = *(__m128*)(a1 + 1056);
			v20 = v24;
			v21 = _mm_sub_ps(*(__m128*)(a1 + 1072), v19);
			v22 = _mm_mul_ps(v21, v21);
			*(__m128*)(a1 + 1088) = _mm_mul_ps(_mm_add_ps(v19, *(__m128*)(a1 + 1072)), (__m128)xmmword_140B7AC50);
			v23 = *v20;
			*(float*)(a1 + 1104) = fsqrt(
				(float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0])
				* 0.5;
			return (*(__int64(__fastcall**)(__int64*))(v23 + 8))(v20);
		}
	}
	return result;
}
// 140B66020: using guessed type __int64 (__fastcall *off_140B66020[14])();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C783D0: using guessed type __int128 xmmword_140C783D0;
// 140C783E0: using guessed type int dword_140C783E0;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

