//----- (0000000140157910) ----------------------------------------------------
__m128* __fastcall sub_140157910(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	__int128 v4; // xmm1
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rcx
	_DWORD* v11; // rax
	__int64 v12; // rax
	signed int v13; // esi
	int v14; // r14d
	int v15; // r15d
	signed int v16; // r8d
	int v17; // eax
	signed int v18; // r9d
	int v19; // r10d
	int v20; // ebp
	signed int v21; // edx
	int v22; // ecx
	int v23; // r11d
	__m128i v24; // xmm2
	int v26[4]; // [rsp+40h] [rbp-88h] BYREF
	__m128 v27; // [rsp+50h] [rbp-78h] BYREF
	__int128 v28; // [rsp+60h] [rbp-68h]
	__int128 v29[2]; // [rsp+70h] [rbp-58h] BYREF
	__int64 v30; // [rsp+E8h] [rbp+20h]

	v30 = a4;
	v4 = *(_OWORD*)(a3 + 16);
	v27 = *(__m128*)a3;
	v28 = v4;
	*a2 = 0i64;
	v7 = *(_QWORD**)(a1 + 56);
	v8 = (_QWORD*)*v7;
	if ((_QWORD*)*v7 != v7)
	{
		while (1)
		{
			v9 = v8[2];
			if (*(float*)(v9 + 648) > 0.0)
			{
				v10 = *(_QWORD*)(v9 + 16);
				if ((!v10 || sub_1400D1A60(v10)) && v9 != a4)
				{
					if (*(char*)(v9 + 29) >= 0)
					{
						v11 = sub_1400CB0E0(v9, v26, v9 + 64);
						*(_DWORD*)(v9 + 396) = *v11;
						*(_DWORD*)(v9 + 400) = v11[1];
						*(_DWORD*)(v9 + 404) = v11[2];
						*(_DWORD*)(v9 + 408) = v11[3];
						*(_BYTE*)(v9 + 29) |= 0x80u;
						v12 = v9;
						do
						{
							if (!*(_DWORD*)(v12 + 392))
								break;
							*(_DWORD*)(v12 + 392) = 0;
							v12 = *(_QWORD*)(v12 + 16);
						} while (v12);
					}
					v13 = *(_DWORD*)(v9 + 396);
					v14 = (int)*((float*)&v28 + 1);
					v15 = (int)v27.m128_f32[0];
					v16 = *(_DWORD*)(v9 + 400);
					v17 = v13;
					v18 = *(_DWORD*)(v9 + 404);
					v19 = v16;
					v20 = (int)v27.m128_f32[1];
					v21 = *(_DWORD*)(v9 + 408);
					v22 = v18;
					v23 = v21;
					if ((int)*(float*)&v28 < v18)
						v22 = (int)*(float*)&v28;
					if (v14 < v21)
						v23 = (int)*((float*)&v28 + 1);
					if (v13 < v15)
						v17 = (int)v27.m128_f32[0];
					if (v16 < v20)
						v19 = (int)v27.m128_f32[1];
					if (v17 < v22 && v19 < v23 || v15 >= v13 && (int)*(float*)&v28 <= v18 && v20 >= v16 && v14 <= v21)
					{
						v24 = _mm_cvtsi32_si128(0);
						v29[1] = (__int128)_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), v24),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v24)));
						v29[0] = (__int128)_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v24),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), v24)));
						if ((unsigned int)sub_140157B70(a1, &v27, (float*)v29, a2, v30))
							return a2;
					}
					a4 = v30;
				}
			}
			v8 = (_QWORD*)*v8;
			if (v8 == *(_QWORD**)(a1 + 56))
				return a2;
		}
	}
	return a2;
}
// 14015799A: variable 'a4' is possibly undefined
// 140157910: using guessed type int var_88[4];

