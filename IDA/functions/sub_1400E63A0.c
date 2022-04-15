//----- (00000001400E63A0) ----------------------------------------------------
__int64 __fastcall sub_1400E63A0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	int v4; // edx
	__m128 v5; // xmm3
	__m128 v6; // xmm2
	int v7; // eax
	__m128 v8; // xmm4
	int v9; // eax
	__m128 v10; // xmm3
	int v11; // ecx
	int v12; // r8d
	int v13; // edx
	float v14; // xmm1_4
	float v15; // xmm4_4
	float v16; // xmm1_4
	float v17; // xmm0_4
	int v18; // [rsp+2Ch] [rbp-1Ch]

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 608i64))(qword_140C65670);
	if (!(_DWORD)result)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v4 = *(_DWORD*)(v3 + 8);
		v18 = *(_DWORD*)(v3 + 12);
		if (*(_BYTE*)(a1 + 2825))
		{
			v14 = (float)((float)v4 - *(float*)(a1 + 3048)) - *(float*)(a1 + 3056);
			v15 = fmaxf((float)*(int*)(a1 + 56), fminf(v14, (float)*(int*)(a1 + 60)));
			v16 = v14 / v15;
			*(float*)(a1 + 88) = v16 * *(float*)(a1 + 3044);
			v17 = (float)((float)v18 - *(float*)(a1 + 3052)) - *(float*)(a1 + 3060);
			*(_DWORD*)(a1 + 80) = (int)v15;
			result = (unsigned int)(int)(float)(v17 / v16);
			*(_DWORD*)(a1 + 84) = result;
		}
		else
		{
			v5 = 0i64;
			v6 = 0i64;
			v7 = dword_140C3C4D0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3C4D0)
				v7 = *(_DWORD*)qword_140C63750;
			v5.m128_f32[0] = (float)v4;
			v8 = (__m128) * ((unsigned int*)&xmmword_140C3C4E0 + v7);
			v8.m128_f32[0] = v8.m128_f32[0] * *(float*)(a1 + 3040);
			v6.m128_f32[0] = (float)v18;
			v9 = *(_DWORD*)(a1 + 56);
			v10 = _mm_div_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), _mm_unpacklo_ps(v6, (__m128)0i64)),
				_mm_shuffle_ps(v8, v8, 0));
			v11 = (int)v10.m128_f32[0];
			v12 = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
			if ((int)v10.m128_f32[0] < (int)qword_140C77768)
				v11 = qword_140C77768;
			if (v12 < SHIDWORD(qword_140C77768))
				v12 = HIDWORD(qword_140C77768);
			if (v9 >= 0)
			{
				if (v11 >= v9)
				{
					v9 = v11;
					if (v11 > *(_DWORD*)(a1 + 60))
						v9 = *(_DWORD*)(a1 + 60);
				}
				*(_DWORD*)(a1 + 80) = v9;
			}
			else
			{
				*(_DWORD*)(a1 + 80) = v11;
			}
			result = (unsigned int)(*(_DWORD*)(a1 + 80) * v12 / v11);
			v13 = *(_DWORD*)(a1 + 64);
			*(_DWORD*)(a1 + 84) = result;
			if ((int)result < v13)
			{
				*(_DWORD*)(a1 + 84) = v13;
				result = (unsigned int)(v11 * v13 / v12);
				*(_DWORD*)(a1 + 80) = result;
			}
			*(float*)(a1 + 88) = (float)((float)v11 * v8.m128_f32[0]) / (float)*(int*)(a1 + 80);
		}
	}
	return result;
}
// 140C3C4D0: using guessed type int dword_140C3C4D0;
// 140C3C4E0: using guessed type __int128 xmmword_140C3C4E0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;

