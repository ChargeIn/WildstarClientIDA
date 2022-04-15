#include "../winhttp.h"

//----- (0000000140448BE0) ----------------------------------------------------
__int64 __fastcall sub_140448BE0(__int64 a1, __int64 a2, unsigned int a3, float* a4, __int64 a5, int a6, __int64* a7)
{
	__int64 v7; // rdi
	unsigned int v8; // r12d
	__int64 v9; // rax
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	__m128 v12; // xmm5
	__m128 v13; // xmm2
	int v14; // ecx
	__m128 v15; // xmm1
	float v16; // xmm5_4
	__m128 v17; // xmm4
	int v18; // ecx
	__m128 v19; // xmm3
	int v20; // ecx
	int v21; // ecx
	int v22; // ecx
	float v23; // xmm3_4
	int v24; // ecx
	int v25; // eax
	__int64 v26; // r14
	int v27; // eax
	__int64 v28; // rcx
	__int64 v29; // r15
	_QWORD* v30; // rbx
	__int64 v31; // rsi
	int v32; // edi
	__int64 v33; // rdx
	__int64 v34; // r8
	int v35; // eax
	__int64 v36; // rcx
	_DWORD* v37; // rax
	__int64 v38; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v42; // r14
	unsigned int v43; // ebx
	__int64 v44; // rax
	int* v45; // r15
	unsigned __int64 v46; // r13
	__int64 v47; // rsi
	_DWORD* v48; // rax
	unsigned __int64 v49; // rsi
	unsigned __int64 v50; // rcx
	__int64 v51; // rax
	__int64 v52; // rax
	__int32* v53; // rax
	__int32 v54; // r8d
	__int32 v55; // edx
	__int32 v56; // r9d
	__int64 v57; // r12
	_QWORD* v58; // rbx
	__int64 v59; // rsi
	int v60; // edi
	int v61; // eax
	__int64 v62; // rcx
	__int32* v63; // rax
	__int32 v64; // r8d
	__int32 v65; // edx
	__int32 v66; // r9d
	__int64 v67; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v70; // rax
	int* v71; // rax
	int* v72; // rbx
	int v73; // eax
	__int64 v74; // rcx
	int v75; // r10d
	int v76; // r9d
	__int32 v77; // edx
	unsigned int v78; // r11d
	unsigned __int32 v79; // edx
	int v80; // ecx
	unsigned int v81; // ecx
	unsigned __int64 v82; // rax
	bool v83; // zf
	__int64 v84; // rdi
	__int64 v85; // rbx
	int v86; // eax
	__int64 v87; // rcx
	unsigned int v88; // eax
	__int64 v89; // rcx
	int v90; // [rsp+20h] [rbp-51h] BYREF
	int v91; // [rsp+24h] [rbp-4Dh]
	__int64 v92; // [rsp+28h] [rbp-49h]
	__int64 v93; // [rsp+30h] [rbp-41h]
	unsigned __int64 v94; // [rsp+38h] [rbp-39h]
	__int64 v95; // [rsp+40h] [rbp-31h]
	unsigned __int64 v96; // [rsp+48h] [rbp-29h]
	_DWORD* v97; // [rsp+50h] [rbp-21h]
	__m128 v98; // [rsp+60h] [rbp-11h]
	__int64 v99; // [rsp+C0h] [rbp+4Fh] BYREF
	int v100; // [rsp+C8h] [rbp+57h]
	unsigned int v101; // [rsp+D0h] [rbp+5Fh]

	v101 = a3;
	v100 = a2;
	v99 = a1;
	v7 = qword_140C658F8;
	v8 = a3;
	v9 = *a7;
	v93 = qword_140C658F8;
	if (v9 == qword_140C77760)
	{
		v10 = (__m128)(unsigned int)dword_140C3B738;
		v11 = (__m128)(unsigned int)dword_140C3B738;
		v10.m128_f32[0] = (float)((float)(*(float*)&dword_140C3B738 + a4[2]) / *(float*)&dword_140C66F48) + 1.0;
		v11.m128_f32[0] = (float)((float)(*(float*)&dword_140C3B738 + *a4) / *(float*)&dword_140C66F1C) + 0.5;
		v98 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0i64), _mm_unpacklo_ps(v10, (__m128)0i64));
		v12 = _mm_shuffle_ps(v98, v98, 85);
		v13 = v12;
		v14 = (int)v12.m128_f32[0];
		if ((int)v12.m128_f32[0] != 0x80000000 && (float)v14 != v12.m128_f32[0])
			v13 = (__m128)COERCE_UNSIGNED_INT((float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1)));
		v15 = (__m128)v98.m128_u32[0];
		v16 = v12.m128_f32[0] * 0.5;
		v17 = (__m128)v98.m128_u32[0];
		v17.m128_f32[0] = v98.m128_f32[0] + v16;
		v18 = (int)(float)(v98.m128_f32[0] + v16);
		if (v18 != 0x80000000 && (float)v18 != v17.m128_f32[0])
			v17 = (__m128)COERCE_UNSIGNED_INT((float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1)));
		v17.m128_f32[0] = v17.m128_f32[0] - (float)(v13.m128_f32[0] * 2.0);
		v19 = v17;
		v19.m128_f32[0] = (float)(v17.m128_f32[0] * 0.33333334) + 0.0000099999997;
		v20 = (int)v19.m128_f32[0];
		if ((int)v19.m128_f32[0] != 0x80000000 && (float)v20 != v19.m128_f32[0])
			v19.m128_f32[0] = (float)(v20 - (_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1));
		v15.m128_f32[0] = v98.m128_f32[0] - v16;
		v21 = (int)(float)(v98.m128_f32[0] - v16);
		if (v21 != 0x80000000 && (float)v21 != v15.m128_f32[0])
			v15 = (__m128)COERCE_UNSIGNED_INT((float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1)));
		v15.m128_f32[0] = (float)((float)((float)((float)((float)(v15.m128_f32[0] - v13.m128_f32[0])
			- (float)(v19.m128_f32[0] * 3.0))
			+ 1.0)
			+ (float)(v17.m128_f32[0] - (float)(v19.m128_f32[0] * 3.0)))
			* 0.33333334)
			+ 0.0000099999997;
		v22 = (int)v15.m128_f32[0];
		if ((int)v15.m128_f32[0] != 0x80000000 && (float)v22 != v15.m128_f32[0])
			v15.m128_f32[0] = (float)(v22 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1));
		v23 = (float)(v19.m128_f32[0] * 2.0) + v13.m128_f32[0];
		v13.m128_f32[0] = (float)(v13.m128_f32[0] - v15.m128_f32[0]) * 0.5;
		v24 = (int)v13.m128_f32[0];
		LODWORD(v99) = (int)(float)(v23 + v15.m128_f32[0]);
		if ((int)v13.m128_f32[0] != 0x80000000 && (float)v24 != v13.m128_f32[0])
			v13.m128_f32[0] = (float)(v24 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
		v25 = (int)v13.m128_f32[0];
	}
	else
	{
		LODWORD(v99) = v9;
		v25 = *((_DWORD*)a7 + 1);
	}
	v26 = a5;
	HIDWORD(v99) = v25;
	v90 = v99;
	v91 = v25;
	if (!a5
		|| !(*(unsigned int(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)a5 + 112i64))(a5, a2, &v90)
		|| v8
		&& (v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 40i64))(v26),
			!(unsigned int)sub_1403C9450(v28, v8, v27)))
	{
		v42 = 0i64;
		v43 = -1;
		v44 = **(_QWORD**)(v7 + 96);
		v45 = 0i64;
		v92 = 0i64;
		LODWORD(v99) = -1;
		v46 = 0i64;
		v96 = (*(__int64 (**)(void))(v44 + 16))() / 0xCui64;
		if (!v96)
			goto LABEL_111;
		v47 = 0i64;
		v95 = 0i64;
		do
		{
			v48 = (_DWORD*)(v47 + (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 96) + 32i64))(*(_QWORD*)(v7 + 96)));
			v97 = v48;
			if (*v48 == v100)
			{
				v49 = (int)v48[1];
				v50 = (int)v48[2];
				v94 = v49;
				if (v49 < v50)
				{
					while (1)
					{
						v51 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 112) + 32i64))(*(_QWORD*)(v7 + 112));
						v52 = sub_140449680(v7, *(_DWORD*)(v51 + 4 * v49));
						v42 = v52;
						if (!v52)
							goto LABEL_102;
						v53 = (__int32*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v52 + 88i64))(v52);
						v98.m128_i32[0] = *v53;
						v54 = v53[1];
						v98.m128_i32[1] = v54;
						v55 = v53[2];
						v98.m128_i32[2] = v55;
						v56 = v53[3];
						v98.m128_i32[3] = v56;
						if (v90 >= v98.m128_i32[0] && v90 < v55 && v91 >= v54 && v91 < v56)
						{
							if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v42 + 32i64))(v42))
							{
								v57 = v7 + 24;
								LODWORD(a5) = (**(__int64(__fastcall***)(__int64))v42)(v42);
								v58 = *(_QWORD**)(*((_QWORD*)sub_1400326C0(v7 + 24, (int*)&a5) + 1) + 16i64);
								LODWORD(a5) = (**(__int64(__fastcall***)(__int64))v42)(v42);
								if (v58 != *((_QWORD**)sub_1400326C0(v7 + 24, (int*)&a5) + 1))
								{
									while (1)
									{
										v59 = v58[4];
										v60 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v59 + 32i64))(v59);
										if (v60 == (**(unsigned int(__fastcall***)(__int64))v42)(v42))
										{
											v61 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v59 + 40i64))(v59);
											if ((unsigned int)sub_1403C9450(v62, v101, v61))
											{
												v63 = (__int32*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v59 + 88i64))(v59);
												v98.m128_i32[0] = *v63;
												v64 = v63[1];
												v98.m128_i32[1] = v64;
												v65 = v63[2];
												v98.m128_i32[2] = v65;
												v66 = v63[3];
												v98.m128_i32[3] = v66;
												if (v90 >= v98.m128_i32[0]
													&& v90 < v65
													&& v91 >= v64
													&& v91 < v66
													&& ((*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v59 + 104i64))(v59, &v90) & 1) == 0)
												{
													break;
												}
											}
										}
										v67 = v58[3];
										if (v67)
										{
											v58 = (_QWORD*)v58[3];
											for (i = *(_QWORD**)(v67 + 16); i; i = (_QWORD*)i[2])
												v58 = i;
										}
										else
										{
											for (j = v58[1]; v58 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
												v58 = (_QWORD*)j;
											if (v58[3] != j)
												v58 = (_QWORD*)j;
										}
										LODWORD(a5) = (**(__int64(__fastcall***)(__int64))v42)(v42);
										if (v58 == *((_QWORD**)sub_1400326C0(v57, (int*)&a5) + 1))
											goto LABEL_75;
									}
									v42 = v59;
								LABEL_75:
									v49 = v94;
								}
								v43 = v99;
								v8 = v101;
							}
							if (a6 && v43)
							{
								v43 = 0;
								v92 = v42;
								LODWORD(v99) = 0;
							}
							v70 = 0i64;
							if (v46)
							{
								while (*(_QWORD*)&v45[2 * v70] != v42)
								{
									if (++v70 >= v46)
										goto LABEL_83;
								}
							}
							else
							{
							LABEL_83:
								v71 = sub_14018DB00((__int64)v45, v46 + 1, 8i64);
								*(_QWORD*)&v71[2 * v46] = v42;
								v72 = v71;
								if (v45 != v71)
								{
									sub_1407DB590(v71, v45, 8 * v46);
									if (v45)
										(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
									v45 = v72;
								}
								v43 = v99;
								++v46;
							}
						}
						if (!a6 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v42 + 32i64))(v42))
							break;
						v73 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v42 + 40i64))(v42);
						if ((unsigned int)sub_1403C9450(v74, v8, v73))
						{
							v7 = v93;
							v43 = 0;
							v92 = v42;
							LODWORD(v99) = 0;
						}
						else
						{
							if (!v43)
								break;
							v75 = v98.m128_i32[0] - v90;
							v76 = v98.m128_i32[2] - v90;
							v7 = v93;
							v77 = (v98.m128_i32[1] - v91) * (v98.m128_i32[1] - v91);
							v78 = v75 * v75 + v77;
							v79 = v76 * v76 + v77;
							if (v79 < v78)
								v78 = v79;
							v80 = v98.m128_i32[3] - v91;
							if (v75 * v75 + v80 * v80 < v78)
								v78 = v75 * v75 + v80 * v80;
							v81 = v76 * v76 + v80 * v80;
							if (v81 < v78)
								v78 = v81;
							if (v78 >= v43)
								goto LABEL_102;
							v43 = v78;
							v92 = v42;
							LODWORD(v99) = v78;
						}
					LABEL_103:
						++v49;
						v82 = (int)v97[2];
						v94 = v49;
						if (v49 >= v82)
							goto LABEL_104;
					}
					v7 = v93;
				LABEL_102:
					v42 = v92;
					goto LABEL_103;
				}
			LABEL_104:
				v47 = v95;
			}
			v47 += 12i64;
			v83 = v96-- == 1;
			v95 = v47;
		} while (!v83);
		if (v46)
		{
			v84 = 0i64;
			while (1)
			{
				v85 = *(_QWORD*)&v45[2 * v84];
				v86 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v85 + 40i64))(v85);
				if ((unsigned int)sub_1403C9450(v87, v8, v86))
					break;
				v88 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v85 + 40i64))(v85);
				if ((unsigned int)sub_1403C9450(v89, v88, v8))
					break;
				if (++v84 >= v46)
					goto LABEL_111;
			}
		}
		else
		{
		LABEL_111:
			v85 = 0i64;
			if (a6)
				v85 = v42;
		}
		if (v45)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
		return v85;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v26 + 32i64))(v26))
		return v26;
	v29 = v7 + 24;
	LODWORD(v99) = (**(__int64(__fastcall***)(__int64))v26)(v26);
	v30 = *(_QWORD**)(*((_QWORD*)sub_1400326C0(v7 + 24, (int*)&v99) + 1) + 16i64);
	LODWORD(v99) = (**(__int64(__fastcall***)(__int64))v26)(v26);
	if (v30 == *((_QWORD**)sub_1400326C0(v7 + 24, (int*)&v99) + 1))
		return v26;
	while (1)
	{
		v31 = v30[4];
		v32 = (**(__int64(__fastcall***)(__int64))v26)(v26);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v31 + 32i64))(v31) == v32)
		{
			v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v31 + 40i64))(v31);
			if ((unsigned int)sub_1403C9450(v36, v8, v35))
			{
				v37 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v31 + 88i64))(v31);
				v33 = (unsigned int)v37[1];
				v34 = (unsigned int)v37[3];
				if (v90 >= *v37
					&& v90 < v37[2]
					&& v91 >= (int)v33
					&& v91 < (int)v34
					&& ((*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v31 + 104i64))(v31, &v90) & 1) == 0)
				{
					break;
				}
			}
		}
		v38 = v30[3];
		if (v38)
		{
			v30 = (_QWORD*)v30[3];
			for (k = *(_QWORD**)(v38 + 16); k; k = (_QWORD*)k[2])
				v30 = k;
		}
		else
		{
			for (m = v30[1]; v30 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
				v30 = (_QWORD*)m;
			if (v30[3] != m)
				v30 = (_QWORD*)m;
		}
		LODWORD(v99) = (**(__int64(__fastcall***)(__int64, __int64, __int64))v26)(v26, v33, v34);
		if (v30 == *((_QWORD**)sub_1400326C0(v29, (int*)&v99) + 1))
			return v26;
	}
	return v31;
}
// 14044938A: conditional instruction was optimized away because r13.8!=0
// 140448E77: variable 'v28' is possibly undefined
// 140448F0A: variable 'v36' is possibly undefined
// 140448F9B: variable 'v33' is possibly undefined
// 140448F9B: variable 'v34' is possibly undefined
// 14044913A: variable 'v62' is possibly undefined
// 1404492B2: variable 'v74' is possibly undefined
// 1404493A3: variable 'v87' is possibly undefined
// 1404493BA: variable 'v89' is possibly undefined
// 140C3B738: using guessed type int dword_140C3B738;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C66F1C: using guessed type int dword_140C66F1C;
// 140C66F48: using guessed type int dword_140C66F48;
// 140C77760: using guessed type __int64 qword_140C77760;

