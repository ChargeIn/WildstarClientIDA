//----- (00000001402F0C90) ----------------------------------------------------
__int64 __fastcall sub_1402F0C90(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v6; // ebx
	unsigned int v7; // esi
	unsigned int* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	bool v13; // zf
	__int64 v14; // rcx
	float v15; // xmm1_4
	__int64 v16; // r10
	int i; // r11d
	float v18; // xmm0_4
	unsigned int v19; // r8d
	__int64 v20; // rdx
	float* v21; // rcx
	float* v22; // rax
	int* v23; // rdx
	__int64 v24; // rcx
	int v25; // eax
	__int64 v26; // r12
	int** v27; // r15
	int* v28; // r14
	int v29; // esi
	__int64 j; // rdi
	float v31; // xmm0_4
	__int64 v32; // rdx
	unsigned int v33; // r10d
	unsigned int v34; // r9d
	__int64 v35; // r11
	float* v36; // rcx
	int* v37; // rdx
	int* v38; // r8
	unsigned int v39; // eax
	unsigned int v40; // eax
	unsigned int v41; // eax
	int* v42; // rax
	unsigned int v43; // r8d
	int* v44; // rdx
	__int64 v45; // rcx
	int v46; // eax
	__int64 v47; // rdi
	unsigned int* v48; // r9
	__int64 v49; // rcx
	float v50; // xmm1_4
	unsigned int* v51; // rax
	float v52; // xmm1_4
	unsigned int v54[8]; // [rsp+20h] [rbp-E0h] BYREF
	int v55[3]; // [rsp+40h] [rbp-C0h] BYREF
	int v56; // [rsp+4Ch] [rbp-B4h] BYREF
	int v57; // [rsp+50h] [rbp-B0h] BYREF
	int v58[59]; // [rsp+54h] [rbp-ACh] BYREF

	v6 = 0;
	if (*(_DWORD*)(a2 + 904) && (*(_DWORD*)(*(_QWORD*)a1 + 4i64) & 0x780) != 0)
	{
		v7 = 0;
		do
		{
			v8 = *(unsigned int**)(a2 + 8i64 * v7 + 912);
			v9 = *v8;
			if (((128 << v9) & *(_DWORD*)(*(_QWORD*)a1 + 4i64)) != 0)
			{
				v10 = *(_QWORD*)(a2 + 64);
				v11 = (unsigned int)v9;
				v12 = 3 * (v9 + 6);
				v13 = *(_DWORD*)(v10 + 8 * v12) == 0;
				v14 = v10 + 8 * v12;
				if (!v13)
				{
					sub_140306730(v14, (float*)&a1[4 * v11 + 66 + v11], (__int64)a1, a4);
					v15 = *(float*)&a1[5 * *v8 + 66];
					if (v15 >= 0.0000099999997)
					{
						v16 = *((_QWORD*)v8 + 2);
						for (i = 0; v16; v16 = *(_QWORD*)(v16 + 88))
						{
							if (*(_QWORD*)(v16 + 32))
							{
								if (*(float*)(v16 + 16) >= 0.0000099999997)
								{
									v18 = v15 * *(float*)(v16 + 76);
									if (v18 >= 0.0000099999997)
									{
										v19 = 0;
										v20 = 0i64;
										if ((int)v6 < 4)
										{
										LABEL_18:
											if (v19 < v6)
											{
												v22 = (float*)&v58[8 * v20 - 1];
												do
												{
													if (v18 > *v22)
														break;
													++v19;
													v22 += 8;
												} while (v19 < v6);
											}
										}
										else
										{
											v21 = (float*)&v57;
											while (v18 <= *v21)
											{
												if (v18 > v21[8])
												{
													++v19;
													break;
												}
												if (v18 > v21[16])
												{
													v19 += 2;
													break;
												}
												if (v18 > v21[24])
												{
													v19 += 3;
													break;
												}
												v19 += 4;
												v20 += 4i64;
												v21 += 32;
												if (v19 >= v6 - 3)
													goto LABEL_18;
											}
										}
										if (v19 < 8)
										{
											v6 += v6 < 8;
											a4 = v6 - 1;
											if ((unsigned int)a4 > v19)
											{
												v23 = &v55[8 * (unsigned int)a4];
												do
												{
													a4 = (unsigned int)(a4 - 1);
													v23 -= 8;
													v23[8] = v55[8 * (unsigned int)a4];
													v23[9] = v55[8 * (unsigned int)a4 + 1];
													v23[10] = v55[8 * (unsigned int)a4 + 2];
													v23[11] = *(&v56 + 8 * (unsigned int)a4);
													v23[12] = v58[8 * (unsigned int)a4 - 1];
													v23[13] = v58[8 * (unsigned int)a4];
													v23[14] = v58[8 * (unsigned int)a4 + 1];
													v23[15] = v58[8 * (unsigned int)a4 + 2];
												} while ((unsigned int)a4 > v19);
											}
											v24 = 8i64 * v19;
											v55[v24] = *(_DWORD*)(v16 + 68);
											v55[v24 + 1] = *(_DWORD*)(v16 + 44);
											v25 = *(_DWORD*)(v16 + 16);
											*(int*)((char*)&v56 + v24 * 4) = 0;
											*(float*)&v58[v24 - 1] = v18;
											v55[v24 + 2] = v25;
											v58[v24] = 1;
											v58[v24 + 1] = *v8;
											v58[v24 + 2] = i;
										}
										++i;
									}
								}
							}
						}
					}
				}
			}
			++v7;
		} while (v7 < *(_DWORD*)(a2 + 904));
	}
	v26 = *(_QWORD*)(a2 + 880);
	if (v26)
	{
		v27 = *(int***)(a2 + 872);
		do
		{
			v28 = *v27;
			v29 = 0;
			for (j = *((_QWORD*)*v27 + 2); j; j = *(_QWORD*)(j + 88))
			{
				if (*(_QWORD*)(j + 32))
				{
					if (*(float*)(j + 16) >= 0.0000099999997)
					{
						v31 = *(float*)(j + 76);
						if (v31 >= 0.0000099999997)
						{
							v32 = *(int*)(j + 24);
							v33 = *(_DWORD*)(*(_QWORD*)a1 + 4 * v32 + 8);
							if (!(_DWORD)v32 || v33)
							{
								v34 = 0;
								v35 = 0i64;
								if ((int)v6 < 4)
								{
								LABEL_57:
									if (v34 < v6)
									{
										v42 = &v56 + 8 * v35;
										do
										{
											if (!v42[2] && (v33 > *v42 || v33 >= *v42 && v31 > *((float*)v42 + 1)))
												break;
											++v34;
											v42 += 8;
										} while (v34 < v6);
									}
								}
								else
								{
									v36 = (float*)&v57;
									v37 = &v56;
									v38 = v58;
									while (*v38 || v33 <= *v37 && (v33 < *v37 || v31 <= *v36))
									{
										if (!v38[8])
										{
											v39 = v37[8];
											if (v33 > v39 || v33 >= v39 && v31 > v36[8])
											{
												++v34;
												break;
											}
										}
										if (!v38[16])
										{
											v40 = v37[16];
											if (v33 > v40 || v33 >= v40 && v31 > v36[16])
											{
												v34 += 2;
												break;
											}
										}
										if (!v38[24])
										{
											v41 = v37[24];
											if (v33 > v41 || v33 >= v41 && v31 > v36[24])
											{
												v34 += 3;
												break;
											}
										}
										v34 += 4;
										v35 += 4i64;
										v38 += 32;
										v37 += 32;
										v36 += 32;
										if (v34 >= v6 - 3)
											goto LABEL_57;
									}
								}
								if (v34 < 8)
								{
									v6 += v6 < 8;
									v43 = v6 - 1;
									if (v6 - 1 > v34)
									{
										v44 = &v55[8 * v43];
										do
										{
											--v43;
											v44 -= 8;
											v44[8] = v55[8 * v43];
											v44[9] = v55[8 * v43 + 1];
											v44[10] = v55[8 * v43 + 2];
											v44[11] = *(&v56 + 8 * v43);
											v44[12] = v58[8 * v43 - 1];
											v44[13] = v58[8 * v43];
											v44[14] = v58[8 * v43 + 1];
											v44[15] = v58[8 * v43 + 2];
										} while (v43 > v34);
									}
									v45 = 8i64 * v34;
									v55[v45] = *(_DWORD*)(j + 68);
									v55[v45 + 1] = *(_DWORD*)(j + 44);
									v46 = *(_DWORD*)(j + 16);
									*(int*)((char*)&v56 + v45 * 4) = v33;
									*(float*)&v58[v45 - 1] = v31;
									v55[v45 + 2] = v46;
									v58[v45] = 0;
									v58[v45 + 1] = *v28;
									v58[v45 + 2] = v29;
								}
								++v29;
							}
						}
					}
				}
			}
			++v27;
			--v26;
		} while (v26);
	}
	a1[45] = v6;
	if (v6)
	{
		v54[0] = 0;
		v54[1] = 1;
		v54[2] = 2;
		v54[3] = 3;
		v54[4] = 4;
		v54[5] = 5;
		v54[6] = 6;
		v54[7] = 7;
		v47 = v6;
		sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1402F0C30, v54, v6, (__int64)v55);
		a1[45] = 0;
		v48 = v54;
		do
		{
			v49 = a1[26];
			v50 = 1.0;
			if ((_DWORD)v49)
			{
				v51 = a1 + 4;
				do
				{
					if ((v55[8 * *v48 + 1] & v51[1]) != 0)
						v50 = v50 - *(float*)v51;
					v51 += 6;
					--v49;
				} while (v49);
			}
			v52 = (float)(*(float*)&v58[8 * *v48 - 1] * *(float*)&v55[8 * *v48 + 2]) * fmaxf(v50, 0.0);
			if (v52 > 0.0000099999997)
			{
				a1[2 * a1[45] + 29] = v55[8 * *v48];
				*(float*)&a1[2 * a1[45]++ + 30] = v52;
			}
			++v48;
			--v47;
		} while (v47);
	}
	return 0i64;
}
// 1402F0CFF: conditional instruction was optimized away because r8d.4!=0
// 1402F11B4: conditional instruction was optimized away because ebx.4!=0
// 1402F0D65: variable 'a4' is possibly undefined

