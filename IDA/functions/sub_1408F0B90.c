//----- (00000001408F0B90) ----------------------------------------------------
void __fastcall sub_1408F0B90(__int64 a1, __int64 a2)
{
	int v3; // ecx
	__int64 v5; // rax
	float v6; // xmm6_4
	float v7; // xmm7_4
	unsigned int v8; // esi
	int* v9; // rax
	__int64 v10; // rbp
	unsigned int v11; // r11d
	unsigned int v12; // r10d
	float v13; // xmm6_4
	int v14; // ecx
	float v15; // xmm4_4
	float v16; // xmm2_4
	__int64 v17; // rdx
	float v18; // xmm5_4
	float* v19; // r8
	float* v20; // rcx
	float* v21; // r9
	float v22; // xmm1_4
	float v23; // xmm0_4
	float v24; // xmm2_4
	float v25; // xmm3_4
	float v26; // xmm4_4
	float v27; // xmm1_4
	float v28; // xmm4_4
	float v29; // xmm0_4
	float v30; // xmm3_4
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm1_4
	__int64 v34; // rax
	float v35; // xmm0_4

	v3 = *(_DWORD*)(a1 + 16);
	if (v3)
	{
		if (*(_DWORD*)(a1 + 40))
		{
			v5 = *(_QWORD*)(a1 + 8);
			v6 = *(float*)(v5 + 16);
			v7 = *(float*)(v5 + 20);
			v8 = 4 * v3 * *(unsigned __int16*)(a2 + 16);
			v9 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 8i64))(*(_QWORD*)(a1 + 56), v8);
			v10 = (__int64)v9;
			if (v9)
			{
				sub_1407E4830(v9, 0i64, v8);
				sub_1408A1D50(a2);
				sub_1408F13E0(a2, v10, *(__m128**)(a1 + 32), *(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 16), *(_DWORD*)(a1 + 40));
				sub_1408F10C0((__int64*)a2, v10, v6, (float*)(a1 + 44), v7, (float*)(a1 + 48), *(_DWORD*)(a1 + 16));
				if (*(_DWORD*)(a2 + 12) == 17)
				{
					v11 = *(_DWORD*)(a1 + 16);
					v12 = 0;
					if (v11)
					{
						v13 = *(float*)(a1 + 72);
						LOWORD(v14) = *(_WORD*)(a2 + 16);
						while (1)
						{
							v15 = *(float*)(a1 + 64);
							v16 = *(float*)(a1 + 68);
							v17 = (unsigned __int16)v14;
							v18 = 0.0;
							v19 = (float*)(*(_QWORD*)a2 + 4 * (unsigned __int16)v14 * (unsigned __int64)v12);
							v20 = v19;
							v21 = &v19[v17];
							if (v19 < v21)
							{
								if ((4 * v17 + 3) / 4 >= 4)
								{
									do
									{
										v22 = *v20;
										v20 += 4;
										v23 = v13 * v16;
										v24 = *(v20 - 3);
										v25 = (float)(v22 - v15) + v23;
										v26 = v24 - v22;
										v27 = *(v20 - 2);
										v28 = v26 + (float)(v13 * v25);
										*(v20 - 4) = v25;
										*(v20 - 3) = v28;
										v29 = v13 * v28;
										v15 = *(v20 - 1);
										v30 = (float)(v27 - v24) + v29;
										*(v20 - 2) = v30;
										v16 = (float)(v15 - v27) + (float)(v13 * v30);
										*(v20 - 1) = v16;
									} while ((__int64)v20 < (__int64)(v21 - 3));
								}
								for (; v20 < v21; v16 = v33)
								{
									v31 = *v20++;
									v32 = v31 - v15;
									v15 = v31;
									v33 = v32 + (float)(v13 * v16);
									*(v20 - 1) = v33;
								}
							}
							*(float*)(a1 + 64) = v15;
							*(float*)(a1 + 68) = v16;
							v14 = *(unsigned __int16*)(a2 + 16);
							if (*(_WORD*)(a2 + 16))
							{
								v34 = *(unsigned __int16*)(a2 + 16);
								do
								{
									v35 = *v19++;
									v18 = v18 + (float)(v35 * v35);
									--v34;
								} while (v34);
							}
							if ((float)(v18 / (float)v14) >= 0.000000063095733)
								break;
							if (++v12 >= v11)
								goto LABEL_19;
						}
						*(_DWORD*)(a2 + 12) = 45;
					}
				}
			LABEL_19:
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56), v10);
			}
		}
	}
}

