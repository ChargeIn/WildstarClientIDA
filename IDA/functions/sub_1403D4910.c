#include "../winhttp.h"

//----- (00000001403D4910) ----------------------------------------------------
_QWORD* __fastcall sub_1403D4910(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* result; // rax
	__int64 v4; // rcx
	__int64 v5; // r13
	_QWORD* v6; // rbx
	bool v7; // zf
	unsigned int v8; // edi
	_DWORD* v9; // rsi
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64* v13; // rax
	__int64 v14; // rax
	int* v15; // rdx
	float* v16; // r15
	_DWORD* v17; // rax
	__int64 v18; // rcx
	__int128 v19; // xmm0
	__int128 v20; // xmm0
	__int64 v21; // rdx
	signed int v22; // esi
	int v23; // r14d
	unsigned __int64 v24; // r10
	unsigned __int64 v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // r11
	unsigned __int64 v28; // rcx
	__int64 v29; // r9
	int v30; // eax
	unsigned __int64 v31; // rdi
	__int64 v32; // r8
	__int64 v33; // rdx
	unsigned __int64 v34; // rcx
	__int64 v35; // rdx
	unsigned int v36; // r12d
	unsigned int v37; // r13d
	double v38; // xmm0_8
	float v39; // xmm7_4
	double v40; // xmm6_8
	int v41; // eax
	unsigned __int64 v42; // r11
	unsigned __int64 v43; // r8
	unsigned __int64 v44; // r9
	__int64 v45; // r10
	__int64 v46; // rcx
	__int64 v47; // rdx
	int v48; // eax
	unsigned __int64 v49; // r14
	__int64 v50; // r8
	__int64 v51; // rdx
	unsigned __int64 v52; // r15
	__int64* v53; // rdx
	__int64 v54; // rcx
	int* v55; // r12
	int* v56; // rsi
	__int64 v57; // r13
	__int64 v58; // rdi
	__int64 v59; // rax
	__int64 v60; // rcx
	int v61; // edx
	unsigned __int32 v62; // xmm0_4
	double v63; // xmm0_8
	float* v64; // rax
	float v65; // xmm1_4
	unsigned __int64 v66; // r14
	unsigned __int64 v67; // rdx
	unsigned __int64 v68; // r8
	__int64 v69; // r9
	unsigned __int64 v70; // rdi
	__int64 v71; // rcx
	int v72; // eax
	unsigned __int64 v73; // r8
	__int64 v74; // rdx
	__int64 v75; // rcx
	unsigned __int64 v76; // rdi
	__int64* v77; // rdx
	__int64 v78; // rcx
	__int64 v79; // rsi
	unsigned __int64 v80; // rdi
	unsigned __int64 v81; // xmm0_8
	__int64 v82; // rcx
	__int64 v83; // rax
	unsigned __int32 v84; // [rsp+28h] [rbp-89h] BYREF
	int v85; // [rsp+2Ch] [rbp-85h]
	int v86; // [rsp+30h] [rbp-81h]
	unsigned int v87; // [rsp+34h] [rbp-7Dh]
	unsigned int v88; // [rsp+38h] [rbp-79h]
	__int64 v89; // [rsp+40h] [rbp-71h]
	float* v90; // [rsp+48h] [rbp-69h]
	__int64 v91; // [rsp+50h] [rbp-61h] BYREF
	int* v92; // [rsp+58h] [rbp-59h]
	int* v93; // [rsp+60h] [rbp-51h]
	__int64 v94; // [rsp+68h] [rbp-49h]
	_DWORD* v95; // [rsp+70h] [rbp-41h]
	__int64 v96; // [rsp+78h] [rbp-39h] BYREF
	__int64 v97; // [rsp+80h] [rbp-31h] BYREF
	_QWORD v98[2]; // [rsp+88h] [rbp-29h] BYREF
	char v99[8]; // [rsp+98h] [rbp-19h] BYREF
	signed int v100; // [rsp+118h] [rbp+67h]
	__int64 v101; // [rsp+120h] [rbp+6Fh]
	unsigned int v103; // [rsp+130h] [rbp+7Fh]

	v101 = a2;
	result = *(_QWORD**)(a2 + 8);
	v4 = qword_140C65B70;
	v5 = a3;
	v6 = (_QWORD*)result[2];
	v89 = qword_140C65B70;
	if (v6 != result)
	{
		do
		{
			v7 = v6[6] == 0i64;
			v8 = *((_DWORD*)v6 + 8);
			v88 = v8;
			if (!v7)
			{
				v9 = (_DWORD*)sub_1407A1080(v4, v8);
				v95 = v9;
				if (v9)
				{
					v10 = *(_QWORD*)(v5 + 8);
					v11 = v10;
					v12 = *(_QWORD*)(v10 + 8);
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < v8)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v11 = v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v11 == v10 || v8 < *(_DWORD*)(v11 + 32))
					{
						v96 = *(_QWORD*)(v5 + 8);
						v13 = &v96;
					}
					else
					{
						v97 = v11;
						v13 = &v97;
					}
					v14 = *v13;
					v85 = 0;
					if (v14 == v10)
					{
						v15 = sub_14018B280(168i64, 0);
						v16 = (float*)v15;
						v90 = (float*)v15;
						v17 = v9;
						if ((((unsigned __int8)v15 | (unsigned __int8)v9) & 0xF) != 0)
						{
							sub_1407DB590(v15, v9, 0xA8ui64);
							v85 = 1;
						}
						else
						{
							v18 = 1i64;
							do
							{
								v19 = *(_OWORD*)v17;
								v15 += 32;
								v17 += 32;
								*((_OWORD*)v15 - 8) = v19;
								*((_OWORD*)v15 - 7) = *((_OWORD*)v17 - 7);
								*((_OWORD*)v15 - 6) = *((_OWORD*)v17 - 6);
								*((_OWORD*)v15 - 5) = *((_OWORD*)v17 - 5);
								*((_OWORD*)v15 - 4) = *((_OWORD*)v17 - 4);
								*((_OWORD*)v15 - 3) = *((_OWORD*)v17 - 3);
								*((_OWORD*)v15 - 2) = *((_OWORD*)v17 - 2);
								*((_OWORD*)v15 - 1) = *((_OWORD*)v17 - 1);
								--v18;
							} while (v18);
							v20 = *(_OWORD*)v17;
							v85 = 1;
							*(_OWORD*)v15 = v20;
							*((_OWORD*)v15 + 1) = *((_OWORD*)v17 + 1);
							*((_QWORD*)v15 + 4) = *((_QWORD*)v17 + 4);
						}
					}
					else
					{
						v16 = *(float**)(v14 + 40);
						v90 = v16;
					}
					v21 = v6[5];
					v22 = *(_DWORD*)(*(_QWORD*)v21 + 12i64);
					v23 = *(_DWORD*)(*(_QWORD*)(v21 + 8i64 * v6[6] - 8) + 12i64);
					v86 = v23;
					v100 = v22;
					if (v22 <= v23)
					{
						do
						{
							v24 = v6[6];
							v25 = 0i64;
							v26 = v24;
							if (v24)
							{
								v27 = v6[5];
								while (1)
								{
									v28 = v25 + ((v26 - v25) >> 1);
									v29 = *(_QWORD*)(v27 + 8 * v28);
									v30 = v29 ? v22 - *(_DWORD*)(v29 + 12) : 0;
									if (v30 >= 0)
										break;
									v26 = v25 + ((v26 - v25) >> 1);
								LABEL_30:
									if (v25 >= v26)
										goto LABEL_142;
								}
								if (v30 > 0)
								{
									v25 = v28 + 1;
									goto LABEL_30;
								}
								v31 = v25 + ((v26 - v25) >> 1);
								if (v28)
								{
									v32 = v27 + 8 * v28;
									while (1)
									{
										v33 = *(_QWORD*)(v32 - 8);
										v32 -= 8i64;
										--v31;
										if (v33)
										{
											if (v22 != *(_DWORD*)(v33 + 12))
												break;
										}
										if (!v31)
											goto LABEL_39;
									}
									++v31;
								}
							LABEL_39:
								v34 = v28 + 1;
								if (v34 < v24)
								{
									v35 = v27 + 8 * v34;
									do
									{
										if (*(_QWORD*)v35 && v22 != *(_DWORD*)(*(_QWORD*)v35 + 12i64))
											break;
										++v34;
										v35 += 8i64;
									} while (v34 < v24);
								}
								if (v31 != v34)
								{
									v36 = *(_DWORD*)(*(_QWORD*)(v27 + 8 * v31) + 16i64);
									v37 = *(_DWORD*)(*(_QWORD*)(v27 + 8 * v34 - 8) + 16i64);
									v103 = v36;
									v87 = v37;
									v38 = COERCE_DOUBLE(sub_1407A1C30(v22, v95));
									v39 = *(float*)&v38;
									v40 = v38;
									if ((unsigned int)v22 <= 0x11)
									{
										v41 = 200668;
										if (_bittest(&v41, v22))
										{
											if (v36 > v37)
												goto LABEL_100;
											while (1)
											{
												v42 = v6[6];
												v43 = 0i64;
												v44 = v42;
												if (!v42)
													goto LABEL_98;
												v45 = v6[5];
												while (1)
												{
													v46 = v43 + ((v44 - v43) >> 1);
													v47 = *(_QWORD*)(v45 + 8 * v46);
													if (v47)
													{
														v48 = v22 - *(_DWORD*)(v47 + 12);
														if (v22 == *(_DWORD*)(v47 + 12) && v36 != -1)
															v48 = v36 - *(_DWORD*)(v47 + 16);
													}
													else
													{
														v48 = 0;
													}
													if (v48 >= 0)
														break;
													v44 = v43 + ((v44 - v43) >> 1);
												LABEL_59:
													if (v43 >= v44)
														goto LABEL_98;
												}
												if (v48 > 0)
													break;
												v49 = v43 + ((v44 - v43) >> 1);
												if (v46)
												{
													v50 = v45 + 8 * v46;
													while (1)
													{
														v51 = *(_QWORD*)(v50 - 8);
														v50 -= 8i64;
														--v49;
														if (v51)
														{
															if (v22 != *(_DWORD*)(v51 + 12) || v36 != -1 && v36 != *(_DWORD*)(v51 + 16))
																break;
														}
														if (!v49)
															goto LABEL_70;
													}
													++v49;
												}
											LABEL_70:
												v52 = v46 + 1;
												if (v46 + 1 < v42)
												{
													v53 = (__int64*)(v45 + 8 * v52);
													do
													{
														v54 = *v53;
														if (*v53 && (v22 != *(_DWORD*)(v54 + 12) || v36 != -1 && v36 != *(_DWORD*)(v54 + 16)))
															break;
														++v52;
														++v53;
													} while (v52 < v42);
												}
												if (v49 != v52)
												{
													v55 = 0i64;
													v56 = 0i64;
													v57 = 0i64;
													v92 = 0i64;
													v93 = 0i64;
													v94 = 0i64;
													if (v52 != v49)
													{
														v55 = sub_14018B280(4 * (v52 - v49), 0);
														sub_1407DB590(v55, 0i64, 0i64);
														v57 = (__int64)&v55[v52 - v49];
														v92 = v55;
														v94 = v57;
														v56 = v55;
														v93 = v55;
													}
													v58 = 0i64;
													if (v49 < v52)
													{
														while (1)
														{
															v59 = v6[5];
															v60 = *(_QWORD*)(v59 + 8 * v49);
															v61 = *(_DWORD*)(v60 + 20);
															if (v61 == 2)
																break;
															v62 = sub_1403D6F20((float*)v60, v61, v39, v40).m128_u32[0];
															v84 = v62;
															if (v56 == (int*)v57)
															{
																sub_1401E4420(&v91, v56, (int*)&v84);
																v57 = v94;
																v56 = v93;
															}
															else
															{
																if (v56)
																	*v56 = v62;
																v93 = ++v56;
															}
															if (++v49 >= v52)
																goto LABEL_90;
														}
														v58 = *(_QWORD*)(v59 + 8 * v49);
													LABEL_90:
														v55 = v92;
													}
													v63 = 0.0;
													v64 = (float*)v55;
													if (v55 != v56)
													{
														do
															*(float*)&v63 = *(float*)&v63 + *v64++;
														while (v64 != (float*)v56);
													}
													if (v58)
														LODWORD(v63) = sub_1403D6F20((float*)v58, *(_DWORD*)(v58 + 20), v39, v63).m128_u32[0];
													*(float*)&v40 = *(float*)&v40 + *(float*)&v63;
													if (v55)
														sub_14018B900((__int64)v55, 0);
													v37 = v87;
													v22 = v100;
													v36 = v103;
												}
											LABEL_98:
												v103 = ++v36;
												if (v36 > v37)
												{
													v16 = v90;
													v23 = v86;
													goto LABEL_100;
												}
											}
											v43 = v46 + 1;
											goto LABEL_59;
										}
									}
									if ((v22 & 0xFFFFFFFA) == 0 && v22 != 4)
									{
										if (v36 > v37)
										{
										LABEL_100:
											v65 = *(float*)&v40;
											goto LABEL_141;
										}
										v66 = v6[6];
										while (1)
										{
											v67 = 0i64;
											v68 = v66;
											if (!v66)
												goto LABEL_138;
											v69 = v6[5];
											while (1)
											{
												v70 = v67 + ((v68 - v67) >> 1);
												v71 = *(_QWORD*)(v69 + 8 * v70);
												if (v71)
												{
													v72 = v22 - *(_DWORD*)(v71 + 12);
													if (v22 == *(_DWORD*)(v71 + 12) && v36 != -1)
														v72 = v36 - *(_DWORD*)(v71 + 16);
												}
												else
												{
													v72 = 0;
												}
												if (v72 >= 0)
													break;
												v68 = v67 + ((v68 - v67) >> 1);
											LABEL_116:
												if (v67 >= v68)
													goto LABEL_138;
											}
											if (v72 > 0)
												break;
											v73 = v67 + ((v68 - v67) >> 1);
											if (v70)
											{
												v74 = v69 + 8 * v70;
												while (1)
												{
													v75 = *(_QWORD*)(v74 - 8);
													v74 -= 8i64;
													--v73;
													if (v75)
													{
														if (v22 != *(_DWORD*)(v75 + 12) || v36 != -1 && v36 != *(_DWORD*)(v75 + 16))
															break;
													}
													if (!v73)
														goto LABEL_127;
												}
												++v73;
											}
										LABEL_127:
											v76 = v70 + 1;
											if (v76 < v66)
											{
												v77 = (__int64*)(v69 + 8 * v76);
												do
												{
													v78 = *v77;
													if (*v77 && (v22 != *(_DWORD*)(v78 + 12) || v36 != -1 && v36 != *(_DWORD*)(v78 + 16)))
														break;
													++v76;
													++v77;
												} while (v76 < v66);
											}
											if (v73 < v76)
											{
												v79 = v69 + 8 * v73;
												v80 = v76 - v73;
												do
												{
													v81 = sub_1403D6F20((float*)*(_QWORD*)v79, *(_DWORD*)(*(_QWORD*)v79 + 20i64), v39, v40).m128_u64[0];
													v79 += 8i64;
													v40 = *(double*)&v81;
													--v80;
												} while (v80);
												v22 = v100;
											}
										LABEL_138:
											if (++v36 > v37)
											{
												v23 = v86;
												v65 = *(float*)&v40;
												goto LABEL_141;
											}
										}
										v67 = v70 + 1;
										goto LABEL_116;
									}
									v82 = *(_QWORD*)(v6[5] + 8 * v31);
									LODWORD(v65) = sub_1403D6F20((float*)v82, *(_DWORD*)(v82 + 20), *(float*)&v38, v38).m128_u32[0];
								LABEL_141:
									sub_1407A2620(v22, v65, v16);
								}
							}
						LABEL_142:
							v100 = ++v22;
						} while (v22 <= v23);
						v8 = v88;
						v5 = a3;
					}
					if (v85)
					{
						LODWORD(v98[0]) = v8;
						v98[1] = v16;
						sub_140055F80(v5, (__int64)v99, v98);
					}
				}
				a2 = v101;
				v4 = v89;
			}
			v83 = v6[3];
			if (v83)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v83 + 16); result; result = (_QWORD*)result[2])
					v6 = result;
			}
			else
			{
				for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v6 = result;
				if ((_QWORD*)v6[3] != result)
					v6 = result;
			}
		} while (v6 != *(_QWORD**)(a2 + 8));
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403D4910: using guessed type char var_70[8];

