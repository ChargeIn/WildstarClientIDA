#include "../winhttp.h"

//----- (00000001402C1800) ----------------------------------------------------
__int64 __fastcall sub_1402C1800(unsigned __int64 a1, unsigned __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rsi
	unsigned __int64 v5; // r14
	__int64 v6; // rax
	int* v7; // rax
	__m128* v8; // rbx
	unsigned int v9; // edi
	__int64 v10; // r10
	unsigned __int64 v11; // r13
	int* v12; // r8
	int* v13; // rdi
	int* v14; // rcx
	int* v15; // rax
	__int64 v16; // rdx
	unsigned __int64 v17; // r11
	unsigned __int64 v18; // rbp
	unsigned __int64 v19; // r8
	unsigned __int64 v20; // r11
	int v21; // eax
	__int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // r9
	int v25; // eax
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	__int64 v28; // r15
	unsigned __int64 v29; // r8
	int v30; // eax
	__int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // r14
	unsigned __int64 v34; // r12
	unsigned __int64 v35; // r13
	__int64 v36; // rsi
	__int64 v37; // rbp
	__int64 v38; // rax
	int* v39; // rcx
	__int64 v40; // rcx
	__m128* v41; // rdx
	int* v42; // rax
	__m128 v43; // xmm0
	bool v44; // zf
	unsigned __int64 v45; // r9
	unsigned __int64 v46; // rcx
	int v47; // eax
	unsigned __int64 v48; // r8
	unsigned __int64 v49; // rax
	__int64 v50; // r14
	int v51; // eax
	unsigned __int64 v52; // rcx
	unsigned __int64 v53; // rax
	unsigned __int64 v54; // r8
	__int64 v55; // rbp
	__int64 v56; // rsi
	__int64 v57; // r13
	unsigned __int64 v58; // r15
	__int64 v59; // rax
	unsigned __int64 v60; // r12
	int* v61; // r10
	__int64 v62; // rdx
	__m128* v63; // rcx
	int* v64; // rax
	__int64 v65; // r8
	__m128 v66; // xmm0
	__int64 v68; // [rsp+30h] [rbp-E8h]
	int* v69; // [rsp+38h] [rbp-E0h]
	__int64 v70; // [rsp+40h] [rbp-D8h]
	int* v71; // [rsp+48h] [rbp-D0h]
	int* v72; // [rsp+50h] [rbp-C8h]
	__int64 v73; // [rsp+58h] [rbp-C0h]
	unsigned __int64 v74; // [rsp+60h] [rbp-B8h]
	unsigned __int64 v75; // [rsp+68h] [rbp-B0h]
	unsigned __int64 v76; // [rsp+68h] [rbp-B0h]
	int* v77; // [rsp+70h] [rbp-A8h]
	int* v78; // [rsp+78h] [rbp-A0h]
	__int64 v79; // [rsp+80h] [rbp-98h]
	__int64 v80; // [rsp+88h] [rbp-90h]
	int* v81; // [rsp+90h] [rbp-88h]
	__int64 v82; // [rsp+98h] [rbp-80h]
	unsigned __int64 v83; // [rsp+A0h] [rbp-78h]
	int* v84; // [rsp+A8h] [rbp-70h]
	unsigned __int64 v85; // [rsp+B0h] [rbp-68h]
	unsigned __int64 v86; // [rsp+B8h] [rbp-60h]
	unsigned __int64 v87; // [rsp+C0h] [rbp-58h]
	unsigned __int64 v88; // [rsp+120h] [rbp+8h]
	unsigned __int64 v91; // [rsp+138h] [rbp+20h]

	v88 = a1;
	v3 = a3;
	v5 = a1;
	if (!a1 || !a3[9])
		return 2147942487i64;
	v91 = a3[2];
	v74 = a3[3];
	v6 = 80 * v91;
	if (!is_mul_ok(5 * v91, 0x10ui64))
		v6 = -1i64;
	v7 = sub_14018B280(v6, 1u);
	v8 = (__m128*)v7;
	if (!v7)
	{
		v9 = -2147024882;
		goto LABEL_150;
	}
	v10 = v91;
	v11 = 1i64;
	v12 = &v7[8 * v91];
	v13 = &v7[4 * v91];
	v14 = &v7[16 * v91];
	v69 = v12;
	v78 = v13 + 4;
	v15 = &v7[12 * v91];
	v77 = v12 + 4;
	v72 = v14;
	v71 = (int*)&v8[3 * v91];
	v73 = 1i64;
	v84 = v15 + 4;
	v81 = v14 + 4;
	v16 = 0i64;
	if (a2 > 1)
	{
		v17 = v74;
		while (1)
		{
			if (v17 == 1)
			{
				v13 = v15;
				v12 = v14;
				v69 = v14;
			}
			if (v10 == 1)
			{
				v78 = v13;
				v77 = v12;
				v84 = v15;
				v81 = v14;
			}
			if (v5 > 1)
			{
				v18 = 0i64;
				v75 = 0i64;
				v19 = v11 - 1;
				v87 = v11 - 1;
				while (1)
				{
					v20 = v3[6];
					if (v19 >= v20)
						break;
					v21 = *((_DWORD*)v3 + 17);
					v22 = v16;
					if (v21 < 2)
						break;
					if (v21 <= 3)
					{
						if (v18 || !v3[5])
							break;
						v24 = v3[9] + 48 * v19;
					}
					else
					{
						if (v21 != 4)
							break;
						v23 = v3[4];
						if (v19)
						{
							v16 = v19;
							do
							{
								v22 += v23;
								if (v23 > 1)
									v23 >>= 1;
								--v16;
							} while (v16);
						}
						if (v18 >= v23)
							break;
						v24 = v3[9] + 48 * (v18 + v22);
					}
				LABEL_31:
					v68 = v24;
					if (v19 >= v20)
						goto LABEL_45;
					v25 = *((_DWORD*)v3 + 17);
					v26 = v16;
					if (v25 < 2)
						goto LABEL_45;
					if (v25 <= 3)
					{
						if (v18 != -1i64 || !v3[5])
							goto LABEL_45;
						v28 = v3[9] + 48 * v19;
					}
					else
					{
						if (v25 != 4)
							goto LABEL_45;
						v27 = v3[4];
						if (v19)
						{
							v16 = v19;
							do
							{
								v26 += v27;
								if (v27 > 1)
									v27 >>= 1;
								--v16;
							} while (v16);
						}
						if (v18 + 1 >= v27)
						{
						LABEL_45:
							v28 = v16;
							goto LABEL_46;
						}
						v28 = v3[9] + 48 * (v18 + 1 + v26);
					}
				LABEL_46:
					v70 = v28;
					v29 = v18 >> 1;
					if (v11 >= v20)
						goto LABEL_60;
					v30 = *((_DWORD*)v3 + 17);
					v31 = v16;
					if (v30 < 2)
						goto LABEL_60;
					if (v30 <= 3)
					{
						if (v29 || !v3[5])
							goto LABEL_60;
						v33 = v3[9] + 48 * v11;
					}
					else
					{
						if (v30 != 4)
							goto LABEL_60;
						v32 = v3[4];
						if (v11)
						{
							v16 = v11;
							do
							{
								v31 += v32;
								if (v32 > 1)
									v32 >>= 1;
								--v16;
							} while (v16);
						}
						if (v29 >= v32)
						{
						LABEL_60:
							v33 = v16;
							goto LABEL_61;
						}
						v33 = v3[9] + 48 * (v29 + v31);
					}
				LABEL_61:
					if (!v24 || !v28 || !v33)
						goto LABEL_148;
					v17 = v74;
					v34 = *(_QWORD*)(v24 + 24);
					v35 = *(_QWORD*)(v28 + 24);
					v36 = *(_QWORD*)(v24 + 40);
					v37 = *(_QWORD*)(v28 + 40);
					v79 = *(_QWORD*)(v33 + 40);
					v85 = v34;
					v86 = v35;
					if (v74 <= 1)
						v38 = 1i64;
					else
						v38 = v74 >> 1;
					v83 = v38;
					v80 = v16;
					if (v38)
					{
						while (1)
						{
							if (!sub_1402C33B0(v13, v10, v36, v34, *(_DWORD*)(v24 + 16)))
								goto LABEL_147;
							v36 += v34;
							if (v13 != v69)
							{
								if (!sub_1402C33B0(v69, v91, v36, v34, *(_DWORD*)(v68 + 16)))
									goto LABEL_147;
								v36 += v34;
							}
							v39 = v71;
							if (v13 != v71)
							{
								if (!sub_1402C33B0(v71, v91, v37, v35, *(_DWORD*)(v28 + 16)))
									goto LABEL_147;
								v39 = v71;
								v37 += v35;
							}
							if (v13 != v72 && v39 != v72)
							{
								if (!sub_1402C33B0(v72, v91, v37, v35, *(_DWORD*)(v28 + 16)))
									goto LABEL_147;
								v37 += v35;
							}
							if (v91 <= 1)
								break;
							v40 = v91 >> 1;
							if (v91 >> 1)
								goto LABEL_83;
						LABEL_86:
							if (!sub_1402C4F90(v79, *(_QWORD*)(v33 + 24), *(_DWORD*)(v33 + 16), v8, v40))
								goto LABEL_147;
							v10 = v91;
							v24 = v68;
							v79 += *(_QWORD*)(v33 + 24);
							if (++v80 >= v83)
							{
								v17 = v74;
								v16 = 0i64;
								goto LABEL_89;
							}
						}
						v40 = 1i64;
					LABEL_83:
						v41 = v8;
						v42 = v13;
						v82 = v40;
						do
						{
							v43 = *(__m128*)((char*)v42 + (char*)v69 - (char*)v13);
							++v41;
							v42 += 8;
							v44 = v82-- == 1;
							v41[-1] = _mm_mul_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(
											_mm_add_ps(
												_mm_add_ps(
													_mm_add_ps(
														_mm_add_ps(v43, *((__m128*)v42 - 2)),
														*(__m128*)((char*)v42 + (char*)v78 - (char*)v13 - 32)),
													*(__m128*)((char*)v42 + (char*)v77 - (char*)v13 - 32)),
												*(__m128*)((char*)v42 + (char*)v71 - (char*)v13 - 32)),
											*(__m128*)((char*)v42 + (char*)v72 - (char*)v13 - 32)),
										*(__m128*)((char*)v42 + (char*)v84 - (char*)v13 - 32)),
									*(__m128*)((char*)v42 + (char*)v81 - (char*)v13 - 32)),
								(__m128)xmmword_140AEDA00);
						} while (!v44);
						v28 = v70;
						v34 = v85;
						v35 = v86;
						goto LABEL_86;
					}
				LABEL_89:
					v5 = v88;
					v3 = a3;
					v19 = v87;
					v11 = v73;
					v18 = v75 + 2;
					v75 = v18;
					if (v18 >= v88)
						goto LABEL_138;
				}
				v24 = v16;
				goto LABEL_31;
			}
			v45 = v3[6];
			v46 = v11 - 1;
			if (v11 - 1 < v45)
			{
				v47 = *((_DWORD*)v3 + 17);
				v48 = 0i64;
				if (v47 >= 2)
				{
					if (v47 <= 3)
					{
						if (v3[5])
						{
							v48 = v11 - 1;
						LABEL_118:
							v50 = v3[9] + 48 * v48;
							goto LABEL_101;
						}
					}
					else if (v47 == 4)
					{
						v49 = v3[4];
						if (v11 != 1)
						{
							do
							{
								v48 += v49;
								if (v49 > 1)
									v49 >>= 1;
								--v46;
							} while (v46);
						}
						if (v49)
							goto LABEL_118;
					}
				}
			}
			v50 = 0i64;
		LABEL_101:
			if (v11 >= v45)
				goto LABEL_111;
			v51 = *((_DWORD*)v3 + 17);
			v52 = 0i64;
			if (v51 < 2)
				goto LABEL_111;
			if (v51 <= 3)
			{
				if (!v3[5])
					goto LABEL_111;
				v52 = v11;
			}
			else
			{
				if (v51 != 4)
					goto LABEL_111;
				v53 = v3[4];
				if (v11)
				{
					v54 = v11;
					do
					{
						v52 += v53;
						if (v53 > 1)
							v53 >>= 1;
						--v54;
					} while (v54);
				}
				if (!v53)
				{
				LABEL_111:
					v55 = 0i64;
					goto LABEL_112;
				}
			}
			v55 = v3[9] + 48 * v52;
		LABEL_112:
			if (!v50 || !v55)
			{
			LABEL_148:
				v9 = -2147467261;
				goto LABEL_150;
			}
			v56 = *(_QWORD*)(v50 + 40);
			v57 = *(_QWORD*)(v55 + 40);
			v58 = *(_QWORD*)(v50 + 24);
			if (v17 <= 1)
				v59 = 1i64;
			else
				v59 = v17 >> 1;
			v76 = v59;
			v60 = 0i64;
			if (!v59)
				goto LABEL_137;
			do
			{
				if (!sub_1402C33B0(v13, v10, v56, v58, *(_DWORD*)(v50 + 16)))
				{
				LABEL_147:
					v9 = -2147467259;
					goto LABEL_150;
				}
				v61 = v69;
				v56 += v58;
				if (v13 != v69)
				{
					if (!sub_1402C33B0(v69, v91, v56, v58, *(_DWORD*)(v50 + 16)))
						goto LABEL_147;
					v61 = v69;
					v56 += v58;
				}
				if (v91 <= 1)
				{
					v62 = 1i64;
				}
				else
				{
					v62 = v91 >> 1;
					if (!(v91 >> 1))
						goto LABEL_134;
				}
				v63 = v8;
				v64 = v13;
				v65 = v62;
				do
				{
					v66 = *(__m128*)((char*)v64 + (char*)v61 - (char*)v13);
					++v63;
					v64 += 8;
					v63[-1] = _mm_mul_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(v66, *((__m128*)v64 - 2)),
								*(__m128*)((char*)v64 + (char*)v78 - (char*)v13 - 32)),
							*(__m128*)((char*)v64 + (char*)v77 - (char*)v13 - 32)),
						(__m128)xmmword_140AEDA10);
					--v65;
				} while (v65);
			LABEL_134:
				if (!sub_1402C4F90(v57, *(_QWORD*)(v55 + 24), *(_DWORD*)(v55 + 16), v8, v62))
					goto LABEL_147;
				v57 += *(_QWORD*)(v55 + 24);
				v10 = v91;
				++v60;
			} while (v60 < v76);
			v17 = v74;
		LABEL_137:
			v5 = v88;
			v11 = v73;
		LABEL_138:
			v3 = a3;
			v15 = v71;
			v14 = v72;
			if (v17 > 1)
			{
				v17 >>= 1;
				v74 = v17;
			}
			v10 = v91;
			if (v91 > 1)
			{
				v10 = v91 >> 1;
				v91 >>= 1;
			}
			if (v5 > 1)
			{
				v5 >>= 1;
				v88 = v5;
			}
			v73 = ++v11;
			if (v11 >= a2)
				break;
			v12 = v69;
			v16 = 0i64;
		}
	}
	v9 = 0;
LABEL_150:
	sub_14018B900((__int64)v8, 0);
	return v9;
}
// 1402C1966: conditional instruction was optimized away because r14.8>=2u
// 140AEDA00: using guessed type __int128 xmmword_140AEDA00;
// 140AEDA10: using guessed type __int128 xmmword_140AEDA10;

