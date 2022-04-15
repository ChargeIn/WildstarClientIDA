#include "../winhttp.h"

//----- (00000001408C1680) ----------------------------------------------------
__int64 __fastcall sub_1408C1680(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	__int64 v4; // r10
	__int64 v5; // r13
	float v6; // xmm7_4
	float v7; // xmm0_4
	int v8; // edx
	__int64 v9; // rcx
	unsigned int v10; // ebx
	__int64 v11; // r11
	__int64 v12; // r15
	char* v13; // r12
	bool v14; // zf
	__int64 v15; // rdx
	__int64 v16; // rax
	unsigned int v17; // ecx
	int v18; // r8d
	float v19; // xmm6_4
	float v20; // xmm3_4
	int v21; // edx
	__int64 v22; // rbx
	__int64 v23; // rdi
	unsigned int v24; // ecx
	__int64 v25; // rax
	float* v26; // r9
	float v27; // xmm0_4
	float v28; // xmm0_4
	float v29; // xmm0_4
	float v30; // xmm0_4
	float* v31; // rax
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm5_4
	__int64 v35; // rsi
	int v36; // r14d
	float v37; // xmm8_4
	__int64 v38; // rbp
	char* v39; // rdi
	__int64 v40; // rbx
	float v41; // xmm1_4
	__int64 v42; // rdx
	float* v43; // rcx
	__int64 v44; // r9
	float v45; // xmm0_4
	float v46; // eax
	float v47; // xmm0_4
	int v48; // xmm0_4
	__int64 v49; // rcx
	int v50; // eax
	float v51; // xmm1_4
	float v52; // xmm0_4
	float v53; // xmm2_4
	unsigned int v54; // ebx
	__int64 v55; // rdx
	__int64 v56; // rcx
	__int64 v57; // r9
	unsigned int v58; // eax
	__int64 v59; // r11
	float v60; // xmm1_4
	__int64 v61; // rcx
	float v62; // xmm1_4
	__int64 v63; // rcx
	__int64 v64; // rcx
	float* v65; // r9
	int* v66; // rcx
	__int64 v67; // rdx
	__int64 result; // rax
	unsigned int v69; // [rsp+4h] [rbp-144h]
	__int64 v70; // [rsp+8h] [rbp-140h]
	float v71; // [rsp+10h] [rbp-138h]
	float v72; // [rsp+18h] [rbp-130h]
	unsigned int v73; // [rsp+20h] [rbp-128h]
	float v74; // [rsp+24h] [rbp-124h]
	__int64 v75; // [rsp+30h] [rbp-118h]
	char* v76; // [rsp+38h] [rbp-110h]
	int v77[8]; // [rsp+40h] [rbp-108h] BYREF
	unsigned int v79; // [rsp+160h] [rbp+18h]
	unsigned int v80; // [rsp+168h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 16);
	v4 = 0i64;
	v5 = a1;
	v80 = 0;
	v6 = *(float*)(v2 + 8);
	v7 = (float)((float)(1.0 / *(float*)(v2 + 12)) - 1.0) * 0.05;
	v71 = v7;
	v72 = *(float*)(a1 + 88);
	v74 = *(float*)(a1 + 84);
	v8 = *(_DWORD*)(a1 + 40) & 0x3FFFF;
	if (v8)
	{
		do
		{
			v4 = (unsigned int)(v4 + 1);
			v8 &= v8 - 1;
		} while (v8);
		v80 = v4;
	}
	v9 = *(_QWORD*)(a1 + 64);
	v10 = *((unsigned __int16*)a2 + 9);
	v11 = *a2;
	v12 = *(unsigned int*)(v5 + 44);
	v13 = (char*)(v9 + 4i64 * (unsigned int)(v4 * *(_DWORD*)(v5 + 72)));
	v73 = *(_DWORD*)(v5 + 52);
	v69 = v10;
	v70 = *a2;
	v14 = *(_BYTE*)(v5 + 92) == 0;
	v15 = v9 + 4i64 * (unsigned int)v4 * v73;
	v16 = *(_QWORD*)(v5 + 56);
	v17 = *((unsigned __int16*)a2 + 8);
	v18 = *(_DWORD*)(v16 + 8);
	v76 = (char*)v15;
	v19 = *(float*)v16;
	v20 = *(float*)(v16 + 4);
	v79 = v17;
	if (!v14)
	{
		v21 = v10;
		if (v73 < v10)
			v21 = v73;
		if ((_DWORD)v12)
		{
			v22 = (unsigned int)v12;
			v23 = 4i64 * v17;
			do
			{
				v24 = 0;
				v25 = 0i64;
				if (v21 >= 4)
				{
					v26 = (float*)(v11 + 8);
					v25 = 4i64 * (((unsigned int)(v21 - 4) >> 2) + 1);
					do
					{
						v27 = fabs(*(v26 - 2));
						if (v27 > v20)
						{
							v20 = v27;
							v18 = v21 - v24;
						}
						v28 = fabs(*(v26 - 1));
						if (v28 > v20)
						{
							v20 = v28;
							v18 = v21 - v24 - 1;
						}
						v29 = fabs(*v26);
						if (v29 > v20)
						{
							v20 = v29;
							v18 = v21 - v24 - 2;
						}
						v30 = fabs(v26[1]);
						if (v30 > v20)
						{
							v20 = v30;
							v18 = v21 - v24 - 3;
						}
						v24 += 4;
						v26 += 4;
					} while (v24 < v21 - 3);
				}
				if (v24 < v21)
				{
					v31 = (float*)(v11 + 4 * v25);
					do
					{
						v32 = fabs(*v31);
						if (v32 > v20)
						{
							v20 = v32;
							v18 = v21 - v24;
						}
						++v24;
						++v31;
					} while (v24 < v21);
				}
				v11 += v23;
				--v22;
			} while (v22);
			v4 = v80;
			v10 = v69;
		}
		v11 = v70;
		v15 = (__int64)v76;
		*(_BYTE*)(v5 + 92) = 0;
	}
	v33 = (float)(COERCE_FLOAT((LODWORD(v20) & 0x7FFFFF) + 1065353216) - 1.0)
		/ (float)(COERCE_FLOAT((LODWORD(v20) & 0x7FFFFF) + 1065353216) + 1.0);
	v34 = (float)((float)((float)((float)((float)((float)((float)(v33 * v33) * 0.33333334) + 1.0) * (float)(v33 * 2.0))
		+ (float)((float)((float)(unsigned __int8)(LODWORD(v20) >> 23) - 127.0) * 0.69314718))
		* 0.43429449)
		* 20.0)
		- v6;
	if (v34 <= 0.0)
		v34 = 0.0;
	v35 = 0i64;
	if (v10)
	{
		v36 = dword_140C61BFC;
		v37 = *(float*)&dword_140C61BF8;
		v75 = v4;
		do
		{
			v38 = ((v15 - (__int64)v13) >> 2) / v4;
			if (v10 - (unsigned int)v35 < v38)
				LODWORD(v38) = v10 - v35;
			if ((_DWORD)v38)
			{
				v39 = (char*)((char*)v77 - v13);
				do
				{
					LODWORD(v38) = v38 - 1;
					v40 = 0i64;
					v41 = 0.0;
					v42 = v11;
					if ((_DWORD)v12)
					{
						v43 = (float*)v13;
						v40 = v12;
						v44 = v12;
						do
						{
							v45 = *(float*)(v42 + 4 * v35);
							v46 = *v43;
							*v43 = v45;
							*(float*)((char*)v43 + (_QWORD)v39) = v46;
							v47 = fabs(v45);
							if (v47 > v41)
								v41 = v47;
							v42 += 4i64 * v79;
							++v43;
							--v44;
						} while (v44);
						v11 = v70;
					}
					v48 = *(_DWORD*)&v13[4 * v40];
					v49 = v75;
					*(_DWORD*)&v13[4 * v40] = *(_DWORD*)(v42 + 4 * v35);
					v39 -= 4 * v4;
					v77[v40] = v48;
					*(_DWORD*)(v42 + 4 * v35) = v48;
					v13 += 4 * v49;
					if (v18 && v41 <= v20)
					{
						--v18;
					}
					else
					{
						v18 = v73;
						v20 = v41;
						v50 = (unsigned __int8)(LODWORD(v41) >> 23);
						v51 = (float)(COERCE_FLOAT((LODWORD(v41) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v41) & 0x7FFFFF) + 1065353216) + 1.0);
						v34 = (float)((float)((float)((float)((float)((float)((float)(v51 * v51) * 0.33333334) + 1.0)
							* (float)(v51 * 2.0))
							+ (float)((float)((float)v50 - 127.0) * 0.69314718))
							* 0.43429449)
							* 20.0)
							- v6;
						if (v34 <= 0.0)
							v34 = 0.0;
					}
					if ((float)(v34 - v19) < 0.0)
						v52 = v74;
					else
						v52 = v72;
					v19 = (float)((float)(v19 - v34) * v52) + v34;
					if ((float)(v19 * v71) >= -37.0)
					{
						if ((v36 & 1) == 0)
						{
							v36 |= 1u;
							v37 = 27866352.0;
						}
						v53 = (float)((float)((float)((float)(COERCE_FLOAT(
							((int)(float)((float)((float)(v19 * v71) * v37) + 1065353200.0) & 0x7FFFFF)
							+ 1065353216)
							* 0.32518977)
							+ 0.020805772)
							* COERCE_FLOAT(
								((int)(float)((float)((float)(v19 * v71) * v37) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216))
							+ 0.65304345)
							* COERCE_FLOAT((int)(float)((float)((float)(v19 * v71) * v37) + 1065353200.0) & 0xFF800000);
					}
					else
					{
						v53 = 0.0;
					}
					v54 = 0;
					v55 = 0i64;
					v56 = v11;
					if ((int)v12 >= 4)
					{
						v57 = 4i64 * v79;
						v58 = ((unsigned int)(v12 - 4) >> 2) + 1;
						v59 = v58;
						v54 = 4 * v58;
						do
						{
							v55 += 4i64;
							v60 = v53 * *((float*)&v75 + v55 + 1);
							*(float*)(v56 + 4 * v35) = v53 * *((float*)&v75 + v55);
							v61 = v57 + v56;
							*(float*)(v61 + 4 * v35) = v60;
							v62 = v53 * *(float*)&v77[v55 - 1];
							v63 = v57 + v61;
							*(float*)(v63 + 4 * v35) = v53 * *(float*)&v77[v55 - 2];
							v64 = v57 + v63;
							*(float*)(v64 + 4 * v35) = v62;
							v56 = v57 + v64;
							--v59;
						} while (v59);
					}
					if (v54 < (unsigned int)v12)
					{
						v65 = (float*)(v56 + 4 * v35);
						v66 = &v77[v55];
						v67 = (unsigned int)v12 - v54;
						do
						{
							*v65 = v53 * *((float*)++v66 - 1);
							v65 += v79;
							--v67;
						} while (v67);
					}
					v11 = v70;
					v35 = (unsigned int)(v35 + 1);
				} while ((_DWORD)v38);
				v4 = v75;
				v5 = a1;
				v10 = v69;
				dword_140C61BF8 = LODWORD(v37);
				dword_140C61BFC = v36;
			}
			v15 = (__int64)v76;
			if (v13 == v76)
				v13 = *(char**)(v5 + 64);
			v11 = v70;
		} while ((unsigned int)v35 < v10);
	}
	**(float**)(v5 + 56) = v19;
	*(float*)(*(_QWORD*)(v5 + 56) + 4i64) = v20;
	*(_DWORD*)(*(_QWORD*)(v5 + 56) + 8i64) = v18;
	result = (unsigned int)((__int64)&v13[-*(_QWORD*)(v5 + 64)] >> 2) / v80;
	*(_DWORD*)(v5 + 72) = result;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 1408C1680: using guessed type int var_108[8];

