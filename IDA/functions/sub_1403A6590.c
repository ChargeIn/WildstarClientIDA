#include "../winhttp.h"

//----- (00000001403A6590) ----------------------------------------------------
__int64 __fastcall sub_1403A6590(__int64 a1, float a2)
{
	__int64 v3; // rcx
	int* v4; // rax
	int v5; // edx
	__m128* v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // ecx
	__int64 v9; // rax
	__m128 v10; // xmm4
	__m128 v11; // xmm1
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	float v19; // [rsp+38h] [rbp+10h] BYREF

	v19 = a2;
	if (*(_QWORD*)(a1 + 25744))
	{
		v3 = *(_QWORD*)(a1 + 120);
		if (v3)
		{
			v4 = *(int**)(a1 + 26392);
			if (v4)
			{
				v5 = *v4;
				if (*v4 == *(_DWORD*)(v3 + 8))
					v5 = v4[2];
				v6 = (__m128*)sub_1403D90D0(a1, v5);
				if ((unsigned int)sub_1403ADA10(*(__m128**)(a1 + 120), v6))
				{
					LOBYTE(v19) = 0;
					sub_1403F4900(a1, 0x18Fu, (__int64)&v19);
				}
			}
			v7 = *(_QWORD*)(a1 + 25744);
			if ((*(_BYTE*)(v7 + 4208) & 2) != 0)
			{
				sub_14045BF30(v7, 0, 0);
				v8 = *(_DWORD*)(a1 + 32468);
				if (v8)
				{
					v9 = sub_14024B980(v8);
					if (v9)
					{
						v10 = _mm_sub_ps(
							_mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v9 + 12), (__m128) * (unsigned int*)(v9 + 20)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v9 + 16), (__m128)0i64)),
							_mm_unpacklo_ps(
								_mm_unpacklo_ps(
									(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 25744) + 4576i64),
									(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 25744) + 4584i64)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(a1 + 25744) + 4580i64), (__m128)0i64)));
						v11 = _mm_mul_ps(v10, v10);
						if ((float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
							+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]) <= (float)(*(float*)(v9 + 4) * *(float*)(v9 + 4)))
						{
							v12 = *(unsigned int*)(a1 + 32464);
							v13 = *(_QWORD*)(a1 + 29504);
							*(_QWORD*)(a1 + 32464) = 0i64;
							Apollo_LUAEvent(v13, "CityDirectionClear", "i", v12);
						}
					}
				}
			}
			if (*(_DWORD*)(a1 + 30936))
			{
				if (*(_QWORD*)(a1 + 120) && (v14 = *(_QWORD*)(a1 + 25744)) != 0 && (unsigned int)sub_14045E630(v14)
					|| !*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 3408i64))
				{
					*(_DWORD*)(a1 + 30936) = 0;
				}
			}
			v15 = *(_QWORD*)(a1 + 120);
			if (v15)
			{
				v16 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v15 + 192));
				if (v16)
				{
					if (*(_DWORD*)(v16 + 128) == 7)
					{
						v17 = sub_14039E000(a1);
						if (!v17 || (*(_DWORD*)(v17 + 96) & 0x400) != 0 && !(unsigned int)sub_1403C95E0(a1, *(_DWORD*)(v17 + 4)))
							sub_14039E400(a1);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

