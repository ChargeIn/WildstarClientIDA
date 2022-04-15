//----- (00000001407C8AF0) ----------------------------------------------------
__int64 __fastcall sub_1407C8AF0(__int64 a1, _DWORD* a2)
{
	_DWORD* v3; // rcx
	__int64 v4; // r9
	__int64 v5; // r10
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rdx
	float* v11; // r9
	float v12; // xmm3_4
	float v13; // xmm1_4
	__int64 v14; // r8
	float v15; // xmm2_4
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	float v18; // xmm1_4
	float v19; // xmm1_4
	__int64 v20; // rax
	__int64 v21; // rcx
	float* v22; // r14
	float* i; // rbx
	unsigned __int64 v24; // rbp
	float* v25; // rsi
	unsigned __int64 v26; // r11
	__int64 v27; // r10
	float v28; // xmm3_4
	float v29; // xmm1_4
	__int64 v30; // rdx
	float* v31; // r8
	__int64 v32; // r9
	float v33; // xmm2_4
	__int64 v34; // rax
	unsigned __int64 v35; // rcx
	float v36; // xmm1_4
	float v37; // xmm1_4
	__int64 v38; // rcx
	__int64 v39; // rax

	v3 = (_DWORD*)(a1 + 2960);
	*v3 = *a2;
	v3[1] = a2[1];
	v3[2] = a2[2];
	v4 = a1 + 2592;
	v5 = 3i64;
	*v3 = 1065353216;
	do
	{
		v6 = v4 - 92;
		v7 = 3i64;
		do
		{
			v6 += 32i64;
			*(_DWORD*)(v6 - 36) = *v3;
			*(_DWORD*)(v6 - 32) = *v3;
			*(_DWORD*)(v6 - 28) = *v3;
			*(_DWORD*)(v6 - 24) = *v3;
			*(_DWORD*)(v6 - 20) = *v3;
			*(_DWORD*)(v6 - 16) = *v3;
			*(_DWORD*)(v6 - 12) = *v3;
			*(_DWORD*)(v6 - 8) = *v3;
			--v7;
		} while (v7);
		v8 = v4;
		v9 = 5i64;
		do
		{
			v8 += 4i64;
			*(_DWORD*)(v8 - 4) = *v3;
			--v9;
		} while (v9);
		++v3;
		v4 += 116i64;
		--v5;
	} while (v5);
	v10 = 2i64;
	v11 = (float*)(a1 + 2968);
	v12 = 1.0;
	v13 = 1.0;
	do
	{
		if (*v11 > 0.0)
		{
			v12 = v12 - *v11;
			v14 = 0i64;
			v15 = v12 / v13;
			if (v10 >= 4)
			{
				v16 = a1 + 2964;
				v17 = ((unsigned __int64)(v10 - 4) >> 2) + 1;
				v14 = 4 * v17;
				do
				{
					v16 += 16i64;
					v18 = v15 * *(float*)(v16 - 16);
					*(float*)(v16 - 20) = v15 * *(float*)(v16 - 20);
					*(float*)(v16 - 16) = v18;
					v19 = v15 * *(float*)(v16 - 8);
					*(float*)(v16 - 12) = v15 * *(float*)(v16 - 12);
					*(float*)(v16 - 8) = v19;
					--v17;
				} while (v17);
			}
			if (v14 < v10)
			{
				v20 = a1 + 2960 + 4 * v14;
				v21 = v10 - v14;
				do
				{
					v20 += 4i64;
					*(float*)(v20 - 4) = v15 * *(float*)(v20 - 4);
					--v21;
				} while (v21);
			}
			v13 = v12;
		}
		--v10;
		--v11;
	} while (v10 > 0);
	*(_QWORD*)(a1 + 2136) = 0i64;
	*(_DWORD*)(a1 + 2144) = 0;
	sub_1407E4830((int*)(a1 + 2148), 0i64, 0x15Cui64);
	v22 = (float*)(a1 + 2844);
	sub_1407E4830((int*)(a1 + 2844), 0i64, 0x74ui64);
	for (i = *(float**)(a1 + 1256); i; i = (float*)*((_QWORD*)i + 15))
	{
		if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 64i64))(i))
		{
			*(float*)(a1 + 2136) = *(float*)(a1 + 2136) + i[20];
			*(float*)(a1 + 2140) = *(float*)(a1 + 2140) + i[21];
			*(float*)(a1 + 2144) = *(float*)(a1 + 2144) + i[22];
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 288i64))(i))
			{
				*(float*)(a1 + 2148) = i[20] + *(float*)(a1 + 2148);
				*v22 = i[20] + *v22;
				*(float*)(a1 + 2264) = *(float*)(a1 + 2264) + i[21];
				*v22 = *v22 + i[21];
				*(float*)(a1 + 2380) = *(float*)(a1 + 2380) + i[22];
				*v22 = i[22] + *v22;
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 296i64))(i))
			{
				*(float*)(a1 + 2152) = i[20] + *(float*)(a1 + 2152);
				*(float*)(a1 + 2848) = i[20] + *(float*)(a1 + 2848);
				*(float*)(a1 + 2268) = *(float*)(a1 + 2268) + i[21];
				*(float*)(a1 + 2848) = *(float*)(a1 + 2848) + i[21];
				*(float*)(a1 + 2384) = *(float*)(a1 + 2384) + i[22];
				*(float*)(a1 + 2848) = i[22] + *(float*)(a1 + 2848);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 304i64))(i))
			{
				*(float*)(a1 + 2156) = i[20] + *(float*)(a1 + 2156);
				*(float*)(a1 + 2852) = i[20] + *(float*)(a1 + 2852);
				*(float*)(a1 + 2272) = *(float*)(a1 + 2272) + i[21];
				*(float*)(a1 + 2852) = *(float*)(a1 + 2852) + i[21];
				*(float*)(a1 + 2388) = i[22] + *(float*)(a1 + 2388);
				*(float*)(a1 + 2852) = i[22] + *(float*)(a1 + 2852);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 312i64))(i))
			{
				*(float*)(a1 + 2160) = i[20] + *(float*)(a1 + 2160);
				*(float*)(a1 + 2856) = i[20] + *(float*)(a1 + 2856);
				*(float*)(a1 + 2276) = i[21] + *(float*)(a1 + 2276);
				*(float*)(a1 + 2856) = *(float*)(a1 + 2856) + i[21];
				*(float*)(a1 + 2392) = i[22] + *(float*)(a1 + 2392);
				*(float*)(a1 + 2856) = i[22] + *(float*)(a1 + 2856);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 320i64))(i))
			{
				*(float*)(a1 + 2164) = i[20] + *(float*)(a1 + 2164);
				*(float*)(a1 + 2860) = i[20] + *(float*)(a1 + 2860);
				*(float*)(a1 + 2280) = *(float*)(a1 + 2280) + i[21];
				*(float*)(a1 + 2860) = *(float*)(a1 + 2860) + i[21];
				*(float*)(a1 + 2396) = *(float*)(a1 + 2396) + i[22];
				*(float*)(a1 + 2860) = i[22] + *(float*)(a1 + 2860);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 328i64))(i))
			{
				*(float*)(a1 + 2168) = i[20] + *(float*)(a1 + 2168);
				*(float*)(a1 + 2864) = i[20] + *(float*)(a1 + 2864);
				*(float*)(a1 + 2284) = *(float*)(a1 + 2284) + i[21];
				*(float*)(a1 + 2864) = *(float*)(a1 + 2864) + i[21];
				*(float*)(a1 + 2400) = *(float*)(a1 + 2400) + i[22];
				*(float*)(a1 + 2864) = i[22] + *(float*)(a1 + 2864);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 336i64))(i))
			{
				*(float*)(a1 + 2172) = i[20] + *(float*)(a1 + 2172);
				*(float*)(a1 + 2868) = i[20] + *(float*)(a1 + 2868);
				*(float*)(a1 + 2288) = *(float*)(a1 + 2288) + i[21];
				*(float*)(a1 + 2868) = *(float*)(a1 + 2868) + i[21];
				*(float*)(a1 + 2404) = i[22] + *(float*)(a1 + 2404);
				*(float*)(a1 + 2868) = i[22] + *(float*)(a1 + 2868);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 344i64))(i))
			{
				*(float*)(a1 + 2176) = i[20] + *(float*)(a1 + 2176);
				*(float*)(a1 + 2872) = i[20] + *(float*)(a1 + 2872);
				*(float*)(a1 + 2292) = i[21] + *(float*)(a1 + 2292);
				*(float*)(a1 + 2872) = *(float*)(a1 + 2872) + i[21];
				*(float*)(a1 + 2408) = i[22] + *(float*)(a1 + 2408);
				*(float*)(a1 + 2872) = i[22] + *(float*)(a1 + 2872);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 352i64))(i))
			{
				*(float*)(a1 + 2180) = i[20] + *(float*)(a1 + 2180);
				*(float*)(a1 + 2876) = i[20] + *(float*)(a1 + 2876);
				*(float*)(a1 + 2296) = *(float*)(a1 + 2296) + i[21];
				*(float*)(a1 + 2876) = *(float*)(a1 + 2876) + i[21];
				*(float*)(a1 + 2412) = *(float*)(a1 + 2412) + i[22];
				*(float*)(a1 + 2876) = i[22] + *(float*)(a1 + 2876);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 360i64))(i))
			{
				*(float*)(a1 + 2184) = i[20] + *(float*)(a1 + 2184);
				*(float*)(a1 + 2880) = i[20] + *(float*)(a1 + 2880);
				*(float*)(a1 + 2300) = *(float*)(a1 + 2300) + i[21];
				*(float*)(a1 + 2880) = *(float*)(a1 + 2880) + i[21];
				*(float*)(a1 + 2416) = *(float*)(a1 + 2416) + i[22];
				*(float*)(a1 + 2880) = i[22] + *(float*)(a1 + 2880);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 368i64))(i))
			{
				*(float*)(a1 + 2188) = i[20] + *(float*)(a1 + 2188);
				*(float*)(a1 + 2884) = i[20] + *(float*)(a1 + 2884);
				*(float*)(a1 + 2304) = *(float*)(a1 + 2304) + i[21];
				*(float*)(a1 + 2884) = *(float*)(a1 + 2884) + i[21];
				*(float*)(a1 + 2420) = i[22] + *(float*)(a1 + 2420);
				*(float*)(a1 + 2884) = i[22] + *(float*)(a1 + 2884);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 376i64))(i))
			{
				*(float*)(a1 + 2192) = i[20] + *(float*)(a1 + 2192);
				*(float*)(a1 + 2888) = i[20] + *(float*)(a1 + 2888);
				*(float*)(a1 + 2308) = i[21] + *(float*)(a1 + 2308);
				*(float*)(a1 + 2888) = *(float*)(a1 + 2888) + i[21];
				*(float*)(a1 + 2424) = i[22] + *(float*)(a1 + 2424);
				*(float*)(a1 + 2888) = i[22] + *(float*)(a1 + 2888);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 384i64))(i))
			{
				*(float*)(a1 + 2196) = i[20] + *(float*)(a1 + 2196);
				*(float*)(a1 + 2892) = i[20] + *(float*)(a1 + 2892);
				*(float*)(a1 + 2312) = *(float*)(a1 + 2312) + i[21];
				*(float*)(a1 + 2892) = *(float*)(a1 + 2892) + i[21];
				*(float*)(a1 + 2428) = *(float*)(a1 + 2428) + i[22];
				*(float*)(a1 + 2892) = i[22] + *(float*)(a1 + 2892);
			}
			if (((*(__int64(__fastcall**)(float*))(*(_QWORD*)i + 176i64))(i) & 3) != 0)
			{
				*(float*)(a1 + 2200) = i[20] + *(float*)(a1 + 2200);
				*(float*)(a1 + 2896) = i[20] + *(float*)(a1 + 2896);
				*(float*)(a1 + 2316) = *(float*)(a1 + 2316) + i[21];
				*(float*)(a1 + 2896) = *(float*)(a1 + 2896) + i[21];
				*(float*)(a1 + 2432) = *(float*)(a1 + 2432) + i[22];
				*(float*)(a1 + 2896) = *(float*)(a1 + 2896) + i[22];
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 392i64))(i))
			{
				*(float*)(a1 + 2212) = i[20] + *(float*)(a1 + 2212);
				*(float*)(a1 + 2908) = i[20] + *(float*)(a1 + 2908);
				*(float*)(a1 + 2328) = *(float*)(a1 + 2328) + i[21];
				*(float*)(a1 + 2908) = *(float*)(a1 + 2908) + i[21];
				*(float*)(a1 + 2444) = i[22] + *(float*)(a1 + 2444);
				*(float*)(a1 + 2908) = *(float*)(a1 + 2908) + i[22];
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 400i64))(i))
			{
				*(float*)(a1 + 2216) = i[20] + *(float*)(a1 + 2216);
				*(float*)(a1 + 2912) = i[20] + *(float*)(a1 + 2912);
				*(float*)(a1 + 2332) = i[21] + *(float*)(a1 + 2332);
				*(float*)(a1 + 2912) = *(float*)(a1 + 2912) + i[21];
				*(float*)(a1 + 2448) = i[22] + *(float*)(a1 + 2448);
				*(float*)(a1 + 2912) = *(float*)(a1 + 2912) + i[22];
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 408i64))(i))
			{
				*(float*)(a1 + 2220) = i[20] + *(float*)(a1 + 2220);
				*(float*)(a1 + 2916) = i[20] + *(float*)(a1 + 2916);
				*(float*)(a1 + 2336) = *(float*)(a1 + 2336) + i[21];
				*(float*)(a1 + 2916) = *(float*)(a1 + 2916) + i[21];
				*(float*)(a1 + 2452) = *(float*)(a1 + 2452) + i[22];
				*(float*)(a1 + 2916) = *(float*)(a1 + 2916) + i[22];
			}
			v24 = 0i64;
			v25 = (float*)(a1 + 2920);
			do
			{
				if ((*(unsigned int(__fastcall**)(float*, unsigned __int64))(*(_QWORD*)i + 416i64))(i, v24))
				{
					*(v25 - 174) = i[20] + *(v25 - 174);
					*v25 = *v25 + i[20];
					*(v25 - 145) = *(v25 - 145) + i[21];
					*v25 = *v25 + i[21];
					*(v25 - 116) = i[22] + *(v25 - 116);
					*v25 = *v25 + i[22];
				}
				++v24;
				++v25;
			} while (v24 < 8);
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 424i64))(i))
			{
				*(float*)(a1 + 2256) = i[20] + *(float*)(a1 + 2256);
				*(float*)(a1 + 2952) = i[20] + *(float*)(a1 + 2952);
				*(float*)(a1 + 2372) = *(float*)(a1 + 2372) + i[21];
				*(float*)(a1 + 2952) = *(float*)(a1 + 2952) + i[21];
				*(float*)(a1 + 2488) = i[22] + *(float*)(a1 + 2488);
				*(float*)(a1 + 2952) = i[22] + *(float*)(a1 + 2952);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 432i64))(i))
			{
				*(float*)(a1 + 2204) = i[20] + *(float*)(a1 + 2204);
				*(float*)(a1 + 2900) = i[20] + *(float*)(a1 + 2900);
				*(float*)(a1 + 2320) = *(float*)(a1 + 2320) + i[21];
				*(float*)(a1 + 2900) = *(float*)(a1 + 2900) + i[21];
				*(float*)(a1 + 2436) = *(float*)(a1 + 2436) + i[22];
				*(float*)(a1 + 2900) = i[22] + *(float*)(a1 + 2900);
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 440i64))(i))
			{
				*(float*)(a1 + 2208) = i[20] + *(float*)(a1 + 2208);
				*(float*)(a1 + 2904) = i[20] + *(float*)(a1 + 2904);
				*(float*)(a1 + 2324) = *(float*)(a1 + 2324) + i[21];
				*(float*)(a1 + 2904) = *(float*)(a1 + 2904) + i[21];
				*(float*)(a1 + 2440) = i[22] + *(float*)(a1 + 2440);
				*(float*)(a1 + 2904) = *(float*)(a1 + 2904) + i[22];
			}
			if ((*(unsigned int(__fastcall**)(float*))(*(_QWORD*)i + 448i64))(i))
			{
				*(float*)(a1 + 2260) = i[20] + *(float*)(a1 + 2260);
				*(float*)(a1 + 2956) = i[20] + *(float*)(a1 + 2956);
				*(float*)(a1 + 2376) = i[21] + *(float*)(a1 + 2376);
				*(float*)(a1 + 2956) = *(float*)(a1 + 2956) + i[21];
				*(float*)(a1 + 2492) = i[22] + *(float*)(a1 + 2492);
				*(float*)(a1 + 2956) = *(float*)(a1 + 2956) + i[22];
			}
		}
	}
	v26 = 0i64;
	v27 = a1 + 2612;
	do
	{
		v28 = 1.0;
		v29 = 1.0;
		v30 = 2i64;
		v31 = (float*)(v27 + 116);
		do
		{
			if (*v31 > 0.0)
			{
				if (*(v31 - 87) <= 0.0)
				{
					*v31 = 0.0;
				}
				else
				{
					v28 = v28 - *v31;
					v32 = 0i64;
					v33 = v28 / v29;
					if (v30 >= 4)
					{
						v34 = v27;
						v35 = ((unsigned __int64)(v30 - 4) >> 2) + 1;
						v32 = 4 * v35;
						do
						{
							v34 += 464i64;
							v36 = v33 * *(float*)(v34 - 464);
							*(float*)(v34 - 580) = v33 * *(float*)(v34 - 580);
							*(float*)(v34 - 464) = v36;
							v37 = v33 * *(float*)(v34 - 232);
							*(float*)(v34 - 348) = v33 * *(float*)(v34 - 348);
							*(float*)(v34 - 232) = v37;
							--v35;
						} while (v35);
					}
					if (v32 < v30)
					{
						v38 = a1 + 4 * (v26 + 29 * v32 + 624);
						v39 = v30 - v32;
						do
						{
							v38 += 116i64;
							*(float*)(v38 - 116) = v33 * *(float*)(v38 - 116);
							--v39;
						} while (v39);
					}
					v29 = v28;
				}
			}
			--v30;
			v31 -= 29;
		} while (v30 > 0);
		++v26;
		v27 += 4i64;
	} while (v26 < 0x1D);
	return 0i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

