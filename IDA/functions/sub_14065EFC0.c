//----- (000000014065EFC0) ----------------------------------------------------
__int64 __fastcall sub_14065EFC0(__int64 a1)
{
	__int64 v1; // rdi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v12; // rdx
	__int64 v13; // rbp
	unsigned int v14; // esi
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rdx
	unsigned __int16* v26; // r11
	__int64 v27; // rdx
	unsigned int v28; // ebp
	unsigned int v29; // esi
	unsigned int v30; // r15d
	unsigned int* v31; // rax
	__int64 v32; // rcx
	unsigned int* v33; // r14
	__int64 v34; // rax
	int v35; // eax
	__int64 v36; // rax
	__m128i v37; // xmm0
	__int64 v38; // rcx
	__int64 v39; // rbx
	__int64 v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rdx
	int v44; // r11d
	__int64 v45; // rcx
	_QWORD* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rdx
	unsigned __int16* v49; // r11
	__int64 v50; // rdx
	_QWORD* v51; // rax
	__int64(__fastcall * *v53)(); // [rsp+20h] [rbp-38h] BYREF
	int v54; // [rsp+28h] [rbp-30h]
	__int64 v55; // [rsp+30h] [rbp-28h]
	int v56; // [rsp+38h] [rbp-20h]

	v1 = a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(v3 + 24);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 64);
			if (v5)
			{
				v6 = *(_QWORD*)(v1 + 32);
				v53 = off_140B569F0;
				v7 = *(_QWORD*)(v6 + 112);
				v55 = v1;
				v56 = 1;
				if (*(_QWORD*)(v6 + 120) >= v7)
					sub_14005E2C0(v1);
				v8 = *(_QWORD*)(v1 + 16);
				v9 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v8 + 8) = 5;
				*(_QWORD*)v8 = v9;
				*(_QWORD*)(v1 + 16) += 16i64;
				v11 = sub_1400578C0(v1);
				v54 = v11;
				if (v5 <= 0)
				{
					if (v5 == -1)
					{
						v28 = 1;
						v29 = 0;
						v30 = sub_140242CF0();
						if (v30)
						{
							do
							{
								v31 = (unsigned int*)sub_140242DA0(v29);
								v33 = v31;
								if (v31)
								{
									v34 = sub_1405BE150(v32, *v31);
									if (v34)
									{
										v35 = *(_DWORD*)(v34 + 16);
										if ((v35 & 1) == 0 && (v35 & 0x10) == 0)
										{
											v36 = *(_QWORD*)(v1 + 16);
											v37 = _mm_cvtsi32_si128(v28++);
											*(_DWORD*)(v36 + 8) = 3;
											*(_QWORD*)v36 = *(_OWORD*)&_mm_cvtepi32_pd(v37);
											v38 = *(_QWORD*)(v1 + 32);
											*(_QWORD*)(v1 + 16) += 16i64;
											if (*(_QWORD*)(v38 + 120) >= *(_QWORD*)(v38 + 112))
												sub_14005E2C0(v1);
											v39 = *(_QWORD*)(v1 + 16);
											v40 = sub_14005C1B0(v1, 0, 0);
											*(_DWORD*)(v39 + 8) = 5;
											*(_QWORD*)v39 = v40;
											*(_QWORD*)(v1 + 16) += 16i64;
											LODWORD(v39) = sub_1400578C0(v1);
											v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v39);
											v42 = *(_QWORD*)(v1 + 16);
											*(_QWORD*)v42 = *v41;
											*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
											*(_QWORD*)(v1 + 16) += 16i64;
											sub_1400F06F0(v1, v43, L"eTradeskillId", v44);
											*(_QWORD*)(v1 + 16) -= 16i64;
											sub_14034BDD0(v45, v33[1]);
											v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v39);
											v47 = *(_QWORD*)(v1 + 16);
											*(_QWORD*)v47 = *v46;
											*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
											*(_QWORD*)(v1 + 16) += 16i64;
											sub_1400F0870(v1, v48, L"strName", v49);
											*(_QWORD*)(v1 + 16) -= 16i64;
											sub_1400FB1D0((__int64)&v53);
											sub_1400579E0(v1, v50, v39);
										}
									}
								}
								++v29;
							} while (v29 < v30);
							v1 = v55;
							v11 = v54;
						}
					}
				}
				else
				{
					v13 = sub_1405BE150(v10, v5);
					if (!v13)
					{
						v14 = 0;
					LABEL_25:
						sub_1400579E0(v1, v12, v11);
						return v14;
					}
					v15 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v15 = 0x3FF0000000000000i64;
					*(_DWORD*)(v15 + 8) = 3;
					v16 = *(_QWORD*)(v1 + 32);
					*(_QWORD*)(v1 + 16) += 16i64;
					if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
						sub_14005E2C0(v1);
					v17 = *(_QWORD*)(v1 + 16);
					v18 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v17 + 8) = 5;
					*(_QWORD*)v17 = v18;
					*(_QWORD*)(v1 + 16) += 16i64;
					LODWORD(v17) = sub_1400578C0(v1);
					v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					v20 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v20 = *v19;
					*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v21, L"eTradeskillId", v5);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_14034BDD0(v22, *(_DWORD*)(v13 + 4));
					v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					v24 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v24 = *v23;
					*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v25, L"strName", v26);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v53);
					sub_1400579E0(v1, v27, v17);
					v1 = v55;
					v11 = v54;
				}
				v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v11);
				v12 = *(_QWORD*)(v1 + 16);
				v14 = 1;
				*(_QWORD*)v12 = *v51;
				*(_DWORD*)(v12 + 8) = *((_DWORD*)v51 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				goto LABEL_25;
			}
		}
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 14065F07D: variable 'v10' is possibly undefined
// 14065F126: variable 'v21' is possibly undefined
// 14065F133: variable 'v22' is possibly undefined
// 14065F173: variable 'v25' is possibly undefined
// 14065F173: variable 'v26' is possibly undefined
// 14065F18F: variable 'v27' is possibly undefined
// 14065F1E5: variable 'v32' is possibly undefined
// 14065F29F: variable 'v43' is possibly undefined
// 14065F29F: variable 'v44' is possibly undefined
// 14065F2AD: variable 'v45' is possibly undefined
// 14065F2ED: variable 'v48' is possibly undefined
// 14065F2ED: variable 'v49' is possibly undefined
// 14065F309: variable 'v50' is possibly undefined
// 14065F362: variable 'v12' is possibly undefined
// 140B2D918: using guessed type wchar_t aStrname_52[8];
// 140B2D948: using guessed type wchar_t aStrname_51[8];
// 140B2D958: using guessed type wchar_t aEtradeskillid_3[14];
// 140B2D998: using guessed type wchar_t aEtradeskillid_2[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

