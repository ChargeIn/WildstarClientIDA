//----- (00000001401E6BF0) ----------------------------------------------------
__int64 __fastcall sub_1401E6BF0(__int64 a1)
{
	__int64 v2; // rcx
	float v3; // xmm6_4
	unsigned __int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rsi
	unsigned __int64 v7; // r8
	__int64 v8; // rbx
	__int64 v9; // r12
	__int64 v10; // r13
	_WORD* v11; // rax
	__m128i* v12; // rcx
	__int64 v13; // rax
	__int64 result; // rax
	__int64 v15; // rbx
	__int64 v16; // r14
	unsigned __int64 v17; // rcx
	_WORD* v18; // rax
	__m128i* v19; // rcx
	__int64 v20; // rax
	int v21; // esi
	__int64 v22; // rbx
	__int64 v23; // rdx
	__int64 v24; // rbx
	double v25; // xmm0_8
	__int64 v26; // rax
	__int64(__fastcall * v27)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v28; // ebx
	__int64 v29; // rax
	__int64 v30; // rbx
	unsigned int v31; // esi
	__int64 v32; // rax
	__int64 v33; // rcx
	float v34; // xmm1_4
	float v35; // xmm0_4
	__int64 v36; // rcx
	__int64 v37; // r8
	__int64 v38; // r9
	unsigned __int64 v39; // r8
	_WORD* v40; // rax
	unsigned __int64 v41; // rax
	__m128i* v42; // rcx
	__int64 v43; // rax
	unsigned __int64 v44; // rcx
	_WORD* v45; // rax
	__m128i* v46; // rcx
	__int64 v47; // rax
	int v48; // ebx
	__int64 v49; // rdx
	__int64 v50; // rbx
	double v51; // xmm0_8
	__int64 v52; // rax
	__int64(__fastcall * v53)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v54; // ebx
	__int64 v55; // rax
	__int64 v56; // rbx
	unsigned int v57; // esi
	__int64 v58; // rax
	__int64 v59; // rcx
	float v60; // xmm0_4
	__int64 v61; // rcx
	__int64 v62; // r8
	signed int* v63; // r10
	__int64 v64; // r13
	__int64 v65; // r12
	unsigned __int64 v66; // r8
	_WORD* v67; // rax
	__m128i* v68; // rcx
	__int64 v69; // rax
	__int64 v70; // rsi
	__int64 v71; // rbx
	__int64 v72; // r14
	unsigned __int64 v73; // rcx
	_WORD* v74; // rax
	__m128i* v75; // rcx
	__int64 v76; // rax
	__int64 v77; // rbx
	double v78; // xmm0_8
	__int64 v79; // rax
	__int64 v80; // rbx
	__int64 v81; // rax
	__int64 v82; // r8
	signed int* v83; // r10
	__int64 v84; // r9
	unsigned __int64 v85; // r8
	_WORD* v86; // rax
	unsigned __int64 v87; // rax
	__m128i* v88; // rcx
	__int64 v89; // rax
	__int64 v90; // r15
	__int64 v91; // rbx
	unsigned __int64 v92; // rcx
	_WORD* v93; // rax
	__m128i* v94; // rcx
	__int64 v95; // rax
	__int64 v96; // rbx
	double v97; // xmm0_8
	__int64 v98; // rax
	__int64 v99; // rbx
	__int64 v100; // rax
	__int64 v101; // rcx
	__int64 v102; // rcx
	int v103; // eax
	unsigned __int64 v104; // rcx
	_WORD* v105; // rax
	__m128i* v106; // rcx
	__int64 v107; // rax
	__int64 v108; // rsi
	__int64 v109; // rbx
	unsigned __int64 v110; // rcx
	_WORD* v111; // rax
	__m128i* v112; // rcx
	__int64 v113; // rax
	__int64 v114; // rbx
	double v115; // xmm0_8
	int v116; // [rsp+20h] [rbp-40h] BYREF
	int v117; // [rsp+24h] [rbp-3Ch]
	__int64 v118; // [rsp+28h] [rbp-38h]
	int v119; // [rsp+30h] [rbp-30h]
	__int64 v120; // [rsp+34h] [rbp-2Ch]
	int v121; // [rsp+3Ch] [rbp-24h]
	float v122; // [rsp+90h] [rbp+30h] BYREF
	float v123; // [rsp+94h] [rbp+34h]

	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v3 = -1.0;
	v4 = qword_140C3FE70;
	v5 = qword_140C3FE68;
	v6 = 56i64;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24i64);
	v8 = 2i64;
	v9 = 40i64;
	v10 = 216i64;
	if (v7 && v7 <= qword_140C3FE70 && v7 + qword_140C3FE68)
	{
		v11 = v7 <= qword_140C3FE70 ? (_WORD*)(v7 + qword_140C3FE68) : 0i64;
		if (*v11)
		{
			if (v7 > qword_140C3FE70)
				return 2147943568i64;
			v12 = (__m128i*)(v7 + qword_140C3FE68);
			if (!(v7 + qword_140C3FE68))
				return 2147943568i64;
			if (!v12->m128i_i16[0])
				return 2147943568i64;
			v13 = sub_1401DD6D0(v12, 32, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64), *(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
			if (!v13)
				return 2147943568i64;
			result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 280i64)
				+ 40i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
					v13,
					a1 + 48,
					8i64);
			if ((int)result < 0)
				return result;
			v15 = 40i64;
			v16 = 2i64;
			do
			{
				v17 = *(_QWORD*)(v15 + *(_QWORD*)(a1 + 24));
				if (v17)
				{
					if (v17 <= qword_140C3FE70)
						v18 = (_WORD*)(v17 + qword_140C3FE68);
					else
						v18 = 0i64;
				}
				else
				{
					v18 = 0i64;
				}
				if (*v18)
				{
					if (v17)
					{
						if (v17 <= qword_140C3FE70)
						{
							v19 = (__m128i*)(qword_140C3FE68 + v17);
							if (v19)
							{
								if (v19->m128i_i16[0])
								{
									v20 = sub_1401DD6D0(
										v19,
										32,
										*(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64),
										*(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
									if (v20)
										(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 48) + 784i64))(
											*(_QWORD*)(a1 + 48),
											*(unsigned int*)(v6 + *(_QWORD*)(a1 + 24)),
											v20);
								}
							}
						}
					}
				}
				v15 += 8i64;
				v6 += 4i64;
				--v16;
			} while (v16);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
				*(_QWORD*)(a1 + 48),
				61i64,
				1i64);
			v21 = 0;
			v22 = 216i64;
			do
			{
				v23 = *(unsigned int*)(v22 + *(_QWORD*)(a1 + 24));
				if ((_DWORD)v23 && (int)v23 < 202)
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
						*(_QWORD*)(a1 + 48),
						v23,
						1i64);
				++v21;
				v22 += 4i64;
			} while ((unsigned __int64)v21 < 4);
			v24 = *(_QWORD*)(a1 + 48);
			v25 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
			v116 = 150;
			v118 = 1065353216i64;
			v119 = 0;
			v120 = 128i64;
			v121 = 0;
			v117 = (int)(v25 * 65536.0);
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v24 + 584i64))(v24, 0i64, &v116);
			v26 = *(_QWORD*)(a1 + 24);
			v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			*(_QWORD*)(a1 + 108) = 0i64;
			v28 = *(_DWORD*)(v26 + 260);
			if (v27)
			{
				v29 = v27(off_140A6B630, v28, qword_140C63858);
			}
			else
			{
				if (dword_140C655EC)
				{
					v30 = 0i64;
					goto LABEL_43;
				}
				if ((int)sub_1402160E0() < 0)
				{
					v30 = 0i64;
				LABEL_42:
					v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				LABEL_43:
					v31 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 264i64);
					if (v27)
					{
						v32 = v27(off_140A6B630, v31, qword_140C63858);
					LABEL_50:
						v33 = v32;
						goto LABEL_51;
					}
					if (dword_140C655EC)
					{
						v33 = 0i64;
					}
					else
					{
						if ((int)sub_1402160E0() >= 0)
						{
							v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(
								qword_140C63A78,
								v31);
							goto LABEL_50;
						}
						v33 = 0i64;
					}
				LABEL_51:
					v34 = -1.0;
					v35 = -1.0;
					if (v30)
						v34 = (float)*(int*)(v30 + 4);
					if (v33)
						v35 = (float)*(int*)(v33 + 4);
					v36 = *(_QWORD*)(a1 + 48);
					v122 = v34;
					v123 = v35;
					(*(void(__fastcall**)(__int64, float*))(*(_QWORD*)v36 + 288i64))(v36, &v122);
					v4 = qword_140C3FE70;
					v5 = qword_140C3FE68;
					v6 = 56i64;
					v8 = 2i64;
					goto LABEL_56;
				}
				v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v28);
			}
			v30 = v29;
			goto LABEL_42;
		}
	}
