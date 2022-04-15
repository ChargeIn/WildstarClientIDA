#include "../winhttp.h"

//----- (00000001408D3B30) ----------------------------------------------------
void** __fastcall sub_1408D3B30(float* a1, __int64 a2, __int64 a3, int a4)
{
	void** result; // rax
	float v5; // xmm2_4
	float v6; // xmm3_4
	float v7; // xmm4_4
	float v8; // xmm5_4
	float v9; // xmm11_4
	float v10; // xmm6_4
	float v11; // xmm7_4
	float v12; // xmm12_4
	float v13; // xmm13_4
	float v14; // xmm14_4
	float v15; // xmm15_4
	float v16; // xmm8_4
	float v17; // xmm9_4
	float v18; // xmm10_4
	float v19; // xmm1_4
	float v20; // xmm0_4
	__int64 v21; // rdx
	float v22; // xmm1_4
	float v23; // xmm2_4
	float v24; // xmm2_4
	float v25; // xmm1_4
	float v26; // xmm1_4
	float v27; // xmm2_4
	float v28; // xmm0_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // [rsp+0h] [rbp-108h]
	float v35; // [rsp+4h] [rbp-104h]
	float v36; // [rsp+8h] [rbp-100h]
	float v37; // [rsp+Ch] [rbp-FCh]
	float v38; // [rsp+10h] [rbp-F8h]
	float v39; // [rsp+14h] [rbp-F4h]
	float v40; // [rsp+18h] [rbp-F0h]
	float v41; // [rsp+1Ch] [rbp-ECh]
	float v42; // [rsp+20h] [rbp-E8h]
	float v43; // [rsp+24h] [rbp-E4h]
	float v44; // [rsp+28h] [rbp-E0h]
	float v45; // [rsp+2Ch] [rbp-DCh]
	float v46; // [rsp+30h] [rbp-D8h]
	float v47; // [rsp+34h] [rbp-D4h]
	float v48; // [rsp+38h] [rbp-D0h]
	float v49; // [rsp+3Ch] [rbp-CCh]
	float v50; // [rsp+40h] [rbp-C8h]
	float v51; // [rsp+44h] [rbp-C4h]
	float v52; // [rsp+48h] [rbp-C0h]
	float v53; // [rsp+4Ch] [rbp-BCh]
	float v54; // [rsp+50h] [rbp-B8h]
	void* retaddr; // [rsp+108h] [rbp+0h] BYREF
	float v56; // [rsp+110h] [rbp+8h]
	float v57; // [rsp+128h] [rbp+20h]

	result = &retaddr;
	v5 = a1[45];
	v6 = a1[24];
	v7 = a1[26];
	v8 = a1[30];
	v9 = a1[25];
	v10 = a1[32];
	v11 = a1[36];
	v12 = a1[27];
	v13 = a1[31];
	v14 = a1[33];
	v15 = a1[37];
	v16 = a1[38];
	v17 = a1[42];
	v18 = a1[44];
	v37 = *a1;
	v45 = a1[1];
	v48 = a1[15];
	v53 = a1[2];
	v39 = a1[3];
	v46 = a1[16];
	v47 = a1[4];
	v51 = a1[5];
	v50 = a1[17];
	v41 = a1[6];
	v43 = a1[7];
	v52 = a1[18];
	v49 = a1[8];
	v35 = a1[9];
	v54 = a1[19];
	v19 = a1[43];
	v38 = a1[10];
	v36 = a1[11];
	v56 = v19;
	v40 = a1[12];
	v34 = v5;
	v42 = a1[13];
	v44 = a1[14];
	v20 = a1[39];
	v57 = v20;
	if (a4)
	{
		v21 = a2 - a3;
		do
		{
			v22 = *(float*)(v21 + a3);
			a3 += 4i64;
			v23 = (float)((float)(v6 * v45) + (float)(v37 * v22)) + (float)(v9 * v53);
			v9 = v6;
			v6 = v22;
			v24 = (float)(v23 - (float)(v7 * v39)) - (float)(v12 * v47);
			v12 = v7;
			v7 = v24;
			v25 = (float)((float)(v8 * v41) + (float)(v51 * v24)) + (float)(v13 * v43);
			v13 = v8;
			v8 = v24;
			v26 = (float)(v25 - (float)(v10 * v49)) - (float)(v14 * v35);
			v14 = v10;
			v10 = v26;
			v27 = (float)((float)(v11 * v36) + (float)(v38 * v26)) + (float)(v15 * v40);
			v15 = v11;
			v11 = v26;
			v28 = v57 * v44;
			v57 = v16;
			v16 = (float)(v27 - (float)(v16 * v42)) - v28;
			v29 = (float)(v17 * v46) + (float)(v48 * v16);
			v30 = v56;
			v56 = v17;
			v17 = v16;
			v5 = v18;
			v31 = (float)(v29 + (float)(v30 * v50)) - (float)(v18 * v52);
			v32 = v34;
			v34 = v18;
			v33 = v31 - (float)(v32 * v54);
			*(float*)(a3 - 4) = v33;
			v18 = v33;
			--a4;
		} while (a4);
		v20 = v57;
		v19 = v56;
	}
	a1[36] = v11;
	a1[42] = v17;
	a1[24] = v6;
	a1[30] = v8;
	a1[25] = v9;
	a1[31] = v13;
	a1[37] = v15;
	a1[43] = v19;
	a1[32] = v10;
	a1[38] = v16;
	a1[44] = v18;
	a1[26] = v7;
	a1[27] = v12;
	a1[33] = v14;
	a1[39] = v20;
	a1[45] = v5;
	return result;
}

