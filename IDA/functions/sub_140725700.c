//----- (0000000140725700) ----------------------------------------------------
__int64 __fastcall sub_140725700(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned int v5; // ecx
	__int64 v6; // rax
	_DWORD* v7; // rsi
	int* v8; // rax
	unsigned int v9; // r12d
	unsigned int v10; // r15d
	__int64 v11; // rdi
	__m128 v12; // xmm6
	__m128 v13; // xmm7
	__m128 v14; // xmm8
	__m128 v15; // xmm4
	__m128 v16; // xmm1
	BOOL v17; // eax
	unsigned __int64 v18; // rcx
	int* v19; // rbx
	int* v20; // rax
	_DWORD* v21; // rax
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rdx
	__int64 v24; // rax
	const wchar_t* v25; // rcx
	unsigned __int64 v26; // rdx
	unsigned __int64 v27; // rcx
	__int64 v28; // rax
	const wchar_t* v29; // rdx
	__int64 v30; // rax
	__int64 v32; // [rsp+30h] [rbp-78h]

	if (*(_QWORD*)(a1 + 848))
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)a2 + 64i64))(
			a2,
			0i64,
			a3,
			*(_QWORD*)(a1 + 848),
			a1 + 864);
	if (a2)
	{
		v5 = *(_DWORD*)(a1 + 108);
		if (v5)
		{
			v6 = sub_140207D60(v5);
			if (v6)
			{
				v7 = (_DWORD*)sub_14022E600(*(_DWORD*)(v6 + 16));
				if (v7)
				{
					v8 = sub_14018B280(40i64, 0);
					if (v8)
					{
						*((_QWORD*)v8 + 3) = 0i64;
						*((_QWORD*)v8 + 4) = 0i64;
					}
					else
					{
						v8 = 0i64;
					}
					*(_QWORD*)(a1 + 848) = v8;
					*(_QWORD*)v8 = 0i64;
					*((_QWORD*)v8 + 1) = 0i64;
					*((_QWORD*)v8 + 2) = 0i64;
					*((_QWORD*)v8 + 3) = 0i64;
					*((_QWORD*)v8 + 4) = 0i64;
					*(_QWORD*)(a1 + 864) = 0i64;
					*(_QWORD*)(a1 + 872) = 0i64;
					*(_QWORD*)(a1 + 880) = 0i64;
					*(_QWORD*)(a1 + 888) = 0i64;
					*(_QWORD*)(a1 + 896) = 0i64;
					*(_QWORD*)(a1 + 904) = 0i64;
					*(_QWORD*)(a1 + 912) = 0i64;
					*(_QWORD*)(a1 + 920) = 0i64;
					**(_DWORD**)(a1 + 848) = v7[1];
					*(_DWORD*)(*(_QWORD*)(a1 + 848) + 4i64) = v7[2];
					*(_DWORD*)(*(_QWORD*)(a1 + 848) + 8i64) = v7[3];
					*(_DWORD*)(*(_QWORD*)(a1 + 848) + 12i64) = v7[4];
					*(_DWORD*)(*(_QWORD*)(a1 + 848) + 16i64) = v7[5];
					*(_DWORD*)(*(_QWORD*)(a1 + 848) + 20i64) = v7[6];
					sub_140725CF0(*(_QWORD*)(a1 + 848) + 24i64, v7[7]);
					v9 = 0;
					if (v7[7])
					{
						v10 = 0;
						do
						{
							v11 = *(_QWORD*)(*(_QWORD*)(a1 + 848) + 32i64) + 296i64 * v9;
							sub_1407E4830((int*)v11, 0i64, 0x128ui64);
							*(_WORD*)v11 = 2 * v9 + LOWORD(v7[v9 + 8]);
							*(_WORD*)(v11 + 2) = 2 * v9 + LOWORD(v7[v9 + 12]);
							*(_DWORD*)(v11 + 4) = v7[v9 + 16];
							*(_DWORD*)(v11 + 8) = v7[v9 + 20];
							*(_DWORD*)(v11 + 12) = v7[v9 + 24];
							*(_DWORD*)(v11 + 16) = v7[v9 + 28];
							*(_DWORD*)(v11 + 20) = v7[v9 + 32];
							sub_140725E90(v11 + 24, &v7[v9 + 36], (float*)&dword_140B79ED0);
							sub_140725E90(v11 + 48, &v7[v9 + 40], (float*)&dword_140B79ED0);
							sub_140725E90(v11 + 72, &v7[v9 + 44], (float*)&dword_140B79ED0);
							sub_140725E90(v11 + 96, &v7[v9 + 48], (float*)&dword_140B63928);
							sub_140725E90(v11 + 120, &v7[v9 + 52], (float*)&dword_140B63928);
							sub_140725E90(v11 + 168, &v7[v9 + 56], (float*)&dword_140B79ED0);
							sub_140725E90(v11 + 192, &v7[v9 + 60], (float*)&dword_140B63928);
							sub_140725E90(v11 + 216, &v7[v9 + 64], (float*)&dword_140B79ED0);
							sub_140725E90(v11 + 240, &v7[v9 + 68], (float*)&dword_140B63928);
							*(_DWORD*)(v11 + 288) = v7[v9 + 72];
							v12 = (__m128)(unsigned int)v7[v9 + 76];
							v13 = (__m128)(unsigned int)v7[v9 + 80];
							v14 = (__m128)(unsigned int)v7[v9 + 84];
							LODWORD(v32) = v7[v9 + 76];
							HIDWORD(v32) = v7[v9 + 80];
							if (*(float*)&dword_140C5F470 < 0.0)
							{
								v18 = v32 - qword_140C79710;
								if (v32 == qword_140C79710)
									v18 = (unsigned int)v7[v9 + 84] - (unsigned __int64)(unsigned int)dword_140C79718;
								v17 = v18 == 0;
							}
							else
							{
								v17 = 0;
								v15 = _mm_sub_ps(
									_mm_unpacklo_ps(_mm_unpacklo_ps(v12, v14), _mm_unpacklo_ps(v13, (__m128)0i64)),
									_mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)(unsigned int)qword_140C79710, (__m128)(unsigned int)dword_140C79718),
										_mm_unpacklo_ps((__m128)HIDWORD(qword_140C79710), (__m128)0i64)));
								v16 = _mm_mul_ps(v15, v15);
								LOBYTE(v17) = (float)(*(float*)&dword_140C5F470 * *(float*)&dword_140C5F470) > (float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0]) + _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
							}
							if (v17)
							{
								if (*(_DWORD*)(v11 + 264))
								{
									sub_14018B900(*(_QWORD*)(v11 + 272), 0);
									sub_14018B900(*(_QWORD*)(v11 + 280), 0);
									*(_DWORD*)(v11 + 264) = 0;
									*(_QWORD*)(v11 + 272) = 0i64;
									*(_QWORD*)(v11 + 280) = 0i64;
								}
							}
							else
							{
								if (*(_DWORD*)(v11 + 264) != 1)
								{
									v19 = sub_14018C320(*(_QWORD*)(v11 + 272), 4ui64, 2u);
									v20 = sub_14018C320(*(_QWORD*)(v11 + 280), 0xCui64, 2u);
									*(_QWORD*)(v11 + 272) = v19;
									*(_DWORD*)(v11 + 264) = 1;
									*(_QWORD*)(v11 + 280) = v20;
								}
								**(_DWORD**)(v11 + 272) = 0;
								v21 = *(_DWORD**)(v11 + 280);
								*v21 = v12.m128_i32[0];
								v21[1] = v13.m128_i32[0];
								v21[2] = v14.m128_i32[0];
							}
							v22 = 0i64;
							*(_DWORD*)(v11 + 292) = v7[v9 + 88];
							v23 = *(_QWORD*)&v7[2 * v9 + 92];
							if (v23 && v23 <= qword_140C3FE70)
								v22 = v23 + qword_140C3FE68;
							v24 = -1i64;
							do
								++v24;
							while (*(_WORD*)(v22 + 2 * v24));
							if (v24)
							{
								if (v23)
								{
									if (v23 <= qword_140C3FE70)
										v25 = (const wchar_t*)(v23 + qword_140C3FE68);
									else
										v25 = 0i64;
								}
								else
								{
									v25 = 0i64;
								}
							}
							else
							{
								v25 = L"Art\\Dev\\BLANK_Color.tex";
							}
							*(_QWORD*)(a1 + 8i64 * v10 + 864) = v25;
							v26 = *(_QWORD*)&v7[2 * v9 + 100];
							v27 = 0i64;
							if (v26 && v26 <= qword_140C3FE70)
								v27 = v26 + qword_140C3FE68;
							v28 = -1i64;
							do
								++v28;
							while (*(_WORD*)(v27 + 2 * v28));
							if (v28)
							{
								if (v26)
								{
									if (v26 <= qword_140C3FE70)
										v29 = (const wchar_t*)(qword_140C3FE68 + v26);
									else
										v29 = 0i64;
								}
								else
								{
									v29 = 0i64;
								}
							}
							else
							{
								v29 = L"Art\\Dev\\BLANK_Normal.tex";
							}
							v30 = v10 + 1;
							++v9;
							v10 += 2;
							*(_QWORD*)(a1 + 8 * v30 + 864) = v29;
						} while (v9 < v7[7]);
					}
					return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)a2 + 64i64))(
						a2,
						0i64,
						a3,
						*(_QWORD*)(a1 + 848),
						a1 + 864);
				}
			}
		}
	}
	return 2147500037i64;
}
// 140B45DD8: using guessed type wchar_t aArtDevBlankNor[25];
// 140B45E88: using guessed type wchar_t aArtDevBlankCol[24];
// 140B63928: using guessed type int dword_140B63928;
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C5F470: using guessed type int dword_140C5F470;
// 140C79710: using guessed type __int64 qword_140C79710;
// 140C79718: using guessed type int dword_140C79718;

