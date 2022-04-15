//----- (00000001402E8680) ----------------------------------------------------
void __fastcall sub_1402E8680(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r12
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64 v9; // r10
	__int64 v10; // rdi
	__int64 v11; // rsi
	__int64 v12; // rax
	unsigned int v13; // r8d
	unsigned int v14; // edx
	__int64 v15; // rbx
	__int64 v16; // r13
	int v17; // ebx
	int v18; // r8d
	int v19; // edi
	int v20; // eax
	__int64 v21; // rsi
	__int64 v22; // r14
	__int64 v23; // r11
	int v24; // edx
	__int64 v25; // r10
	__int64 v26; // r9
	__m128 v27; // xmm0
	__m128 v28; // xmm1
	__m128 v29; // xmm2
	unsigned int v30; // [rsp+20h] [rbp-E0h]
	unsigned int v31; // [rsp+24h] [rbp-DCh]
	__int64 v32; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v33; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v34; // [rsp+38h] [rbp-C8h]
	unsigned int v35; // [rsp+40h] [rbp-C0h]
	unsigned int v36; // [rsp+44h] [rbp-BCh]
	int v37; // [rsp+48h] [rbp-B8h]
	int v38; // [rsp+4Ch] [rbp-B4h]
	__int64 v39; // [rsp+50h] [rbp-B0h]
	__int64 v40; // [rsp+58h] [rbp-A8h]
	__int128 v41; // [rsp+60h] [rbp-A0h]
	__m128 v42[16]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v43[16]; // [rsp+170h] [rbp+70h] BYREF

	v2 = *(_QWORD*)(a1 + 160);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	if (*(_QWORD*)(a1 + 264))
	{
		v3 = *(_QWORD*)(a1 + 32);
		if (*(float*)(v3 + 96) != 0.0
			&& (*(_BYTE*)(v3 + 56) & 2) != 0
			&& (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 64i64))(
				*(_QWORD*)(a1 + 24),
				13i64)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 64i64))(
					*(_QWORD*)(a1 + 40),
					13i64)))
		{
			v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 264) + 24i64))(*(_QWORD*)(a1 + 264));
			v5 = *(_QWORD*)(a1 + 24);
			v32 = 0i64;
			v6 = v4;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 72i64))(v5, 13i64, &v32);
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v32 + 24i64))(v32);
			v8 = *(__int64**)(a1 + 40);
			v33 = 0i64;
			v9 = *v8;
			v10 = v7;
			v34 = v7;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v9 + 72))(v8, 13i64, &v33);
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 24i64))(v33);
			v39 = v11;
			sub_1402DDAC0(13, (int**)(a1 + 160));
			v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 24i64))(*(_QWORD*)(a1 + 160));
			v13 = 0;
			*(_QWORD*)&v41 = v12;
			v31 = 0;
			do
			{
				v14 = 0;
				v30 = 0;
				do
				{
					v15 = (int)(v13 * dword_140C41644 + v14 * dword_140C41640);
					v40 = v15;
					sub_140268060(v42, (unsigned int*)(v15 + v11));
					sub_140268060(v43, (unsigned int*)(v15 + v10));
					v16 = 0i64;
					v17 = 4 * v30;
					v18 = 4 * v31;
					v19 = 4 * v30 + 4;
					v35 = 4 * v30;
					v20 = 4 * v31 + 4;
					v36 = 4 * v31;
					v37 = v19;
					v38 = v20;
					if (!__OFSUB__(4 * v31, v20))
					{
						v21 = dword_140C4191C;
						v22 = dword_140C41918;
						v23 = v18;
						do
						{
							v24 = 4 * v30;
							if (v17 < v19)
							{
								v25 = v17;
								v26 = v16;
								v16 += 4i64;
								do
								{
									v27 = 0i64;
									if ((unsigned int)v18 <= 0x40 && (unsigned int)v24 <= 0x40)
									{
										v27 = (__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int8*)(v25 * v22 + v6 + v23 * v21 + 2));
										v27.m128_f32[0] = (float)(v27.m128_f32[0] * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64);
									}
									v28 = v43[v26];
									v29 = v42[v26];
									++v24;
									++v26;
									++v25;
									v42[v26 - 1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v29, v28), _mm_shuffle_ps(v27, v27, 0)), v28);
								} while (v24 < v19);
								v20 = v38;
							}
							++v18;
							++v23;
						} while (v18 < v20);
						v11 = v39;
					}
					sub_140268120((_QWORD*)(v40 + v41), (char*)v42, 0);
					v13 = v31;
					v10 = v34;
					v14 = v30 + 1;
					v30 = v14;
				} while (v14 <= 0x10);
				v13 = v31 + 1;
				v31 = v13;
			} while (v13 <= 0x10);
			if (v33)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
			if (v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		}
	}
}
// 140C41640: using guessed type int dword_140C41640;
// 140C41644: using guessed type int dword_140C41644;
// 140C41918: using guessed type int dword_140C41918;
// 140C4191C: using guessed type int dword_140C4191C;

