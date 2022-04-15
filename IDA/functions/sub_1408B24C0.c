#include "../winhttp.h"

//----- (00000001408B24C0) ----------------------------------------------------
float* __fastcall sub_1408B24C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // r11
	__int64 v5; // r8
	__int64 v6; // r8
	float* result; // rax
	__int64 v8; // rdi
	float* v9; // r12
	float* v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rsi
	__int64 v14; // r11
	float* v15; // rbx
	__int64 v16; // r14
	__int64 v17; // r15
	__int64 v18; // rdx
	__int64 v19; // rbp
	__int64 v20; // r13
	__int64 v21; // r8
	float* v22; // r10
	float* v23; // r9
	float v24; // xmm3_4
	float v25; // xmm14_4
	float v26; // xmm4_4
	float v27; // xmm15_4
	float v28; // xmm14_4
	float v29; // xmm12_4
	float v30; // xmm13_4
	float v31; // xmm7_4
	float v32; // xmm6_4
	float v33; // xmm9_4
	float v34; // xmm13_4
	float v35; // xmm8_4
	float v36; // xmm12_4
	float v37; // xmm4_4
	float v38; // xmm5_4
	float v39; // xmm10_4
	float v40; // xmm15_4
	float v41; // xmm11_4
	float v42; // xmm4_4
	float v43; // xmm14_4
	float v44; // xmm1_4
	float v45; // xmm5_4
	float v46; // xmm4_4
	float v47; // xmm3_4
	float v48; // xmm2_4
	float v49; // xmm13_4
	float v50; // xmm15_4
	float v51; // xmm10_4
	float v52; // xmm11_4
	__int64 v53; // [rsp+8h] [rbp-160h]
	float v54[28]; // [rsp+20h] [rbp-148h]
	__int64 v55; // [rsp+170h] [rbp+8h]
	__int64 v56; // [rsp+178h] [rbp+10h]
	float* v57; // [rsp+180h] [rbp+18h]

	v4 = *(_QWORD*)(a3 + 72);
	v5 = a2 * a4;
	v56 = *(_QWORD*)(v4 + 8 * v5);
	v55 = *(_QWORD*)(v4 + 16 * v5);
	v6 = 3 * a4;
	result = (float*)(unsigned int)(4 * a4);
	v8 = (int)result;
	v9 = (float*)(a1 + 8 * v6);
	if (a4 > 0)
	{
		v10 = (float*)(v4 + 4);
		v11 = 8 * a2;
		v12 = v8 - a4;
		v13 = 2 * a4 - (__int64)a4;
		v14 = -4 - 8i64 * a4;
		v15 = &v9[2 * (a4 - v6) + 1];
		v16 = 8 * a2;
		v17 = 24 * a2;
		v18 = 16 * a2;
		v19 = -(__int64)a4;
		v20 = (unsigned int)a4;
		v21 = v6 - a4;
		v53 = v11;
		v22 = v10;
		v57 = v10;
		v23 = v10;
		do
		{
			v24 = *(v15 - 1);
			v25 = *(v10 - 1);
			*(_QWORD*)v54 = *(_QWORD*)((char*)v15 + v14);
			v26 = *(v23 - 1);
			v27 = (float)(v24 * v25) - (float)(*v10 * *v15);
			v28 = (float)(v25 * *v15) + (float)(v24 * *v10);
			v29 = (float)(*(v22 - 1) * v15[2 * v13 - 1]) - (float)(v15[2 * v13] * *v22);
			v30 = (float)(v15[2 * v13] * *(v22 - 1)) + (float)(*v22 * v15[2 * v13 - 1]);
			v31 = (float)(*v9 * *v23) + (float)(v26 * v15[2 * v21]);
			v32 = (float)(*v9 * v26) - (float)(*v23 * v15[2 * v21]);
			v33 = v31 + v30;
			v34 = v30 - v31;
			v35 = v32 + v29;
			v36 = v29 - v32;
			v37 = (float)(v15[2 * v12 - 1] * *(v57 - 1)) - (float)(v15[2 * v12] * *v57);
			v38 = (float)(v15[2 * v12 - 1] * *v57) + (float)(v15[2 * v12] * *(v57 - 1));
			v39 = v37 + v27;
			v40 = v27 - v37;
			v41 = v38 + v28;
			v42 = (float)((float)(v38 + v28) * *(float*)&v56) + v54[1];
			v43 = v28 - v38;
			v44 = (float)(v33 + v41) + v15[2 * v19];
			*(float*)((char*)v15 + v14) = (float)(v35 + v39) + *(float*)((char*)v15 + v14);
			v45 = (float)((float)(v39 * *(float*)&v56) + v54[0]) + (float)(v35 * *(float*)&v55);
			v15[2 * v19] = v44;
			v46 = v42 + (float)(v33 * *(float*)&v55);
			v10 = (float*)((char*)v10 + v53);
			result = &v57[v16];
			v9 += 2;
			v15 += 2;
			v22 = (float*)((char*)v22 + v18);
			v23 = (float*)((char*)v23 + v17);
			v57 = (float*)((char*)v57 + v16 * 4);
			v47 = (float)(v34 * *((float*)&v55 + 1)) + (float)(v43 * *((float*)&v56 + 1));
			v48 = (float)-(float)(v40 * *((float*)&v56 + 1)) - (float)(v36 * *((float*)&v55 + 1));
			v49 = (float)(v34 * *((float*)&v56 + 1)) - (float)(v43 * *((float*)&v55 + 1));
			*(v15 - 2) = v46 - v48;
			*(v15 - 3) = v45 - v47;
			v15[2 * v12 - 3] = v47 + v45;
			v50 = (float)(v40 * *((float*)&v55 + 1)) - (float)(v36 * *((float*)&v56 + 1));
			v51 = (float)((float)(v39 * *(float*)&v55) + v54[0]) + (float)(v35 * *(float*)&v56);
			v52 = (float)((float)(v41 * *(float*)&v55) + v54[1]) + (float)(v33 * *(float*)&v56);
			v15[2 * v12 - 2] = v48 + v46;
			v15[2 * v13 - 3] = v49 + v51;
			v15[2 * v13 - 2] = v50 + v52;
			*(v9 - 2) = v51 - v49;
			v15[2 * v21 - 2] = v52 - v50;
			--v20;
		} while (v20);
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 1408B24C0: using guessed type float var_148[28];

