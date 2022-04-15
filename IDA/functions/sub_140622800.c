#include "../winhttp.h"

//----- (0000000140622800) ----------------------------------------------------
__int64 __fastcall sub_140622800(__int64 a1)
{
	__int64 v2; // rsi
	__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rax
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm4
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	__m128 v13; // xmm0

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
	if (v2)
	{
		v4 = *(unsigned int*)(a1 + 948);
		if ((_DWORD)v4)
		{
			v5 = *(_QWORD*)(v2 + 3264);
			if (!v5)
				goto LABEL_16;
			result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 112i64))(
				v5,
				v4,
				*(unsigned int*)(a1 + 952));
			v6 = result;
			if (!result)
				goto LABEL_16;
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 944i64))(result);
			if ((_DWORD)result)
			{
			LABEL_10:
				if (v6)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 848i64))(
						v6,
						*(unsigned int*)(a1 + 940));
					if ((_DWORD)result)
					{
						v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 968i64))(v6);
						result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 440i64))(v7);
						if ((_DWORD)result)
						{
							if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 312i64))(v6))
								(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 296i64))(v6, 1i64);
							result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v6 + 888i64))(
								v6,
								*(unsigned int*)(a1 + 940),
								a1 + 272,
								0i64);
							*(_OWORD*)(a1 + 336) = *(_OWORD*)(a1 + 320);
							return result;
						}
					}
				}
			LABEL_16:
				*(_OWORD*)(a1 + 336) = *(_OWORD*)(v2 + 4656);
				v8 = (__m128) * (unsigned int*)(a1 + 340);
				v9 = (__m128) * (unsigned int*)(a1 + 344);
				v10 = (__m128) * (unsigned int*)(a1 + 336);
				*(_OWORD*)(a1 + 272) = xmmword_140C78410;
				*(_OWORD*)(a1 + 288) = xmmword_140C78420;
				*(_OWORD*)(a1 + 304) = xmmword_140C78430;
				*(__m128*)(a1 + 320) = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, v9), _mm_unpacklo_ps(v8, (__m128)0x3F800000u));
				return result;
			}
			result = *(unsigned int*)(a1 + 948);
			if ((_DWORD)result == 20 || (_DWORD)result == 7)
				*(_DWORD*)(a1 + 708) = 1;
		}
		v6 = *(_QWORD*)(v2 + 5864);
		goto LABEL_10;
	}
	if (result && *(char*)(a1 + 896) < 0)
	{
		v11 = _mm_sub_ps(*(__m128*)(result + 4656), *(__m128*)(a1 + 784));
		v12 = _mm_mul_ps(v11, v11);
		v13 = _mm_shuffle_ps(v12, v12, 85);
		v13.m128_f32[0] = fsqrt((float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 170).m128_f32[0]);
		*(__m128*)(a1 + 336) = _mm_add_ps(
			_mm_mul_ps(_mm_sub_ps((__m128)0i64, *(__m128*)(a1 + 480)), _mm_shuffle_ps(v13, v13, 0)),
			*(__m128*)(result + 4656));
	}
	else
	{
		*(_OWORD*)(a1 + 336) = *(_OWORD*)(a1 + 320);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

