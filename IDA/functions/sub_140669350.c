//----- (0000000140669350) ----------------------------------------------------
__int64 __fastcall sub_140669350(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebx
	__int64 v6; // rax
	__int64* v7; // r14
	int v8; // eax
	__int64 v9; // r15
	unsigned int v10; // r13d
	int* v11; // rax
	__int64 v12; // rbx
	unsigned int v13; // ecx
	unsigned int v14; // esi
	__int64 v15; // rcx
	__int64 v16; // rcx
	int v17; // eax
	unsigned int v18; // esi
	__int64 v19; // r14
	unsigned int v20; // eax
	__int64 v21; // r14
	__int64 v22; // rbx
	unsigned __int64 v23; // r14
	unsigned int v24; // r13d
	__int64 v25; // rsi
	__int64 v26; // rbx
	unsigned int* v27; // rax
	unsigned int* v28; // r15
	int* v29; // rax
	__int64 v30; // rcx
	unsigned __int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	int v34; // eax
	__int64 v35; // rdx
	int v36; // r12d
	unsigned __int64 v37; // rcx
	__int64 v38; // rsi
	__int64 v39; // rbx
	__int64 v40; // rax
	int v41; // r14d
	__int64 v42; // rbx
	__int64 v43; // rdx
	__int64 v44; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v47; // ebx
	_QWORD* v48; // rax
	__int64 v49; // rdx
	int v50; // r10d
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	int v54; // r11d
	__int64 v55; // rdx
	__int64 v56; // r10
	int v57; // r11d
	__int64 v58; // rcx
	unsigned int* v59; // r12
	__int64 v60; // rbx
	unsigned int* v61; // rax
	unsigned int* v62; // r15
	__int64 v63; // rcx
	unsigned __int64 v64; // rax
	__int64 v65; // rbx
	__int64 v66; // rax
	int v67; // eax
	__int64 v68; // rdx
	int v69; // r13d
	unsigned __int64 v70; // rcx
	__int64 v71; // rsi
	__int64 v72; // rbx
	__int64 v73; // rax
	int v74; // r14d
	__int64 v75; // rbx
	__int64 v76; // rdx
	__int64 v77; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v80; // ebx
	_QWORD* v81; // rax
	__int64 v82; // rdx
	int v83; // r10d
	_QWORD* v84; // rax
	__int64 v85; // r10
	__int64 v86; // rdx
	int v87; // r11d
	__int64 v88; // rdx
	_QWORD* v89; // rax
	__int64 v90; // rdx
	_QWORD* v91; // rax
	__int64 v92; // r8
	char v94[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v95; // [rsp+28h] [rbp-D8h]
	__int64 v96; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v97)(); // [rsp+40h] [rbp-C0h] BYREF
	int v98; // [rsp+48h] [rbp-B8h]
	_QWORD* v99; // [rsp+50h] [rbp-B0h]
	int v100; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v101)(); // [rsp+60h] [rbp-A0h] BYREF
	int v102; // [rsp+68h] [rbp-98h]
	_QWORD* v103; // [rsp+70h] [rbp-90h]
	int v104; // [rsp+78h] [rbp-88h]
	__int64 v105; // [rsp+80h] [rbp-80h] BYREF
	unsigned __int64 v106; // [rsp+88h] [rbp-78h]
	__int64 v107; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v108)(); // [rsp+98h] [rbp-68h] BYREF
	int v109; // [rsp+A0h] [rbp-60h]
	__int64 v110; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v111)(); // [rsp+B8h] [rbp-48h] BYREF
	int v112; // [rsp+C0h] [rbp-40h]
	_QWORD* v113; // [rsp+C8h] [rbp-38h]
	int v114; // [rsp+D0h] [rbp-30h]
	__m128 v115; // [rsp+E0h] [rbp-20h] BYREF
	__m128 v116; // [rsp+F0h] [rbp-10h] BYREF
	char v117[8]; // [rsp+100h] [rbp+0h] BYREF
	int v118; // [rsp+108h] [rbp+8h]
	__int64 v119; // [rsp+110h] [rbp+10h]
	__m128 v120; // [rsp+120h] [rbp+20h] BYREF
	__m128 v121; // [rsp+130h] [rbp+30h] BYREF
	unsigned int v122[4]; // [rsp+140h] [rbp+40h] BYREF
	int* v123; // [rsp+150h] [rbp+50h]
	int* v124; // [rsp+158h] [rbp+58h]
	int* v125; // [rsp+160h] [rbp+60h]
	int v126; // [rsp+170h] [rbp+70h]
	unsigned int v127; // [rsp+1D0h] [rbp+D0h]
	__int64 v128; // [rsp+1D8h] [rbp+D8h]
	__int64* v129; // [rsp+1E0h] [rbp+E0h]

	v1 = (_QWORD*)a1;
	v113 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v111 = off_140B569F0;
	v114 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v112 = v5;
	v6 = sub_140056AB0(v1, 1u);
	v7 = (__int64*)v6;
	v129 = (__int64*)v6;
	if (!v6 || !*(_QWORD*)v6)
	{
		v91 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v92 = v1[2];
		*(_QWORD*)v92 = *v91;
		v90 = *((unsigned int*)v91 + 2);
		*(_DWORD*)(v92 + 8) = v90;
		goto LABEL_114;
	}
	v8 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v6 + 8i64));
	v9 = v8;
	v10 = 0;
	v127 = 0;
	v107 = v8;
	do
	{
		v11 = sub_14018B280(16i64, 0);
		v123 = v11;
		v124 = v11;
		v125 = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		v12 = *v7;
		v13 = *(_DWORD*)(*v7 + 16);
		if (v10 <= v13)
		{
			if (v10 == v13)
			{
				if ((*(_BYTE*)(*(_QWORD*)(v12 + 8) + 12i64) & 2) != 0)
					goto LABEL_40;
				v14 = 0;
				if (!v13)
				{
				LABEL_16:
					sub_1405519F0(v12, v10, v122);
					goto LABEL_40;
				}
				while (1)
				{
					v15 = *(_QWORD*)(v12 + 8i64 * v14 + 24);
					if (*(_DWORD*)(v15 + 4))
					{
						if ((*(_BYTE*)(v15 + 8) & 8) == 0 && !(unsigned int)sub_140550F70(v12, v14, 1))
							break;
					}
					if (++v14 >= *(_DWORD*)(v12 + 16))
						goto LABEL_16;
				}
			}
			else
			{
				v16 = *(_QWORD*)(v12 + 8i64 * v10 + 24);
				if (v16)
				{
					if (*(_DWORD*)(v16 + 4))
					{
						v17 = *(_DWORD*)(v16 + 8);
						if ((v17 & 8) == 0)
						{
							if ((v17 & 1) == 0)
								goto LABEL_16;
							v18 = 0;
							if ((v17 & 2) != 0)
							{
								if (!v10)
									goto LABEL_16;
								v19 = v12 + 24;
								while (1)
								{
									v20 = *(_DWORD*)(v12 + 16);
									if (v18 != v20
										&& v18 <= v20
										&& *(_QWORD*)v19
										&& (*(_DWORD*)(*(_QWORD*)v19 + 8i64) & 0x20) == 0
										&& !(unsigned int)sub_1405510D0(v12, v18))
									{
										break;
									}
									++v18;
									v19 += 8i64;
									if (v18 >= v10)
										goto LABEL_37;
								}
							}
							else
							{
								if (!v10)
									goto LABEL_16;
								v21 = v12 + 24;
								while (!*(_DWORD*)(*(_QWORD*)v21 + 4i64)
									|| (*(_BYTE*)(*(_QWORD*)v21 + 8i64) & 8) != 0
									|| (unsigned int)sub_140550F70(v12, v18, 1))
								{
									++v18;
									v21 += 8i64;
									if (v18 >= v10)
									{
									LABEL_37:
										v7 = v129;
										goto LABEL_16;
									}
								}
							}
							v7 = v129;
						}
					}
				}
			}
		}
	LABEL_40:
		v22 = *v7;
		if (!(unsigned int)sub_1405510D0(*v7, v10))
			sub_140553790(v22, v10);
		if (v9 == 2 && v126)
		{
			sub_14054F5E0(*v7, &v105);
			v23 = v106;
			v24 = 0;
			if (v106)
			{
				v25 = v105;
				v26 = 0i64;
				do
				{
					if (sub_1403F8270(qword_140C65898, *(_DWORD*)(v25 + 4 * v26), 0))
					{
						v27 = (unsigned int*)sub_14024B980(*(_DWORD*)(v25 + 4 * v26));
						v28 = v27;
						if (v27)
						{
							v116 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)v27[3], (__m128)v27[5]),
								_mm_unpacklo_ps((__m128)v27[4], (__m128)0i64));
							v29 = sub_14018B280(40i64, 0);
							v96 = 0i64;
							v95 = v29;
							*(_BYTE*)v29 = 0;
							*((_QWORD*)v95 + 1) = 0i64;
							*((_QWORD*)v95 + 2) = v95;
							*((_QWORD*)v95 + 3) = v95;
							sub_140449B10(&v116, COERCE_DOUBLE((unsigned __int64)v28[1]), (__int64)v94);
							if (v96)
							{
								v30 = v1[4];
								v103 = v1;
								v31 = *(_QWORD*)(v30 + 112);
								v101 = off_140B569F0;
								v104 = 1;
								if (*(_QWORD*)(v30 + 120) >= v31)
									sub_14005E2C0((__int64)v1);
								v32 = v1[2];
								v33 = sub_14005C1B0((__int64)v1, 0, 0);
								*(_DWORD*)(v32 + 8) = 5;
								*(_QWORD*)v32 = v33;
								v1[2] += 16i64;
								v34 = sub_1400578C0((__int64)v1);
								v35 = v1[4];
								v97 = off_140B569F0;
								v36 = v34;
								v37 = *(_QWORD*)(v35 + 112);
								v102 = v34;
								v38 = (__int64)v1;
								v99 = v1;
								v100 = 1;
								if (*(_QWORD*)(v35 + 120) >= v37)
									sub_14005E2C0((__int64)v1);
								v39 = v1[2];
								v40 = sub_14005C1B0((__int64)v1, 0, 0);
								*(_DWORD*)(v39 + 8) = 5;
								*(_QWORD*)v39 = v40;
								v1[2] += 16i64;
								v41 = sub_1400578C0((__int64)v1);
								v98 = v41;
								v42 = *((_QWORD*)v95 + 2);
								if ((int*)v42 != v95)
								{
									do
									{
										v121 = _mm_cvtepi32_ps(
											_mm_unpacklo_epi32(
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v42 + 32)), _mm_cvtsi32_si128(0)),
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v42 + 36)), _mm_cvtsi32_si128(0))));
										sub_1400FA180((__int64)&v108, (__int64)v1, v121.m128_f32);
										sub_1400FB1D0((__int64)&v97);
										v108 = off_140B56A08;
										if (v110)
											sub_1400579E0(v110, v43, v109);
										v44 = *(_QWORD*)(v42 + 24);
										if (v44)
										{
											v42 = *(_QWORD*)(v42 + 24);
											for (i = *(_QWORD*)(v44 + 16); i; i = *(_QWORD*)(i + 16))
												v42 = i;
										}
										else
										{
											for (j = *(_QWORD*)(v42 + 8); v42 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
												v42 = j;
											if (*(_QWORD*)(v42 + 24) != j)
												v42 = j;
										}
									} while ((int*)v42 != v95);
									v38 = (__int64)v99;
									v41 = v98;
									v36 = v102;
								}
								sub_1400FB2A0((__int64)&v101, (__int64)L"tRegions", v41);
								sub_1400FA3C0((__int64)v117, (__int64)v1, v116.m128_f32);
								v47 = v118;
								sub_1400FB2A0((__int64)&v101, (__int64)L"tIndicator", v118);
								v48 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v36);
								v49 = v1[2];
								*(_QWORD*)v49 = *v48;
								*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
								v1[2] += 16i64;
								sub_1400F06F0((__int64)v1, v49, L"nWorldZoneId", v50);
								v1[2] -= 16i64;
								v51 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v36);
								*(_QWORD*)v52 = *v51;
								*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
								v1[2] += 16i64;
								sub_1400F06F0((__int64)v1, v53, L"nWorldId", v54);
								v1[2] -= 16i64;
								sub_1400FB1D0((__int64)&v111);
								if (v119)
									sub_1400579E0(v119, v55, v47);
								if (v38)
									sub_1400579E0(v38, v55, v41);
								sub_1400579E0((__int64)v1, v55, v36);
								v25 = v105;
								v23 = v106;
							}
							sub_140008410((__int64)v94);
							sub_14018B900((__int64)v95, 0);
						}
					}
					v26 = ++v24;
				} while (v24 < v23);
			}
			if (v105)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v105 - 16) + 8i64))(v105 - 16);
		LABEL_108:
			v10 = v127;
			v7 = v129;
			goto LABEL_109;
		}
		if ((unsigned int)sub_140552F50(*v7))
		{
			if (v57)
			{
				if (v10 < *(_DWORD*)(v56 + 16))
				{
					v58 = *(_QWORD*)(v56 + 8i64 * v10 + 24);
					if (v58)
					{
						v59 = (unsigned int*)(v58 + 24);
						if (v58 != -24)
						{
							v60 = 4i64;
							v128 = 4i64;
							do
							{
								if (sub_1403F8270(qword_140C65898, *v59, 0))
								{
									v61 = (unsigned int*)sub_14024B980(*v59);
									v62 = v61;
									if (v61)
									{
										v115 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)v61[3], (__m128)v61[5]),
											_mm_unpacklo_ps((__m128)v61[4], (__m128)0i64));
										v95 = sub_14018B280(40i64, 0);
										v96 = 0i64;
										*(_BYTE*)v95 = 0;
										*((_QWORD*)v95 + 1) = 0i64;
										*((_QWORD*)v95 + 2) = v95;
										*((_QWORD*)v95 + 3) = v95;
										sub_140449B10(&v115, COERCE_DOUBLE((unsigned __int64)v62[1]), (__int64)v94);
										if (v96)
										{
											v63 = v1[4];
											v99 = v1;
											v64 = *(_QWORD*)(v63 + 112);
											v97 = off_140B569F0;
											v100 = 1;
											if (*(_QWORD*)(v63 + 120) >= v64)
												sub_14005E2C0((__int64)v1);
											v65 = v1[2];
											v66 = sub_14005C1B0((__int64)v1, 0, 0);
											*(_DWORD*)(v65 + 8) = 5;
											*(_QWORD*)v65 = v66;
											v1[2] += 16i64;
											v67 = sub_1400578C0((__int64)v1);
											v68 = v1[4];
											v101 = off_140B569F0;
											v69 = v67;
											v70 = *(_QWORD*)(v68 + 112);
											v98 = v67;
											v71 = (__int64)v1;
											v103 = v1;
											v104 = 1;
											if (*(_QWORD*)(v68 + 120) >= v70)
												sub_14005E2C0((__int64)v1);
											v72 = v1[2];
											v73 = sub_14005C1B0((__int64)v1, 0, 0);
											*(_DWORD*)(v72 + 8) = 5;
											*(_QWORD*)v72 = v73;
											v1[2] += 16i64;
											v74 = sub_1400578C0((__int64)v1);
											v102 = v74;
											v75 = *((_QWORD*)v95 + 2);
											if ((int*)v75 != v95)
											{
												do
												{
													v120 = _mm_cvtepi32_ps(
														_mm_unpacklo_epi32(
															_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v75 + 32)), _mm_cvtsi32_si128(0)),
															_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v75 + 36)), _mm_cvtsi32_si128(0))));
													sub_1400FA180((__int64)&v108, (__int64)v1, v120.m128_f32);
													sub_1400FB1D0((__int64)&v101);
													v108 = off_140B56A08;
													if (v110)
														sub_1400579E0(v110, v76, v109);
													v77 = *(_QWORD*)(v75 + 24);
													if (v77)
													{
														v75 = *(_QWORD*)(v75 + 24);
														for (k = *(_QWORD*)(v77 + 16); k; k = *(_QWORD*)(k + 16))
															v75 = k;
													}
													else
													{
														for (m = *(_QWORD*)(v75 + 8); v75 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
															v75 = m;
														if (*(_QWORD*)(v75 + 24) != m)
															v75 = m;
													}
												} while ((int*)v75 != v95);
												v71 = (__int64)v103;
												v74 = v102;
												v69 = v98;
											}
											sub_1400FB2A0((__int64)&v97, (__int64)L"tRegions", v74);
											sub_1400FA3C0((__int64)v117, (__int64)v1, v115.m128_f32);
											v80 = v118;
											sub_1400FB2A0((__int64)&v97, (__int64)L"tIndicator", v118);
											v81 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v69);
											v82 = v1[2];
											*(_QWORD*)v82 = *v81;
											*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
											v1[2] += 16i64;
											sub_1400F06F0((__int64)v1, v82, L"nWorldZoneId", v83);
											v1[2] -= 16i64;
											v84 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v69);
											*(_QWORD*)v85 = *v84;
											*(_DWORD*)(v85 + 8) = *((_DWORD*)v84 + 2);
											v1[2] += 16i64;
											sub_1400F06F0((__int64)v1, v86, L"nWorldId", v87);
											v1[2] -= 16i64;
											sub_1400FB1D0((__int64)&v111);
											if (v119)
												sub_1400579E0(v119, v88, v80);
											if (v71)
												sub_1400579E0(v71, v88, v74);
											sub_1400579E0((__int64)v1, v88, v69);
											v60 = v128;
										}
										sub_140008410((__int64)v94);
										sub_14018B900((__int64)v95, 0);
									}
								}
								++v59;
								v128 = --v60;
							} while (v60);
							goto LABEL_108;
						}
					}
				}
			}
		}
	LABEL_109:
		if (v123)
			sub_14018B900((__int64)v123, 0);
		v9 = v107;
		v127 = ++v10;
	} while (v10 <= *(_DWORD*)(*v7 + 16));
	v1 = v113;
	v5 = v112;
	v89 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v112);
	v90 = v1[2];
	*(_QWORD*)v90 = *v89;
	*(_DWORD*)(v90 + 8) = *((_DWORD*)v89 + 2);
