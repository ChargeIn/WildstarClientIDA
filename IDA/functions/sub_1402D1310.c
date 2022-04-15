//----- (00000001402D1310) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402D1310(__m128* a1, __m128* a2, unsigned int a3)
{
	unsigned __int64 result; // rax
	_QWORD* v7; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rdi
	__m128* i; // rcx
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	__int64 v13; // rcx
	__int64 v14; // rax
	int v15[4]; // [rsp+20h] [rbp-28h] BYREF

	result = a1[2].m128_u64[0];
	if ((*(_BYTE*)(result + 48) & 1) == 0)
	{
		v7 = (_QWORD*)a1[1].m128_u64[1];
		v8 = *v7;
		v9 = 0i64;
		v15[0] = -1;
		if (v8)
		{
			if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v8 + 32i64))(v8, v15))
			{
				sub_1402D3300(v7);
				if (*v7)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
					*v7 = 0i64;
				}
			}
		}
		result = v7[2];
		if (*(_DWORD*)(result + 416) == a3)
		{
			result = 0i64;
			for (i = a2; ; ++i)
			{
				v11 = _mm_cmplt_ps((__m128)0i64, *i);
				v12 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v11, a1[13]), _mm_and_ps(v11, a1[12])), *i);
				if ((float)((float)((float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
					+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0])
					+ i->m128_f32[3]) > 0.0)
					break;
				if (++result >= 6)
				{
					if (!a1[24].m128_u64[1])
					{
						(*(void(__fastcall**)(__m128*, __int64))(a1->m128_u64[0] + 160))(a1, 1i64);
						result = (__int64)(a1[15].m128_u64[1] - a1[15].m128_u64[0]) >> 3;
						if (result)
						{
							do
							{
								v13 = *(_QWORD*)(a1[15].m128_u64[0] + 8 * v9);
								v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
								(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)v14 + 240i64))(v14, a2, a3);
								++v9;
								result = (__int64)(a1[15].m128_u64[1] - a1[15].m128_u64[0]) >> 3;
							} while (v9 < result);
						}
					}
					return result;
				}
			}
		}
	}
	return result;
}
// 1402D1310: using guessed type int var_28[4];

