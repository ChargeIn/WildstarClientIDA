#include "../winhttp.h"

//----- (0000000140001070) ----------------------------------------------------
void __fastcall sub_140001070(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__m128 v7; // xmm1
	__m128 v8; // xmm5
	__m128 v9; // xmm0
	__m128 v10; // xmm4
	float v11; // xmm3_4
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__m128 v14; // [rsp+20h] [rbp-88h]
	__int128 v15[5]; // [rsp+30h] [rbp-78h] BYREF
	int v16; // [rsp+80h] [rbp-28h]

	if (!*(_BYTE*)(a1 + 1068))
	{
		v2 = *(_QWORD*)(a1 + 1056);
		if (v2)
			v2 = *(_QWORD*)(v2 + 16);
		if (v2)
		{
			*(_OWORD*)(a1 + 1040) = *(_OWORD*)(v2 + 4992);
			v3 = *(_QWORD*)(v2 + 24);
			if (v3)
			{
				if ((*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v3 + 256i64))(*(_QWORD*)(v2 + 24)))
				{
					v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 328i64))(v3);
					v5 = v4;
					if (v4)
					{
						if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 848i64))(
							v4,
							*(unsigned int*)(a1 + 1064)))
						{
							(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v5 + 872i64))(
								v5,
								*(unsigned int*)(a1 + 1064),
								a1 + 1040,
								0i64);
						}
					}
				}
			}
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
			v7 = *(__m128*)(a1 + 1040);
			v8 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), *(__m128*)(*(_QWORD*)(v2 + 5088) + 320i64)),
						_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *(__m128*)(*(_QWORD*)(v2 + 5088) + 304i64))),
					_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), *(__m128*)(*(_QWORD*)(v2 + 5088) + 336i64))),
				*(__m128*)(*(_QWORD*)(v2 + 5088) + 352i64));
			v9 = _mm_and_ps(_mm_shuffle_ps(v8, v8, 255), (__m128)xmmword_140B7B500);
			v10 = _mm_div_ps(v8, _mm_shuffle_ps(v9, v9, 0));
			v11 = 1.0 / *(float*)(*(_QWORD*)(a1 + 1024) + 88i64);
			v14.m128_f32[0] = (float)((float)((float)((float)(v10.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v6 + 8))
				+ (float)*(int*)v6)
				* v11;
			v14.m128_f32[1] = (float)((float)((float)(0.5 - (float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] * 0.5))
				* (float)*(int*)(v6 + 12))
				+ (float)*(int*)(v6 + 4))
				* v11;
			v14.m128_f32[2] = (float)((float)(*(float*)(v6 + 20) - *(float*)(v6 + 16))
				* _mm_shuffle_ps(v10, v10, 170).m128_f32[0])
				+ *(float*)(v6 + 16);
			if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 64), v14)) & 7) != 0)
			{
				v12 = *(_OWORD*)(a1 + 80);
				v16 = *(_DWORD*)(a1 + 144);
				v15[0] = (__int128)v14;
				v13 = *(_OWORD*)(a1 + 96);
				v15[1] = v12;
				v15[3] = *(_OWORD*)(a1 + 112);
				v15[2] = v13;
				v15[4] = *(_OWORD*)(a1 + 128);
				sub_1400CC680(a1, (__int64)v15);
			}
		}
	}
}
// 140001263: variable 'v14' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65670: using guessed type __int64 qword_140C65670;

