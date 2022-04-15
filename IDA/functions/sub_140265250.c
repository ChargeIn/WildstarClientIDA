//----- (0000000140265250) ----------------------------------------------------
__int64 __fastcall sub_140265250(__int64 a1, __m128* a2, int a3)
{
	__m128* v3; // r9
	unsigned __int64 v4; // r10
	_BYTE* v5; // rcx
	__m128 v6; // xmm2
	int v7; // edx
	float v8; // xmm1_4
	int v9; // edx
	int v10; // eax
	float v11; // xmm1_4
	int v12; // edx
	int v13; // eax
	float v14; // xmm1_4
	int v15; // edx
	__int64 result; // rax
	__m128 v17; // [rsp+0h] [rbp-18h]

	v3 = a2;
	v4 = (unsigned __int64)&a2[a3];
	if ((unsigned __int64)a2 < v4)
	{
		v5 = (_BYTE*)(a1 + 2);
		do
		{
			if (v5 != (_BYTE*)2)
			{
				v6 = _mm_add_ps(
					(__m128)xmmword_140B7AC50,
					_mm_mul_ps(
						_mm_max_ps((__m128)xmmword_140B7B5B0, _mm_min_ps(*v3, (__m128)xmmword_140B7B240)),
						(__m128)xmmword_140B626A0));
				v7 = (int)v6.m128_f32[0];
				v17 = v6;
				if ((int)v6.m128_f32[0] != 0x80000000 && (float)v7 != v6.m128_f32[0])
					v6.m128_f32[0] = (float)(v7 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1));
				v8 = v17.m128_f32[1];
				v9 = (int)v17.m128_f32[1];
				*(v5 - 2) = (int)v6.m128_f32[0];
				if ((int)v17.m128_f32[1] != 0x80000000 && (float)v9 != v17.m128_f32[1])
					v8 = (float)(v9 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v17.m128_u32[1], (__m128)v17.m128_u32[1])) & 1));
				v10 = (int)v8;
				v11 = v17.m128_f32[2];
				v12 = (int)v17.m128_f32[2];
				*(v5 - 1) = v10;
				if ((int)v17.m128_f32[2] != 0x80000000 && (float)v12 != v17.m128_f32[2])
					v11 = (float)(v12 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v17.m128_u32[2], (__m128)v17.m128_u32[2])) & 1));
				v13 = (int)v11;
				v14 = v17.m128_f32[3];
				v15 = (int)v17.m128_f32[3];
				*v5 = v13;
				if ((int)v17.m128_f32[3] != 0x80000000 && (float)v15 != v17.m128_f32[3])
					v14 = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v17.m128_u32[3], (__m128)v17.m128_u32[3])) & 1));
				result = (unsigned int)(int)v14;
				v5[1] = result;
			}
			++v3;
			v5 += 4;
		} while ((unsigned __int64)v3 < v4);
	}
	return result;
}
// 140B626A0: using guessed type __int128 xmmword_140B626A0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B5B0: using guessed type __int128 xmmword_140B7B5B0;
// 140265250: using guessed type __m128 var_18;

