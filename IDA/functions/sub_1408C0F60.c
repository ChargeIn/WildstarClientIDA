#include "../winhttp.h"

//----- (00000001408C0F60) ----------------------------------------------------
__int64 __fastcall sub_1408C0F60(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // r13
	unsigned int v5; // ebp
	float v6; // xmm7_4
	float v7; // xmm0_4
	int i; // edx
	__int64 v9; // rcx
	unsigned int v10; // ebx
	__int64 v11; // r10
	char* v12; // r12
	bool v13; // zf
	__int64 v14; // rcx
	__int64 v15; // rax
	int v16; // r8d
	float v17; // xmm6_4
	float v18; // xmm3_4
	__int64 v19; // rax
	int v20; // edx
	__int64 v21; // r11
	__int64 v22; // rbx
	unsigned int v23; // ecx
	__int64 v24; // rax
	float* v25; // r9
	float v26; // xmm0_4
	float v27; // xmm0_4
	float v28; // xmm0_4
	float v29; // xmm0_4
	float* v30; // rax
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm5_4
	__int64 v34; // rsi
	int v35; // r15d
	float v36; // xmm8_4
	__int64 v37; // r11
	__int64 v38; // r14
	__int64 v39; // rbx
	__int64 v40; // r13
	char* v41; // rdi
	float v42; // xmm1_4
	__int64 v43; // r10
	int* v44; // rcx
	float* v45; // rdx
	__int64 v46; // r9
	float v47; // xmm0_4
	int v48; // eax
	float v49; // xmm0_4
	int v50; // eax
	float v51; // xmm1_4
	float v52; // xmm0_4
	float v53; // xmm2_4
	__int64 v54; // rcx
	unsigned int v55; // ebx
	__int64 v56; // rdx
	__int64 v57; // r9
	unsigned int v58; // eax
	__int64 v59; // r11
	float v60; // xmm1_4
	__int64 v61; // rcx
	float v62; // xmm1_4
	__int64 v63; // rcx
	__int64 v64; // rcx
	float* v65; // r9
	_DWORD* v66; // rcx
	__int64 v67; // rdx
	__int64 result; // rax
	float v69; // [rsp+4h] [rbp-134h]
	float v70; // [rsp+14h] [rbp-124h]
	float v71; // [rsp+18h] [rbp-120h]
	unsigned int v72; // [rsp+1Ch] [rbp-11Ch]
	__int64 v73; // [rsp+20h] [rbp-118h]
	char* v74; // [rsp+28h] [rbp-110h]
	_DWORD v75[8]; // [rsp+30h] [rbp-108h] BYREF
	unsigned int v77; // [rsp+148h] [rbp+10h]
	unsigned int v78; // [rsp+158h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 16);
	v4 = a1;
	v5 = 0;
	v6 = *(float*)(v2 + 8);
	v7 = (float)((float)(1.0 / *(float*)(v2 + 12)) - 1.0) * 0.05;
	v69 = v7;
	v71 = *(float*)(a1 + 88);
	v70 = *(float*)(a1 + 84);
	for (i = *(_DWORD*)(a1 + 40) & 0x3FFFF; i; i &= i - 1)
		++v5;
	v9 = *(_QWORD*)(a1 + 64);
	v10 = *(unsigned __int16*)(a2 + 18);
	v11 = *(unsigned __int16*)(a2 + 16);
	v12 = (char*)(v9 + 4i64 * v5 * *(_DWORD*)(v4 + 72));
	v72 = *(_DWORD*)(v4 + 52);
	v78 = v10;
	v77 = *(unsigned __int16*)(a2 + 16);
	v13 = *(_BYTE*)(v4 + 92) == 0;
	v14 = v9 + 4i64 * v5 * v72;
	v15 = *(_QWORD*)(v4 + 56);
	v16 = *(_DWORD*)(v15 + 8);
	v74 = (char*)v14;
	v17 = *(float*)v15;
	v18 = *(float*)(v15 + 4);
	v19 = *(_QWORD*)a2;
	v73 = *(_QWORD*)a2;
	if (!v13)
	{
		v20 = v10;
		if (v72 < v10)
			v20 = v72;
		v21 = v19;
		if (v5)
		{
			v22 = v5;
			do
			{
				v23 = 0;
				v24 = 0i64;
				if (v20 >= 4)
				{
					v25 = (float*)(v21 + 8);
					v24 = 4i64 * (((unsigned int)(v20 - 4) >> 2) + 1);
					do
					{
						v26 = fabs(*(v25 - 2));
						if (v26 > v18)
						{
							v18 = v26;
							v16 = v20 - v23;
						}
						v27 = fabs(*(v25 - 1));
						if (v27 > v18)
						{
							v18 = v27;
							v16 = v20 - v23 - 1;
						}
						v28 = fabs(*v25);
						if (v28 > v18)
						{
							v18 = v28;
							v16 = v20 - v23 - 2;
						}
						v29 = fabs(v25[1]);
						if (v29 > v18)
						{
							v18 = v29;
							v16 = v20 - v23 - 3;
						}
						v23 += 4;
						v25 += 4;
					} while (v23 < v20 - 3);
				}
				if (v23 < v20)
				{
					v30 = (float*)(v21 + 4 * v24);
					do
					{
						v31 = fabs(*v30);
						if (v31 > v18)
						{
							v18 = v31;
							v16 = v20 - v23;
						}
						++v23;
						++v30;
					} while (v23 < v20);
				}
				v21 += 4i64 * (unsigned int)v11;
				--v22;
			} while (v22);
			v11 = v77;
			v10 = v78;
			v14 = (__int64)v74;
		}
		*(_BYTE*)(v4 + 92) = 0;
	}
	v32 = (float)(COERCE_FLOAT((LODWORD(v18) & 0x7FFFFF) + 1065353216) - 1.0)
		/ (float)(COERCE_FLOAT((LODWORD(v18) & 0x7FFFFF) + 1065353216) + 1.0);
	v33 = (float)((float)((float)((float)((float)((float)((float)(v32 * v32) * 0.33333334) + 1.0) * (float)(v32 * 2.0))
		+ (float)((float)((float)(unsigned __int8)(LODWORD(v18) >> 23) - 127.0) * 0.69314718))
		* 0.43429449)
		* 20.0)
		- v6;
	if (v33 <= 0.0)
		v33 = 0.0;
	v34 = 0i64;
	if (v10)
	{
		v35 = dword_140C61BFC;
		v36 = *(float*)&dword_140C61BF8;
		v37 = v5;
		do
		{
			v38 = ((v14 - (__int64)v12) >> 2) / v37;
			if (v10 - (unsigned int)v34 < v38)
				LODWORD(v38) = v10 - v34;
			if ((_DWORD)v38)
			{
				v39 = 4 * v37;
				v40 = -4 * v37;
				v41 = (char*)((char*)v75 - v12);
				do
				{
					LODWORD(v38) = v38 - 1;
					v42 = 0.0;
					if (v5)
					{
						v43 = 4 * v11;
						v44 = (int*)v12;
						v45 = (float*)(v73 + 4 * v34);
						v46 = v37;
						do
						{
							v47 = *v45;
							v48 = *v44;
							*v44 = *(_DWORD*)v45;
							*(int*)((char*)v44 + (_QWORD)v41) = v48;
							v49 = fabs(v47);
							if (v49 > v42)
								v42 = v49;
							v45 = (float*)((char*)v45 + v43);
							++v44;
							--v46;
						} while (v46);
					}
					v12 += v39;
					v41 += v40;
					if (v16 && v42 <= v18)
					{
						--v16;
					}
					else
					{
						v16 = v72;
						v18 = v42;
						v50 = (unsigned __int8)(LODWORD(v42) >> 23);
						v51 = (float)(COERCE_FLOAT((LODWORD(v42) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v42) & 0x7FFFFF) + 1065353216) + 1.0);
						v33 = (float)((float)((float)((float)((float)((float)((float)(v51 * v51) * 0.33333334) + 1.0)
							* (float)(v51 * 2.0))
							+ (float)((float)((float)v50 - 127.0) * 0.69314718))
							* 0.43429449)
							* 20.0)
							- v6;
						if (v33 <= 0.0)
							v33 = 0.0;
					}
					if ((float)(v33 - v17) < 0.0)
						v52 = v70;
					else
						v52 = v71;
					v17 = (float)((float)(v17 - v33) * v52) + v33;
					if ((float)(v17 * v69) >= -37.0)
					{
						if ((v35 & 1) == 0)
						{
							v35 |= 1u;
							v36 = 27866352.0;
						}
						v53 = (float)((float)((float)((float)(COERCE_FLOAT(
							((int)(float)((float)((float)(v17 * v69) * v36) + 1065353200.0) & 0x7FFFFF)
							+ 1065353216)
							* 0.32518977)
							+ 0.020805772)
							* COERCE_FLOAT(
								((int)(float)((float)((float)(v17 * v69) * v36) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216))
							+ 0.65304345)
							* COERCE_FLOAT((int)(float)((float)((float)(v17 * v69) * v36) + 1065353200.0) & 0xFF800000);
					}
					else
					{
						v53 = 0.0;
					}
					v54 = v73;
					v55 = 0;
					v56 = 0i64;
					if ((int)v5 >= 4)
					{
						v57 = 4i64 * v77;
						v58 = ((v5 - 4) >> 2) + 1;
						v59 = v58;
						v55 = 4 * v58;
						do
						{
							v56 += 4i64;
							v60 = v53 * *((float*)&v73 + v56 + 1);
							*(float*)(v54 + 4 * v34) = v53 * *((float*)&v73 + v56);
							v61 = v57 + v54;
							*(float*)(v61 + 4 * v34) = v60;
							v62 = v53 * *(float*)&v75[v56 - 1];
							v63 = v57 + v61;
							*(float*)(v63 + 4 * v34) = v53 * *(float*)&v75[v56 - 2];
							v64 = v57 + v63;
							*(float*)(v64 + 4 * v34) = v62;
							v54 = v57 + v64;
							--v59;
						} while (v59);
						v37 = v5;
					}
					if (v55 < v5)
					{
						v65 = (float*)(v54 + 4 * v34);
						v66 = &v75[v56];
						v67 = v5 - v55;
						do
						{
							*v65 = v53 * *((float*)++v66 - 1);
							v65 += v77;
							--v67;
						} while (v67);
					}
					v11 = v77;
					v34 = (unsigned int)(v34 + 1);
					v39 = 4 * v37;
				} while ((_DWORD)v38);
				v4 = a1;
				v10 = v78;
				dword_140C61BF8 = LODWORD(v36);
				dword_140C61BFC = v35;
			}
			v14 = (__int64)v74;
			if (v12 == v74)
				v12 = *(char**)(v4 + 64);
			v11 = v77;
		} while ((unsigned int)v34 < v10);
	}
	**(float**)(v4 + 56) = v17;
	*(float*)(*(_QWORD*)(v4 + 56) + 4i64) = v18;
	*(_DWORD*)(*(_QWORD*)(v4 + 56) + 8i64) = v16;
	result = (unsigned int)((__int64)&v12[-*(_QWORD*)(v4 + 64)] >> 2) / v5;
	*(_DWORD*)(v4 + 72) = result;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

