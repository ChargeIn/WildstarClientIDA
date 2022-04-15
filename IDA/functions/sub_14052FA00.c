//----- (000000014052FA00) ----------------------------------------------------
__int64 __fastcall sub_14052FA00(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rcx
	__m128i v6; // xmm0
	__int64 v7; // rax

	result = sub_14052E9B0(a1);
	if (result)
	{
		v3 = *(_QWORD*)(result + 1192);
		if (v3)
		{
			v4 = (***(__int64(__fastcall****)(_QWORD))(v3 + 8))(*(_QWORD*)(v3 + 8));
			v5 = a1[2];
			*(_DWORD*)(v5 + 8) = 3;
			v6 = _mm_cvtsi32_si128(v4);
			result = 1i64;
			*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
			a1[2] += 16i64;
		}
		else
		{
			v7 = a1[2];
			*(_QWORD*)v7 = 0i64;
			*(_DWORD*)(v7 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	return result;
}

