#include "../winhttp.h"

//----- (00000001400314D0) ----------------------------------------------------
__int64 __fastcall sub_1400314D0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v3; // rbx
	_QWORD* v5; // rdi
	__int64 v6; // r15
	__int64 v7; // r14
	unsigned __int64 v8; // rcx
	__int64 v9; // rsi
	unsigned __int64 v10; // rbx
	unsigned __int64 v11; // rax
	__int64 v12; // rcx
	_DWORD* v13; // r13
	unsigned __int64 v14; // r11
	unsigned int* v15; // r10
	unsigned int v16; // r8d
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64* v20; // rcx
	__int64 v21; // rsi
	unsigned int v22; // r9d
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // rdx
	unsigned __int64 v25; // rcx
	unsigned int v26; // r8d
	int* v27; // rax
	unsigned int v28; // r8d
	__int64 v29; // rdx
	int* v30; // rbx
	bool v31; // al
	__int64 v32; // r8
	__int64 v33; // rdi
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64* v36; // rax
	__int64 v37; // rax
	__int64 v38; // r9
	unsigned int v39; // r8d
	__int64 v40; // rdx
	__int64 v41; // rbx
	bool v42; // al
	__int64 v43; // rcx
	__int64 j; // rax
	__int64 v45; // rax
	int* v46; // rcx
	__int64 v47; // rax
	__int64 v48; // rax
	int* v49; // rcx
	int* v50; // rcx
	__int64 i; // rax
	int* v52; // rax
	int* v53; // rax
	__int64 v54; // rdi
	__int64 v55; // rbx
	__int64 v56; // rbx
	__int64 v57; // rdi
	__int64 v58; // r8
	__int64 v59; // rcx
	__int64 v60; // rax
	__int64 v61; // rdx
	__int64 k; // rdx
	__int64 m; // rdx
	int* v64; // rax
	__int64 v65; // rdi
	__int64 v66; // rbx
	__int64 v67; // rsi
	__int64 v68; // rdi
	__int64 v69; // rbx
	int v71; // [rsp+20h] [rbp-89h] BYREF
	char v72[8]; // [rsp+28h] [rbp-81h] BYREF
	int* v73; // [rsp+30h] [rbp-79h]
	__int64 v74; // [rsp+38h] [rbp-71h]
	__int64 v75; // [rsp+48h] [rbp-61h] BYREF
	unsigned __int64 v76; // [rsp+50h] [rbp-59h]
	unsigned __int64 v77; // [rsp+58h] [rbp-51h]
	__int64 v78; // [rsp+60h] [rbp-49h]
	unsigned __int64 v79; // [rsp+68h] [rbp-41h]
	int v80; // [rsp+70h] [rbp-39h]
	char v81[8]; // [rsp+78h] [rbp-31h] BYREF
	int* v82; // [rsp+80h] [rbp-29h]
	__int64 v83; // [rsp+88h] [rbp-21h]
	__int64 v84; // [rsp+98h] [rbp-11h] BYREF
	__int64 v85; // [rsp+A0h] [rbp-9h]
	__int64 v86; // [rsp+A8h] [rbp-1h] BYREF
	__int64 v87; // [rsp+B0h] [rbp+7h] BYREF
	__int64 v88; // [rsp+B8h] [rbp+Fh] BYREF
	__int64 v89; // [rsp+C0h] [rbp+17h] BYREF
	__int64 v90; // [rsp+118h] [rbp+6Fh]
	__int64 v92; // [rsp+128h] [rbp+7Fh]

	v3 = qword_140C63600;
	v5 = a3;
	v78 = qword_140C63600;
	v6 = 0i64;
	v85 = 0i64;
	v7 = 0i64;
	v84 = 0i64;
	v82 = sub_14018B280(40i64, 0);
	v83 = 0i64;
	*(_BYTE*)v82 = 0;
	v8 = 0i64;
	v76 = 0i64;
	*((_QWORD*)v82 + 1) = 0i64;
	v9 = 0i64;
	*((_QWORD*)v82 + 2) = v82;
	v75 = 0i64;
	*((_QWORD*)v82 + 3) = v82;
	v79 = 0i64;
	if (v5[1])
	{
		do
		{
			if ((unsigned int)sub_140032A30(v3, *(_DWORD*)(*v5 + 4 * v8), &v75))
			{
				v10 = v76;
				v11 = 0i64;
				v77 = 0i64;
				if (v76)
				{
					v12 = v75;
					do
					{
						v13 = *(_DWORD**)(v12 + 8 * v11);
						if (v13[2] == *(_DWORD*)(a1 + 4) && v13[1] == *(_DWORD*)a1)
						{
							v14 = 0i64;
							v15 = v13 + 6;
							while (1)
							{
								v16 = *v15;
								if (*v15)
								{
									v17 = *(_QWORD*)(a1 + 32);
									v18 = v17;
									v19 = *(_QWORD*)(v17 + 8);
									while (v19)
									{
										if (*(_DWORD*)(v19 + 32) < v16)
										{
											v19 = *(_QWORD*)(v19 + 24);
										}
										else
										{
											v18 = v19;
											v19 = *(_QWORD*)(v19 + 16);
										}
									}
									if (v18 == v17 || v16 < *(_DWORD*)(v18 + 32))
									{
										v89 = *(_QWORD*)(a1 + 32);
										v20 = &v89;
									}
									else
									{
										v88 = v18;
										v20 = &v88;
									}
									if (*v20 == v17)
										break;
								}
								++v14;
								++v15;
								if (v14 >= 2)
								{
									v21 = 0i64;
								LABEL_21:
									v22 = v13[v21 + 6];
									if (!v22)
										goto LABEL_105;
									v80 = v13[v21 + 6];
									v23 = 0i64;
									v24 = v6;
									if (!v6)
									{
									LABEL_28:
										v27 = sub_14018B280(40i64, 0);
										v74 = 0i64;
										v73 = v27;
										*(_BYTE*)v27 = 0;
										*((_QWORD*)v73 + 1) = 0i64;
										*((_QWORD*)v73 + 2) = v73;
										*((_QWORD*)v73 + 3) = v73;
										v28 = v13[v21 + 8];
										v71 = v13[v21 + 6];
										v29 = *((_QWORD*)v73 + 1);
										v92 = v28 | 0x100000000i64;
										v30 = v73;
										v31 = 1;
										while (v29)
										{
											v30 = (int*)v29;
											v31 = v28 < *(_DWORD*)(v29 + 32);
											if (v28 >= *(_DWORD*)(v29 + 32))
												v29 = *(_QWORD*)(v29 + 24);
											else
												v29 = *(_QWORD*)(v29 + 16);
										}
										v49 = v30;
										if (v31)
										{
											if (v30 == *((int**)v73 + 2))
											{
											LABEL_76:
												if (v30 == v73 || v28 < v30[8])
												{
													v50 = sub_14018B280(40i64, 0);
													if (v50 != (int*)-32i64)
														*((_QWORD*)v50 + 4) = v92;
													*((_QWORD*)v30 + 2) = v50;
													if (v30 == v73)
													{
														*((_QWORD*)v73 + 1) = v50;
														*((_QWORD*)v73 + 3) = v50;
													}
													else if (v30 == *((int**)v73 + 2))
													{
														*((_QWORD*)v73 + 2) = v50;
													}
												}
												else
												{
													v50 = sub_14018B280(40i64, 0);
													if (v50 != (int*)-32i64)
														*((_QWORD*)v50 + 4) = v92;
													*((_QWORD*)v30 + 3) = v50;
													if (v30 == *((int**)v73 + 3))
														*((_QWORD*)v73 + 3) = v50;
												}
												*((_QWORD*)v50 + 1) = v30;
												*((_QWORD*)v50 + 2) = 0i64;
												*((_QWORD*)v50 + 3) = 0i64;
												sub_1400081C0((__int64)v50, (_QWORD*)v73 + 1);
												++v74;
												goto LABEL_99;
											}
											if (*(_BYTE*)v30 || *(int**)(*((_QWORD*)v30 + 1) + 8i64) != v30)
											{
												v49 = (int*)*((_QWORD*)v30 + 2);
												if (v49)
												{
													for (i = *((_QWORD*)v49 + 3); i; i = *(_QWORD*)(i + 24))
														v49 = (int*)i;
												}
												else
												{
													v49 = (int*)*((_QWORD*)v30 + 1);
													if (v30 == *((int**)v49 + 2))
													{
														do
														{
															v52 = v49;
															v49 = (int*)*((_QWORD*)v49 + 1);
														} while (v52 == *((int**)v49 + 2));
													}
												}
											}
											else
											{
												v49 = (int*)*((_QWORD*)v30 + 3);
											}
										}
										if (v49[8] < v28)
											goto LABEL_76;
									LABEL_99:
										sub_1400328D0(&v84, v23, &v71);
										if (v74)
										{
											v53 = v73;
											v54 = *((_QWORD*)v73 + 1);
											if (v54)
											{
												do
												{
													sub_1400083B0((__int64)v72, *(_QWORD*)(v54 + 24));
													v55 = *(_QWORD*)(v54 + 16);
													sub_14018B900(v54, 0);
													v54 = v55;
												} while (v55);
												v53 = v73;
											}
											*((_QWORD*)v53 + 2) = v53;
											*((_QWORD*)v73 + 1) = 0i64;
											*((_QWORD*)v73 + 3) = v73;
											v74 = 0i64;
										}
										sub_14018B900((__int64)v73, 0);
										v6 = v85;
										v7 = v84;
										goto LABEL_105;
									}
									while (1)
									{
										v25 = v23 + ((v24 - v23) >> 1);
										v26 = *(_DWORD*)(v7 + 40 * v25);
										if (v22 < v26)
										{
											v24 = v23 + ((v24 - v23) >> 1);
										}
										else
										{
											if (v22 <= v26)
											{
												v32 = *(_QWORD*)(v7 + 40 * v25 + 16);
												v33 = v7 + 40 * v25;
												v34 = *(_QWORD*)(v32 + 8);
												v35 = v32;
												while (v34)
												{
													if (*(_DWORD*)(v34 + 32) < v13[v21 + 8])
													{
														v34 = *(_QWORD*)(v34 + 24);
													}
													else
													{
														v35 = v34;
														v34 = *(_QWORD*)(v34 + 16);
													}
												}
												if (v35 == v32 || v13[v21 + 8] < *(_DWORD*)(v35 + 32))
												{
													v87 = v32;
													v36 = &v87;
												}
												else
												{
													v86 = v35;
													v36 = &v86;
												}
												v37 = *v36;
												if (v37 == v32)
												{
													v38 = *(_QWORD*)(v33 + 16);
													v39 = v13[v21 + 8];
													v40 = *(_QWORD*)(v38 + 8);
													v90 = v39 | 0x100000000i64;
													v41 = v38;
													v42 = 1;
													while (v40)
													{
														v41 = v40;
														v42 = v39 < *(_DWORD*)(v40 + 32);
														if (v39 >= *(_DWORD*)(v40 + 32))
															v40 = *(_QWORD*)(v40 + 24);
														else
															v40 = *(_QWORD*)(v40 + 16);
													}
													v43 = v41;
													if (v42)
													{
														if (v41 != *(_QWORD*)(v38 + 16))
														{
															if (*(_BYTE*)v41 || *(_QWORD*)(*(_QWORD*)(v41 + 8) + 8i64) != v41)
															{
																v43 = *(_QWORD*)(v41 + 16);
																if (v43)
																{
																	for (j = *(_QWORD*)(v43 + 24); j; j = *(_QWORD*)(j + 24))
																		v43 = j;
																}
																else
																{
																	v43 = *(_QWORD*)(v41 + 8);
																	if (v41 == *(_QWORD*)(v43 + 16))
																	{
																		do
																		{
																			v45 = v43;
																			v43 = *(_QWORD*)(v43 + 8);
																		} while (v45 == *(_QWORD*)(v43 + 16));
																	}
																}
															}
															else
															{
																v43 = *(_QWORD*)(v41 + 24);
															}
															goto LABEL_57;
														}
													LABEL_58:
														if (v41 == v38 || v39 < *(_DWORD*)(v41 + 32))
														{
															v46 = sub_14018B280(40i64, 0);
															if (v46 != (int*)-32i64)
																*((_QWORD*)v46 + 4) = v90;
															*(_QWORD*)(v41 + 16) = v46;
															v48 = *(_QWORD*)(v33 + 16);
															if (v41 == v48)
															{
																*(_QWORD*)(v48 + 8) = v46;
																*(_QWORD*)(*(_QWORD*)(v33 + 16) + 24i64) = v46;
															}
															else if (v41 == *(_QWORD*)(v48 + 16))
															{
																*(_QWORD*)(v48 + 16) = v46;
															}
														}
														else
														{
															v46 = sub_14018B280(40i64, 0);
															if (v46 != (int*)-32i64)
																*((_QWORD*)v46 + 4) = v90;
															*(_QWORD*)(v41 + 24) = v46;
															v47 = *(_QWORD*)(v33 + 16);
															if (v41 == *(_QWORD*)(v47 + 24))
																*(_QWORD*)(v47 + 24) = v46;
														}
														*((_QWORD*)v46 + 1) = v41;
														*((_QWORD*)v46 + 2) = 0i64;
														*((_QWORD*)v46 + 3) = 0i64;
														sub_1400081C0((__int64)v46, (_QWORD*)(*(_QWORD*)(v33 + 16) + 8i64));
														++* (_QWORD*)(v33 + 24);
													}
													else
													{
													LABEL_57:
														if (*(_DWORD*)(v43 + 32) < v39)
															goto LABEL_58;
													}
												}
												else
												{
													++* (_DWORD*)(v37 + 36);
												}
											LABEL_105:
												if ((unsigned __int64)++v21 >= 2)
												{
													v10 = v76;
													goto LABEL_107;
												}
												goto LABEL_21;
											}
											v23 = v25 + 1;
										}
										if (v23 >= v24)
											goto LABEL_28;
									}
								}
							}
						LABEL_107:
							v12 = v75;
						}
						v11 = v77 + 1;
						v77 = v11;
					} while (v11 < v10);
					v5 = a3;
				}
				v3 = v78;
			}
			v8 = v79 + 1;
			v79 = v8;
		} while (v8 < v5[1]);
		v9 = v75;
	}
	if (v6)
	{
		v56 = v7 + 16;
		v57 = v6;
		do
		{
			v58 = *(_QWORD*)v56;
			v59 = *(_QWORD*)v56;
			v60 = *(_QWORD*)(*(_QWORD*)v56 + 16i64);
			if (v60 != *(_QWORD*)v56)
			{
				do
				{
					if (v59 == v58 || *(_DWORD*)(v60 + 36) > *(_DWORD*)(v59 + 36))
						v59 = v60;
					v61 = *(_QWORD*)(v60 + 24);
					if (v61)
					{
						v60 = *(_QWORD*)(v60 + 24);
						for (k = *(_QWORD*)(v61 + 16); k; k = *(_QWORD*)(k + 16))
							v60 = k;
					}
					else
					{
						for (m = *(_QWORD*)(v60 + 8); v60 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
							v60 = m;
						if (*(_QWORD*)(v60 + 24) != m)
							v60 = m;
					}
				} while (v60 != v58);
			}
			if (v59 != v58)
				sub_1400310B0(a1, *(_DWORD*)(v56 - 16), *(_DWORD*)(v59 + 32));
			v56 += 40i64;
			--v57;
		} while (v57);
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	if (v83)
	{
		v64 = v82;
		v65 = *((_QWORD*)v82 + 1);
		if (v65)
		{
			do
			{
				sub_1400083B0((__int64)v81, *(_QWORD*)(v65 + 24));
				v66 = *(_QWORD*)(v65 + 16);
				sub_14018B900(v65, 0);
				v65 = v66;
			} while (v66);
			v64 = v82;
		}
		*((_QWORD*)v64 + 2) = v64;
		*((_QWORD*)v82 + 1) = 0i64;
		*((_QWORD*)v82 + 3) = v82;
		v83 = 0i64;
	}
	sub_14018B900((__int64)v82, 0);
	if (v6)
	{
		v67 = v7 + 8;
		do
		{
			if (*(_QWORD*)(v67 + 16))
			{
				v68 = *(_QWORD*)(*(_QWORD*)(v67 + 8) + 8i64);
				if (v68)
				{
					do
					{
						sub_1400083B0(v67, *(_QWORD*)(v68 + 24));
						v69 = *(_QWORD*)(v68 + 16);
						sub_14018B900(v68, 0);
						v68 = v69;
					} while (v69);
				}
				*(_QWORD*)(*(_QWORD*)(v67 + 8) + 16i64) = *(_QWORD*)(v67 + 8);
				*(_QWORD*)(*(_QWORD*)(v67 + 8) + 8i64) = 0i64;
				*(_QWORD*)(*(_QWORD*)(v67 + 8) + 24i64) = *(_QWORD*)(v67 + 8);
				*(_QWORD*)(v67 + 16) = 0i64;
			}
			sub_14018B900(*(_QWORD*)(v67 + 8), 0);
			v67 += 40i64;
			--v6;
		} while (v6);
	}
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	return 1i64;
}
// 14003181F: conditional instruction was optimized away because rdx.8==0
// 1400318EE: conditional instruction was optimized away because rdx.8==0
// 140C63600: using guessed type __int64 qword_140C63600;
// 1400314D0: using guessed type char var_D8[8];
// 1400314D0: using guessed type char var_88[8];

