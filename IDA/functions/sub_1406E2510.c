//----- (00000001406E2510) ----------------------------------------------------
void __fastcall sub_1406E2510(__int64 a1, float a2)
{
	float v2; // xmm4_4
	float v3; // xmm5_4
	float v5; // ecx
	__int64 v6; // r14
	int* v7; // r8
	int v8; // ecx
	int v9; // ecx
	int v10; // eax
	float v11; // xmm4_4
	int v12; // eax
	float v13; // xmm4_4
	float v14; // xmm2_4
	__int128 v15; // xmm0
	unsigned __int64 v16; // r8
	__int64 v17; // r8
	unsigned __int64 v18; // r9
	unsigned __int64 v19; // rdi
	__int64* v20; // rcx
	__int64 v21; // rbx
	__int64* v22; // rax
	__int64 v23; // r8
	__int64 v24; // rcx
	bool v25; // zf
	__m128i* v26; // r8
	__int64* v27; // r15
	__int64 v28; // r15
	unsigned __int64 v29; // rdi
	_QWORD* v30; // rbx
	_DWORD** v31; // rbx
	_DWORD* v32; // rbx
	__int64 v33; // r12
	__int64 v34; // r13
	_QWORD* v35; // rax
	__int64 v36; // r15
	unsigned __int64 v37; // rdi
	_QWORD* v38; // rbx
	__int64* v39; // rbx
	__int64 v40; // rbx
	__int64 v41; // rdx
	__m128i* v42; // r8
	__int64** v43; // rbx
	int v44; // edx
	__int64 v45; // r8
	__int64 v46; // rcx
	__m128i* v47; // r8
	__int64* v48; // r15
	__int64 v49; // r15
	unsigned __int64 v50; // rdi
	_QWORD* v51; // rbx
	_DWORD** v52; // rbx
	_DWORD* v53; // rbx
	__int64 v54; // rdx
	__int64 v55; // rcx
	__int64 v56; // r13
	__int64 v57; // r12
	_QWORD* v58; // rax
	__int64 v59; // r15
	unsigned __int64 v60; // rdi
	_QWORD* v61; // rbx
	__int64* v62; // rbx
	__int64 v63; // rbx
	__int64 v64; // rdx
	__m128i* v65; // r8
	__int64 v66; // r13
	_QWORD* v67; // rbx
	__int128* v68; // r15
	__int64 v69; // r12
	void(__fastcall * **v70)(_QWORD); // rdi
	__int64** v71; // rdx
	__int64 v72; // rcx
	__int64 v73; // rdi
	__int64 v74; // r8
	unsigned __int64 v75; // rsi
	_QWORD* v76; // rbx
	unsigned int* v77; // rbx
	unsigned int v78; // r12d
	__int64 v79; // rbx
	__int64 v80; // r15
	int* v81; // rax
	int* v82; // rsi
	int* v83; // rdx
	__int64 v84; // rcx
	unsigned __int64 v85; // [rsp+48h] [rbp-C0h]
	__int64 v86; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v87; // [rsp+58h] [rbp-B0h]
	__int128 v88; // [rsp+60h] [rbp-A8h]
	__int128 v89; // [rsp+70h] [rbp-98h]
	__int128 v90; // [rsp+88h] [rbp-80h] BYREF
	__int128 v91; // [rsp+98h] [rbp-70h] BYREF
	__int64 v92; // [rsp+A8h] [rbp-60h]
	__int64 v93; // [rsp+B0h] [rbp-58h]
	__int64 v94; // [rsp+B8h] [rbp-50h]
	__int64 v95; // [rsp+C0h] [rbp-48h]
	__int64 v96; // [rsp+C8h] [rbp-40h]
	unsigned __int64 v97; // [rsp+E8h] [rbp-20h]

	v2 = *(float*)(a1 + 1136);
	v3 = *(float*)(a1 + 1140);
	*(float*)&v86 = v2;
	v5 = v3;
	if ((LODWORD(v3) ^ LODWORD(v2)) < 0)
		LODWORD(v5) = 0x80000000 - LODWORD(v3);
	v6 = 0i64;
	if ((int)abs32(LODWORD(v5) - LODWORD(v2)) > 84)
	{
		v7 = (int*)qword_140C63750;
		v8 = dword_140C53B20;
		if (v3 >= v2)
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C53B20)
				v8 = *(_DWORD*)qword_140C63750;
			*(float*)(a1 + 1136) = fminf((float)((float)(dword_140C53B30[v8] * 4.0) * a2) + v2, v3);
		}
		else
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C53B20)
				v8 = *(_DWORD*)qword_140C63750;
			*(float*)(a1 + 1136) = fmaxf(v2 - (float)((float)(dword_140C53B30[v8] * 4.0) * a2), v3);
		}
		v9 = *v7;
		v10 = dword_140C53B80;
		*((_QWORD*)&v88 + 1) = 0i64;
		LODWORD(v89) = 0;
		if (v9 < dword_140C53B80)
			v10 = v9;
		v11 = dword_140C53B90[v10];
		v12 = dword_140C53BE0;
		v13 = fmaxf(v11, *(float*)(a1 + 1136));
		if (v9 < dword_140C53BE0)
			v12 = v9;
		v14 = fminf(dword_140C53BF0[v12], v13);
		*((_QWORD*)&v89 + 1) = a1 + 1104;
		*(float*)&v88 = v14;
		v15 = v88;
		*(float*)(a1 + 1136) = v14;
		v90 = v15;
		v91 = v89;
		sub_1401B0840((int*)&v90, a1 + 1040);
	}
	v16 = 0i64;
	if (*(_QWORD*)(a1 + 2464))
	{
		do
		{
			sub_1400C4090(*(_QWORD*)(*(_QWORD*)(a1 + 2456) + 8 * v16) + 72i64, a2);
			v16 = v17 + 1;
		} while (v16 < v18);
	}
	v97 = *(_QWORD*)(a1 + 2688);
	if (v97 && (unsigned int)dword_140C636A8 >= *(_DWORD*)(a1 + 2700))
	{
		v19 = 0i64;
		v85 = 0i64;
		do
		{
			v20 = *(__int64**)(*(_QWORD*)(a1 + 2680) + 8 * v19);
			v21 = *v20;
			if (*(_DWORD*)(*v20 + 64) == 1)
			{
				v22 = *(__int64**)v21;
				v23 = *(int*)(v21 + 488);
				*(_QWORD*)&v90 = 0i64;
				v24 = *v22;
				LODWORD(v22) = *(unsigned __int8*)(v21 + 68);
				BYTE8(v90) = 0;
				v25 = (_DWORD)v22 == *(_DWORD*)(v24 + 20);
				v91 = 0ui64;
				v92 = 0i64;
				v93 = 0i64;
				v94 = 0i64;
				v95 = 0i64;
				v96 = 0i64;
				if (v25)
				{
					*(_DWORD*)(v21 + 64) = 3;
					v26 = *(__m128i**)(32 * v23 + a1 + 1992);
				}
				else
				{
					*(_DWORD*)(v21 + 64) = 2;
					v26 = *(__m128i**)(32 * (v23 + 62) + a1);
				}
				sub_14010B330(&v90, *(_QWORD*)(a1 + 32), v26, L"PrimalMatrixNode");
				sub_1400C3730(v21 + 72, (__int64)&v90);
				v27 = *(__int64**)(***(_QWORD***)(*(_QWORD*)(a1 + 2680) + 8 * v19) + 56i64);
				if (v27)
				{
					v28 = *v27;
					v29 = (*(__int64(__fastcall**)(__int64))(a1 + 2536))(v28);
					v30 = *(_QWORD**)(*(_QWORD*)(a1 + 2528) + 8 * (v29 % *(_QWORD*)(a1 + 2520)));
					if (v30)
					{
						while (v29 != *v30 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2544))(v28, v30 + 2))
						{
							v30 = (_QWORD*)v30[1];
							if (!v30)
								goto LABEL_34;
						}
						v31 = (_DWORD**)(v30 + 3);
						if (v31)
						{
							v32 = *v31;
							sub_1406E51A0(a1, v32);
							if (v32[16] == 2)
								sub_14010B100((unsigned int*)(a1 + 2760));
						}
					}
				LABEL_34:
					v19 = v85;
				}
				v33 = 0i64;
				v34 = 6i64;
				do
				{
					v35 = *(_QWORD**)(***(_QWORD***)(*(_QWORD*)(a1 + 2680) + 8 * v19) + v33 + 8);
					if (v35)
					{
						v36 = *v35;
						v37 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2440))(*v35);
						v38 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v37 % *(_QWORD*)(a1 + 2424)));
						if (v38)
						{
							while (v37 != *v38 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v36, v38 + 2))
							{
								v38 = (_QWORD*)v38[1];
								if (!v38)
									goto LABEL_45;
							}
							v39 = v38 + 3;
							if (v39)
							{
								v40 = *v39;
								if (!*(_DWORD*)(v40 + 64))
								{
									*(_DWORD*)(v40 + 64) = 1;
									v41 = *(_QWORD*)(a1 + 32);
									v42 = *(__m128i**)(32i64 * *(int*)(v40 + 488) + a1 + 1976);
									*(_QWORD*)&v90 = 0i64;
									BYTE8(v90) = 0;
									v91 = 0ui64;
									v92 = 0i64;
									v93 = 0i64;
									v94 = 0i64;
									v95 = 0i64;
									v96 = 0i64;
									sub_14010B330(&v90, v41, v42, L"PrimalMatrixNode");
									sub_1400C3730(v40 + 72, (__int64)&v90);
								}
							}
						}
					LABEL_45:
						v19 = v85;
					}
					v33 += 8i64;
					--v34;
				} while (v34);
			}
			v43 = *(__int64***)(*(_QWORD*)(*(_QWORD*)(a1 + 2680) + 8 * v19) + 8i64);
			if (*((_DWORD*)v43 + 16) == 1)
			{
				v44 = *((unsigned __int8*)v43 + 68);
				v45 = *((int*)v43 + 122);
				v46 = **v43;
				*(_QWORD*)&v90 = 0i64;
				BYTE8(v90) = 0;
				v25 = v44 == *(_DWORD*)(v46 + 20);
				v91 = 0ui64;
				v92 = 0i64;
				v93 = 0i64;
				v94 = 0i64;
				v95 = 0i64;
				v96 = 0i64;
				if (v25)
				{
					*((_DWORD*)v43 + 16) = 3;
					v47 = *(__m128i**)(32 * v45 + a1 + 1992);
				}
				else
				{
					*((_DWORD*)v43 + 16) = 2;
					v47 = *(__m128i**)(32 * (v45 + 62) + a1);
				}
				sub_14010B330(&v90, *(_QWORD*)(a1 + 32), v47, L"PrimalMatrixNode");
				sub_1400C3730((__int64)(v43 + 9), (__int64)&v90);
				v48 = *(__int64**)(**(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 2680) + 8 * v19) + 8i64) + 56i64);
				if (v48)
				{
					v49 = *v48;
					v50 = (*(__int64(__fastcall**)(__int64))(a1 + 2536))(v49);
					v51 = *(_QWORD**)(*(_QWORD*)(a1 + 2528) + 8 * (v50 % *(_QWORD*)(a1 + 2520)));
					if (v51)
					{
						while (v50 != *v51 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2544))(v49, v51 + 2))
						{
							v51 = (_QWORD*)v51[1];
							if (!v51)
								goto LABEL_64;
						}
						v52 = (_DWORD**)(v51 + 3);
						if (v52)
						{
							v53 = *v52;
							sub_1406E51A0(a1, v53);
							if (v53[16] == 2)
							{
								v54 = *(unsigned int*)(a1 + 2760);
								if ((int)v54 >= 0)
								{
									v55 = *(_QWORD*)(qword_140C63650 + 1832);
									if (v55)
										(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v55 + 16i64))(
											v55,
											v54,
											0i64,
											0i64,
											0i64,
											0i64,
											0i64);
								}
								else if (*(_QWORD*)(a1 + 2776) != *(_QWORD*)(a1 + 2784))
								{
									sub_1400E2370(qword_140C63650, *(_QWORD*)(a1 + 2776));
								}
							}
						}
					}
				LABEL_64:
					v19 = v85;
				}
				v56 = 6i64;
				v57 = 0i64;
				v86 = 0i64;
				v87 = 6i64;
				do
				{
					v58 = *(_QWORD**)(**(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 2680) + 8 * v19) + 8i64) + v57 + 8);
					if (v58)
					{
						v59 = *v58;
						v60 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2440))(*v58);
						v61 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v60 % *(_QWORD*)(a1 + 2424)));
						if (v61)
						{
							while (v60 != *v61 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v59, v61 + 2))
							{
								v61 = (_QWORD*)v61[1];
								if (!v61)
									goto LABEL_83;
							}
							v62 = v61 + 3;
							if (v62)
							{
								v63 = *v62;
								if (!*(_DWORD*)(v63 + 64))
								{
									*(_DWORD*)(v63 + 64) = 1;
									v64 = *(_QWORD*)(a1 + 32);
									v65 = *(__m128i**)(32i64 * *(int*)(v63 + 488) + a1 + 1976);
									*(_QWORD*)&v90 = 0i64;
									BYTE8(v90) = 0;
									v91 = 0ui64;
									v92 = 0i64;
									v93 = 0i64;
									v94 = 0i64;
									v95 = 0i64;
									v96 = 0i64;
									sub_14010B330(&v90, v64, v65, L"PrimalMatrixNode");
									v66 = v63 + 72;
									v67 = (_QWORD*)(v63 + 72);
									v68 = &v91;
									v69 = 6i64;
									do
									{
										v70 = *(void(__fastcall****)(_QWORD))v68;
										if (*(_QWORD*)v68 != *v67)
										{
											if (v70)
												(**v70)(*(_QWORD*)v68);
											if (*v67)
											{
												(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v67 + 8i64))(*v67);
												*v67 = 0i64;
											}
											*v67 = v70;
										}
										v68 = (__int128*)((char*)v68 + 8);
										v67 += 6;
										--v69;
									} while (v69);
									*(_QWORD*)(v66 + 288) = v96;
									sub_1400C3AD0(v66, (_DWORD*)(v66 + 336));
									v57 = v86;
									v56 = v87;
								}
							}
						}
					LABEL_83:
						v19 = v85;
					}
					v57 += 8i64;
					v87 = --v56;
					v86 = v57;
				} while (v56);
			}
			v85 = ++v19;
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2680) + 8 * v19 - 8) + 24i64) = 1;
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2680) + 8 * v19 - 8) + 36i64) = 0;
		} while (v19 < v97);
		*(_QWORD*)(a1 + 2688) = 0i64;
		v71 = *(__int64***)(a1 + 2640);
		*(_DWORD*)(a1 + 2700) = 0;
		if (v71)
			sub_1406E66A0(a1, v71);
	}
	sub_1406E2EB0(a1);
	if (*(float*)(a1 + 648) > 0.0)
	{
		v72 = *(_QWORD*)(a1 + 16);
		if (!v72 || sub_1400D1A60(v72))
		{
			v73 = qword_140C63628;
			v74 = *(_QWORD*)(qword_140C63628 + 296);
			if (v74)
				sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v74);
			*(_DWORD*)(v73 + 576) = 0;
			LODWORD(v86) = 175;
			v75 = (*(__int64(__fastcall**)(__int64*))(v73 + 664))(&v86);
			v76 = *(_QWORD**)(*(_QWORD*)(v73 + 656) + 8 * (v75 % *(_QWORD*)(v73 + 648)));
			if (!v76)
				goto LABEL_100;
			while (v75 != *v76 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v73 + 672))(&v86, v76 + 2))
			{
				v76 = (_QWORD*)v76[1];
				if (!v76)
					goto LABEL_100;
			}
			v77 = (unsigned int*)v76 + 5;
			if (!v77 || (v78 = *v77, HIDWORD(v97) = v77[1], v77[2] != 6))
				LABEL_100:
			v78 = 0;
			if ((dword_140C8CD58 & 0x80u) == 0)
			{
				dword_140C8CD58 |= 0x80u;
				sub_1401AD620((__int64)&unk_140C8D540, L"ZoneKit 7 StoreMusic");
			}
			sub_1401ADA40((__int64)&unk_140C8D540, v78);
			if (*(__int64*)(v73 + 296) <= 7)
			{
				do
				{
					v79 = *(_QWORD*)(v73 + 296);
					v80 = v79 + 1;
					v81 = sub_14018DB00(*(_QWORD*)(v73 + 288), v79 + 1, 8i64);
					v82 = v81;
					*(_QWORD*)&v81[2 * v79] = 0i64;
					v83 = *(int**)(v73 + 288);
					if (v83 != v81)
					{
						sub_1407DB590(v81, v83, 8i64 * *(_QWORD*)(v73 + 296));
						v84 = *(_QWORD*)(v73 + 288);
						if (v84)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v84 - 16) + 8i64))(v84 - 16);
						*(_QWORD*)(v73 + 288) = v82;
					}
					*(_QWORD*)(v73 + 296) = v80;
				} while (v80 <= 7);
			}
			if (v78)
			{
				if ((unsigned __int64)v78 < *(_QWORD*)(v73 + 192))
					v6 = *(_QWORD*)(*(_QWORD*)(v73 + 184) + 8i64 * v78);
			}
			*(_QWORD*)(*(_QWORD*)(v73 + 288) + 56i64) = v6;
		}
	}
}
// 1406E2718: conditional instruction was optimized away because rcx.8!=0
// 1406E26B7: variable 'v17' is possibly undefined
// 1406E26BD: variable 'v18' is possibly undefined
// 140A14360: using guessed type wchar_t aZonekit7Storem[21];
// 140B3ED00: using guessed type wchar_t aPrimalmatrixno_1[17];
// 140C53B20: using guessed type int dword_140C53B20;
// 140C53B30: using guessed type float dword_140C53B30[16];
// 140C53B80: using guessed type int dword_140C53B80;
// 140C53B90: using guessed type float dword_140C53B90[16];
// 140C53BE0: using guessed type int dword_140C53BE0;
// 140C53BF0: using guessed type float dword_140C53BF0[16];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CD58: using guessed type int dword_140C8CD58;

