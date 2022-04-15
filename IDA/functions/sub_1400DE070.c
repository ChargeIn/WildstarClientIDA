//----- (00000001400DE070) ----------------------------------------------------
__int64 __fastcall sub_1400DE070(_QWORD* a1)
{
	__int64 result; // rax
	__m128i v3; // xmm1
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = *(__m128i*)(result + 128);
		v4 = a1[2];
		v5 = v3.m128i_i64[0];
		v3.m128i_i64[0] = _mm_srli_si128(v3, 8).m128i_u64[0];
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)(int)v5;
		a1[2] += 16i64;
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)SHIDWORD(v5);
		a1[2] += 16i64;
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)v3.m128i_i32[0];
		a1[2] += 16i64;
		v8 = a1[2];
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v3.m128i_i32[1];
		a1[2] += 16i64;
		return 4i64;
	}
	return result;
}

