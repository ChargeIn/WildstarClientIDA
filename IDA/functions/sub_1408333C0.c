//----- (00000001408333C0) ----------------------------------------------------
void __fastcall sub_1408333C0(__int64 a1)
{
	__m128* v1; // r14
	__int64 v3; // rdi
	unsigned __int64 v4; // rcx
	int v5; // eax
	int v6; // eax
	_BYTE* v7; // rsi
	int v8; // eax
	unsigned __int64 v9; // rcx
	int v10; // eax
	int v11; // eax
	unsigned __int64 v12; // rdi
	unsigned int v13; // esi
	__int64 v14; // rdi
	int i; // ecx
	__int64 v16; // rbp
	unsigned __int32* v17; // rdi
	__int64 v18; // rax
	__m128 v19; // xmm3
	__m128 v20; // xmm4
	float* v21; // r8
	float* v22; // r9
	__int64 v23; // rcx
	__int64 v24; // rax
	char* v25; // r10
	char* v26; // rdx
	char* v27; // r11
	__int64 v28; // rax
	__m128 v29; // xmm0
	__m128 v30; // xmm2
	__m128 v31; // xmm2
	__m128 v32; // xmm1
	__m128 v33; // xmm2
	__m128 v34; // xmm2
	__m128 v35; // xmm3
	__m128 v36; // xmm4
	float* v37; // r8
	float* v38; // r9
	__int64 v39; // rcx
	__int64 v40; // rax
	char* v41; // r10
	char* v42; // rdx
	char* v43; // r11
	__int64 v44; // rax
	__m128 v45; // xmm0
	__m128 v46; // xmm1
	__m128 v47; // xmm2
	__m128 v48; // xmm1
	__m128 v49; // xmm2
	unsigned __int64 v50; // rax
	char* v51; // rdx
	unsigned __int64 v52; // rcx
	__int64 v53; // r8
	__m128 v54; // xmm0
	__m128 v55; // xmm1
	__m128 v56; // xmm2
	char v57[16]; // [rsp+20h] [rbp-198h] BYREF
	char v58[16]; // [rsp+30h] [rbp-188h] BYREF
	char v59[352]; // [rsp+40h] [rbp-178h] BYREF

	v1 = *(__m128**)(a1 + 64);
	LODWORD(v3) = 4;
	while (1)
	{
		while (!(_DWORD)v3)
		{
			while (2)
			{
				sub_140861920((__int64)&v1[30], a1);
				v6 = *(_DWORD*)(a1 + 56);
				if (v6 == 43)
				{
					while (1)
					{
						*(_WORD*)(a1 + 16) = *(_BYTE*)(a1 + 88) ? (unsigned __int16)(0x5DC00u / dword_140C110B4) : 1024;
						v7 = (_BYTE*)v1[1].m128_u64[0];
						(*(void(__fastcall**)(_BYTE*, __int64))(*(_QWORD*)v7 + 80i64))(v7, a1);
						v8 = *(_DWORD*)(a1 + 56);
						if (v8 == 46 && (v7[32] & 2) == 0)
							v1[5].m128_i8[13] = 1;
						if (v8 != 45 && v8 != 17)
							return;
						sub_140861600((__int64)&v1[30], a1);
						if (*(_DWORD*)(a1 + 56) != 43)
						{
							v6 = *(_DWORD*)(a1 + 56);
							break;
						}
					}
				}
				if (v6 != 45 && v6 != 17)
					return;
				while (1)
				{
				LABEL_21:
					if ((unsigned int)v3 >= 4)
					{
						sub_140861570(v1 + 44, (__int64*)a1);
						sub_140847FB0((__int64)v1, a1);
						v11 = *(_DWORD*)(a1 + 56);
						if (v11 == 45 || v11 == 17)
						{
							sub_14083BB70(qword_140C61B80, a1);
							v12 = v1[1].m128_u64[0];
							v13 = 0;
							if (v12)
								v14 = *(_QWORD*)(v12 + 24);
							else
								v14 = 0i64;
							if ((*(_BYTE*)(v14 + 382) & 0x40) == 0)
								sub_1408605D0(v14);
							if (*(_QWORD*)(v14 + 496) && v1[6].m128_i32[2])
							{
								if (sub_140846320(qword_140C61C58, a1))
								{
									sub_140845B80(a1);
									sub_140845D40(qword_140C61C58, a1);
									sub_140845C50(a1);
								}
								else
								{
									sub_140845D40(qword_140C61C58, a1);
								}
							}
							if (*(_BYTE*)(a1 + 63))
							{
								for (i = *(_DWORD*)(a1 + 8); i; i &= i - 1)
									++v13;
								if (*(_BYTE*)(a1 + 62))
								{
									v16 = v1[29].m128_u8[0];
									if (v1[29].m128_i8[0])
									{
										v17 = &v1[13].m128_u32[1];
										do
										{
											v18 = sub_140832D80((__int64)v1, 0);
											if (v17[5])
											{
												if (v13)
												{
													v35 = (__m128) * (v17 - 1);
													v36 = (__m128) * v17;
													v37 = (float*)(v18 + 400);
													v38 = (float*)(v18 + 404);
													v39 = v18 + 16;
													v40 = -v18;
													v41 = &v59[v40];
													v42 = &v57[v40];
													v43 = &v58[v40];
													v44 = v13;
													do
													{
														v45 = *(__m128*)(v39 - 16);
														v46 = v35;
														v47 = v36;
														v39 += 64i64;
														v46.m128_f32[0] = v35.m128_f32[0] * *v37;
														v48 = _mm_shuffle_ps(v46, v46, 0);
														*(__m128*)& v42[v39 - 80] = _mm_mul_ps(v45, v48);
														*(__m128*)& v42[v39 - 64] = _mm_mul_ps(v48, *(__m128*)(v39 - 64));
														v47.m128_f32[0] = v36.m128_f32[0] * *v38;
														v49 = _mm_shuffle_ps(v47, v47, 0);
														*(__m128*)& v43[v39 - 64] = _mm_mul_ps(*(__m128*)(v39 - 48), v49);
														*(__m128*)& v41[v39 - 64] = _mm_mul_ps(*(__m128*)(v39 - 32), v49);
														--v44;
													} while (v44);
												}
											}
											else if (v13)
											{
												v19 = (__m128) * (v17 - 1);
												v20 = (__m128) * v17;
												v21 = (float*)(v18 + 416);
												v22 = (float*)(v18 + 420);
												v23 = v18 + 16;
												v24 = -v18;
												v25 = &v59[v24];
												v26 = &v57[v24];
												v27 = &v58[v24];
												v28 = v13;
												do
												{
													v29 = *(__m128*)(v23 - 16);
													v30 = v19;
													v23 += 64i64;
													v30.m128_f32[0] = v19.m128_f32[0] * *v21;
													v31 = _mm_shuffle_ps(v30, v30, 0);
													*(__m128*)& v26[v23 - 80] = _mm_mul_ps(v29, v31);
													v32 = _mm_mul_ps(*(__m128*)(v23 - 64), v31);
													v33 = v20;
													*(__m128*)& v26[v23 - 64] = v32;
													v33.m128_f32[0] = v20.m128_f32[0] * *v22;
													v34 = _mm_shuffle_ps(v33, v33, 0);
													*(__m128*)& v27[v23 - 64] = _mm_mul_ps(*(__m128*)(v23 - 48), v34);
													*(__m128*)& v25[v23 - 64] = _mm_mul_ps(*(__m128*)(v23 - 32), v34);
													--v28;
												} while (v28);
											}
											sub_140862C40(*(_QWORD*)(v17 + 3) + 32i64, a1, (__int64)v57);
											v17 += 8;
											--v16;
										} while (v16);
									}
								}
								sub_140861570(v1 + 60, (__int64*)a1);
								if (!*(_BYTE*)(a1 + 88))
								{
									v50 = v1[6].m128_u64[0];
									if (v13)
									{
										v51 = &v57[-v50];
										v52 = v50 + 16;
										v53 = v13;
										do
										{
											v54 = *(__m128*)(v52 - 16);
											v52 += 64i64;
											v55 = _mm_shuffle_ps(
												(__m128) * (unsigned int*)(v50 + 384),
												(__m128) * (unsigned int*)(v50 + 384),
												0);
											*(__m128*)& v51[v52 - 80] = _mm_mul_ps(v54, v55);
											*(__m128*)& v51[v52 - 64] = _mm_mul_ps(v55, *(__m128*)(v52 - 64));
											v56 = _mm_shuffle_ps(
												(__m128) * (unsigned int*)(v50 + 388),
												(__m128) * (unsigned int*)(v50 + 388),
												0);
											*(__m128*)& v58[v52 - v50 - 64] = _mm_mul_ps(*(__m128*)(v52 - 48), v56);
											*(__m128*)& v59[v52 - v50 - 64] = _mm_mul_ps(*(__m128*)(v52 - 32), v56);
											--v53;
										} while (v53);
									}
									sub_140862C40(*(_QWORD*)(a1 + 72) + 32i64, a1, (__int64)v57);
								}
							}
						}
						return;
					}
					v9 = v1[58].m128_u64[(unsigned int)v3];
					if (!v9)
						goto LABEL_7;
					(*(void(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v9 + 104i64))(v9, a1);
					v10 = *(_DWORD*)(a1 + 56);
					if (v10 == 43)
						break;
					if (v10 == 45)
						goto LABEL_7;
					if (v10 != 17)
						return;
					LODWORD(v3) = v3 + 1;
				}
				if (!(_DWORD)v3)
					continue;
				break;
			}
		}
		v3 = (unsigned int)(v3 - 1);
		v4 = v1[58].m128_u64[v3];
		if (v4)
		{
			(*(void(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v4 + 96i64))(v4, a1);
			if (*(_DWORD*)(a1 + 56) != 43)
				break;
		}
	}
	v5 = *(_DWORD*)(a1 + 56);
	if (v5 == 45 || v5 == 17)
	{
	LABEL_7:
		LODWORD(v3) = v3 + 1;
		goto LABEL_21;
	}
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61C58: using guessed type __int64 qword_140C61C58;

