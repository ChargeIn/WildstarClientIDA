//----- (0000000140392D60) ----------------------------------------------------
__int64 __fastcall sub_140392D60(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	int* v3; // rax
	__int64 result; // rax
	unsigned int v5; // edi
	__int64 i; // rsi
	__int32 v7; // edx
	__int32 v8; // edx
	__int64 v9; // rax
	int v10; // edx
	__int64 v11; // r10
	unsigned int* v12; // rax
	unsigned int* j; // rdx
	__m128 v14; // xmm0
	__m128 v15; // xmm2
	__m128 v16; // xmm3
	__m128 v17; // xmm3
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	__int64 v22; // rax
	int v23; // edx
	_QWORD* v24; // rax
	__int64* v25; // rdx
	__int64 v26; // rax

	*(_QWORD*)(a1 + 24) = a2;
	(**a2)(a2);
	v3 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16i64))(*(_QWORD*)(a1 + 24));
	*(_QWORD*)(a1 + 32) = v3;
	if (!*v3 || (result = sub_140354930(**(_QWORD**)(a1 + 16), *v3, (int**)(a1 + 40)), (int)result >= 0))
	{
		v5 = 0;
		for (i = 0i64; ; i += 4i64)
		{
			v7 = *(_DWORD*)(i + *(_QWORD*)(a1 + 32) + 4);
			if (v7)
			{
				result = sub_140354AA0(**(_QWORD**)(a1 + 16), v7, (__m128**)(a1 + 8 * (v5 + 6i64)));
				if ((int)result < 0)
					break;
			}
			if (++v5 >= 4)
			{
				v8 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 56i64);
				if (v8 && (int)sub_140354AA0(**(_QWORD**)(a1 + 16), v8, (__m128**)(a1 + 80)) < 0)
					*(_QWORD*)(a1 + 80) = 0i64;
				v9 = *(_QWORD*)(a1 + 32);
				v10 = *(_DWORD*)(v9 + 64);
				v11 = *(_QWORD*)qword_140C65670;
				if (*(_DWORD*)(v9 + 68) > 0xFFFFu)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(v11 + 64))(
						qword_140C65670,
						(unsigned int)(4 * v10),
						1i64);
					if ((int)result < 0)
						return result;
				}
				else
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(v11 + 64))(
						qword_140C65670,
						(unsigned int)(2 * v10),
						0i64,
						1i64,
						a1 + 88);
					if ((int)result < 0)
						return result;
				}
				result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
					qword_140C65670,
					(unsigned int)(72 * *(_DWORD*)(*(_QWORD*)(a1 + 32) + 68i64)),
					1i64,
					a1 + 96);
				if ((int)result >= 0)
				{
					*(_OWORD*)(a1 + 112) = xmmword_140C798C0;
					*(_OWORD*)(a1 + 128) = xmmword_140C798D0;
					v12 = (unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
					for (j = &v12[18 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 68i64)]; v12 < j; *(__m128*)(a1 + 128) = v18)
					{
						v14 = (__m128)v12[2];
						v15 = (__m128)v12[1];
						v16 = (__m128) * v12;
						v12 += 18;
						v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v14), _mm_unpacklo_ps(v15, (__m128)0i64));
						v18 = _mm_max_ps(*(__m128*)(a1 + 128), v17);
						*(__m128*)(a1 + 112) = _mm_min_ps(*(__m128*)(a1 + 112), v17);
					}
					v19 = *(__m128*)(a1 + 112);
					v20 = _mm_sub_ps(*(__m128*)(a1 + 128), v19);
					v21 = _mm_mul_ps(v20, v20);
					*(__m128*)(a1 + 144) = _mm_mul_ps(_mm_add_ps(v19, *(__m128*)(a1 + 128)), (__m128)xmmword_140B7AC50);
					*(float*)(a1 + 160) = fsqrt(
						(float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
						+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0])
						* 0.5;
					v22 = *(_QWORD*)(a1 + 16);
					v23 = *(_DWORD*)(v22 + 8);
					*(_DWORD*)(a1 + 176) = v23;
					*(_DWORD*)(a1 + 180) = *(_DWORD*)(v22 + 12);
					*(_DWORD*)(a1 + 184) = v23 + qword_140C77768;
					*(_DWORD*)(a1 + 188) = HIDWORD(qword_140C77768) + *(_DWORD*)(a1 + 180);
					sub_140393020(a1);
					v24 = *(_QWORD**)(a1 + 16);
					*(_QWORD*)(a1 + 192) = 0i64;
					v25 = (__int64*)(*v24 + 4320i64);
					if (!*(_QWORD*)(a1 + 208))
					{
						*(_QWORD*)(a1 + 208) = v25;
						*(_QWORD*)(a1 + 216) = *v25;
						*v25 = a1;
						v26 = *(_QWORD*)(a1 + 216);
						if (v26)
							*(_QWORD*)(v26 + 208) = a1 + 216;
					}
					++* (_QWORD*)(**(_QWORD**)(a1 + 16) + 4312i64);
					return 0i64;
				}
				return result;
			}
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

