//----- (000000014078E430) ----------------------------------------------------
__int64 __fastcall sub_14078E430(_QWORD* a1)
{
	double v2; // xmm0_8
	__int64 v3; // rax
	__int64 v4; // rax
	__m128i v5; // xmm0
	unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056C40(a1, 1u);
	sub_140900F2C(v2, (int*)&v7);
	v3 = a1[2];
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = v2;
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = _mm_cvtsi32_si128(v7);
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	a1[2] += 16i64;
	return 2i64;
}

