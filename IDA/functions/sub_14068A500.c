//----- (000000014068A500) ----------------------------------------------------
__int64 __fastcall sub_14068A500(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	unsigned __int64 v4; // r14
	unsigned __int64 v5; // r12
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // esi
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	int* v19; // rax
	unsigned int v20; // r13d
	__int64 v21; // rsi
	unsigned int v22; // r15d
	__int64 v23; // r14
	__int64 v24; // rax
	__int64 v25; // rbx
	unsigned int v26; // r8d
	unsigned int v27; // r15d
	unsigned int v28; // ebx
	unsigned int* v29; // rax
	unsigned int* v30; // rbx
	unsigned int v31; // r8d
	double v32; // xmm1_8
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // eax
	__int64 v36; // rdx
	int v37; // r13d
	unsigned __int64 v38; // rcx
	__int64 v39; // r15
	__int64 v40; // rbx
	__int64 v41; // rax
	int v42; // r12d
	__int64 v43; // rbx
	__int64 v44; // rdx
	__int64 v45; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v48; // rax
	__int64 v49; // rdx
	unsigned __int64* v50; // r14
	unsigned __int64 v51; // rsi
	__int64 v52; // rbx
	__int64 v53; // rax
	_QWORD* v54; // rax
	__int64 v55; // rdx
	__int64 v56; // r8
	_QWORD* v57; // rax
	__int64 v58; // rdx
	unsigned __int64* v59; // r14
	unsigned __int64 v60; // rsi
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // rcx
	int v64; // ebx
	_QWORD* v65; // rax
	__int64 v66; // rdx
	__int64 v67; // r8
	__int64 v68; // rdx
	__int64 v69; // r9
	_DWORD* v70; // rcx
	__int64 v71; // rdx
	__int64 v72; // rdx
	__m128 v74; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v75; // [rsp+30h] [rbp-D0h]
	char v76[8]; // [rsp+38h] [rbp-C8h] BYREF
	int* v77; // [rsp+40h] [rbp-C0h]
	__int64 v78; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v79)(); // [rsp+58h] [rbp-A8h] BYREF
	__int64 v80; // [rsp+60h] [rbp-A0h]
	__int64 v81; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v82)(); // [rsp+78h] [rbp-88h] BYREF
	int v83; // [rsp+80h] [rbp-80h]
	_QWORD* v84; // [rsp+88h] [rbp-78h]
	int v85; // [rsp+90h] [rbp-70h]
	char v86[8]; // [rsp+98h] [rbp-68h] BYREF
	int* v87; // [rsp+A0h] [rbp-60h]
	__int64 v88; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v89)(); // [rsp+B8h] [rbp-48h] BYREF
	int v90; // [rsp+C0h] [rbp-40h]
	_QWORD* v91; // [rsp+C8h] [rbp-38h]
	int v92; // [rsp+D0h] [rbp-30h]
	__m128 v93; // [rsp+E0h] [rbp-20h] BYREF
	char v94[8]; // [rsp+F0h] [rbp-10h] BYREF
	int v95; // [rsp+F8h] [rbp-8h]
	__int64 v96; // [rsp+100h] [rbp+0h]
	unsigned int v97; // [rsp+160h] [rbp+60h]
	double v98; // [rsp+160h] [rbp+60h]
	unsigned int v99; // [rsp+168h] [rbp+68h]
	int v100; // [rsp+170h] [rbp+70h]
	unsigned __int64 v101; // [rsp+178h] [rbp+78h]

	v1 = (_QWORD*)a1;
	v91 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v89 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v4 = 0i64;
	v75 = 0i64;
	v5 = 0i64;
	v101 = 0i64;
	v74 = 0ui64;
	v92 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v6 = v1[2];
	v7 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	v1[2] += 16i64;
	v8 = sub_1400578C0((__int64)v1);
	v90 = v8;
	if (*(_QWORD*)(qword_140C65898 + 120) && (v9 = sub_140056AB0(v1, 1u)) != 0 && (v10 = *(_QWORD*)(v9 + 8)) != 0)
	{
		v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 8) + 32i64))(*(_QWORD*)(v10 + 8));
		v12 = sub_140498A40(qword_140C65980, v11, 0);
		v13 = v12;
		if (v12)
		{
			v14 = (unsigned __int64*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v12 + 344i64))(v12, &v74);
			v4 = v14[1];
			v5 = *v14;
			v14[1] = 0i64;
			*v14 = 0i64;
			v75 = v4;
			v101 = v5;
			if (v74.m128_u64[0])
				(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v74.m128_u64[0] - 16) + 8i64))(v74.m128_u64[0] - 16);
			goto LABEL_15;
		}
	}
	else
	{
		v13 = 0i64;
	}
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v15 = sub_140056AB0(v1, 1u);
		if (v15)
		{
			v16 = *(_QWORD*)(v15 + 8);
			if (v16)
			{
				v17 = *(_QWORD*)(v16 + 8);
				if (v17)
				{
					v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17);
					sub_140003460((__int64*)&v74, (int*)(v18 + 20));
					v4 = v74.m128_u64[1];
					v75 = v74.m128_u64[1];
					v5 = v74.m128_u64[0];
					v101 = v74.m128_u64[0];
				}
			}
		}
	}