LABEL_56:
	v37 = *(_QWORD*)(a1 + 56);
	if (v37)
	{
		(*(void(__fastcall**)(_QWORD, unsigned __int64))(*(_QWORD*)v37 + 8i64))(*(_QWORD*)(a1 + 56), v4);
		*(_QWORD*)(a1 + 56) = 0i64;
		v4 = qword_140C3FE70;
		v5 = qword_140C3FE68;
	}
	v38 = *(_QWORD*)(a1 + 24);
	v39 = *(_QWORD*)(v38 + 32);
	if (v39 && v39 <= v4 && v39 + v5)
	{
		v40 = 0i64;
		if (v39 <= v4)
			v40 = (_WORD*)(v39 + v5);
		if (*v40)
		{
			v41 = *(_QWORD*)(v38 + 24);
			if (!v41)
				return 2147943568i64;
			if (v41 > v4)
				return 2147943568i64;
			v42 = (__m128i*)(v41 + v5);
			if (!v42)
				return 2147943568i64;
			if (!v42->m128i_i16[0])
				return 2147943568i64;
			v43 = sub_1401DD6D0(v42, 32, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64), *(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
			if (!v43)
				return 2147943568i64;
			result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 280i64)
				+ 40i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
					v43,
					a1 + 56,
					8i64);
			if ((int)result < 0)
				return result;
			do
			{
				v44 = *(_QWORD*)(v9 + *(_QWORD*)(a1 + 24));
				if (v44)
				{
					if (v44 <= qword_140C3FE70)
						v45 = (_WORD*)(v44 + qword_140C3FE68);
					else
						v45 = 0i64;
				}
				else
				{
					v45 = 0i64;
				}
				if (*v45)
				{
					if (v44)
					{
						if (v44 <= qword_140C3FE70)
						{
							v46 = (__m128i*)(qword_140C3FE68 + v44);
							if (v46)
							{
								if (v46->m128i_i16[0])
								{
									v47 = sub_1401DD6D0(
										v46,
										32,
										*(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64),
										*(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
									if (v47)
										(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 784i64))(
											*(_QWORD*)(a1 + 56),
											*(unsigned int*)(v6 + *(_QWORD*)(a1 + 24)),
											v47);
								}
							}
						}
					}
				}
				v9 += 8i64;
				v6 += 4i64;
				--v8;
			} while (v8);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(
				*(_QWORD*)(a1 + 56),
				61i64,
				1i64);
			v48 = 0;
			do
			{
				v49 = *(unsigned int*)(v10 + *(_QWORD*)(a1 + 24));
				if ((_DWORD)v49 && (int)v49 < 202)
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(
						*(_QWORD*)(a1 + 56),
						v49,
						1i64);
				++v48;
				v10 += 4i64;
			} while ((unsigned __int64)v48 < 4);
			v50 = *(_QWORD*)(a1 + 56);
			v51 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
			v116 = 150;
			v118 = 1065353216i64;
			v119 = 0;
			v120 = 128i64;
			v121 = 0;
			v117 = (int)(v51 * 65536.0);
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v50 + 584i64))(v50, 0i64, &v116);
			v52 = *(_QWORD*)(a1 + 24);
			v53 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			*(_QWORD*)(a1 + 108) = 0i64;
			v54 = *(_DWORD*)(v52 + 260);
			if (v53)
			{
				v55 = v53(off_140A6B630, v54, qword_140C63858);
			}
			else
			{
				if (dword_140C655EC)
				{
					v56 = 0i64;
					goto LABEL_98;
				}
				if ((int)sub_1402160E0() < 0)
				{
					v56 = 0i64;
				LABEL_97:
					v53 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				LABEL_98:
					v57 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 264i64);
					if (v53)
					{
						v58 = v53(off_140A6B630, v57, qword_140C63858);
					LABEL_105:
						v59 = v58;
						goto LABEL_106;
					}
					if (dword_140C655EC)
					{
						v59 = 0i64;
					}
					else
					{
						if ((int)sub_1402160E0() >= 0)
						{
							v58 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(
								qword_140C63A78,
								v57);
							goto LABEL_105;
						}
						v59 = 0i64;
					}
				LABEL_106:
					v60 = -1.0;
					if (v56)
						v3 = (float)*(int*)(v56 + 4);
					if (v59)
						v60 = (float)*(int*)(v59 + 4);
					v61 = *(_QWORD*)(a1 + 56);
					v122 = v3;
					v123 = v60;
					(*(void(__fastcall**)(__int64, float*))(*(_QWORD*)v61 + 288i64))(v61, &v122);
					v4 = qword_140C3FE70;
					v5 = qword_140C3FE68;
					goto LABEL_111;
				}
				v55 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v54);
			}
			v56 = v55;
			goto LABEL_97;
		}
	}
