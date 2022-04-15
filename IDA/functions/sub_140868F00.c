//----- (0000000140868F00) ----------------------------------------------------
__int64 __fastcall sub_140868F00(__int64 a1, __m128i* a2)
{
	int v4; // eax
	unsigned __int32 v5; // xmm0_4
	__int64 v6; // rdx
	__int64 v7; // r9
	__int64 result; // rax
	_QWORD* v9; // r9
	__int64 v10; // rcx

	v4 = _mm_cvtsi128_si32(*a2);
	v5 = _mm_srli_si128(*a2, 8).m128i_u32[0];
	v6 = 0i64;
	v7 = (v4 + v5) % 0x1F;
	result = *(_QWORD*)(a1 + 8 * v7);
	v9 = (_QWORD*)(a1 + 8 * v7);
	if (result)
	{
		while (*(_DWORD*)result != a2->m128i_i32[0] || *(_QWORD*)(result + 8) != a2->m128i_i64[1])
		{
			v6 = result;
			result = *(_QWORD*)(result + 16);
			if (!result)
				return result;
		}
		v10 = *(_QWORD*)(result + 16);
		if (v6)
			*(_QWORD*)(v6 + 16) = v10;
		else
			*v9 = v10;
		--* (_DWORD*)(a1 + 248);
	}
	return result;
}

