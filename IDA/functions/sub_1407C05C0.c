//----- (00000001407C05C0) ----------------------------------------------------
__int64 __fastcall sub_1407C05C0(_QWORD** a1, __int64 a2, __m128i* a3, unsigned __int64 a4, __int64 a5)
{
	unsigned __int64 v9; // rdx
	__m128i* v10; // rax
	__m128i v11; // xmm1
	__int64 v12; // xmm0_8
	int* v13; // rax
	int* v14; // rdx
	char* v15; // rax

	v9 = a4 / 0x18;
	if (a4 / 0x18)
	{
		v10 = a3;
		do
		{
			v11 = *v10;
			v12 = v10[1].m128i_i64[0];
			v10->m128i_i64[0] = 0i64;
			v10[1].m128i_i64[0] = 0i64;
			v10 = (__m128i*)((char*)v10 + 24);
			v10[-2].m128i_i32[2] = _mm_cvtsi128_si32(v11);
			v10[-1].m128i_i64[0] = _mm_srli_si128(v11, 8).m128i_u64[0];
			v10[-1].m128i_i16[4] = v12;
			v10[-1].m128i_i32[3] = HIDWORD(v12);
			--v9;
		} while (v9);
	}
	v13 = sub_14018B280(48i64, 0);
	*(_QWORD*)v13 = a3;
	*((_QWORD*)v13 + 1) = a4;
	v14 = v13;
	if (a4)
		v15 = (char*)*a1 - a2;
	else
		v15 = 0i64;
	*((_QWORD*)v14 + 2) = v15;
	*((_QWORD*)v14 + 4) = 0i64;
	*((_QWORD*)v14 + 5) = 0i64;
	*((_QWORD*)v14 + 3) = a5;
	*a1[2] = v14;
	a1[2] = v14 + 10;
	*a1 = (_QWORD*)((char*)*a1 + ((a4 + 15) & 0xFFFFFFFFFFFFFFF0ui64));
	return (__int64)*a1;
}

