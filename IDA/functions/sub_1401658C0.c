//----- (00000001401658C0) ----------------------------------------------------
__int64 __fastcall sub_1401658C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 result; // rax

	v2 = sub_1401657E0(a1);
	v3 = a1[2];
	v4 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 1144));
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	a1[2] += 16i64;
	return result;
}

