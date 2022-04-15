//----- (00000001406632C0) ----------------------------------------------------
__int64 __fastcall sub_1406632C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 result; // rax
	unsigned int* v5; // rcx
	__m128i v6; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	v3 = a1[2];
	if (v2)
	{
		v5 = *(unsigned int**)(*(_QWORD*)v2 + 8i64);
		result = 1i64;
		v6 = _mm_cvtsi32_si128(*v5);
		*(_DWORD*)(v3 + 8) = 3;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

