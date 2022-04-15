//----- (00000001400CB1C0) ----------------------------------------------------
_DWORD* __fastcall sub_1400CB1C0(__int64 a1, _DWORD* a2)
{
	_DWORD* v4; // rax
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	__m128i v8; // xmm2
	__m128 v9; // xmm0
	__m128 v10; // xmm1
	int v11; // r9d
	int v12; // r10d
	__m128 v13; // xmm0
	__m128 v14; // xmm1
	int v15; // ecx
	int v16; // r8d
	int v17; // edx
	int v18; // eax
	int v19; // ecx
	unsigned int v21; // [rsp+20h] [rbp-68h] BYREF
	int v22; // [rsp+24h] [rbp-64h]
	unsigned int v23; // [rsp+28h] [rbp-60h]
	int v24; // [rsp+2Ch] [rbp-5Ch]
	__m128 v25; // [rsp+30h] [rbp-58h] BYREF
	__m128 v26; // [rsp+40h] [rbp-48h]
	__m128 v27; // [rsp+60h] [rbp-28h]

	if ((*(_BYTE*)(a1 + 30) & 1) == 0)
	{
		v4 = sub_1400CB3D0(a1, &v21);
		*(_DWORD*)(a1 + 412) = *v4;
		*(_DWORD*)(a1 + 416) = v4[1];
		*(_DWORD*)(a1 + 420) = v4[2];
		*(_DWORD*)(a1 + 424) = v4[3];
		v5 = *(_QWORD**)(a1 + 560);
		v6 = (_QWORD*)*v5;
		if ((_QWORD*)*v5 != v5)
		{
			do
			{
				v7 = v6[2];
				if ((*(_BYTE*)(v7 + 28) & 1) != 0)
				{
					sub_1400C9800(a1, (__int64)&v25);
					sub_1400CB1C0(v7, &v21);
					v8 = _mm_cvtsi32_si128(0);
					v9 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v8),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), v8)));
					v10 = _mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v25), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v26)),
						v27);
					v11 = (int)v10.m128_f32[0];
					v12 = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
					v21 = (int)v10.m128_f32[0];
					v22 = v12;
					v13 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v8),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v8)));
					v14 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v25),
							_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v26)),
						v27);
					v15 = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
					v23 = (int)v14.m128_f32[0];
					v24 = v15;
					v16 = *(_DWORD*)(a1 + 420);
					v17 = *(_DWORD*)(a1 + 424);
					if (v16 < (int)v14.m128_f32[0])
						v16 = (int)v14.m128_f32[0];
					v18 = *(_DWORD*)(a1 + 416);
					if (v17 < v15)
						v17 = v15;
					v19 = *(_DWORD*)(a1 + 412);
					if (v11 < v19)
						v19 = v11;
					*(_DWORD*)(a1 + 412) = v19;
					if (v12 < v18)
						v18 = v12;
					*(_DWORD*)(a1 + 416) = v18;
					*(_DWORD*)(a1 + 420) = v16;
					*(_DWORD*)(a1 + 424) = v17;
				}
				v6 = (_QWORD*)*v6;
			} while (v6 != *(_QWORD**)(a1 + 560));
		}
		*(_BYTE*)(a1 + 30) |= 1u;
	}
	*a2 = *(_DWORD*)(a1 + 412);
	a2[1] = *(_DWORD*)(a1 + 416);
	a2[2] = *(_DWORD*)(a1 + 420);
	a2[3] = *(_DWORD*)(a1 + 424);
	return a2;
}

