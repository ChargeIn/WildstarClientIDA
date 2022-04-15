#include "../winhttp.h"

//----- (00000001408D6310) ----------------------------------------------------
void** __fastcall sub_1408D6310(float* a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	void** result; // rax
	int v6; // r10d
	__int64 v7; // rbx
	float v8; // xmm4_4
	float v9; // xmm6_4
	float v10; // xmm7_4
	float v11; // xmm10_4
	float v12; // xmm11_4
	float v13; // xmm8_4
	float v14; // xmm15_4
	float v15; // xmm12_4
	float v16; // xmm9_4
	float v17; // xmm13_4
	float v18; // xmm0_4
	float* v19; // r11
	__int64 v20; // rdi
	int v21; // r8d
	float v22; // xmm1_4
	float v23; // xmm1_4
	float v24; // xmm2_4
	float v25; // xmm2_4
	float v26; // xmm1_4
	float v27; // xmm1_4
	float v28; // xmm2_4
	float v29; // xmm0_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	float v33; // xmm2_4
	float v34; // xmm0_4
	float v35; // xmm0_4
	float v36; // xmm0_4
	float v37; // [rsp+0h] [rbp-C8h]
	float v38; // [rsp+4h] [rbp-C4h]
	float v39; // [rsp+8h] [rbp-C0h]
	float v40; // [rsp+Ch] [rbp-BCh]
	float v41; // [rsp+10h] [rbp-B8h]
	float v42; // [rsp+14h] [rbp-B4h]
	float v43; // [rsp+18h] [rbp-B0h]
	float v44; // [rsp+1Ch] [rbp-ACh]
	void* retaddr; // [rsp+C8h] [rbp+0h] BYREF
	float v46; // [rsp+D0h] [rbp+8h]

	result = &retaddr;
	v6 = a5;
	v7 = a3;
	v8 = a1[2];
	v9 = a1[23];
	v10 = a1[25];
	v11 = a1[24];
	v12 = a1[26];
	v13 = a1[29];
	v14 = a1[1];
	v15 = a1[30];
	v16 = a1[31];
	v17 = a1[32];
	v40 = a1[3];
	v46 = a1[7];
	v41 = a1[4];
	v37 = a1[8];
	v42 = a1[5];
	v18 = a1[6];
	v38 = a1[9];
	v44 = v18;
	v43 = v8;
	v39 = a1[10];
	if (a5)
	{
		v19 = a1 + 35;
		v20 = a2 - a3;
		do
		{
			result = (void**)*(unsigned int*)(v20 + v7);
			*((_DWORD*)a1 + 21) = (_DWORD)result;
			--v6;
			v7 += 4i64;
			v21 = 0;
			v22 = *(float*)(v7 - 4);
			*a1 = v22;
			v23 = v22 * a1[22];
			v24 = (float)((float)(v13 * v46) + (float)(v18 * v23)) + (float)(v15 * v37);
			v15 = v13;
			v13 = v23;
			v25 = (float)(v24 - (float)(v16 * v38)) - (float)(v17 * v39);
			v17 = v16;
			v16 = v25;
			v26 = (float)((float)(v9 * v8) + (float)(v14 * v25)) + (float)(v11 * v40);
			v11 = v9;
			v9 = v25;
			v27 = (float)(v26 - (float)(v10 * v41)) - (float)(v12 * v42);
			v12 = v10;
			*v19 = v27;
			v28 = a1[36];
			v10 = v27;
			if (fabs(a1[12]) < fabs(a1[21]))
			{
				v28 = a1[14];
				v21 = 1;
			}
			v29 = a1[37];
			if (v21 > 0)
				v29 = a1[15];
			v30 = v29 + -1.0;
			if (v30 > 0.0)
				v28 = a1[14];
			else
				v30 = 0.0;
			a1[37] = v30;
			v31 = a1[38];
			v32 = a1[16];
			v33 = v28 - v31;
			if (v33 > 0.0)
				v32 = a1[17];
			v8 = v43;
			a4 += 4i64;
			v34 = (float)(v32 * v33) + v31;
			a1[38] = v34;
			v35 = v34 * *v19;
			a1[40] = v35;
			v36 = v35 + a1[21];
			a1[41] = v36;
			*(float*)(a4 - 4) = v36;
			v18 = v44;
		} while (v6);
	}
	a1[23] = v9;
	a1[29] = v13;
	a1[24] = v11;
	a1[30] = v15;
	a1[25] = v10;
	a1[31] = v16;
	a1[26] = v12;
	a1[32] = v17;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

