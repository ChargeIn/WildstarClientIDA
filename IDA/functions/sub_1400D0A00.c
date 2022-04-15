//----- (00000001400D0A00) ----------------------------------------------------
void __fastcall sub_1400D0A00(__int64 a1, bool a2)
{
	char v2; // al
	int v5; // edi
	float(__fastcall * **v6)(__int64); // r14
	__int64 v7; // rax
	int v8; // r9d
	int v9; // ecx
	float v10; // xmm6_4
	__int64 v11; // rax
	double v12; // xmm2_8
	double v13; // xmm3_8
	double v14; // xmm6_8
	double v15; // xmm1_8
	int v16; // eax
	int v17; // [rsp+20h] [rbp-E0h] BYREF
	int v18; // [rsp+24h] [rbp-DCh]
	int v19; // [rsp+28h] [rbp-D8h]
	int v20; // [rsp+2Ch] [rbp-D4h]
	__m128 v21; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v22; // [rsp+40h] [rbp-C0h]
	__m128 v23[16]; // [rsp+70h] [rbp-90h] BYREF

	v2 = *(_BYTE*)(a1 + 28);
	if ((v2 & 1) != 0)
	{
		v5 = 0;
		v21.m128_i32[0] = 0;
		if ((v2 & 4) != 0 || sub_1400CEC50(a1, (__int64)&v21))
		{
			v6 = (float(__fastcall***)(__int64))(a1 + 624);
			if ((**(float(__fastcall***)(__int64))(a1 + 624))(a1 + 624) == 0.0)
			{
				v7 = *(_QWORD*)(a1 + 376);
				if (v7 != qword_140C77760)
				{
					v8 = -*(_DWORD*)(a1 + 380);
					v9 = HIDWORD(qword_140C784C0) - *(_DWORD*)(a1 + 380);
					v21.m128_i32[2] = qword_140C784C8 - v7;
					v21.m128_i32[1] = v9;
					v21.m128_i32[0] = qword_140C784C0 - v7;
					v21.m128_i32[3] = v8 + HIDWORD(qword_140C784C8);
					sub_1400CC5C0(a1, &v21);
					*(_QWORD*)(a1 + 376) = qword_140C77760;
				}
			}
			if ((**v6)(a1 + 624) > 0.0 || *(_BYTE*)(a1 + 644))
			{
				if (!*(_QWORD*)(a1 + 16))
				{
					v10 = *(float*)(a1 + 648);
					a2 = (**v6)(a1 + 624) != v10;
				}
				sub_1400CB3D0(a1, &v17);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65680 + 144i64))(
					qword_140C65680,
					(unsigned int)(2 * *(_DWORD*)(a1 + 672)));
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 23i64);
				v11 = sub_1400C9800(a1, (__int64)&v21);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v11);
				sub_1400C9F70(a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
				if ((*(_DWORD*)(a1 + 656) & 0x10000) == 0 || a2)
				{
					v22 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v19 - v17), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20 - v18), _mm_cvtsi32_si128(0))));
					v21 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(qword_140C77760), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_140C77760)), _mm_cvtsi32_si128(0))));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v21);
				}
				else
				{
					v22 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v19 - v17), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20 - v18), _mm_cvtsi32_si128(0))));
					v21 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(qword_140C77760), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_140C77760)), _mm_cvtsi32_si128(0))));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v21);
				}
				if ((*(_DWORD*)(a1 + 656) & 0x2000000) != 0)
				{
					*(_QWORD*)&v12 = *(unsigned int*)(a1 + 460);
					*(_QWORD*)&v13 = *(unsigned int*)(a1 + 456);
					if (*(float*)&v13 > (float)(*(float*)(a1 + 460) - 6.2831855))
					{
						*(_QWORD*)&v14 = *(unsigned int*)(a1 + 460);
						v21.m128_u64[0] = 0i64;
						*(float*)&v14 = *(float*)&v12 - *(float*)&v13;
						v22.m128_f32[0] = (float)(v19 - v17);
						v22.m128_f32[1] = (float)(v20 - v18);
						if ((float)(*(float*)&v12 - *(float*)&v13) <= 0.0)
						{
						LABEL_29:
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
							return;
						}
						if (*(float*)&v14 <= 3.1415927)
						{
							if (*(float*)&v13 >= (float)(*(float*)&v12 - 3.1415927))
								v5 = sub_1400CF1A0(&v21, v13, v12, v23);
						}
						else
						{
							*(float*)&v14 = (float)(*(float*)&v14 * 0.5) + *(float*)&v13;
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
							*(_QWORD*)&v15 = *(unsigned int*)(a1 + 456);
							if (*(float*)&v15 >= (float)(*(float*)&v14 - 3.1415927))
								v16 = sub_1400CF1A0(&v21, v15, v14, v23);
							else
								v16 = 0;
							(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)qword_140C65680 + 120i64))(
								qword_140C65680,
								v23,
								v16);
							sub_1400CF460(a1, a2, &v17);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
							if (*(float*)&v14 >= (float)(*(float*)(a1 + 460) - 3.1415927))
								v5 = sub_1400CF1A0(&v21, v14, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 460)), v23);
						}
						(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)qword_140C65680 + 120i64))(
							qword_140C65680,
							v23,
							v5);
					}
				}
				sub_1400CF460(a1, a2, &v17);
				goto LABEL_29;
			}
		}
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 1400D0A00: using guessed type __m128 var_170;
// 1400D0A00: using guessed type __m128 var_140[16];

