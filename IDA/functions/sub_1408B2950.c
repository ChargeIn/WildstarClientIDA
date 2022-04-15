#include "../winhttp.h"

//----- (00000001408B2950) ----------------------------------------------------
__int64* __fastcall sub_1408B2950(float* a1, int a2, int* a3, unsigned int a4, int a5)
{
	__int64 v5; // rbx
	int v6; // r10d
	__int64 v7; // rdi
	__int64* result; // rax
	__int64 v9; // r11
	int v10; // r9d
	int v11; // edx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64* v14; // rdx
	__int64 v15; // rax
	__int64 v16; // r13
	int v17; // r8d
	__int64 v18; // r15
	float* v19; // rdx
	__int64 v20; // rbp
	int v21; // r14d
	int v22; // edi
	int v23; // ecx
	__int64 v24; // r9
	float v25; // xmm6_4
	float v26; // xmm7_4
	unsigned int v27; // eax
	__int64 v28; // r11
	int v29; // ecx
	float v30; // xmm3_4
	float v31; // xmm1_4
	__int64 v32; // rax
	int v33; // ecx
	float v34; // xmm2_4
	float v35; // xmm7_4
	float v36; // xmm6_4
	float v37; // xmm1_4
	float v38; // xmm2_4
	__int64 v39; // rax
	int v40; // ecx
	float v41; // xmm3_4
	float v42; // xmm6_4
	float v43; // xmm7_4
	float v44; // xmm1_4
	float v45; // xmm2_4
	__int64 v46; // rax
	float v47; // xmm3_4
	float v48; // xmm6_4
	float v49; // xmm7_4
	float v50; // xmm1_4
	float v51; // xmm2_4
	float v52; // xmm3_4
	float v53; // xmm6_4
	float v54; // xmm7_4
	float* v55; // r11
	__int64 v56; // r9
	__int64 v57; // [rsp+0h] [rbp-178h]
	__int64 v58; // [rsp+8h] [rbp-170h]
	__int64 v59[32]; // [rsp+10h] [rbp-168h] BYREF
	float* v60; // [rsp+180h] [rbp+8h]
	int v62; // [rsp+190h] [rbp+18h]

	v60 = a1;
	v5 = *((_QWORD*)a3 + 9);
	v6 = *a3;
	v7 = a4;
	result = (__int64*)a1;
	v9 = (int)a4;
	v10 = a2;
	v58 = v9;
	if ((int)v7 > 0)
	{
		v11 = 0;
		v12 = (unsigned int)v7;
		v57 = v7;
		v62 = 0;
		do
		{
			v13 = 0i64;
			if (a5 > 0)
			{
				v14 = result;
				do
				{
					v15 = *v14;
					++v13;
					v14 += v9;
					v59[v13 - 1] = v15;
				} while (v13 < a5);
				v16 = v59[0];
				v17 = v62;
				v18 = 8 * v9;
				v19 = v60;
				v20 = (unsigned int)a5;
				v21 = v7 * v10;
				do
				{
					v22 = 1;
					v23 = 0;
					*(_QWORD*)v19 = v16;
					v24 = 1i64;
					if (a5 > 1)
					{
						if (a5 - 1 >= 4)
						{
							v25 = *v19;
							v26 = v19[1];
							v27 = ((unsigned int)(a5 - 5) >> 2) + 1;
							v28 = v27;
							v22 = 4 * v27 + 1;
							do
							{
								v29 = v17 + v23;
								if (v29 >= v6)
									v29 -= v6;
								v30 = *((float*)&v59[v24] + 1);
								v31 = *(float*)&v59[v24];
								v32 = v29;
								v33 = v17 + v29;
								v34 = *(float*)(v5 + 8 * v32);
								v35 = v26 + (float)((float)(*(float*)(v5 + 8 * v32 + 4) * v31) + (float)(v30 * v34));
								v36 = v25 + (float)((float)(v34 * v31) - (float)(*(float*)(v5 + 8 * v32 + 4) * v30));
								v19[1] = v35;
								*v19 = v36;
								if (v33 >= v6)
									v33 -= v6;
								v37 = *(float*)&v59[v24 + 1];
								v38 = *((float*)&v59[v24 + 1] + 1);
								v39 = v33;
								v40 = v17 + v33;
								v41 = *(float*)(v5 + 8 * v39);
								v42 = v36 + (float)((float)(v41 * v37) - (float)(*(float*)(v5 + 8 * v39 + 4) * v38));
								v43 = v35 + (float)((float)(*(float*)(v5 + 8 * v39 + 4) * v37) + (float)(v41 * v38));
								*v19 = v42;
								v19[1] = v43;
								if (v40 >= v6)
									v40 -= v6;
								v44 = *(float*)&v59[v24 + 2];
								v45 = *((float*)&v59[v24 + 2] + 1);
								v46 = v40;
								v23 = v17 + v40;
								v47 = *(float*)(v5 + 8 * v46);
								v48 = v42 + (float)((float)(v47 * v44) - (float)(*(float*)(v5 + 8 * v46 + 4) * v45));
								v49 = v43 + (float)((float)(*(float*)(v5 + 8 * v46 + 4) * v44) + (float)(v47 * v45));
								*v19 = v48;
								v19[1] = v49;
								if (v23 >= v6)
									v23 -= v6;
								v50 = *(float*)&v59[v24 + 3];
								v51 = *((float*)&v59[v24 + 3] + 1);
								v24 += 4i64;
								v52 = *(float*)(v5 + 8i64 * v23);
								v25 = v48 + (float)((float)(v52 * v50) - (float)(*(float*)(v5 + 8i64 * v23 + 4) * v51));
								v26 = v49 + (float)((float)(*(float*)(v5 + 8i64 * v23 + 4) * v50) + (float)(v52 * v51));
								*v19 = v25;
								v19[1] = v26;
								--v28;
							} while (v28);
						}
						if (v22 < a5)
						{
							v53 = *v19;
							v54 = v19[1];
							v55 = (float*)&v59[v24] + 1;
							v56 = (unsigned int)(a5 - v22);
							do
							{
								v23 += v17;
								if (v23 >= v6)
									v23 -= v6;
								v55 += 2;
								v53 = v53
									+ (float)((float)(*(float*)(v5 + 8i64 * v23) * *(v55 - 3))
										- (float)(*(float*)(v5 + 8i64 * v23 + 4) * *(v55 - 2)));
								v54 = v54
									+ (float)((float)(*(float*)(v5 + 8i64 * v23 + 4) * *(v55 - 3))
										+ (float)(*(float*)(v5 + 8i64 * v23) * *(v55 - 2)));
								*v19 = v53;
								v19[1] = v54;
								--v56;
							} while (v56);
						}
					}
					v17 += v21;
					v19 = (float*)((char*)v19 + v18);
					--v20;
				} while (v20);
				result = (__int64*)v60;
				v11 = v62;
				v12 = v57;
				v10 = a2;
				v9 = v58;
				LODWORD(v7) = a4;
			}
			v11 += v10;
			++result;
			v57 = --v12;
			v62 = v11;
			v60 = (float*)result;
		} while (v12);
	}
	return result;
}
// 1408B2A2D: conditional instruction was optimized away because esi.4>=1

