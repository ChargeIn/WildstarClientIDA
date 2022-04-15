//----- (00000001403D4210) ----------------------------------------------------
_QWORD* __fastcall sub_1403D4210(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* result; // rax
	__int64 v4; // rcx
	__int64 v5; // r13
	_QWORD* v6; // rbx
	bool v7; // zf
	unsigned int v8; // edi
	_QWORD* v9; // rsi
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64* v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // r15
	__int64 v17; // rdx
	signed int v18; // esi
	int v19; // r14d
	unsigned __int64 v20; // r10
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // r8
	__int64 v23; // r11
	unsigned __int64 v24; // rcx
	__int64 v25; // r9
	int v26; // eax
	unsigned __int64 v27; // rdi
	__int64 v28; // r8
	__int64 v29; // rdx
	unsigned __int64 v30; // rcx
	__int64 v31; // rdx
	unsigned int v32; // r12d
	unsigned int v33; // r13d
	double v34; // xmm0_8
	float v35; // xmm7_4
	double v36; // xmm6_8
	int v37; // eax
	unsigned __int64 v38; // r11
	unsigned __int64 v39; // r8
	unsigned __int64 v40; // r9
	__int64 v41; // r10
	__int64 v42; // rcx
	__int64 v43; // rdx
	int v44; // eax
	unsigned __int64 v45; // r14
	__int64 v46; // r8
	__int64 v47; // rdx
	unsigned __int64 v48; // r15
	__int64* v49; // rdx
	__int64 v50; // rcx
	int* v51; // r12
	int* v52; // rsi
	__int64 v53; // r13
	__int64 v54; // rdi
	__int64 v55; // rax
	__int64 v56; // rcx
	int v57; // edx
	unsigned __int32 v58; // xmm0_4
	double v59; // xmm0_8
	float* v60; // rax
	__int64 v61; // rcx
	float v62; // xmm1_4
	unsigned __int64 v63; // r14
	unsigned __int64 v64; // rdx
	unsigned __int64 v65; // r8
	__int64 v66; // r9
	unsigned __int64 v67; // rdi
	__int64 v68; // rcx
	int v69; // eax
	unsigned __int64 v70; // r8
	__int64 v71; // rdx
	__int64 v72; // rcx
	unsigned __int64 v73; // rdi
	__int64* v74; // rdx
	__int64 v75; // rcx
	__int64 v76; // rsi
	unsigned __int64 v77; // rdi
	unsigned __int64 v78; // xmm0_8
	__int64 v79; // rax
	unsigned __int32 v80; // [rsp+28h] [rbp-89h] BYREF
	int v81; // [rsp+2Ch] [rbp-85h]
	int v82; // [rsp+30h] [rbp-81h]
	unsigned int v83; // [rsp+34h] [rbp-7Dh]
	__int64 v84; // [rsp+38h] [rbp-79h]
	unsigned int v85; // [rsp+40h] [rbp-71h]
	__int64 v86; // [rsp+48h] [rbp-69h]
	__int64 v87; // [rsp+50h] [rbp-61h] BYREF
	int* v88; // [rsp+58h] [rbp-59h]
	int* v89; // [rsp+60h] [rbp-51h]
	__int64 v90; // [rsp+68h] [rbp-49h]
	__int64 v91; // [rsp+70h] [rbp-41h] BYREF
	__int64 v92; // [rsp+78h] [rbp-39h] BYREF
	_QWORD* v93; // [rsp+80h] [rbp-31h]
	_QWORD v94[2]; // [rsp+88h] [rbp-29h] BYREF
	char v95[8]; // [rsp+98h] [rbp-19h] BYREF
	signed int v96; // [rsp+118h] [rbp+67h]
	__int64 v97; // [rsp+120h] [rbp+6Fh]
	unsigned int v99; // [rsp+130h] [rbp+7Fh]

	v97 = a2;
	result = *(_QWORD**)(a2 + 8);
	v4 = qword_140C65B70;
	v5 = a3;
	v6 = (_QWORD*)result[2];
	v84 = qword_140C65B70;
	if (v6 != result)
	{
		do
		{
			v7 = v6[6] == 0i64;
			v8 = *((_DWORD*)v6 + 8);
			v85 = v8;
			if (!v7)
			{
				v9 = (_QWORD*)sub_1407A0FD0(v4, v8);
				v93 = v9;
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
						v91 = *(_QWORD*)(v5 + 8);
						v13 = &v91;
					}
					else
					{
						v92 = v11;
						v13 = &v92;
					}
					v14 = *v13;
					v82 = 0;
					if (v14 == v10)
					{
						v15 = sub_14018B280(136i64, 0);
						v16 = (__int64)v15;
						v86 = (__int64)v15;
						if (v15)
						{
							*((_QWORD*)v15 + 4) = 0i64;
							*((_QWORD*)v15 + 3) = 0i64;
							*((_QWORD*)v15 + 13) = 0i64;
							*((_QWORD*)v15 + 12) = 0i64;
							*((_QWORD*)v15 + 14) = 0i64;
							v15[30] = 0;
							*(_QWORD*)v15 = off_140B667D0;
							v15[32] = 0;
						}
						else
						{
							v16 = 0i64;
							v86 = 0i64;
						}
						sub_1403D8810(v16, (__int64)v9);
						v82 = 1;
					}
					else
					{
						v16 = *(_QWORD*)(v14 + 40);
						v86 = v16;
					}
					v17 = v6[5];
					v18 = *(_DWORD*)(*(_QWORD*)v17 + 8i64);
					v19 = *(_DWORD*)(*(_QWORD*)(v17 + 8i64 * v6[6] - 8) + 8i64);
					v81 = v19;
					v96 = v18;
					if (v18 <= v19)
					{
						while (1)
						{
							v20 = v6[6];
							v21 = 0i64;
							v22 = v20;
							if (!v20)
								goto LABEL_141;
							v23 = v6[5];
							while (1)
							{
								v24 = v21 + ((v22 - v21) >> 1);
								v25 = *(_QWORD*)(v23 + 8 * v24);
								v26 = v25 ? v18 - *(_DWORD*)(v25 + 8) : 0;
								if (v26 >= 0)
									break;
								v22 = v21 + ((v22 - v21) >> 1);
							LABEL_29:
								if (v21 >= v22)
									goto LABEL_141;
							}
							if (v26 > 0)
								break;
							v27 = v21 + ((v22 - v21) >> 1);
							if (v24)
							{
								v28 = v23 + 8 * v24;
								while (1)
								{
									v29 = *(_QWORD*)(v28 - 8);
									v28 -= 8i64;
									--v27;
									if (v29)
									{
										if (v18 != *(_DWORD*)(v29 + 8))
											break;
									}
									if (!v27)
										goto LABEL_38;
								}
								++v27;
							}
						LABEL_38:
							v30 = v24 + 1;
							if (v30 < v20)
							{
								v31 = v23 + 8 * v30;
								do
								{
									if (*(_QWORD*)v31 && v18 != *(_DWORD*)(*(_QWORD*)v31 + 8i64))
										break;
									++v30;
									v31 += 8i64;
								} while (v30 < v20);
							}
							if (v27 == v30)
								goto LABEL_141;
							v32 = *(_DWORD*)(*(_QWORD*)(v23 + 8 * v27) + 12i64);
							v33 = *(_DWORD*)(*(_QWORD*)(v23 + 8 * v30 - 8) + 12i64);
							v99 = v32;
							v83 = v33;
							v34 = COERCE_DOUBLE(sub_1407A18C0(v18, v93));
							v35 = *(float*)&v34;
							v36 = v34;
							if ((unsigned int)v18 <= 0x15)
							{
								v37 = 3260271;
								if (_bittest(&v37, v18))
								{
									if (v32 > v33)
										goto LABEL_139;
								LABEL_47:
									v38 = v6[6];
									v39 = 0i64;
									v40 = v38;
									if (!v38)
										goto LABEL_97;
									v41 = v6[5];
									while (1)
									{
										v42 = v39 + ((v40 - v39) >> 1);
										v43 = *(_QWORD*)(v41 + 8 * v42);
										if (v43)
										{
											v44 = v18 - *(_DWORD*)(v43 + 8);
											if (v18 == *(_DWORD*)(v43 + 8) && v32 != -1)
												v44 = v32 - *(_DWORD*)(v43 + 12);
										}
										else
										{
											v44 = 0;
										}
										if (v44 >= 0)
										{
											if (v44 <= 0)
											{
												v45 = v39 + ((v40 - v39) >> 1);
												if (v42)
												{
													v46 = v41 + 8 * v42;
													while (1)
													{
														v47 = *(_QWORD*)(v46 - 8);
														v46 -= 8i64;
														--v45;
														if (v47)
														{
															if (v18 != *(_DWORD*)(v47 + 8) || v32 != -1 && v32 != *(_DWORD*)(v47 + 12))
																break;
														}
														if (!v45)
															goto LABEL_69;
													}
													++v45;
												}
											LABEL_69:
												v48 = v42 + 1;
												if (v42 + 1 < v38)
												{
													v49 = (__int64*)(v41 + 8 * v48);
													do
													{
														v50 = *v49;
														if (*v49 && (v18 != *(_DWORD*)(v50 + 8) || v32 != -1 && v32 != *(_DWORD*)(v50 + 12)))
															break;
														++v48;
														++v49;
													} while (v48 < v38);
												}
												if (v45 != v48)
												{
													v51 = 0i64;
													v52 = 0i64;
													v53 = 0i64;
													v88 = 0i64;
													v89 = 0i64;
													v90 = 0i64;
													if (v48 != v45)
													{
														v51 = sub_14018B280(4 * (v48 - v45), 0);
														sub_1407DB590(v51, 0i64, 0i64);
														v53 = (__int64)&v51[v48 - v45];
														v88 = v51;
														v90 = v53;
														v52 = v51;
														v89 = v51;
													}
													v54 = 0i64;
													if (v45 < v48)
													{
														while (1)
														{
															v55 = v6[5];
															v56 = *(_QWORD*)(v55 + 8 * v45);
															v57 = *(_DWORD*)(v56 + 16);
															if (v57 == 2)
																break;
															v58 = sub_1403D6D70((float*)v56, v57, v35, v36).m128_u32[0];
															v80 = v58;
															if (v52 == (int*)v53)
															{
																sub_1401E4420(&v87, v52, (int*)&v80);
																v53 = v90;
																v52 = v89;
															}
															else
															{
																if (v52)
																	*v52 = v58;
																v89 = ++v52;
															}
															if (++v45 >= v48)
																goto LABEL_89;
														}
														v54 = *(_QWORD*)(v55 + 8 * v45);
													LABEL_89:
														v51 = v88;
													}
													v59 = 0.0;
													v60 = (float*)v51;
													if (v51 != v52)
													{
														do
															*(float*)&v59 = *(float*)&v59 + *v60++;
														while (v60 != (float*)v52);
													}
													if (v54)
														LODWORD(v59) = sub_1403D6D70((float*)v54, *(_DWORD*)(v54 + 16), v35, v59).m128_u32[0];
													*(float*)&v36 = *(float*)&v36 + *(float*)&v59;
													if (v51)
														sub_14018B900((__int64)v51, 0);
													v33 = v83;
													v18 = v96;
													v32 = v99;
												}
											LABEL_97:
												v99 = ++v32;
												if (v32 > v33)
												{
													v16 = v86;
													goto LABEL_138;
												}
												goto LABEL_47;
											}
											v39 = v42 + 1;
										}
										else
										{
											v40 = v39 + ((v40 - v39) >> 1);
										}
										if (v39 >= v40)
											goto LABEL_97;
									}
								}
							}
							if (v18 != 14 && (unsigned int)(v18 - 17) > 1)
							{
								v61 = *(_QWORD*)(v6[5] + 8 * v27);
								LODWORD(v62) = sub_1403D6D70((float*)v61, *(_DWORD*)(v61 + 16), *(float*)&v34, v34).m128_u32[0];
								goto LABEL_140;
							}
							if (v32 > v33)
								goto LABEL_139;
							v63 = v6[6];
							while (2)
							{
								v64 = 0i64;
								v65 = v63;
								if (!v63)
									goto LABEL_137;
								v66 = v6[5];
								while (2)
								{
									v67 = v64 + ((v65 - v64) >> 1);
									v68 = *(_QWORD*)(v66 + 8 * v67);
									if (v68)
									{
										v69 = v18 - *(_DWORD*)(v68 + 8);
										if (v18 == *(_DWORD*)(v68 + 8) && v32 != -1)
											v69 = v32 - *(_DWORD*)(v68 + 12);
									}
									else
									{
										v69 = 0;
									}
									if (v69 < 0)
									{
										v65 = v64 + ((v65 - v64) >> 1);
										goto LABEL_115;
									}
									if (v69 > 0)
									{
										v64 = v67 + 1;
									LABEL_115:
										if (v64 >= v65)
											goto LABEL_137;
										continue;
									}
									break;
								}
								v70 = v64 + ((v65 - v64) >> 1);
								if (v67)
								{
									v71 = v66 + 8 * v67;
									while (1)
									{
										v72 = *(_QWORD*)(v71 - 8);
										v71 -= 8i64;
										--v70;
										if (v72)
										{
											if (v18 != *(_DWORD*)(v72 + 8) || v32 != -1 && v32 != *(_DWORD*)(v72 + 12))
												break;
										}
										if (!v70)
											goto LABEL_126;
									}
									++v70;
								}
							LABEL_126:
								v73 = v67 + 1;
								if (v73 < v63)
								{
									v74 = (__int64*)(v66 + 8 * v73);
									do
									{
										v75 = *v74;
										if (*v74 && (v18 != *(_DWORD*)(v75 + 8) || v32 != -1 && v32 != *(_DWORD*)(v75 + 12)))
											break;
										++v73;
										++v74;
									} while (v73 < v63);
								}
								if (v70 < v73)
								{
									v76 = v66 + 8 * v70;
									v77 = v73 - v70;
									do
									{
										v78 = sub_1403D6D70((float*)*(_QWORD*)v76, *(_DWORD*)(*(_QWORD*)v76 + 16i64), v35, v36).m128_u64[0];
										v76 += 8i64;
										v36 = *(double*)&v78;
										--v77;
									} while (v77);
									v18 = v96;
								}
							LABEL_137:
								if (++v32 <= v33)
									continue;
								break;
							}
						LABEL_138:
							v19 = v81;
						LABEL_139:
							v62 = *(float*)&v36;
						LABEL_140:
							sub_1407A1EB0(v18, v62, v16);
						LABEL_141:
							v96 = ++v18;
							if (v18 > v19)
							{
								v8 = v85;
								v5 = a3;
								goto LABEL_143;
							}
						}
						v21 = v24 + 1;
						goto LABEL_29;
					}
				LABEL_143:
					if (v82)
					{
						LODWORD(v94[0]) = v8;
						v94[1] = v16;
						sub_140055F80(v5, (__int64)v95, v94);
					}
				}
				a2 = v97;
				v4 = v84;
			}
			v79 = v6[3];
			if (v79)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v79 + 16); result; result = (_QWORD*)result[2])
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
// 140B667D0: using guessed type __int64 (__fastcall *off_140B667D0[11])();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403D4210: using guessed type char var_70[8];

