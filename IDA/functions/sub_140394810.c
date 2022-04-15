//----- (0000000140394810) ----------------------------------------------------
__m128* __fastcall sub_140394810(__int64* a1, __m128* a2, int a3)
{
	__int64 v3; // rax
	int v7; // edi
	int v8; // edi
	__m128* result; // rax
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__int64 v12; // rax
	int v13[4]; // [rsp+20h] [rbp-28h] BYREF
	float v14; // [rsp+30h] [rbp-18h]

	v3 = *a1;
	v13[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 40))(a1, v13);
	if (a3)
	{
		v7 = a3 - 1;
		if (v7)
		{
			v8 = v7 - 1;
			if (v8)
			{
				if (v8 != 1)
				{
					result = a2;
					v10 = _mm_sub_ps((__m128)xmmword_140C798B0, (__m128)xmmword_140C798A0);
					v11 = _mm_mul_ps(v10, v10);
					*a2 = _mm_mul_ps(_mm_add_ps((__m128)xmmword_140C798A0, (__m128)xmmword_140C798B0), (__m128)xmmword_140B7AC50);
					v14 = fsqrt(
						(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
						+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
						* 0.5;
					a2[1].m128_f32[0] = v14;
					return result;
				}
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1224i64))(a1[2]);
			}
			else
			{
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1208i64))(a1[2]);
			}
		}
		else
		{
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1192i64))(a1[2]);
		}
	}
	else
	{
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1168i64))(a1[2]);
	}
	*a2 = *(__m128*)(v12 + 32);
	a2[1].m128_i32[0] = *(_DWORD*)(v12 + 48);
	return a2;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;
// 140394810: using guessed type int var_28[4];

