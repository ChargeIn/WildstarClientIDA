//----- (00000001407932C0) ----------------------------------------------------
__int64 __fastcall sub_1407932C0(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 result; // rax

	v2 = sub_140058F00(a1, 0, 0, *(_QWORD*)(a1 + 32), 3);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = _mm_cvtsi32_si128(v2);
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

