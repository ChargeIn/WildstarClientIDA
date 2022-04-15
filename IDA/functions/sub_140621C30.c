//----- (0000000140621C30) ----------------------------------------------------
void __fastcall sub_140621C30(__m128* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rdi
	__m128* v5; // rax
	__int64 v6; // rcx
	__m128* v7; // rax
	__m128 v8; // xmm1
	__int64 v9; // rdi
	float v10; // xmm8_4
	float v11; // xmm6_4
	__int64 v12; // rax
	__m128 v13; // xmm7
	__m128 v14; // xmm5
	__m128 v15; // xmm0
	__m128 v16; // xmm4
	__m128 v17; // xmm3
	float v18; // xmm1_4
	__m128 v19; // xmm0
	__m128 v20; // xmm5
	__m128 v21; // xmm5
	__m128 v22; // xmm3
	__m128 v23; // xmm2
	__m128 v24; // xmm1
	__m128 v25; // xmm0
	__m128* v26; // rax
	__m128 v27; // xmm1
	char v28[16]; // [rsp+20h] [rbp-48h] BYREF

	if (!a1[38].m128_i32[0])
	{
		v2 = sub_1403D90D0(qword_140C65898, a1[56].m128_i32[2]);
		v3 = v2;
		if (v2)
		{
			v4 = *(_QWORD*)(v2 + 5864);
			if (v4
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v4 + 848i64))(
					*(_QWORD*)(v2 + 5864),
					a1[59].m128_u32[0]))
			{
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 312i64))(v4))
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 296i64))(v4, 1i64);
				v5 = (__m128*)(*(__int64(__fastcall**)(__int64, char*, _QWORD, _QWORD))(*(_QWORD*)v4 + 856i64))(
					v4,
					v28,
					a1[59].m128_u32[0],
					0i64);
				v6 = qword_140C65898;
				a1[22] = *v5;
				v7 = *(__m128**)(v6 + 29096);
				if (!v7)
					v7 = *(__m128**)(v6 + 29088);
				v8 = a1[22];
				a1[22] = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v7[11]),
							_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v7[10])),
						_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), v7[12])),
					v7[13]);
			}
			else
			{
				v6 = qword_140C65898;
				a1[22] = *(__m128*)(v3 + 4656);
			}
			a1[50] = a1[22];
			if ((a1[56].m128_i8[0] & 0x30) != 0 && sub_1403D90D0(v6, a1[56].m128_i32[1]))
			{
				v9 = *(_QWORD*)(v3 + 3336);
				v10 = *(float*)(v3 + 4804);
				if (v9)
				{
					v11 = sub_14047A940((_QWORD*)v3) * *(float*)(v9 + 140);
				}
				else
				{
					v12 = sub_14022D500(*(_DWORD*)(v3 + 216));
					if (v12)
						v11 = *(float*)(v12 + 40);
					else
						v11 = 0.0;
				}
				v13 = a1[22];
				v14 = (__m128)0x40400000u;
				v15 = 0i64;
				v16 = _mm_sub_ps(v13, a1[21]);
				v17 = _mm_mul_ps(v16, v16);
				v17.m128_f32[0] = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
					+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
				v18 = 1.0 / fsqrt(v17.m128_f32[0]);
				v14.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v17.m128_f32[0] * v18) * v18)) * 0.5) * v18, 0.0);
				v15.m128_f32[0] = v11;
				v19 = _mm_shuffle_ps(v15, v15, 0);
				v20 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v16), v19);
				v19.m128_f32[0] = v10;
				v21 = _mm_mul_ps(v20, _mm_shuffle_ps(v19, v19, 0));
				if ((a1[56].m128_i8[0] & 0x10) != 0)
					a1[22] = _mm_sub_ps(v13, v21);
				else
					a1[22] = _mm_add_ps(v21, v13);
			}
		}
		else if (a1[56].m128_i8[0] >= 0)
		{
			v26 = (__m128*)sub_1403D90D0(qword_140C65898, a1[56].m128_i32[3]);
			if (v26)
			{
				v27 = a1[50];
				a1[22] = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v26[284]),
							_mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v26[283])),
						_mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v26[285])),
					v26[286]);
			}
			else
			{
				a1[22] = a1[50];
			}
		}
		else
		{
			v22 = a1[49];
			v23 = _mm_sub_ps(a1[50], v22);
			v24 = _mm_mul_ps(v23, v23);
			v25 = _mm_shuffle_ps(v24, v24, 85);
			v25.m128_f32[0] = fsqrt((float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v24, v24, 170).m128_f32[0]);
			a1[22] = _mm_add_ps(_mm_mul_ps(a1[30], _mm_shuffle_ps(v25, v25, 0)), v22);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140621C30: using guessed type char var_48[16];