LABEL_15:
	v19 = sub_14018B280(40i64, 0);
	v88 = 0i64;
	v87 = v19;
	*(_BYTE*)v19 = 0;
	*((_QWORD*)v87 + 1) = 0i64;
	*((_QWORD*)v87 + 2) = v87;
	*((_QWORD*)v87 + 3) = v87;
	if (v13)
		v97 = *(_DWORD*)(v13 + 496);
	else
		v97 = 0;
	v20 = 0;
	v99 = 0;
	if (v4)
	{
		v21 = 0i64;
		while (1)
		{
			v22 = *(_DWORD*)(v5 + 4 * v21);
			v23 = qword_140C65898;
			if (qword_140C63840)
			{
				v24 = qword_140C63840(off_140A6E228, v22, qword_140C63858);
			}
			else
			{
				if (dword_140C63E98 || (int)sub_14024B720() < 0)
					goto LABEL_79;
				v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v22);
			}
			v25 = v24;
			if (v24)
			{
				if (*(_DWORD*)(v24 + 40) == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(v23 + 72) + 8i64))(v23 + 72))
				{
					v27 = v97;
				}
				else
				{
					v26 = v22;
					v27 = v97;
					if (!(unsigned int)sub_14043E6D0(v23, v97, v26, 0i64))
						goto LABEL_79;
				}
				if ((*(_DWORD*)(v25 + 48) & *(_DWORD*)(v23 + 26444)) != 0)
				{
					v28 = *(_DWORD*)(v5 + 4 * v21);
					if (qword_140C63840)
					{
						v29 = (unsigned int*)qword_140C63840(off_140A6E228, v28, qword_140C63858);
						goto LABEL_36;
					}
					if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
					{
						v29 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
							qword_140C65388,
							v28);
					LABEL_36:
						v30 = v29;
						if (v29)
						{
							v31 = *(_DWORD*)(v5 + 4 * v21);
							v74 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)v29[3], (__m128)v29[5]),
								_mm_unpacklo_ps((__m128)v29[4], (__m128)0i64));
							sub_14043E6D0(qword_140C65898, v27, v31, v74.m128_f32);
							v77 = sub_14018B280(40i64, 0);
							v78 = 0i64;
							*(_BYTE*)v77 = 0;
							*(_QWORD*)&v32 = v30[1];
							*((_QWORD*)v77 + 1) = 0i64;
							*((_QWORD*)v77 + 2) = v77;
							*((_QWORD*)v77 + 3) = v77;
							sub_140449B10(&v74, v32, (__int64)v76);
							if (v78)
							{
								if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
									sub_14005E2C0((__int64)v1);
								v33 = v1[2];
								v34 = sub_14005C1B0((__int64)v1, 0, 0);
								*(_DWORD*)(v33 + 8) = 5;
								*(_QWORD*)v33 = v34;
								v1[2] += 16i64;
								v35 = sub_1400578C0((__int64)v1);
								v36 = v1[4];
								v37 = v35;
								v100 = v35;
								v38 = *(_QWORD*)(v36 + 112);
								v39 = (__int64)v1;
								v84 = v1;
								v85 = 1;
								v82 = off_140B569F0;
								if (*(_QWORD*)(v36 + 120) >= v38)
									sub_14005E2C0((__int64)v1);
								v40 = v1[2];
								v41 = sub_14005C1B0((__int64)v1, 0, 0);
								*(_DWORD*)(v40 + 8) = 5;
								*(_QWORD*)v40 = v41;
								v1[2] += 16i64;
								v42 = sub_1400578C0((__int64)v1);
								v83 = v42;
								v43 = *((_QWORD*)v77 + 2);
								if ((int*)v43 != v77)
								{
									do
									{
										v93 = _mm_cvtepi32_ps(
											_mm_unpacklo_epi32(
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v43 + 32)), _mm_cvtsi32_si128(0)),
												_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v43 + 36)), _mm_cvtsi32_si128(0))));
										sub_1400FA180((__int64)&v79, (__int64)v1, v93.m128_f32);
										sub_1400FB1D0((__int64)&v82);
										v79 = off_140B56A08;
										if (v81)
											sub_1400579E0(v81, v44, v80);
										v45 = *(_QWORD*)(v43 + 24);
										if (v45)
										{
											v43 = *(_QWORD*)(v43 + 24);
											for (i = *(_QWORD*)(v45 + 16); i; i = *(_QWORD*)(i + 16))
												v43 = i;
										}
										else
										{
											for (j = *(_QWORD*)(v43 + 8); v43 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
												v43 = j;
											if (*(_QWORD*)(v43 + 24) != j)
												v43 = j;
										}
									} while ((int*)v43 != v77);
									v39 = (__int64)v84;
									v42 = v83;
									v37 = v100;
								}
								v48 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v37);
								v49 = v1[2];
								*(_QWORD*)v49 = *v48;
								*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
								v1[2] += 16i64;
								v50 = (unsigned __int64*)sub_14018F0E0(&v79, L"tHexes")[1];
								if (v50)
								{
									v51 = -1i64;
									do
										++v51;
									while (*((_BYTE*)v50 + v51));
									if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
										sub_14005E2C0((__int64)v1);
									v52 = v1[2];
									v53 = sub_140062650((__int64)v1, v50, v51);
									*(_DWORD*)(v52 + 8) = 4;
									*(_QWORD*)v52 = v53;
									v1[2] += 16i64;
								}
								else
								{
									*(_DWORD*)(v1[2] + 8i64) = 0;
									v1[2] += 16i64;
								}
								if (v80)
									sub_14018B900(v80, 0);
								v54 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v42);
								v55 = v1[2];
								*(_QWORD*)v55 = *v54;
								*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
								v56 = v1[2] + 16i64;
								v1[2] = v56;
								sub_14005EA50((__int64)v1, (__int64*)(v56 - 48), (int*)(v56 - 32), (unsigned int*)(v56 - 16));
								v1[2] -= 48i64;
								sub_1400FA3C0((__int64)v94, (__int64)v1, v74.m128_f32);
								v57 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v37);
								v58 = v1[2];
								*(_QWORD*)v58 = *v57;
								*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
								v1[2] += 16i64;
								v59 = (unsigned __int64*)sub_14018F0E0(&v79, L"tIndicator")[1];
								if (v59)
								{
									v60 = -1i64;
									do
										++v60;
									while (*((_BYTE*)v59 + v60));
									if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
										sub_14005E2C0((__int64)v1);
									v61 = v1[2];
									v62 = sub_140062650((__int64)v1, v59, v60);
									*(_DWORD*)(v61 + 8) = 4;
									*(_QWORD*)v61 = v62;
								}
								else
								{
									*(_DWORD*)(v1[2] + 8i64) = 0;
								}
								v63 = v80;
								v1[2] += 16i64;
								if (v63)
									sub_14018B900(v63, 0);
								v64 = v95;
								v65 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v95);
								v66 = v1[2];
								*(_QWORD*)v66 = *v65;
								*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
								v67 = v1[2] + 16i64;
								v1[2] = v67;
								sub_14005EA50((__int64)v1, (__int64*)(v67 - 48), (int*)(v67 - 32), (unsigned int*)(v67 - 16));
								v1[2] -= 48i64;
								sub_1400FB1D0((__int64)&v89);
								if (v96)
									sub_1400579E0(v96, v68, v64);
								if (v39)
									sub_1400579E0(v39, v68, v42);
								sub_1400579E0((__int64)v1, v68, v37);
								v5 = v101;
								v20 = v99;
							}
							sub_140008410((__int64)v76);
							sub_14018B900((__int64)v77, 0);
						}
					}
				}
			}
		LABEL_79:
			v21 = ++v20;
			v99 = v20;
			if (v20 >= v75)
			{
				v1 = v91;
				v8 = v90;
				break;
			}
		}
	}
	v69 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v69 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v70 = *(_DWORD**)(v69 + 32);
		}
		else
		{
			v98 = (double)v8;
			v70 = (_DWORD*)(*(_QWORD*)(v69 + 32)
				+ 40 * ((unsigned int)(LODWORD(v98) + HIDWORD(v98)) % (((1i64 << *(_BYTE*)(v69 + 11)) - 1) | 1)));
		}
		while (v70[6] != 3 || (double)v8 != *((double*)v70 + 2))
		{
			v70 = (_DWORD*)*((_QWORD*)v70 + 4);
			if (!v70)
			{
				v70 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v70 = (_DWORD*)(*(_QWORD*)(v69 + 24) + 16i64 * (v8 - 1));
	}
	v71 = v1[2];
	*(_QWORD*)v71 = *(_QWORD*)v70;
	*(_DWORD*)(v71 + 8) = v70[2];
	v1[2] += 16i64;
	sub_140008410((__int64)v86);
	sub_14018B900((__int64)v87, 0);
	sub_1400579E0((__int64)v1, v72, v8);
	if (v5)
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return 1i64;
}
// 14068A987: variable 'v44' is possibly undefined
// 14068ABF4: variable 'v68' is possibly undefined
// 14068AD0C: variable 'v72' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140B32C20: using guessed type wchar_t aThexes_1[7];
// 140B32E68: using guessed type wchar_t aTindicator_3[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068A500: using guessed type char var_118[8];
// 14068A500: using guessed type char var_60[8];
// 14068A500: using guessed type char var_B8[8];

