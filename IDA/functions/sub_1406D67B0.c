//----- (00000001406D67B0) ----------------------------------------------------
__int64 __fastcall sub_1406D67B0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // eax
	__int64 v4; // rcx
	__m128i v5; // xmm0

	result = sub_1406D5FA0(a1);
	if (result)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 616i64))(result);
		v4 = a1[2];
		*(_DWORD*)(v4 + 8) = 3;
		v5 = _mm_cvtsi32_si128(v3);
		result = 1i64;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	return result;
}

