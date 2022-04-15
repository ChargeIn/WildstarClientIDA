//----- (00000001402B6700) ----------------------------------------------------
__int64 __fastcall sub_1402B6700(
	unsigned __int64 a1,
	__int64 a2,
	__int64 a3,
	int a4,
	unsigned int a5,
	__int64 a6,
	_QWORD* a7)
{
	int v8; // edi
	int v11; // eax
	unsigned __int64 v12; // r12
	__int64 v13; // rax
	int* v14; // rax
	__int64 v15; // rbx
	int v16; // eax
	__int64 v17; // r9
	__int64 v18; // r8
	int v19; // r13d
	int v20; // r10d
	__int64 v21; // rdx
	int v22; // eax
	unsigned __int64 v23; // rsi
	unsigned __int64 v24; // rax
	unsigned __int64 v25; // rcx
	__int64 v26; // r15
	__int64 v27; // rax
	__int64 v28; // r9
	__int64 v29; // rcx
	char* v30; // rsi
	unsigned __int64 v31; // rbp
	unsigned __int64 v32; // r14
	int* v33; // rdi
	int v34; // eax
	unsigned __int64 v35; // rdx
	unsigned __int64* v36; // rax
	unsigned __int64* v37; // r9
	unsigned __int64 v38; // r12
	unsigned int v39; // edi
	int v41; // eax
	__int64 v42; // rdx
	int v43; // eax
	unsigned __int64 v44; // rax
	unsigned __int64 v45; // rcx
	__int64 v46; // r15
	__int64 v47; // rax
	__int64 v48; // r9
	__int64 v49; // rcx
	char* v50; // rsi
	unsigned __int64 v51; // rbp
	unsigned __int64 v52; // r14
	int* v53; // rdi
	int v54; // eax
	unsigned __int64 v55; // rdx
	unsigned __int64* v56; // rax
	unsigned __int64* v57; // r9
	unsigned __int64 v58; // r12
	int v59; // eax
	__int64 v60; // rdx
	int v61; // eax
	unsigned __int64 v62; // [rsp+48h] [rbp-70h]
	__int64 v63; // [rsp+48h] [rbp-70h]
	__int64 v64; // [rsp+50h] [rbp-68h]
	__int64 v65; // [rsp+50h] [rbp-68h]
	unsigned __int64 v66; // [rsp+58h] [rbp-60h]
	unsigned __int64 v67; // [rsp+58h] [rbp-60h]
	unsigned __int64 v68; // [rsp+60h] [rbp-58h] BYREF
	unsigned int v69; // [rsp+68h] [rbp-50h]
	__int64 v70; // [rsp+70h] [rbp-48h]
	__int64 v71; // [rsp+78h] [rbp-40h] BYREF
	__int64 v72; // [rsp+80h] [rbp-38h]
	__int64 v73; // [rsp+88h] [rbp-30h]

	v8 = a4;
	v69 = a5 & 1;
	if ((a5 & 1) != 0)
	{
		if ((a5 & 0x10) != 0)
		{
			v8 = a4 | 0x10000;
		}
		else if ((a5 & 0xCE0) != 0)
		{
			v8 = a4 | 0x20000;
		}
		else if ((a5 & 0x308) != 0)
		{
			v8 = a4 | 0x40000;
		}
	}
	v11 = *(_DWORD*)(a3 + 52);
	if (v11 >= 2)
	{
		sub_1402B2830(a3, v8, &v68, &v71, v11);
		v12 = v68;
		if (v68)
		{
			if (v68 == *a7)
			{
				v13 = 48 * v68;
				if (!is_mul_ok(v68, 0x30ui64))
					v13 = -1i64;
				v14 = sub_14018B280(v13, 1u);
				v15 = (__int64)v14;
				if (!v14)
				{
					v16 = -2147024882;
				LABEL_41:
					v39 = v16;
				LABEL_42:
					sub_14018B900(v15, 0);
					return v39;
				}
				if (sub_1402B29B0(a1, a2, a3, v8, (__int64)v14, v12))
				{
					if (v12 == *a7)
					{
						v17 = a7[9];
						v73 = v17;
						if (v17)
						{
							v18 = a5;
							v19 = (a5 >> 1) & 1;
							v20 = a5 & 4;
							if ((a5 & 4) != 0)
								LOBYTE(v19) = ((a5 & 2) != 0) | 2;
							v21 = a3;
							v22 = *(_DWORD*)(a3 + 52);
							if (v22 >= 2)
							{
								if (v22 <= 3)
								{
									v44 = 0i64;
									v45 = 0i64;
									v65 = 0i64;
									v63 = 0i64;
									if (*(_QWORD*)(a3 + 24))
									{
										while (1)
										{
											v67 = 0i64;
											if (*(_QWORD*)(v21 + 32))
												break;
										LABEL_85:
											v63 = ++v44;
											if (v44 >= *(_QWORD*)(v21 + 24))
											{
												v39 = 0;
												goto LABEL_42;
											}
										}
										v46 = v17 + 48 * v45 + 24;
										v47 = v15 - v17;
										v48 = v15 - v17 + 8;
										v71 = v47;
										v70 = v48;
										while (v45 < v12)
										{
											v49 = *(_QWORD*)(v46 - 16);
											if (v49 != *(_QWORD*)(v46 + v47 - 16))
												break;
											v50 = *(char**)(v46 + v47 + 16);
											v51 = *(_QWORD*)v46;
											v52 = *(_QWORD*)(v46 + v47);
											if (!v50 || (v53 = *(int**)(v46 + 16)) == 0i64)
											{
											LABEL_87:
												v16 = -2147467261;
												goto LABEL_41;
											}
											v54 = *(_DWORD*)(v21 + 48);
											if (v54 < 70 || v54 > 84 && (unsigned int)(v54 - 94) > 5)
											{
												v58 = 0i64;
												if (v49)
												{
													do
													{
														if (v69)
														{
															if ((v18 & 0xE0) != 0)
															{
																if (!sub_1402C3140((__int64)v53, v51, v18, v50, v52, 86 - ((v18 & 0x20) != 0), v19))
																	goto LABEL_40;
															}
															else
															{
																v59 = sub_1402B6160(v18);
																if (!sub_1402B61B0(
																	(__int64)v53,
																	v51,
																	*(_DWORD*)(v60 + 48),
																	(__int64)v50,
																	v52,
																	v59,
																	a6,
																	v19))
																	goto LABEL_40;
															}
														}
														else
														{
															v61 = *(_DWORD*)(v21 + 48);
															if (v20)
																sub_1402C2E80(v53, v51, (int*)v50, v52, v61, v19);
															else
																sub_1402C2A00((__int64)v53, v51, (int*)v50, v52, v61, v19);
														}
														v21 = a3;
														v18 = a5;
														v20 = a5 & 4;
														++v58;
														v50 += v52;
														v53 = (int*)((char*)v53 + v51);
													} while (v58 < *(_QWORD*)(v46 - 16));
													v48 = v70;
												}
												v12 = v68;
											}
											else
											{
												v55 = *(_QWORD*)(v46 + 8);
												v56 = (unsigned __int64*)(v46 + v48);
												v57 = (unsigned __int64*)(v46 + 8);
												if (*v56 < v55)
													v57 = v56;
												sub_1407E15B8(*(int**)(v46 + 16), v55, (int*)v50, *v57);
												v21 = a3;
												v18 = a5;
												v48 = v70;
												v20 = a5 & 4;
											}
											v47 = v71;
											v45 = v65 + 1;
											v46 += 48i64;
											++v67;
											++v65;
											if (v67 >= *(_QWORD*)(v21 + 32))
											{
												v44 = v63;
												v17 = v73;
												goto LABEL_85;
											}
										}
										goto LABEL_40;
									}
									goto LABEL_56;
								}
								if (v22 == 4)
								{
									v23 = *(_QWORD*)(a3 + 16);
									v24 = 0i64;
									v25 = 0i64;
									v66 = v23;
									v64 = 0i64;
									v70 = 0i64;
									if (*(_QWORD*)(a3 + 32))
									{
										while (1)
										{
											v62 = 0i64;
											if (v23)
												break;
										LABEL_53:
											if (v23 > 1)
											{
												v23 >>= 1;
												v66 = v23;
											}
											v70 = ++v24;
											if (v24 >= *(_QWORD*)(v21 + 32))
												goto LABEL_56;
										}
										v26 = v17 + 48 * v25 + 24;
										v27 = v15 - v17;
										v28 = v15 - v17 + 8;
										v71 = v27;
										v72 = v28;
										while (v25 < v12)
										{
											v29 = *(_QWORD*)(v26 - 16);
											if (v29 != *(_QWORD*)(v27 + v26 - 16))
												break;
											v30 = *(char**)(v27 + v26 + 16);
											v31 = *(_QWORD*)v26;
											v32 = *(_QWORD*)(v27 + v26);
											if (!v30)
												goto LABEL_87;
											v33 = *(int**)(v26 + 16);
											if (!v33)
												goto LABEL_87;
											v34 = *(_DWORD*)(v21 + 48);
											if (v34 < 70 || v34 > 84 && (unsigned int)(v34 - 94) > 5)
											{
												v38 = 0i64;
												if (v29)
												{
													do
													{
														if (v69)
														{
															if ((v18 & 0xE0) != 0)
															{
																if (!sub_1402C3140((__int64)v33, v31, v18, v30, v32, 86 - ((v18 & 0x20) != 0), v19))
																	goto LABEL_40;
															}
															else
															{
																v41 = sub_1402B6160(v18);
																if (!sub_1402B61B0(
																	(__int64)v33,
																	v31,
																	*(_DWORD*)(v42 + 48),
																	(__int64)v30,
																	v32,
																	v41,
																	a6,
																	v19))
																	goto LABEL_40;
															}
														}
														else
														{
															v43 = *(_DWORD*)(v21 + 48);
															if (v20)
																sub_1402C2E80(v33, v31, (int*)v30, v32, v43, v19);
															else
																sub_1402C2A00((__int64)v33, v31, (int*)v30, v32, v43, v19);
														}
														v21 = a3;
														v18 = a5;
														v20 = a5 & 4;
														++v38;
														v30 += v32;
														v33 = (int*)((char*)v33 + v31);
													} while (v38 < *(_QWORD*)(v26 - 16));
													v28 = v72;
												}
												v12 = v68;
											}
											else
											{
												v35 = *(_QWORD*)(v26 + 8);
												v36 = (unsigned __int64*)(v28 + v26);
												v37 = (unsigned __int64*)(v26 + 8);
												if (*v36 < v35)
													v37 = v36;
												sub_1407E15B8(*(int**)(v26 + 16), v35, (int*)v30, *v37);
												v21 = a3;
												v18 = a5;
												v28 = v72;
												v20 = a5 & 4;
											}
											v23 = v66;
											v27 = v71;
											v25 = v64 + 1;
											v26 += 48i64;
											++v62;
											++v64;
											if (v62 >= v66)
											{
												v24 = v70;
												v17 = v73;
												goto LABEL_53;
											}
										}
										goto LABEL_40;
									}
								LABEL_56:
									v39 = 0;
									goto LABEL_42;
								}
							}
						}
					}
				}
			LABEL_40:
				v16 = -2147467259;
				goto LABEL_41;
			}
		}
	}
	return 2147500037i64;
}
// 1402B69EE: variable 'v42' is possibly undefined
// 1402B6C20: variable 'v60' is possibly undefined

