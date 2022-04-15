#include "../winhttp.h"

//----- (00000001408C0900) ----------------------------------------------------
__int64 __fastcall sub_1408C0900(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	unsigned int v3; // esi
	__int64 v4; // rdi
	float v5; // xmm10_4
	float v6; // xmm6_4
	__int64 v7; // rbx
	float* v8; // r8
	float v9; // xmm11_4
	float* v10; // r12
	__int64 v11; // r10
	float v13; // xmm13_4
	int v14; // ecx
	int i; // edx
	__int64 v16; // rcx
	__int64 v17; // rdx
	float* v18; // r9
	__int64 v19; // rcx
	char* v20; // r10
	float* v21; // r11
	__int64 v22; // rcx
	float v23; // xmm0_4
	__int64 v24; // r11
	unsigned int v25; // r13d
	__int64 v26; // r15
	__int64 v27; // rdx
	__int64 v28; // r14
	__int64 v29; // r9
	float* v30; // rbx
	__int64 v31; // rcx
	char* v32; // rsi
	float* v33; // r14
	__int64 v34; // rax
	int v35; // edx
	float v36; // xmm3_4
	float v37; // xmm4_4
	unsigned int v38; // ecx
	__int64 v39; // rax
	float* v40; // r10
	float v41; // xmm0_4
	float v42; // xmm0_4
	float v43; // xmm0_4
	float v44; // xmm0_4
	float* v45; // rax
	float v46; // xmm0_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	int v49; // r10d
	float v50; // xmm6_4
	__int64 v51; // r9
	float v52; // xmm0_4
	float v53; // xmm7_4
	float v54; // xmm0_4
	float v55; // xmm1_4
	float v56; // xmm0_4
	float v57; // xmm1_4
	int v58; // [rsp+0h] [rbp-118h]
	unsigned int v59; // [rsp+4h] [rbp-114h]
	__int64 v60; // [rsp+18h] [rbp-100h]
	__int64 v61; // [rsp+20h] [rbp-F8h]
	float v63; // [rsp+138h] [rbp+20h]

	result = *(_QWORD*)(a1 + 16);
	v3 = *(_DWORD*)(a1 + 44);
	v4 = *(unsigned int*)(a1 + 52);
	v5 = *(float*)(a1 + 88);
	v6 = *(float*)(result + 8);
	v7 = *(unsigned int*)(a1 + 72);
	v8 = 0i64;
	v9 = *(float*)(a1 + 84);
	v63 = v6;
	v10 = 0i64;
	v11 = a2;
	v59 = v3;
	v13 = (float)((float)(1.0 / *(float*)(result + 12)) - 1.0) * 0.05;
	if (!*(_BYTE*)(result + 32))
	{
		v14 = *(_DWORD*)(a2 + 8);
		if ((v14 & 8) != 0)
		{
			for (i = 0; v14; v14 &= v14 - 1)
				++i;
			v16 = (unsigned int)(i - 1);
			v17 = (unsigned int)v4 * v3;
			v18 = (float*)(*(_QWORD*)v11 + 4 * *(unsigned __int16*)(v11 + 16) * v16);
			v19 = *(_QWORD*)(a1 + 64);
			v20 = (char*)&v18[*(unsigned __int16*)(v11 + 18)];
			v10 = (float*)(v19 + 4 * v17);
			v8 = (float*)(v19 + 4 * (v17 + v7));
			result = v17 + v4;
			v21 = (float*)(v19 + 4 * (v17 + v4));
			while (v18 < (float*)v20)
			{
				result = (v20 - (char*)v18) >> 2;
				v22 = v21 - v8;
				if (result < v22)
					LODWORD(v22) = (v20 - (char*)v18) >> 2;
				for (; (_DWORD)v22; LODWORD(v22) = v22 - 1)
				{
					result = *(unsigned int*)v18;
					v23 = *v8++;
					*((_DWORD*)v8 - 1) = result;
					*v18++ = v23;
				}
				if (v8 == v21)
					v8 = v10;
			}
			v11 = a2;
		}
	}
	v24 = 0i64;
	v25 = 0;
	v60 = 0i64;
	if (v3)
	{
		v26 = 0i64;
		v27 = 0i64;
		v28 = v7;
		v61 = v7;
		v58 = 0;
		do
		{
			v29 = *(unsigned __int16*)(v11 + 18);
			v30 = (float*)(*(_QWORD*)v11 + 4 * v24 * *(unsigned __int16*)(v11 + 16));
			v31 = *(_QWORD*)(a1 + 64);
			v10 = (float*)(v31 + 4 * v27);
			v32 = (char*)&v30[v29];
			v8 = (float*)(v31 + 4 * (v28 + v27));
			v33 = (float*)(v31 + 4 * (v27 + v4));
			v34 = *(_QWORD*)(a1 + 56);
			v35 = *(_DWORD*)(v34 + v26 + 8);
			v36 = *(float*)(v34 + v26);
			v37 = *(float*)(v34 + v26 + 4);
			if (*(_BYTE*)(a1 + 92))
			{
				if ((unsigned int)v4 < (unsigned int)v29)
					LODWORD(v29) = v4;
				v38 = 0;
				v39 = 0i64;
				if ((int)v29 >= 4)
				{
					v40 = v30 + 2;
					v39 = 4i64 * (((unsigned int)(v29 - 4) >> 2) + 1);
					do
					{
						v41 = fabs(*(v40 - 2));
						if (v41 >= v37)
						{
							v37 = v41;
							v35 = v29 - v38;
						}
						v42 = fabs(*(v40 - 1));
						if (v42 >= v37)
						{
							v37 = v42;
							v35 = v29 - v38 - 1;
						}
						v43 = fabs(*v40);
						if (v43 >= v37)
						{
							v37 = v43;
							v35 = v29 - v38 - 2;
						}
						v44 = fabs(v40[1]);
						if (v44 >= v37)
						{
							v37 = v44;
							v35 = v29 - v38 - 3;
						}
						v38 += 4;
						v40 += 4;
					} while (v38 < (int)v29 - 3);
					v24 = v60;
				}
				if (v38 < (unsigned int)v29)
				{
					v45 = &v30[v39];
					do
					{
						v46 = fabs(*v45);
						if (v46 >= v37)
						{
							v37 = v46;
							v35 = v29 - v38;
						}
						++v38;
						++v45;
					} while (v38 < (unsigned int)v29);
				}
				if (v25 == v59 - 1)
					*(_BYTE*)(a1 + 92) = 0;
			}
			v47 = (float)(COERCE_FLOAT((LODWORD(v37) & 0x7FFFFF) + 1065353216) - 1.0)
				/ (float)(COERCE_FLOAT((LODWORD(v37) & 0x7FFFFF) + 1065353216) + 1.0);
			v48 = (float)((float)((float)((float)((float)((float)((float)(v47 * v47) * 0.33333334) + 1.0) * (float)(v47 * 2.0))
				+ (float)((float)((float)(unsigned __int8)(LODWORD(v37) >> 23) - 127.0) * 0.69314718))
				* 0.43429449)
				* 20.0)
				- v6;
			if (v48 <= 0.0)
				v48 = 0.0;
			if (v30 < (float*)v32)
			{
				v49 = dword_140C61BFC;
				v50 = *(float*)&dword_140C61BF8;
				do
				{
					v51 = v33 - v8;
					if ((v32 - (char*)v30) >> 2 < v51)
						LODWORD(v51) = (v32 - (char*)v30) >> 2;
					if ((_DWORD)v51)
					{
						do
						{
							v52 = *v30;
							v53 = *v8++;
							LODWORD(v51) = v51 - 1;
							*(v8 - 1) = *v30;
							v54 = fabs(v52);
							if (v35 && v54 <= v37)
							{
								--v35;
							}
							else
							{
								v37 = v54;
								v35 = v4;
								v55 = (float)(COERCE_FLOAT((LODWORD(v54) & 0x7FFFFF) + 1065353216) - 1.0)
									/ (float)(COERCE_FLOAT((LODWORD(v54) & 0x7FFFFF) + 1065353216) + 1.0);
								v48 = (float)((float)((float)((float)((float)((float)((float)(v55 * v55) * 0.33333334) + 1.0)
									* (float)(v55 * 2.0))
									+ (float)((float)((float)(unsigned __int8)(LODWORD(v54) >> 23) - 127.0)
										* 0.69314718))
									* 0.43429449)
									* 20.0)
									- v63;
								if (v48 <= 0.0)
									v48 = 0.0;
							}
							if ((float)(v48 - v36) < 0.0)
								v56 = v9;
							else
								v56 = v5;
							v36 = (float)((float)(v36 - v48) * v56) + v48;
							if ((float)(v36 * v13) >= -37.0)
							{
								if ((v49 & 1) == 0)
								{
									v49 |= 1u;
									v50 = 27866352.0;
								}
								v57 = (float)((float)((float)((float)(COERCE_FLOAT(
									((int)(float)((float)((float)(v36 * v13) * v50) + 1065353200.0) & 0x7FFFFF)
									+ 1065353216)
									* 0.32518977)
									+ 0.020805772)
									* COERCE_FLOAT(
										((int)(float)((float)((float)(v36 * v13) * v50) + 1065353200.0) & 0x7FFFFF)
										+ 1065353216))
									+ 0.65304345)
									* COERCE_FLOAT((int)(float)((float)((float)(v36 * v13) * v50) + 1065353200.0) & 0xFF800000);
							}
							else
							{
								v57 = 0.0;
							}
							*v30++ = v57 * v53;
						} while ((_DWORD)v51);
						dword_140C61BF8 = LODWORD(v50);
						dword_140C61BFC = v49;
					}
					if (v8 == v33)
						v8 = v10;
				} while (v30 < (float*)v32);
				v6 = v63;
			}
			v11 = a2;
			v28 = v61;
			*(float*)(v26 + *(_QWORD*)(a1 + 56)) = v36;
			++v24;
			++v25;
			v26 += 12i64;
			v60 = v24;
			*(float*)(*(_QWORD*)(a1 + 56) + v26 - 8) = v37;
			result = *(_QWORD*)(a1 + 56);
			*(_DWORD*)(result + v26 - 4) = v35;
			v27 = (unsigned int)(v4 + v58);
			v58 += v4;
		} while (v25 < v59);
	}
	*(_DWORD*)(a1 + 72) = v8 - v10;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

