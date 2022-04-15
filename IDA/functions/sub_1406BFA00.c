#include "../winhttp.h"

//----- (00000001406BFA00) ----------------------------------------------------
__int64 __fastcall sub_1406BFA00(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v8; // r8d
	float v9; // xmm2_4
	int v10; // r9d
	__int64 v11; // rdx
	__m128i v12; // xmm0
	int v13; // r9d
	__int128 v15; // [rsp+30h] [rbp-30h] BYREF
	__int64 v16; // [rsp+40h] [rbp-20h] BYREF
	__int64 v17; // [rsp+48h] [rbp-18h]
	__int128 v18; // [rsp+50h] [rbp-10h]

	if (sub_140001D30(a1, a3) && a2 == 1 && *(_QWORD*)(qword_140C65898 + 25744))
	{
		v8 = *a3;
		v9 = *(float*)(a1 + 1872);
		v10 = a3[1];
		v15 = *(_OWORD*)(a1 + 1888);
		v16 = a1 + 2284;
		v17 = a1 + 2292;
		LODWORD(v18) = *(_DWORD*)(a1 + 2284) + *(_DWORD*)(a1 + 2292);
		v11 = *(_QWORD*)(qword_140C65898 + 120);
		v12 = _mm_cvtsi32_si128(v8 - ((int)v18 >> 1));
		v13 = v10 - ((*(_DWORD*)(a1 + 2288) + *(_DWORD*)(a1 + 2296)) >> 1);
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0ui64;
		*(float*)&v15 = *(float*)&v15 + (float)(_mm_cvtepi32_ps(v12).m128_f32[0] * v9);
		*((float*)&v15 + 2) = *((float*)&v15 + 2) + (float)((float)v13 * v9);
		v16 = *(_QWORD*)(v11 + 416);
		v17 = *(_QWORD*)(v11 + 424);
		*(_QWORD*)&v18 = v15;
		DWORD2(v18) = DWORD2(v15);
		sub_1403F4900(qword_140C65898, 0x459u, (__int64)&v16);
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"ZoneMapPing",
			byte_1409E9DC4,
			*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64),
			&v15);
	}
	return sub_1400D2120(a1, a2, a3, a4);
}
// 1409E9DC4: using guessed type _BYTE byte_1409E9DC4[88];
// 140C65898: using guessed type __int64 qword_140C65898;

