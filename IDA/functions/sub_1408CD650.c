#include "../winhttp.h"

//----- (00000001408CD650) ----------------------------------------------------
int* __fastcall sub_1408CD650(__int64 a1, __int64 a2, int* a3)
{
	int* result; // rax
	int v7; // ecx
	int v8; // r13d
	unsigned int v9; // edi
	int i; // edx
	int* v11; // rcx
	int v12; // ebp
	unsigned int v13; // ebp
	unsigned int v14; // ecx
	int j; // r14d
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	unsigned __int8 v19; // dl
	__m128* v20; // rdx
	int* v21; // r12
	int v22; // ecx
	int v23; // ecx
	int v24; // ecx
	bool v25; // zf
	unsigned __int64 v26; // r8
	int* v27; // rdx
	unsigned int v28; // r14d
	float v29; // xmm6_4
	float v30; // xmm8_4
	float v31; // xmm7_4
	float v32; // xmm9_4
	__m128d v33; // xmm5
	__m128d v34; // xmm2
	double v35; // xmm0_8
	double v36; // xmm1_8
	__m128d v37; // xmm2
	int v38; // ecx
	unsigned __int8 v39; // r9
	int v40; // ecx
	int v41; // ecx
	int v42; // edx
	int v43; // edx
	int v44; // edx
	double v45; // xmm2_8
	double v46; // xmm1_8
	__m128* v47; // rcx
	int v48; // ecx
	__m128* v49; // rcx
	double v50; // xmm2_8
	double v51; // xmm1_8
	__m128* v52; // [rsp+50h] [rbp-B8h] BYREF
	int v53; // [rsp+58h] [rbp-B0h]
	unsigned __int16 v54; // [rsp+60h] [rbp-A8h]
	__int16 v55; // [rsp+62h] [rbp-A6h]
	int* v56; // [rsp+68h] [rbp-A0h] BYREF
	int v57; // [rsp+70h] [rbp-98h]
	unsigned __int16 v58; // [rsp+78h] [rbp-90h]
	__int16 v59; // [rsp+7Ah] [rbp-8Eh]
	unsigned __int8 v60; // [rsp+110h] [rbp+8h]
	__m128* v61; // [rsp+118h] [rbp+10h]
	__m128* v63; // [rsp+128h] [rbp+20h]

	sub_1408A1640((unsigned int*)(a2 + 960), a1, *(_DWORD*)(a2 + 968));
	result = (int*)*(unsigned __int16*)(a1 + 18);
	if ((_WORD)result)
	{
		v7 = *(_DWORD*)(a1 + 8);
		v8 = 0;
		v9 = (unsigned __int16)result;
		if ((v7 & 8) != 0)
		{
			for (i = 0; v7; v7 &= v7 - 1)
				++i;
			result = *(int**)a1;
			v11 = (int*)(*(_QWORD*)a1 + 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)(unsigned int)(i - 1));
			if (v11 && *(_BYTE*)(a2 + 981))
				result = sub_1407E4830(v11, 0i64, 4 * v9);
		}
		v12 = *(_DWORD*)(a1 + 8);
		if (v12 != 8)
		{
			v13 = v12 & 0xFFFFFFF7;
			v56 = a3;
			v58 = v9;
			v59 = v9;
			v57 = 3;
			v54 = v9;
			v52 = (__m128*) & a3[2 * v9];
			v55 = v9;
			v53 = 3;
			v14 = v13;
			for (j = 0; v14; v14 &= v14 - 1)
				++j;
			v16 = *(_DWORD*)(a2 + 856);
			if (v16)
			{
				v17 = v16 - 1;
				if (!v17)
				{
					if ((v13 & 1) != 0 && (v13 & 4) != 0)
						v19 = 2;
					else
						v19 = 0;
					v20 = (__m128*)(*(_QWORD*)a1 + 4 * v19 * (unsigned __int64)*(unsigned __int16*)(a1 + 16));
					goto LABEL_25;
				}
				v18 = v17 - 1;
				if (v18)
				{
					if (v18 == 1)
						sub_1407E4830(a3, 0i64, 4 * v9);
				LABEL_26:
					v21 = &v56[v58];
					v22 = *(_DWORD*)(a2 + 860);
					if (v22)
					{
						v23 = v22 - 1;
						if (!v23)
						{
							if ((v13 & 2) != 0 && (v13 & 4) != 0)
							{
								v28 = 2;
							}
							else
							{
								v28 = j - 1;
								if (v28 > 1)
									v28 = 1;
							}
							v26 = 4 * v9;
							v27 = (int*)(*(_QWORD*)a1 + 4 * v28 * (unsigned __int64)*(unsigned __int16*)(a1 + 16));
							goto LABEL_45;
						}
						v24 = v23 - 1;
						if (v24)
						{
							if (v24 == 1)
								sub_1407E4830(&v56[v58], 0i64, 4 * v9);
						LABEL_46:
							sub_1408CD160(
								a2,
								(__int64)&v56,
								(__int64*)&v52,
								a2 + 896,
								(unsigned int*)(a2 + 832),
								a2 + 864,
								*(_BYTE*)(a2 + 980));
							v29 = 1.0;
							v30 = 1.0;
							v31 = 1.0;
							v32 = 1.0;
							if ((v13 & 0x10) != 0)
							{
								v33 = (__m128d)0x3FF0000000000000ui64;
								v34 = _mm_cvtps_pd((__m128) * (unsigned int*)(a2 + 888));
								v34.m128d_f64[0] = (v34.m128d_f64[0] + 100.0) * 0.005;
								v35 = _mm_sqrt_pd(v34).m128d_f64[0];
								v36 = 1.0 - v34.m128d_f64[0];
								v37 = _mm_cvtps_pd((__m128) * (unsigned int*)(a2 + 952));
								v37.m128d_f64[0] = (v37.m128d_f64[0] + 100.0) * 0.005;
								v30 = v35;
								v33.m128d_f64[0] = 1.0 - v37.m128d_f64[0];
								v29 = sqrt(v36);
								v32 = _mm_sqrt_pd(v37).m128d_f64[0];
								v31 = _mm_sqrt_pd(v33).m128d_f64[0];
							}
							v63 = v52;
							v61 = (__m128*)((char*)v52 + 4 * v54);
							if (v13 == 4)
							{
								sub_1408CBD10(
									*(_OWORD**)a1,
									v52->m128_f32,
									&v52->m128_f32[v54],
									COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 944)),
									*(float*)(a2 + 880),
									*(float*)(a2 + 948),
									*(float*)(a2 + 884),
									*(float*)(a2 + 948),
									*(float*)(a2 + 884),
									v9);
							}
							else if ((v13 & 1) != 0)
							{
								sub_1408A6050(
									*(_OWORD**)a1,
									v52,
									COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 944)),
									COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 880)),
									v29 * *(float*)(a2 + 948),
									v31 * *(float*)(a2 + 884),
									v9);
								sub_1408A6050(
									(_OWORD*)(*(_QWORD*)a1 + 4i64 * *(unsigned __int16*)(a1 + 16)),
									v61,
									COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 944)),
									COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 880)),
									v29 * *(float*)(a2 + 948),
									v31 * *(float*)(a2 + 884),
									v9);
							}
							if ((v13 & 0x10) == 0 || (v13 & 0x20) == 0)
								goto LABEL_68;
							v38 = *(_DWORD*)(a2 + 856);
							v39 = ((v13 & 4) != 0) | 2;
							v60 = v39;
							if (v38)
							{
								v40 = v38 - 1;
								if (!v40)
								{
								LABEL_58:
									sub_1407E4830(a3, 0i64, 4 * v9);
								LABEL_60:
									v39 = ((v13 & 4) != 0) | 2;
								LABEL_61:
									v42 = *(_DWORD*)(a2 + 860);
									if (v42)
									{
										v43 = v42 - 1;
										if (!v43)
											goto LABEL_65;
										v44 = v43 - 1;
										if (v44)
										{
											if (v44 != 1)
											{
											LABEL_67:
												sub_1408CD160(
													a2 + 416,
													(__int64)&v56,
													(__int64*)&v52,
													a2 + 896,
													(unsigned int*)(a2 + 832),
													a2 + 864,
													*(_BYTE*)(a2 + 980));
												sub_1408A6050(
													(_OWORD*)(*(_QWORD*)a1 + 4 * v60 * (unsigned __int64)*(unsigned __int16*)(a1 + 16)),
													v63,
													COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 944)),
													COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 880)),
													v30 * *(float*)(a2 + 948),
													v32 * *(float*)(a2 + 884),
													v9);
												sub_1408A6050(
													(_OWORD*)(*(_QWORD*)a1
														+ 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)((unsigned int)v60 + 1)),
													v61,
													COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 944)),
													COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 880)),
													v30 * *(float*)(a2 + 948),
													v32 * *(float*)(a2 + 884),
													v9);
											LABEL_68:
												if ((v13 & 4) != 0 && v13 != 4)
												{
													*(_QWORD*)&v45 = *(unsigned int*)(a2 + 880);
													*(_QWORD*)&v46 = *(unsigned int*)(a2 + 944);
													v47 = (__m128*)(*(_QWORD*)a1 + 8i64 * *(unsigned __int16*)(a1 + 16));
													if (*(float*)&v45 == *(float*)&v46)
														sub_1408CDF80(v47, v46, v9);
													else
														sub_1408CDE30(v47, *(float*)&v46, v45, v9);
												}
												v48 = *(_DWORD*)(a1 + 8);
												if ((v48 & 8) != 0)
												{
													for (; v48; v48 &= v48 - 1)
														++v8;
													v49 = (__m128*)(*(_QWORD*)a1
														+ 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)(unsigned int)(v8 - 1));
													if (v49)
													{
														*(_QWORD*)&v50 = *(unsigned int*)(a2 + 880);
														*(_QWORD*)&v51 = *(unsigned int*)(a2 + 944);
														if (*(float*)&v50 == *(float*)&v51)
															sub_1408CDF80(v49, v51, v9);
														else
															sub_1408CDE30(v49, *(float*)&v51, v50, v9);
													}
												}
												*(_DWORD*)(a2 + 896) = *(_DWORD*)(a2 + 832);
												*(_DWORD*)(a2 + 900) = *(_DWORD*)(a2 + 836);
												*(_DWORD*)(a2 + 904) = *(_DWORD*)(a2 + 840);
												*(_DWORD*)(a2 + 908) = *(_DWORD*)(a2 + 844);
												*(_DWORD*)(a2 + 912) = *(_DWORD*)(a2 + 848);
												*(_DWORD*)(a2 + 916) = *(_DWORD*)(a2 + 852);
												*(_DWORD*)(a2 + 920) = *(_DWORD*)(a2 + 856);
												*(_DWORD*)(a2 + 924) = *(_DWORD*)(a2 + 860);
												*(_DWORD*)(a2 + 928) = *(_DWORD*)(a2 + 864);
												*(_DWORD*)(a2 + 932) = *(_DWORD*)(a2 + 868);
												*(_DWORD*)(a2 + 936) = *(_DWORD*)(a2 + 872);
												*(_DWORD*)(a2 + 940) = *(_DWORD*)(a2 + 876);
												*(_DWORD*)(a2 + 944) = *(_DWORD*)(a2 + 880);
												*(_DWORD*)(a2 + 948) = *(_DWORD*)(a2 + 884);
												*(_DWORD*)(a2 + 952) = *(_DWORD*)(a2 + 888);
												result = (int*)*(unsigned int*)(a2 + 892);
												*(_DWORD*)(a2 + 956) = (_DWORD)result;
												return result;
											}
										LABEL_65:
											sub_1407E4830(v21, 0i64, 4 * v9);
											goto LABEL_67;
										}
									}
									sub_1407DB590(
										v21,
										(int*)(*(_QWORD*)a1
											+ 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)((unsigned int)v39 + 1)),
										4 * v9);
									goto LABEL_67;
								}
								v41 = v40 - 1;
								if (v41)
								{
									if (v41 != 1)
										goto LABEL_61;
									goto LABEL_58;
								}
							}
							sub_1407DB590(
								a3,
								(int*)(*(_QWORD*)a1 + 4 * v39 * (unsigned __int64)*(unsigned __int16*)(a1 + 16)),
								4 * v9);
							goto LABEL_60;
						}
						if ((v13 & 2) != 0 && (v13 & 4) != 0)
						{
							sub_1408A5DE0(
								(__m128*)(*(_QWORD*)a1 + 4i64 * *(unsigned __int16*)(a1 + 16)),
								(float*)(*(_QWORD*)a1 + 8i64 * *(unsigned __int16*)(a1 + 16)),
								(unsigned __int64)&v56[v58],
								COERCE_DOUBLE(1060437492i64),
								0.70700002,
								0.70700002,
								0.70700002,
								v9);
							goto LABEL_46;
						}
						v25 = (v13 & 2) == 0;
					}
					else
					{
						v25 = (v13 & 2) == 0;
					}
					v26 = 4 * v9;
					if (v25)
						v27 = *(int**)a1;
					else
						v27 = (int*)(*(_QWORD*)a1 + 4i64 * *(unsigned __int16*)(a1 + 16));
				LABEL_45:
					sub_1407DB590(&v56[v58], v27, v26);
					goto LABEL_46;
				}
				if ((v13 & 1) != 0 && (v13 & 4) != 0)
				{
					sub_1408A5DE0(
						*(__m128**)a1,
						(float*)(*(_QWORD*)a1 + 8i64 * *(unsigned __int16*)(a1 + 16)),
						(unsigned __int64)a3,
						COERCE_DOUBLE(1060437492i64),
						0.70700002,
						0.70700002,
						0.70700002,
						v9);
					goto LABEL_26;
				}
			}
			v20 = *(__m128**)a1;
		LABEL_25:
			sub_1407DB590(a3, (int*)v20, 4 * v9);
			goto LABEL_26;
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