LABEL_111:
	v62 = *(_QWORD*)(a1 + 72);
	if (v62)
	{
		(*(void(__fastcall**)(_QWORD, unsigned __int64))(*(_QWORD*)v62 + 8i64))(*(_QWORD*)(a1 + 72), v4);
		*(_QWORD*)(a1 + 72) = 0i64;
		v4 = qword_140C3FE70;
		v5 = qword_140C3FE68;
	}
	v63 = *(signed int**)(a1 + 16);
	v64 = 96i64;
	v65 = 80i64;
	if (v63[717])
	{
		v66 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64i64);
		if (v66)
		{
			if (v66 <= v4 && v66 + v5)
			{
				v67 = 0i64;
				if (v66 <= v4)
					v67 = (_WORD*)(v66 + v5);
				if (*v67)
				{
					if (v66 > v4)
						return 2147943568i64;
					v68 = (__m128i*)(v66 + v5);
					if (!v68)
						return 2147943568i64;
					if (!v68->m128i_i16[0])
						return 2147943568i64;
					v69 = sub_1401DD6D0(v68, 32, v63[9], v63[10]);
					if (!v69)
						return 2147943568i64;
					result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
						+ 280i64)
						+ 40i64))(
							*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
							v69,
							a1 + 72,
							8i64);
					if ((int)result < 0)
						return result;
					v70 = 96i64;
					v71 = 80i64;
					v72 = 2i64;
					do
					{
						v73 = *(_QWORD*)(v71 + *(_QWORD*)(a1 + 24));
						if (v73)
						{
							if (v73 <= qword_140C3FE70)
								v74 = (_WORD*)(v73 + qword_140C3FE68);
							else
								v74 = 0i64;
						}
						else
						{
							v74 = 0i64;
						}
						if (*v74)
						{
							if (v73)
							{
								if (v73 <= qword_140C3FE70)
								{
									v75 = (__m128i*)(qword_140C3FE68 + v73);
									if (v75)
									{
										if (v75->m128i_i16[0])
										{
											v76 = sub_1401DD6D0(
												v75,
												32,
												*(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64),
												*(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
											if (v76)
												(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 72) + 784i64))(
													*(_QWORD*)(a1 + 72),
													*(unsigned int*)(v70 + *(_QWORD*)(a1 + 24)),
													v76);
										}
									}
								}
							}
						}
						v71 += 8i64;
						v70 += 4i64;
						--v72;
					} while (v72);
					v77 = *(_QWORD*)(a1 + 72);
					v78 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
					v116 = 150;
					v118 = 1065353216i64;
					v119 = 0;
					v120 = 128i64;
					v121 = 0;
					v117 = (int)(v78 * 65536.0);
					(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v77 + 584i64))(v77, 0i64, &v116);
					v79 = *(_QWORD*)(a1 + 24);
					*(_QWORD*)(a1 + 108) = 0i64;
					v80 = sub_140216340(*(_DWORD*)(v79 + 260));
					v81 = sub_140216340(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 264i64));
					v122 = -1.0;
					v123 = -1.0;
					if (v80)
						v122 = (float)*(int*)(v80 + 4);
					if (v81)
						v123 = (float)*(int*)(v81 + 4);
					(*(void(__fastcall**)(_QWORD, float*))(**(_QWORD**)(a1 + 72) + 288i64))(*(_QWORD*)(a1 + 72), &v122);
					v4 = qword_140C3FE70;
					v5 = qword_140C3FE68;
				}
			}
		}
	}
	v82 = *(_QWORD*)(a1 + 80);
	if (v82)
	{
		(*(void(__fastcall**)(_QWORD, unsigned __int64))(*(_QWORD*)v82 + 8i64))(*(_QWORD*)(a1 + 80), v4);
		*(_QWORD*)(a1 + 80) = 0i64;
		v4 = qword_140C3FE70;
		v5 = qword_140C3FE68;
	}
	v83 = *(signed int**)(a1 + 16);
	if (!v83[717])
		goto LABEL_178;
	v84 = *(_QWORD*)(a1 + 24);
	v85 = *(_QWORD*)(v84 + 72);
	if (!v85 || v85 > v4 || !(v85 + v5))
		goto LABEL_178;
	v86 = 0i64;
	if (v85 <= v4)
		v86 = (_WORD*)(v85 + v5);
	if (*v86)
	{
		v87 = *(_QWORD*)(v84 + 64);
		if (!v87)
			return 2147943568i64;
		if (v87 > v4)
			return 2147943568i64;
		v88 = (__m128i*)(v87 + v5);
		if (!v88)
			return 2147943568i64;
		if (!v88->m128i_i16[0])
			return 2147943568i64;
		v89 = sub_1401DD6D0(v88, 32, v83[9], v83[10]);
		if (!v89)
			return 2147943568i64;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 280i64)
			+ 40i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
				v89,
				a1 + 80,
				8i64);
		if ((int)result < 0)
			return result;
		v90 = 2i64;
		v91 = 2i64;
		do
		{
			v92 = *(_QWORD*)(v65 + *(_QWORD*)(a1 + 24));
			if (v92)
			{
				if (v92 <= qword_140C3FE70)
					v93 = (_WORD*)(v92 + qword_140C3FE68);
				else
					v93 = 0i64;
			}
			else
			{
				v93 = 0i64;
			}
			if (*v93)
			{
				if (v92)
				{
					if (v92 <= qword_140C3FE70)
					{
						v94 = (__m128i*)(qword_140C3FE68 + v92);
						if (v94)
						{
							if (v94->m128i_i16[0])
							{
								v95 = sub_1401DD6D0(
									v94,
									32,
									*(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64),
									*(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
								if (v95)
									(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 80) + 784i64))(
										*(_QWORD*)(a1 + 80),
										*(unsigned int*)(*(_QWORD*)(a1 + 24) + v64),
										v95);
							}
						}
					}
				}
			}
			v65 += 8i64;
			v64 += 4i64;
			--v91;
		} while (v91);
		v96 = *(_QWORD*)(a1 + 80);
		v97 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
		v116 = 150;
		v118 = 1065353216i64;
		v119 = 0;
		v120 = 128i64;
		v121 = 0;
		v117 = (int)(v97 * 65536.0);
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v96 + 584i64))(v96, 0i64, &v116);
		v98 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 108) = 0i64;
		v99 = sub_140216340(*(_DWORD*)(v98 + 260));
		v100 = sub_140216340(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 264i64));
		v122 = -1.0;
		v123 = -1.0;
		if (v99)
			v122 = (float)*(int*)(v99 + 4);
		if (v100)
			v123 = (float)*(int*)(v100 + 4);
		(*(void(__fastcall**)(_QWORD, float*))(**(_QWORD**)(a1 + 80) + 288i64))(*(_QWORD*)(a1 + 80), &v122);
	}
	else
	{
	LABEL_178:
		v90 = 2i64;
	}
	v101 = *(_QWORD*)(a1 + 88);
	if (v101)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v101 + 8i64))(v101);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	v102 = *(_QWORD*)(a1 + 24);
	v103 = *(_DWORD*)(v102 + 112);
	*(_DWORD*)(a1 + 96) = v103;
	if (!v103)
		return 0i64;
	v104 = *(_QWORD*)(v102 + 104);
	if (!v104 || v104 > qword_140C3FE70 || !(v104 + qword_140C3FE68))
		return 0i64;
	v105 = 0i64;
	if (v104 <= qword_140C3FE70)
		v105 = (_WORD*)(v104 + qword_140C3FE68);
	if (!*v105)
		return 0i64;
	if (v104 > qword_140C3FE70)
		return 2147943568i64;
	v106 = (__m128i*)(qword_140C3FE68 + v104);
	if (!v106)
		return 2147943568i64;
	if (!v106->m128i_i16[0])
		return 2147943568i64;
	v107 = sub_1401DD6D0(v106, 32, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64), *(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
	if (!v107)
		return 2147943568i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 280i64)
		+ 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 280i64),
			v107,
			a1 + 88,
			8i64);
	if ((int)result < 0)
		return result;
	v108 = 136i64;
	v109 = 120i64;
	do
	{
		v110 = *(_QWORD*)(v109 + *(_QWORD*)(a1 + 24));
		if (v110)
		{
			if (v110 <= qword_140C3FE70)
				v111 = (_WORD*)(v110 + qword_140C3FE68);
			else
				v111 = 0i64;
		}
		else
		{
			v111 = 0i64;
		}
		if (*v111)
		{
			if (v110)
			{
				if (v110 <= qword_140C3FE70)
				{
					v112 = (__m128i*)(qword_140C3FE68 + v110);
					if (v112)
					{
						if (v112->m128i_i16[0])
						{
							v113 = sub_1401DD6D0(
								v112,
								32,
								*(_DWORD*)(*(_QWORD*)(a1 + 16) + 36i64),
								*(_DWORD*)(*(_QWORD*)(a1 + 16) + 40i64));
							if (v113)
								(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 88) + 784i64))(
									*(_QWORD*)(a1 + 88),
									*(unsigned int*)(*(_QWORD*)(a1 + 24) + v108),
									v113);
						}
					}
				}
			}
		}
		v109 += 8i64;
		v108 += 4i64;
		--v90;
	} while (v90);
	v114 = *(_QWORD*)(a1 + 88);
	v115 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
	v116 = 150;
	v118 = 1065353216i64;
	v119 = 0;
	v120 = 128i64;
	v121 = 0;
	v117 = (int)(v115 * 65536.0);
	(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v114 + 584i64))(v114, 0i64, &v116);
	*(_QWORD*)(a1 + 108) = 0i64;
	return 0i64;
}
// 1401E6C8F: conditional instruction was optimized away because r8.8!=0
// 1401E6CAF: conditional instruction was optimized away because r8.8!=0
// 1401E6FC6: conditional instruction was optimized away because r8.8!=0
// 1401E72F3: conditional instruction was optimized away because r8.8!=0
// 1401E730B: conditional instruction was optimized away because r8.8!=0
// 1401E753F: conditional instruction was optimized away because r8.8!=0
// 1401E7791: conditional instruction was optimized away because rcx.8!=0
// 1401E77A9: conditional instruction was optimized away because rcx.8!=0
// 140A6B630: using guessed type wchar_t *off_140A6B630[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A78: using guessed type __int64 qword_140C63A78;
// 140C655EC: using guessed type int dword_140C655EC;
// 140C77890: using guessed type __int64 qword_140C77890;

