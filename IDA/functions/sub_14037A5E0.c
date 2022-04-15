//----- (000000014037A5E0) ----------------------------------------------------
__int64 __fastcall sub_14037A5E0(__m128* a1)
{
	float v2; // xmm10_4
	int v3; // eax
	float v4; // xmm1_4
	int v5; // xmm0_4
	int v6; // xmm9_4
	int v7; // xmm8_4
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	float v10; // xmm2_4
	bool v11; // zf
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rdi
	int* v17; // rax
	_QWORD* v18; // rsi
	__int64 i; // rdi
	__m128** v20; // rcx
	unsigned __int64 v21; // rax
	__m128 v23[4]; // [rsp+30h] [rbp-A8h] BYREF

	if (a1[14].m128_u64[1])
	{
		v2 = a1[6].m128_f32[3];
		if (v2 > 0.0)
		{
			v3 = dword_140DC1650;
			if ((dword_140DC1650 & 1) != 0)
			{
				v4 = *(float*)&dword_140DC1654;
			}
			else
			{
				v3 = dword_140DC1650 | 1;
				dword_140DC1650 |= 1u;
				v4 = *(float*)&dword_140C3B438 * 0.0055555557;
				*(float*)&dword_140DC1654 = *(float*)&dword_140C3B438 * 0.0055555557;
			}
			if ((v3 & 2) != 0)
			{
				v5 = dword_140DC1658;
			}
			else
			{
				v3 |= 2u;
				*(float*)&v5 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 1.25;
				dword_140DC1650 = v3;
				dword_140DC1658 = v5;
			}
			if ((v3 & 4) != 0)
			{
				v6 = dword_140DC165C;
			}
			else
			{
				v3 |= 4u;
				dword_140DC1650 = v3;
				*(float*)&v6 = 1.0 / (float)(*(float*)&v5 - v4);
				dword_140DC165C = v6;
			}
			if ((v3 & 8) != 0)
			{
				v7 = dword_140DC1660;
			}
			else
			{
				dword_140DC1650 = v3 | 8;
				*(float*)&v7 = -(float)(*(float*)&v6 * v4);
				dword_140DC1660 = v7;
			}
			v8 = _mm_sub_ps(a1[5], *(__m128*)(a1[1].m128_u64[0] + 912));
			v9 = _mm_mul_ps(v8, v8);
			v9.m128_f32[0] = fmaxf(
				0.0,
				fminf(
					(float)(sub_1408FD190(
						a1[11].m128_f32[3],
						fsqrt(
							(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
							+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0]))
						* *(float*)&v6)
					+ *(float*)&v7,
					1.0));
			v10 = (float)((float)(3.0 - (float)(v9.m128_f32[0] * 2.0)) * v9.m128_f32[0]) * v9.m128_f32[0];
			if (v10 > 0.0)
			{
				v11 = a1->m128_i32[3] == 0;
				a1[6].m128_f32[3] = v2 * v10;
				if (v11
					|| (v12 = _mm_sub_ps(a1[13], a1[5]),
						v13 = _mm_mul_ps(v12, v12),
						(float)((float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
							+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8))
				{
					while (a1[14].m128_u64[0])
					{
						v14 = (_QWORD*)a1[14].m128_u64[0];
						if (v14)
						{
							sub_1403902B0(v14);
							sub_14018B900(v15, 0);
						}
					}
					v16 = sub_1403589F0(a1[1].m128_i64[0], a1 + 5);
					sub_140252DD0(a1 + 2, v23);
					v17 = sub_14018B280(80i64, 0);
					v18 = 0i64;
					if (v17)
						v18 = sub_140390210(v17, v16, 0i64, (__int64)a1, 0i64);
					if (!v16 || !*(_DWORD*)(v16 + 168) && (unsigned int)sub_140390D10(v16, a1 + 5, (__int64)v23, (__int64)v18))
					{
						sub_140359490(a1[1].m128_i64[0], v23);
						for (i = *(_QWORD*)(a1[1].m128_u64[0] + 5456); i; i = *(_QWORD*)(i + 312))
						{
							if (!*(_DWORD*)(i + 168))
								sub_140390D10(i, a1 + 5, (__int64)v23, (__int64)v18);
						}
					}
					a1->m128_i32[3] = 1;
					a1[13] = a1[5];
				}
				if (!a1[15].m128_u64[1])
				{
					v20 = (__m128**)(a1[1].m128_u64[0] + 5408);
					a1[15].m128_u64[1] = (unsigned __int64)v20;
					a1[16].m128_u64[0] = (unsigned __int64)*v20;
					*v20 = a1;
					v21 = a1[16].m128_u64[0];
					if (v21)
						*(_QWORD*)(v21 + 248) = a1 + 16;
				}
			}
		}
	}
	return 0i64;
}
// 14037A807: variable 'v15' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140DC1650: using guessed type int dword_140DC1650;
// 140DC1654: using guessed type int dword_140DC1654;
// 140DC1658: using guessed type int dword_140DC1658;
// 140DC165C: using guessed type int dword_140DC165C;
// 140DC1660: using guessed type int dword_140DC1660;
// 14037A5E0: using guessed type __m128 var_A8[4];

