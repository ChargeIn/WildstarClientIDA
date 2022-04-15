//----- (0000000140395C40) ----------------------------------------------------
__int64 __fastcall sub_140395C40(__int64 a1)
{
	__int64 result; // rax
	unsigned __int64 i; // rdi
	__int64 v4; // rbx
	__m128* v5; // r14
	__m128* v6; // rbp
	__m128 v7; // xmm0
	__int64 v8; // rcx
	__m128 v9; // xmm1
	char v10[64]; // [rsp+20h] [rbp-C8h] BYREF
	__m128* v11; // [rsp+60h] [rbp-88h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 80i64))(*(_QWORD*)(a1 + 16));
	if (*(_DWORD*)(a1 + 64))
	{
		for (i = 0i64; i < *(_QWORD*)(a1 + 40); ++i)
		{
			result = *(_QWORD*)(a1 + 48);
			v4 = *(_QWORD*)(result + 8 * i);
			if (v4)
			{
				v5 = (__m128*)(v4 + 176);
				v6 = (__m128*)(*(__int64(__fastcall**)(_QWORD, char*, unsigned __int64))(**(_QWORD**)(a1 + 16) + 344i64))(
					*(_QWORD*)(a1 + 16),
					v10,
					i);
				result = sub_1407E6AF0((unsigned __int64*)(v4 + 176), (__int64)v6, 0x40ui64);
				if ((_DWORD)result)
				{
					*v5 = *v6;
					v7 = v6[1];
					v11 = v6;
					*(__m128*)(v4 + 192) = v7;
					*(__m128*)(v4 + 208) = v6[2];
					*(__m128*)(v4 + 224) = v6[3];
					sub_1401AFC20((__int64*)&v11, (double*)(v4 + 240));
					v8 = *(_QWORD*)(v4 + 48);
					v9 = _mm_mul_ps(*v5, *v5);
					*(float*)(v4 + 304) = 1.0
						/ fsqrt(
							(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
							+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
					result = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v8 + 128i64))(v8, v6);
					if (*(_DWORD*)(v4 + 1056))
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 48) + 24i64))(*(_QWORD*)(v4 + 48));
						result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 48) + 16i64))(*(_QWORD*)(v4 + 48));
					}
					if (*(_DWORD*)(v4 + 76))
						result = sub_140377640((__m128*)v4);
				}
			}
		}
	}
	return result;
}
// 140395C40: using guessed type char var_C8[64];

