//----- (0000000140396A00) ----------------------------------------------------
__int64 __fastcall sub_140396A00(__int64 a1)
{
	__int64 result; // rax
	int v3; // edi
	__int64 v4; // rax
	float v5; // xmm0_4
	float v6; // xmm10_4
	float v7; // xmm7_4
	float v8; // xmm0_4
	float v9; // xmm14_4
	float v10; // xmm7_4
	float v11; // xmm13_4
	__int64 v12; // rax
	int v13; // xmm0_4
	__int64 v14; // rax
	float v15; // xmm0_4
	float v16; // xmm10_4
	float v17; // xmm7_4
	float v18; // xmm0_4
	float v19; // xmm11_4
	float v20; // xmm7_4
	float v21; // xmm8_4
	__int64 v22; // rax
	int v23; // xmm0_4
	int v24; // edx
	int v25; // r14d
	__int64 v26; // rax
	__m128* v27; // rdi
	unsigned __int64 v28; // rcx
	unsigned __int64 v30; // rdx
	int v31; // eax
	float v32; // xmm6_4
	float v33; // xmm7_4
	unsigned int v34; // eax
	unsigned int v35; // esi
	__m128 v36; // xmm1
	__m128 v37; // xmm6
	float v38; // xmm6_4
	float v39; // xmm0_4
	unsigned int v40; // ebp
	__int64 v41; // rcx
	__m128* v42; // rdi
	unsigned __int64 v43; // rax
	__m128 v44; // xmm1
	__m128 v45; // xmm7
	float v46; // xmm7_4
	float v47; // xmm0_4
	__int32 v48; // eax
	int v49; // esi
	int v50; // eax
	unsigned __int64 v51; // rcx
	unsigned __int64 v52; // rax
	__int32 v53; // eax
	__int64 v54; // rax

	result = *(_QWORD*)(a1 + 120);
	if (result)
	{
		if (*(_QWORD*)(a1 + 25744))
		{
			if (!HIDWORD(qword_140C7DC60))
			{
				*(_DWORD*)(a1 + 26408) = 0;
				if (!*(_DWORD*)(result + 592))
				{
					if (!*(_QWORD*)(a1 + 26432))
						return sub_1403971C0(a1);
					v3 = dword_140DC2190;
					if ((dword_140DC2190 & 1) != 0)
					{
						v5 = *(float*)&dword_140DC2194;
					}
					else
					{
						dword_140DC2190 |= 1u;
						v4 = sub_140200220(0x1B6u);
						if (v4)
						{
							v5 = *(float*)(v4 + 24);
							v3 = dword_140DC2190;
							dword_140DC2194 = LODWORD(v5);
						}
						else
						{
							v5 = 30.0;
							v3 = dword_140DC2190;
							dword_140DC2194 = 1106247680;
						}
					}
					v6 = *(float*)(*(_QWORD*)(a1 + 25744) + 4800i64);
					v7 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(v5 * 0.5);
					v8 = v6 - v7;
					if ((float)(v6 - v7) < 0.0)
						v9 = sub_1408FDE98(v8 - 3.1415927, 6.2831855) + 3.1415927;
					else
						v9 = sub_1408FDE98(v8 + 3.1415927, 6.2831855) - 3.1415927;
					v10 = v7 + v6;
					if (v10 < 0.0)
						v11 = sub_1408FDE98(v10 - 3.1415927, 6.2831855) + 3.1415927;
					else
						v11 = sub_1408FDE98(v10 + 3.1415927, 6.2831855) - 3.1415927;
					if ((v3 & 2) == 0)
					{
						dword_140DC2190 = v3 | 2;
						v12 = sub_140200220(0x1B8u);
						if (v12)
							v13 = *(_DWORD*)(v12 + 24);
						else
							v13 = 1101004800;
						v3 = dword_140DC2190;
						dword_140DC2198 = v13;
					}
					if ((v3 & 4) != 0)
					{
						v15 = *(float*)&dword_140DC219C;
					}
					else
					{
						dword_140DC2190 = v3 | 4;
						v14 = sub_140200220(0x1B7u);
						if (v14)
							v15 = *(float*)(v14 + 24);
						else
							v15 = 160.0;
						v3 = dword_140DC2190;
						dword_140DC219C = LODWORD(v15);
					}
					v16 = *(float*)(*(_QWORD*)(a1 + 25744) + 4800i64);
					v17 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(v15 * 0.5);
					v18 = v16 - v17;
					if ((float)(v16 - v17) < 0.0)
						v19 = sub_1408FDE98(v18 - 3.1415927, 6.2831855) + 3.1415927;
					else
						v19 = sub_1408FDE98(v18 + 3.1415927, 6.2831855) - 3.1415927;
					v20 = v17 + v16;
					if (v20 < 0.0)
						v21 = sub_1408FDE98(v20 - 3.1415927, 6.2831855) + 3.1415927;
					else
						v21 = sub_1408FDE98(v20 + 3.1415927, 6.2831855) - 3.1415927;
					if ((v3 & 8) == 0)
					{
						dword_140DC2190 = v3 | 8;
						v22 = sub_140200220(0x1B9u);
						if (v22)
							v23 = *(_DWORD*)(v22 + 24);
						else
							v23 = 1084227584;
						dword_140DC21A0 = v23;
					}
					v24 = *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 264i64);
					v25 = 0;
					if (!v24)
						goto LABEL_64;
					v26 = sub_1403D90D0(qword_140C65898, v24);
					v27 = (__m128*)v26;
					if (!v26)
						goto LABEL_64;
					v28 = *(_QWORD*)(v26 + 5872);
					if (!(v28 ? *(_QWORD*)(v26 + 5872) : *(_QWORD*)(v26 + 5880)))
						goto LABEL_64;
					if (!v28)
						v28 = v27[367].m128_u64[1];
					if ((*(unsigned int(__fastcall**)(unsigned __int64, _QWORD, __int64))(*(_QWORD*)v28 + 264i64))(
						v28,
						0i64,
						1i64) == 1)
						goto LABEL_64;
					v30 = v27[400].m128_u64[1];
					if (!*(_QWORD*)(v30 + 64) || !*(_BYTE*)(v30 + 4))
						goto LABEL_64;
					v31 = dword_140C4D260;
					if (*(_DWORD*)qword_140C63750 < dword_140C4D260)
						v31 = *(_DWORD*)qword_140C63750;
					if (*((_BYTE*)&dword_140C4D270 + v31))
					{
					LABEL_60:
						v36 = _mm_sub_ps(v27[286], *(__m128*)(*(_QWORD*)(a1 + 25744) + 4576i64));
						v37 = _mm_mul_ps(v36, v36);
						v38 = fsqrt(
							(float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
							+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0]);
						v39 = sub_1408FD190(-v36.m128_f32[0], -_mm_shuffle_ps(v36, v36, 170).m128_f32[0]);
						if (v19 > v21)
						{
							if (v19 > v39 && v21 < v39)
								goto LABEL_63;
						}
						else if (v19 > v39 || v21 < v39)
						{
						LABEL_63:
							v25 = 1;
							goto LABEL_64;
						}
						if (v38 <= *(float*)&dword_140DC21A0)
						{
							v48 = v27->m128_i32[2];
							*(_DWORD*)(a1 + 26420) = 1;
							goto LABEL_109;
						}
						goto LABEL_63;
					}
					v32 = *(float*)(v30 + 16);
					if (v32 <= 0.0)
						v32 = 5.0;
					v33 = 0.0;
					v34 = sub_14046C580((__int64)v27, *(_QWORD*)(a1 + 120));
					v35 = v34;
					if (v34)
					{
						if (!sub_1403ACD90(qword_140C65B70, v34, *(_QWORD*)(a1 + 25744)))
							goto LABEL_64;
						v33 = sub_1403AD860(qword_140C65B70, v35, (__int64)v27);
						v32 = sub_1403AD8F0(qword_140C65B70, v35, (__int64)v27);
					}
					if (sub_1403AD690(*(__m128**)(a1 + 25744), v27, v33, v32, 0.0))
						goto LABEL_60;
				LABEL_64:
					v40 = 0;
					if (*(_QWORD*)(a1 + 26432))
					{
						v41 = 0i64;
						do
						{
							v42 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 26424) + 4 * v41));
							v43 = v42[400].m128_u64[1];
							if (!*(_QWORD*)(v43 + 64) || !*(_BYTE*)(v43 + 4))
								goto LABEL_103;
							v44 = _mm_sub_ps(v42[286], *(__m128*)(*(_QWORD*)(a1 + 25744) + 4576i64));
							v45 = _mm_mul_ps(v44, v44);
							v46 = fsqrt(
								(float)(v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0])
								+ _mm_shuffle_ps(v45, v45, 170).m128_f32[0]);
							v47 = sub_1408FD190(-v44.m128_f32[0], -_mm_shuffle_ps(v44, v44, 170).m128_f32[0]);
							if (v9 > v11)
							{
								if (v9 <= v47 || v11 >= v47)
								{
								LABEL_78:
									v49 = 1;
									if (v46 <= *(float*)&dword_140DC2198)
										goto LABEL_80;
								}
							}
							else if (v9 <= v47 && v11 >= v47)
							{
								goto LABEL_78;
							}
							v49 = 0;
						LABEL_80:
							if (v19 > v21)
							{
								if (v19 > v47 && v21 < v47)
								{
								LABEL_87:
									v50 = 0;
									goto LABEL_88;
								}
							}
							else if (v19 > v47 || v21 < v47)
							{
								goto LABEL_87;
							}
							v50 = 1;
							if (v46 > *(float*)&dword_140DC21A0)
								goto LABEL_87;
						LABEL_88:
							if (!v49 && !v50)
								goto LABEL_103;
							if (!*(_DWORD*)(a1 + 26408))
								goto LABEL_96;
							if (v49)
							{
								if (!*(_DWORD*)(a1 + 26420))
									goto LABEL_96;
							}
							else if (*(_DWORD*)(a1 + 26420))
							{
								goto LABEL_103;
							}
							if (v46 < *(float*)(a1 + 26412))
							{
							LABEL_96:
								v51 = v42[367].m128_u64[0];
								v52 = v51;
								if (!v51)
									v52 = v42[367].m128_u64[1];
								if (!v52)
									goto LABEL_102;
								if (!v51)
									v51 = v42[367].m128_u64[1];
								if (!(*(unsigned int(__fastcall**)(unsigned __int64, _QWORD, __int64))(*(_QWORD*)v51 + 264i64))(
									v51,
									0i64,
									1i64))
								{
								LABEL_102:
									v53 = v42->m128_i32[2];
									*(float*)(a1 + 26412) = v46;
									*(_DWORD*)(a1 + 26408) = v53;
									*(_DWORD*)(a1 + 26420) = v49;
									*(float*)(a1 + 26416) = fabs(v47);
								}
							}
						LABEL_103:
							v41 = ++v40;
						} while ((unsigned __int64)v40 < *(_QWORD*)(a1 + 26432));
					}
					if (*(_DWORD*)(a1 + 26408) || !v25)
						return sub_1403971C0(a1);
					v54 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 264i64));
					if (!v54)
					{
						*(_DWORD*)(a1 + 26408) = 0;
						return sub_1403971C0(a1);
					}
					v48 = *(_DWORD*)(v54 + 8);
					*(_DWORD*)(a1 + 26420) = 0;
				LABEL_109:
					*(_DWORD*)(a1 + 26412) = 0;
					*(_DWORD*)(a1 + 26408) = v48;
					*(float*)(a1 + 26416) = 0.0;
					return sub_1403971C0(a1);
				}
			}
		}
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4D260: using guessed type int dword_140C4D260;
// 140C4D270: using guessed type int dword_140C4D270;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140DC2190: using guessed type int dword_140DC2190;
// 140DC2194: using guessed type int dword_140DC2194;
// 140DC2198: using guessed type int dword_140DC2198;
// 140DC219C: using guessed type int dword_140DC219C;
// 140DC21A0: using guessed type int dword_140DC21A0;

