//----- (00000001405CF840) ----------------------------------------------------
void __fastcall sub_1405CF840(__int64 a1, unsigned int* a2)
{
	__m128* v2; // rcx
	__m128 v3; // xmm0
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__int32 v6; // xmm1_4
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int32 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+2Ch] [rbp-1Ch]
	int v10; // [rsp+34h] [rbp-14h]

	v2 = *(__m128**)(*(_QWORD*)a1 + 8i64);
	if (v2)
	{
		v3 = (__m128)a2[4];
		v4 = (__m128)a2[3];
		v5 = (__m128)a2[2];
		v2[74].m128_i32[0] = 1;
		v7 = 0i64;
		v8 = 0;
		v9 = 0i64;
		v10 = 0;
		v2[73] = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v3), _mm_unpacklo_ps(v4, (__m128)0i64));
		v6 = v2[73].m128_i32[1];
		LODWORD(v7) = v2[73].m128_i32[0];
		v3.m128_i32[0] = v2[73].m128_i32[2];
		HIDWORD(v7) = v6;
		v8 = v3.m128_i32[0];
		sub_1403F4900(qword_140C65898, 0x71Du, (__int64)&v7);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

