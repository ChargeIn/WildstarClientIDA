//----- (00000001402856C0) ----------------------------------------------------
__int64 __fastcall sub_1402856C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rsi
	__int64 v6; // rbx
	__int64 v7; // rdx
	_QWORD* v8; // rdi
	__m128* v9; // r14
	__int64 v10; // rax
	__int64 v11; // rbp
	__m128 v12; // xmm0
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 224);
	v4 = a3;
	v6 = *(_QWORD*)(v3 + 24);
	if (a3 <= 2)
	{
		result = 0i64;
		*(_QWORD*)(v6 + 40) = 0i64;
		*(_DWORD*)(v6 + 52) = 0;
	}
	else
	{
		v7 = *(_QWORD*)(v6 + 32);
		v8 = (_QWORD*)(a1 + 328);
		v9 = *(__m128**)(v3 + 16);
		*(_QWORD*)(v6 + 40) = a3;
		sub_1402626B0((__int64*)(a1 + 328), a3 + v7);
		v10 = *v8 + 16i64 * *(_QWORD*)(v6 + 32);
		if (v4)
		{
			v11 = a2 - v10;
			do
			{
				v12 = *(__m128*)(v10 + v11);
				v10 += 16i64;
				*(__m128*)(v10 - 16) = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v9[1]),
						_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *v9)),
					v9[3]);
				--v4;
			} while (v4);
		}
		result = 0i64;
		*(_DWORD*)(v6 + 52) = 1;
		*(_DWORD*)(v6 + 48) = 0;
	}
	return result;
}

