#include "../winhttp.h"

//----- (00000001404C66D0) ----------------------------------------------------
void __fastcall sub_1404C66D0(__int64* a1)
{
	__m128 v2; // xmm6
	double v3; // xmm0_8
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ecx
	int v7; // ecx
	__m128 v8; // xmm4
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	bool v12; // zf
	__m128 v13; // xmm3
	__m128 v14; // [rsp+20h] [rbp-38h] BYREF
	__m128 v15; // [rsp+30h] [rbp-28h]

	if (a1[36] && (*(unsigned int(__fastcall**)(__int64*))(*a1 + 8))(a1))
	{
		v2 = 0i64;
		if (!*((_DWORD*)a1 + 190))
		{
			*(_QWORD*)&v3 = *((unsigned int*)a1 + 170);
			*(float*)&v3 = *(float*)&v3 + 0.15000001;
			*((_DWORD*)a1 + 170) = LODWORD(v3);
			v2 = (__m128)0x3E4CCCCDu;
			v2.m128_f32[0] = 0.2 - (float)(fabs(sub_1408FE3D0(v3)) * 0.2);
			sub_1404C6650(a1, *((unsigned int*)a1 + 191));
		}
		v4 = *a1;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[36] + 56i64))(a1[36]);
		v6 = (*(__int64(__fastcall**)(__int64*, __int64))(v4 + 296))(a1, v5) == 0;
		if (v6 != *((_DWORD*)a1 + 162))
		{
			*((_DWORD*)a1 + 162) = v6;
			v7 = *((_DWORD*)a1 + 32);
			if (((v7 - 5) & 0xFFFFFFFA) != 0 || v7 == 10)
			{
				if (v7 == 7)
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"HousingHookDecorPlaced",
						byte_1409EBE4C,
						*((unsigned int*)a1 + 124));
			}
			else
			{
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"HousingFreePlaceDecorPlaced",
					byte_1409EBD74,
					*((unsigned int*)a1 + 124));
			}
		}
		v8 = v2;
		v8.m128_f32[0] = v2.m128_f32[0] * 0.1;
		if (*((_DWORD*)a1 + 191))
		{
			v9 = v2;
			v10 = v8;
			v11 = v8;
			v9.m128_f32[0] = v2.m128_f32[0] + 0.30000001;
		}
		else
		{
			v9 = v8;
			v10 = v2;
			v11 = v2;
		}
		v12 = *((_DWORD*)a1 + 190) == 0;
		v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v9), _mm_unpacklo_ps(v10, (__m128)0x3F800000u));
		v14 = v15;
		if (v12)
		{
			if (!*((_DWORD*)a1 + 161) || !*((_DWORD*)a1 + 162))
			{
				v2.m128_f32[0] = v2.m128_f32[0] + 0.30000001;
				v13 = v2;
				v13.m128_f32[0] = fminf(v2.m128_f32[0], 1.0);
				v14 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, v8), _mm_unpacklo_ps(v8, (__m128)0x3F800000u));
			}
		}
		else
		{
			v14 = (__m128)xmmword_140B7AD00;
		}
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1[36] + 216i64))(a1[36], &v14);
	}
}
// 1404C6650: using guessed type __int64 __fastcall sub_1404C6650(_QWORD, _QWORD);
// 1409EBD74: using guessed type _BYTE byte_1409EBD74[24];
// 1409EBE4C: using guessed type _BYTE byte_1409EBE4C[24];
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;

