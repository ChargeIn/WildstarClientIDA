//----- (00000001408B2300) ----------------------------------------------------
__int64 __fastcall sub_1408B2300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	float* v4; // r10
	__int64 v6; // rbx
	__int64 v7; // rdx
	__int64 v8; // r11
	float* v9; // r8
	__int64 v10; // rcx
	__int64 result; // rax
	float v12; // xmm5_4
	float v13; // xmm8_4
	float v14; // xmm3_4
	float v15; // xmm0_4
	float v16; // xmm3_4
	float v17; // xmm7_4
	float v18; // xmm0_4
	float v19; // xmm8_4
	float v20; // xmm7_4
	float v21; // xmm7_4
	float v22; // xmm8_4
	float v23; // xmm3_4
	float v24; // xmm4_4
	float v25; // xmm5_4
	float v26; // xmm5_4
	float v27; // xmm3_4
	float v28; // xmm7_4
	float v29; // xmm6_4
	float v30; // xmm8_4
	float v31; // xmm6_4
	float v32; // xmm0_4
	__int64 v33; // [rsp+60h] [rbp+8h]

	v4 = *(float**)(a3 + 72);
	v6 = 8 * a2;
	v7 = 16 * a2;
	v8 = 2 * a4;
	v9 = v4;
	v10 = a1 + 4;
	v33 = *(_QWORD*)&v4[2 * a4 * a2];
	result = 8 * a4;
	do
	{
		v12 = *(float*)(v10 + 8 * v8 - 4);
		v13 = *(float*)(result + v10 - 4);
		v14 = *(float*)(v10 + result);
		v10 += 8i64;
		v15 = v14;
		v16 = v14 * *v9;
		v17 = v13;
		v18 = v15 * v9[1];
		v19 = v13 * v9[1];
		v20 = v17 * *v9;
		v9 = (float*)((char*)v9 + v6);
		v21 = v20 - v18;
		v22 = v19 + v16;
		v23 = *(float*)(v10 + 8 * v8 - 8) * *v4;
		v24 = (float)(v12 * *v4) - (float)(*(float*)(v10 + 8 * v8 - 8) * v4[1]);
		v25 = v12 * v4[1];
		v4 = (float*)((char*)v4 + v7);
		v26 = v25 + v23;
		v27 = v24 + v21;
		v28 = (float)(v21 - v24) * *((float*)&v33 + 1);
		v29 = v26 + v22;
		v30 = (float)(v22 - v26) * *((float*)&v33 + 1);
		*(float*)(result + v10 - 12) = *(float*)(v10 - 12) - (float)(v27 * 0.5);
		*(float*)(v10 + result - 8) = *(float*)(v10 - 8) - (float)(v29 * 0.5);
		v31 = v29 + *(float*)(v10 - 8);
		*(float*)(v10 - 12) = v27 + *(float*)(v10 - 12);
		*(float*)(v10 - 8) = v31;
		*(float*)(v10 + 8 * v8 - 12) = v30 + *(float*)(result + v10 - 12);
		*(float*)(v10 + 8 * v8 - 8) = *(float*)(v10 + result - 8) - v28;
		v32 = *(float*)(result + v10 - 12) - v30;
		*(float*)(v10 + result - 8) = v28 + *(float*)(v10 + result - 8);
		*(float*)(result + v10 - 12) = v32;
		--a4;
	} while (a4);
	return result;
}

