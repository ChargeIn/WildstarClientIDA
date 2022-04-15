#include "../winhttp.h"

//----- (00000001402F02E0) ----------------------------------------------------
__int64 __fastcall sub_1402F02E0(__int64 a1, __int64 a2)
{
	float v4; // xmm9_4
	unsigned __int64 v5; // r14
	float i; // xmm10_4
	unsigned int v7; // ebp
	__int64 j; // rsi
	unsigned int v9; // r11d
	unsigned int v10; // r10d
	unsigned int v11; // eax
	float v12; // xmm0_4
	unsigned int v13; // r8d
	__int64 v14; // rdi
	float* v15; // rcx
	unsigned int* v16; // rdx
	int* v17; // r9
	unsigned int v18; // eax
	unsigned int v19; // eax
	unsigned int v20; // eax
	unsigned int v21; // eax
	unsigned int v22; // eax
	unsigned int v23; // eax
	float* v24; // rcx
	unsigned int v25; // eax
	__int64 v26; // r9
	int* v27; // rdx
	__int64 v28; // rdx
	__int64 v29; // rax
	int v30; // ecx
	float v31; // xmm2_4
	unsigned int v32; // edi
	float* v33; // r9
	float v34; // xmm1_4
	unsigned int v35; // r10d
	unsigned int v36; // edx
	unsigned int v37; // r11d
	unsigned int v38; // eax
	unsigned int v39; // eax
	unsigned int v40; // r10d
	__int64 v41; // r10
	_DWORD* v42; // r8
	__int64 v43; // rcx
	float v44; // xmm4_4
	__int64 v45; // r9
	float v46; // xmm7_4
	unsigned int v47; // r8d
	__int64 v48; // rdi
	float v49; // xmm3_4
	float v50; // xmm1_4
	unsigned int v51; // edx
	float v52; // xmm2_4
	__int64 v53; // rcx
	unsigned int v54; // eax
	__int64 v55; // r8
	__int64 v56; // rcx
	__int64 v57; // r8
	int v58; // eax
	float v59; // xmm2_4
	unsigned int v60; // edx
	float v61; // xmm0_4
	unsigned int v62; // edi
	float v63; // xmm6_4
	__int64 v64; // rcx
	__int64 v65; // rdx
	_DWORD* v66; // rcx
	__int64 v67; // rsi
	float v68; // xmm0_4
	unsigned int v69; // edx
	__int64 v70; // rax
	__int64 v71; // rax
	__int64 v72; // rax
	unsigned int k; // r11d
	unsigned int* v74; // r10
	float v75; // xmm1_4
	__int64 m; // r10
	float v77; // xmm0_4
	unsigned int v78; // r8d
	float v79; // xmm0_4
	unsigned int v80; // edx
	unsigned int v81; // r8d
	__int64 v82; // r9
	_DWORD* v83; // r8
	__int64 v84; // rdx
	int v85; // eax
	unsigned int v86; // edx
	float v87; // xmm0_4
	int v89[2]; // [rsp+20h] [rbp-E8h] BYREF
	int v90[2]; // [rsp+28h] [rbp-E0h] BYREF
	int v91; // [rsp+30h] [rbp-D8h] BYREF
	_DWORD v92[19]; // [rsp+34h] [rbp-D4h] BYREF

	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 112) = 0;
	v4 = 1.0;
	v5 = 0i64;
	for (i = *(float*)&dword_140C41F64; v5 < *(_QWORD*)(a2 + 880); ++v5)
	{
		v7 = 0;
		for (j = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 872) + 8 * v5) + 8i64); j; j = *(_QWORD*)(j + 96))
		{
			if (*(_QWORD*)(j + 32))
			{
				v9 = *(_DWORD*)(j + 24);
				v10 = *(_DWORD*)(*(_QWORD*)a1 + 4i64 * *(int*)(j + 16) + 8);
				v11 = *(_DWORD*)(a1 + 108);
				if (v11 < v10 || v11 == v10 && *(_DWORD*)(a1 + 112) < v9)
				{
					*(_DWORD*)(a1 + 108) = v10;
					*(_DWORD*)(a1 + 112) = v9;
				}
				v12 = *(float*)(j + 72);
				v13 = 0;
				v14 = 0i64;
				if ((int)v7 < 4)
				{
				LABEL_31:
					if (v13 < v7)
					{
						v24 = (float*)&v92[6 * v14];
						do
						{
							v25 = *((_DWORD*)v24 - 1);
							if (v10 > v25 || v10 >= v25 && (v9 > *(_DWORD*)v24 || v9 >= *(_DWORD*)v24 && v12 > *(v24 - 3)))
								break;
							++v13;
							v24 += 6;
						} while (v13 < v7);
					}
				}
				else
				{
					v15 = (float*)v90;
					v16 = v92;
					v17 = &v91;
					while (v10 <= *v17 && (v10 < *v17 || v9 <= *v16 && (v9 < *v16 || v12 <= *v15)))
					{
						v18 = v17[6];
						if (v10 > v18 || v10 >= v18 && ((v19 = v16[6], v9 > v19) || v9 >= v19 && v12 > v15[6]))
						{
							++v13;
							break;
						}
						v20 = v17[12];
						if (v10 > v20 || v10 >= v20 && ((v21 = v16[12], v9 > v21) || v9 >= v21 && v12 > v15[12]))
						{
							v13 += 2;
							break;
						}
						v22 = v17[18];
						if (v10 > v22 || v10 >= v22 && ((v23 = v16[18], v9 > v23) || v9 >= v23 && v12 > v15[18]))
						{
							v13 += 3;
							break;
						}
						v13 += 4;
						v14 += 4i64;
						v17 += 24;
						v16 += 24;
						v15 += 24;
						if (v13 >= v7 - 3)
							goto LABEL_31;
					}
				}
				if (v13 < 4)
				{
					v7 += v7 < 4;
					v26 = v7 - 1;
					if ((unsigned int)v26 > v13)
					{
						v27 = &v89[6 * v26];
						do
						{
							v26 = (unsigned int)(v26 - 1);
							v27 -= 6;
							v27[6] = v89[6 * v26];
							v27[7] = v89[6 * v26 + 1];
							v27[8] = v90[6 * v26];
							v27[9] = v90[6 * v26 + 1];
							v27[10] = v92[6 * v26 - 1];
							v27[11] = v92[6 * v26];
						} while ((unsigned int)v26 > v13);
					}
					v28 = 3i64 * v13;
					v89[2 * v28] = *(_DWORD*)(j + 64);
					v29 = *(_QWORD*)(j + 32);
					v92[2 * v28 - 1] = v10;
					*(float*)&v90[2 * v28] = v12;
					v30 = *(unsigned __int16*)(v29 + 2);
					v92[2 * v28] = v9;
					v90[2 * v28 + 1] = v30;
				}
			}
		}
		v31 = 1.0;
		v32 = 0;
		if (v7)
		{
			v33 = (float*)v92;
			do
			{
				v34 = *(v33 - 3);
				v35 = *(_DWORD*)(a1 + 104);
				v36 = 0;
				*(v33 - 4) = v34 / v31;
				if (!v35)
					goto LABEL_56;
				v37 = *((_DWORD*)v33 - 1);
				do
				{
					v38 = *(_DWORD*)(a1 + 24i64 * v36 + 24);
					if (v37 > v38)
						break;
					if (v37 >= v38)
					{
						v39 = *(_DWORD*)(a1 + 24i64 * v36 + 28);
						if (*(_DWORD*)v33 > v39 || *(_DWORD*)v33 >= v39 && v34 > *(float*)(a1 + 24i64 * v36 + 16))
							break;
					}
					++v36;
				} while (v36 < v35);
				if (v36 < 4)
				{
				LABEL_56:
					v40 = (v35 < 4) + v35;
					*(_DWORD*)(a1 + 104) = v40;
					v41 = v40 - 1;
					if ((unsigned int)v41 > v36)
					{
						v42 = (_DWORD*)(a1 + 8 * ((unsigned int)v41 + 2 * v41 + 1));
						do
						{
							v41 = (unsigned int)(v41 - 1);
							v42 -= 6;
							v42[6] = *(_DWORD*)(a1 + 24 * v41 + 8);
							v42[7] = *(_DWORD*)(a1 + 24 * v41 + 12);
							v42[8] = *(_DWORD*)(a1 + 24 * v41 + 16);
							v42[9] = *(_DWORD*)(a1 + 24 * v41 + 20);
							v42[10] = *(_DWORD*)(a1 + 24 * v41 + 24);
							v42[11] = *(_DWORD*)(a1 + 24 * v41 + 28);
						} while ((unsigned int)v41 > v36);
					}
					v43 = 3i64 * v36;
					*(float*)(a1 + 8 * v43 + 8) = *(v33 - 5);
					*(float*)(a1 + 8 * v43 + 12) = *(v33 - 4);
					*(float*)(a1 + 8 * v43 + 16) = *(v33 - 3);
					*(float*)(a1 + 8 * v43 + 20) = *(v33 - 2);
					*(float*)(a1 + 8 * v43 + 24) = *(v33 - 1);
					*(float*)(a1 + 8 * v43 + 28) = *v33;
				}
				v31 = v31 - v34;
				if (v31 < i)
					break;
				++v32;
				v33 += 6;
			} while (v32 < v7);
		}
	}
	v44 = 1.0;
	v45 = 0i64;
	v46 = 0.0;
	if (*(_DWORD*)(a1 + 104))
	{
		do
		{
			v47 = *(_DWORD*)(a1 + 104);
			v48 = (unsigned int)v45;
			v49 = 0.0;
			v50 = 0.0;
			v51 = v45;
			if ((unsigned int)v45 < v47)
			{
				do
				{
					if (*(_DWORD*)(a1 + 24i64 * v51 + 24) != *(_DWORD*)(a1 + 24i64 * (unsigned int)v45 + 24)
						|| *(_DWORD*)(a1 + 24i64 * v51 + 28) != *(_DWORD*)(a1 + 24i64 * (unsigned int)v45 + 28))
					{
						break;
					}
					if (v49 < *(float*)(a1 + 24i64 * v51 + 12))
						v49 = *(float*)(a1 + 24i64 * v51 + 12);
					v50 = v50 + *(float*)(a1 + 24i64 * v51++ + 16);
				} while (v51 < v47);
				if (v50 >= 0.0000099999997)
				{
					v52 = (float)(v49 * v44) / v50;
					if ((unsigned int)v45 < v51)
					{
						if ((int)(v51 - v45) >= 4)
						{
							v53 = a1 + 40 + 24i64 * (unsigned int)v45;
							v54 = ((v51 - (unsigned int)v45 - 4) >> 2) + 1;
							v55 = v54;
							LODWORD(v45) = v45 + 4 * v54;
							v48 += 4i64 * v54;
							do
							{
								v53 += 96i64;
								*(float*)(v53 - 120) = v52 * *(float*)(v53 - 120);
								*(float*)(v53 - 96) = v52 * *(float*)(v53 - 96);
								*(float*)(v53 - 72) = v52 * *(float*)(v53 - 72);
								*(float*)(v53 - 48) = v52 * *(float*)(v53 - 48);
								--v55;
							} while (v55);
						}
						if ((unsigned int)v45 < v51)
						{
							v56 = a1 + 8 * (v48 + 2 * (v48 + 1));
							v57 = (int)(v51 - v45);
							do
							{
								v56 += 24i64;
								*(float*)(v56 - 24) = v52 * *(float*)(v56 - 24);
								--v57;
							} while (v57);
						}
					}
					v44 = v44 * (float)(1.0 - v49);
				}
			}
			v45 = v51;
		} while (v51 < *(_DWORD*)(a1 + 104));
	}
	v58 = *(_DWORD*)(a1 + 104);
	if (v58)
	{
		v59 = 1.0;
		v60 = 0;
		if (v58 != 1)
		{
			while (1)
			{
				v61 = *(float*)(a1 + 24i64 * v60 + 16) / v59;
				v59 = v59 - *(float*)(a1 + 24i64 * v60 + 16);
				*(float*)(a1 + 24i64 * v60 + 12) = v61;
				if (v59 < i)
					break;
				if (++v60 >= *(_DWORD*)(a1 + 104) - 1)
					goto LABEL_89;
			}
			*(_DWORD*)(a1 + 104) = v60 + 1;
		}
	LABEL_89:
		*(_DWORD*)(a1 + 24i64 * (unsigned int)(*(_DWORD*)(a1 + 104) - 1) + 12) = 1065353216;
	}
	if (*(_DWORD*)(a2 + 904) && (*(_BYTE*)(*(_QWORD*)a1 + 4i64) & 0x78) != 0)
	{
		v62 = 0;
		v63 = 0.0;
		do
		{
			v64 = **(unsigned int**)(a2 + 8i64 * v62 + 912);
			if (((8 << v64) & *(_DWORD*)(*(_QWORD*)a1 + 4i64)) != 0)
			{
				v65 = **(unsigned int**)(a2 + 8i64 * v62 + 912);
				v66 = (_DWORD*)(*(_QWORD*)(a2 + 64) + 8 * (v64 + 2 * (v64 + 2)));
				if (*v66)
				{
					v67 = a1 + 20 * v65;
					sub_140306730((__int64)v66, (float*)(v67 + 184), a1, v45);
					v68 = *(float*)(v67 + 184);
					if (v68 >= 0.0000099999997)
					{
						v46 = v46 + v68;
						if (v63 < v68)
							v63 = *(float*)(v67 + 184);
					}
					else
					{
						*(_DWORD*)(v67 + 184) = 0;
					}
				}
				else
				{
					*(_DWORD*)(a1 + 20 * v65 + 184) = 0;
				}
			}
			else
			{
				*(_DWORD*)(a1 + 20 * v64 + 184) = 0;
			}
			++v62;
		} while (v62 < *(_DWORD*)(a2 + 904));
		if (v63 > 0.0000099999997)
		{
			v69 = 0;
			if (v46 >= 1.0)
			{
				if (*(_DWORD*)(a2 + 904))
				{
					do
					{
						v71 = v69++;
						v72 = **(unsigned int**)(a2 + 8 * v71 + 912);
						*(float*)(a1 + 20 * v72 + 184) = (float)(1.0 / v46) * *(float*)(a1 + 20 * v72 + 184);
					} while (v69 < *(_DWORD*)(a2 + 904));
				}
				*(_DWORD*)(a1 + 104) = 0;
			}
			else if (*(_DWORD*)(a1 + 104))
			{
				do
				{
					v70 = v69++;
					*(float*)(a1 + 24 * v70 + 16) = (float)(1.0 - v46) * *(float*)(a1 + 24 * v70 + 16);
				} while (v69 < *(_DWORD*)(a1 + 104));
			}
			for (k = 0; k < *(_DWORD*)(a2 + 904); ++k)
			{
				v74 = *(unsigned int**)(a2 + 8i64 * k + 912);
				v75 = *(float*)(a1 + 20i64 * *v74 + 184);
				if (v75 >= 0.0000099999997)
				{
					for (m = *((_QWORD*)v74 + 1); m; m = *(_QWORD*)(m + 96))
					{
						if (*(_QWORD*)(m + 32))
						{
							v77 = *(float*)(m + 72);
							if (v77 >= 0.0000099999997)
							{
								v78 = *(_DWORD*)(a1 + 104);
								v79 = v77 * v75;
								v80 = 0;
								if (!v78)
									goto LABEL_119;
								do
								{
									if (v79 > *(float*)(a1 + 24i64 * v80 + 16))
										break;
									++v80;
								} while (v80 < v78);
								if (v80 < 4)
								{
								LABEL_119:
									v81 = (v78 < 4) + v78;
									*(_DWORD*)(a1 + 104) = v81;
									v82 = v81 - 1;
									if ((unsigned int)v82 > v80)
									{
										v83 = (_DWORD*)(a1 + 8 * ((unsigned int)v82 + 2 * v82 + 1));
										do
										{
											v82 = (unsigned int)(v82 - 1);
											v83 -= 6;
											v83[6] = *(_DWORD*)(a1 + 24 * v82 + 8);
											v83[7] = *(_DWORD*)(a1 + 24 * v82 + 12);
											v83[8] = *(_DWORD*)(a1 + 24 * v82 + 16);
											v83[9] = *(_DWORD*)(a1 + 24 * v82 + 20);
											v83[10] = *(_DWORD*)(a1 + 24 * v82 + 24);
											v83[11] = *(_DWORD*)(a1 + 24 * v82 + 28);
										} while ((unsigned int)v82 > v80);
									}
									v84 = 3i64 * v80;
									*(_DWORD*)(a1 + 8 * v84 + 8) = *(_DWORD*)(m + 64);
									*(_QWORD*)(a1 + 8 * v84 + 24) = 0i64;
									*(float*)(a1 + 8 * v84 + 16) = v79;
									*(_DWORD*)(a1 + 8 * v84 + 20) = *(unsigned __int16*)(*(_QWORD*)(m + 32) + 2i64);
								}
							}
						}
					}
				}
			}
			v85 = *(_DWORD*)(a1 + 104);
			if (v85)
			{
				v86 = 0;
				if (v85 != 1)
				{
					while (1)
					{
						v87 = *(float*)(a1 + 24i64 * v86 + 16) / v4;
						v4 = v4 - *(float*)(a1 + 24i64 * v86 + 16);
						*(float*)(a1 + 24i64 * v86 + 12) = v87;
						if (v4 < i)
							break;
						if (++v86 >= *(_DWORD*)(a1 + 104) - 1)
							goto LABEL_131;
					}
					*(_DWORD*)(a1 + 104) = v86 + 1;
				}
			LABEL_131:
				*(_DWORD*)(a1 + 24i64 * (unsigned int)(*(_DWORD*)(a1 + 104) - 1) + 12) = 1065353216;
			}
		}
	}
	if (*(_DWORD*)(a1 + 104))
		return 0i64;
	*(_DWORD*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 12) = 1065353216;
	*(_QWORD*)(a1 + 16) = 1065353216i64;
	*(_QWORD*)(a1 + 104) = 1i64;
	*(_DWORD*)(a1 + 112) = 0;
	return 2147500037i64;
}
// 1402F08CD: conditional instruction was optimized away because ecx.4!=0
// 1402F093D: variable 'v45' is possibly undefined
// 140C41F64: using guessed type int dword_140C41F64;
// 1402F02E0: using guessed type _DWORD var_D4[19];

