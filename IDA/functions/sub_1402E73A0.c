//----- (00000001402E73A0) ----------------------------------------------------
void __fastcall sub_1402E73A0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rbx
	int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned __int16* v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // r14d
	__int64 v15; // r10
	unsigned int v16; // eax
	__int64 v17; // r12
	__int64 v18; // r15
	__int64 v19; // r13
	unsigned __int16* v20; // r11
	unsigned __int16 v21; // dx
	unsigned __int16 v22; // ax
	__m128 v23; // xmm1
	__m128i v24; // xmm4
	int v25; // eax
	int v26; // ecx
	__m128i v27; // xmm2
	int v28; // eax
	int v29; // ecx
	__m128 v30; // xmm4
	__m128 v31; // xmm1
	__int64 v32; // [rsp+20h] [rbp-78h]
	int v33; // [rsp+A0h] [rbp+8h]
	int v34; // [rsp+A8h] [rbp+10h]
	__int64 v35; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v36; // [rsp+B8h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	if (*(_QWORD*)(a1 + 264))
	{
		v3 = *(_QWORD*)(a1 + 32);
		if (*(float*)(v3 + 96) != 0.0 && (*(_BYTE*)(v3 + 56) & 1) != 0)
		{
			v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 24i64))(*(_QWORD*)(v3 + 24));
			v5 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(*(_QWORD*)(a1 + 32)) + 20)
				- *(_DWORD*)(v4 + 20);
			v33 = v5;
			if (!(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(
				*(_QWORD*)(a1 + 24),
				0i64)
				|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 64i64))(
					*(_QWORD*)(a1 + 40),
					0i64)
				|| v5)
			{
				v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 264) + 32i64))(*(_QWORD*)(a1 + 264));
				v7 = *(_QWORD*)(a1 + 40);
				v36 = 0i64;
				v8 = v6;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*, __int64))(*(_QWORD*)v7 + 72i64))(v7, 0i64, &v36, 1i64);
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v36 + 32i64))(v36);
				v10 = *(_QWORD*)(a1 + 24);
				v35 = 0i64;
				v11 = (unsigned __int16*)v9;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*, __int64))(*(_QWORD*)v10 + 72i64))(v10, 0i64, &v35, 1i64);
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 32i64))(v35);
				sub_1402DDAC0(0, (int**)(a1 + 56));
				v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 32i64))(*(_QWORD*)(a1 + 56));
				v14 = dword_140C41360 - dword_140C41358;
				v15 = v13;
				v16 = dword_140C41364 - dword_140C4135C;
				v34 = dword_140C41360 - dword_140C41358;
				if (dword_140C41364 - dword_140C4135C > 0)
				{
					v17 = v16;
					v32 = v16;
					do
					{
						if (v14 > 0)
						{
							v18 = 0i64;
							v19 = (unsigned int)v14;
							v20 = v11;
							do
							{
								v21 = *v20;
								v22 = *(unsigned __int16*)((char*)v20 + v12 - (_QWORD)v11);
								v23 = 0i64;
								v24 = _mm_cvtsi32_si128(v22 & 0x7FFF);
								v25 = v22 >> 15;
								v26 = v33 + (*v20 & 0x7FFF);
								if (v26 > 0x7FFF)
									v26 = 0x7FFF;
								v27 = _mm_cvtsi32_si128(v25);
								v28 = 0;
								if (v26 > 0)
									v28 = v26;
								v29 = *(unsigned __int8*)(v8 + 4 * v18);
								++v20;
								v18 = (unsigned int)(v18 + 4);
								v30 = _mm_unpacklo_ps(
									_mm_unpacklo_ps(_mm_cvtepi32_ps(v24), (__m128)0i64),
									_mm_unpacklo_ps(_mm_cvtepi32_ps(v27), (__m128)0i64));
								v23.m128_f32[0] = (float)((float)v29 * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64);
								v31 = _mm_add_ps(
									_mm_mul_ps(
										_mm_shuffle_ps(v23, v23, 0),
										_mm_sub_ps(
											_mm_unpacklo_ps(
												_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v28), (__m128)0i64),
												_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(v21 >> 15)), (__m128)0i64)),
											v30)),
									v30);
								*(unsigned __int16*)((char*)v20 + v15 - (_QWORD)v11 - 2) = (int)(float)(v31.m128_f32[0] + 0.5) | ((unsigned __int16)(int)(float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] + 0.5) << 15);
								--v19;
							} while (v19);
							v14 = v34;
							v17 = v32;
						}
						v11 = (unsigned __int16*)((char*)v11 + dword_140C4136C);
						v12 += dword_140C4136C;
						v15 += dword_140C4136C;
						v8 += (unsigned int)(4 * dword_140C4191C);
						v32 = --v17;
					} while (v17);
				}
				if (v35)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
				if (v36)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
			}
		}
	}
}
// 140C41358: using guessed type int dword_140C41358;
// 140C4135C: using guessed type int dword_140C4135C;
// 140C41360: using guessed type int dword_140C41360;
// 140C41364: using guessed type int dword_140C41364;
// 140C4136C: using guessed type int dword_140C4136C;
// 140C4191C: using guessed type int dword_140C4191C;