LABEL_114:
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v90, v5);
	return 1i64;
}
// 1406697E5: variable 'v43' is possibly undefined
// 1406698CA: variable 'v50' is possibly undefined
// 1406698FC: variable 'v52' is possibly undefined
// 14066990E: variable 'v53' is possibly undefined
// 14066990E: variable 'v54' is possibly undefined
// 140669930: variable 'v55' is possibly undefined
// 1406699B3: variable 'v57' is possibly undefined
// 1406699B9: variable 'v56' is possibly undefined
// 140669BC5: variable 'v76' is possibly undefined
// 140669CAA: variable 'v83' is possibly undefined
// 140669CDC: variable 'v85' is possibly undefined
// 140669CEE: variable 'v86' is possibly undefined
// 140669CEE: variable 'v87' is possibly undefined
// 140669D10: variable 'v88' is possibly undefined
// 140B2EB58: using guessed type wchar_t aNworldid_2[9];
// 140B2EB70: using guessed type wchar_t aTindicator_0[11];
// 140B2EB88: using guessed type wchar_t aNworldzoneid_0[13];
// 140B2EBA8: using guessed type wchar_t aNworldid_1[9];
// 140B2EBC0: using guessed type wchar_t aTregions_0[9];
// 140B2EBD8: using guessed type wchar_t aTindicator[11];
// 140B2EBF0: using guessed type wchar_t aNworldzoneid[13];
// 140B2EC10: using guessed type wchar_t aTregions[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140669350: using guessed type unsigned int var_80[4];
// 140669350: using guessed type char var_1A0[8];
// 140669350: using guessed type char var_C0[8];

