//----- (00000001404AF1E0) ----------------------------------------------------
__int64 __fastcall sub_1404AF1E0(__int64 a1, unsigned int a2, int a3, __m128* a4)
{
	__int64 result; // rax
	__int64 v7; // rbx
	unsigned int* v8; // rdi
	int v9; // eax
	int v10; // ecx
	float v11; // xmm6_4
	__int64 v12; // rax
	float v13; // xmm7_4
	__int64 v14; // rax
	float v15; // xmm0_4
	float v16; // xmm8_4
	__int64 v17; // rax
	unsigned __int64 v18; // rcx
	float v19; // xmm0_4
	__int64 v20; // rax
	__m128 v21; // xmm1
	__m128 v22; // xmm2
	float v23; // xmm2_4

	result = sub_1402413C0(a2);
	v7 = result;
	if (result)
	{
		result = sub_14024B980(*(_DWORD*)(result + 24));
		v8 = (unsigned int*)result;
		if (result)
		{
			v9 = dword_140DC3100;
			if ((dword_140DC3100 & 1) == 0)
			{
				v9 = dword_140DC3100 | 1;
				dword_140DC310C = 0;
				dword_140DC3100 |= 1u;
			}
			if ((v9 & 2) != 0)
			{
				v10 = dword_140DC3114;
			}
			else
			{
				v9 |= 2u;
				v10 = 0;
				dword_140DC3114 = 0;
				dword_140DC3100 = v9;
			}
			if ((v9 & 4) == 0)
			{
				dword_140DC311C = 0;
				dword_140DC3100 = v9 | 4;
			}
			v11 = 0.0;
			if (v10)
			{
				v13 = *(float*)&dword_140DC3110;
			}
			else
			{
				dword_140DC3114 = 1;
				v12 = sub_140200220(0x51Eu);
				if (v12)
				{
					v13 = *(float*)(v12 + 24);
					dword_140DC3110 = LODWORD(v13);
				}
				else
				{
					v13 = 0.0;
					dword_140DC3110 = 0;
				}
			}
			if (dword_140DC310C)
			{
				v15 = *(float*)&dword_140DC3108;
			}
			else
			{
				dword_140DC310C = 1;
				v14 = sub_140200220(0x3B8u);
				if (v14)
				{
					v15 = *(float*)(v14 + 24);
					dword_140DC3108 = LODWORD(v15);
				}
				else
				{
					v15 = 0.0;
					dword_140DC3108 = 0;
				}
			}
			v16 = (float)((float)*(int*)(v7 + 28) * v13) * v15;
			if (a3 == v8[10])
			{
				v18 = 0i64;
				v21 = _mm_sub_ps(
					*a4,
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v8[3], (__m128)v8[5]),
						_mm_unpacklo_ps((__m128)v8[4], (__m128)0i64)));
				v22 = _mm_mul_ps(v21, v21);
				v23 = fsqrt(
					(float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
					+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0])
					+ v16;
				if (v23 >= 9.223372e18)
				{
					v23 = v23 - 9.223372e18;
					if (v23 < 9.223372e18)
						v18 = 0x8000000000000000ui64;
				}
				v20 = (unsigned int)(int)v23;
			}
			else
			{
				if (dword_140DC311C)
				{
					v11 = *(float*)&dword_140DC3118;
				}
				else
				{
					dword_140DC311C = 1;
					v17 = sub_140200220(0x51Eu);
					if (v17)
						v11 = *(float*)(v17 + 28);
					dword_140DC3118 = LODWORD(v11);
				}
				v18 = 0i64;
				v19 = (float)((float)*(int*)(v7 + 28) * v11) + v16;
				if (v19 >= 9.223372e18)
				{
					v19 = v19 - 9.223372e18;
					if (v19 < 9.223372e18)
						v18 = 0x8000000000000000ui64;
				}
				v20 = (unsigned int)(int)v19;
			}
			return v18 + v20;
		}
	}
	return result;
}
// 140DC3100: using guessed type int dword_140DC3100;
// 140DC3108: using guessed type int dword_140DC3108;
// 140DC310C: using guessed type int dword_140DC310C;
// 140DC3110: using guessed type int dword_140DC3110;
// 140DC3114: using guessed type int dword_140DC3114;
// 140DC3118: using guessed type int dword_140DC3118;
// 140DC311C: using guessed type int dword_140DC311C;

