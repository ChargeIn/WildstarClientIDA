//----- (00000001408B1980) ----------------------------------------------------
__int64 __fastcall sub_1408B1980(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	float* v4; // r10
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // r8
	float v8; // xmm1_4
	float v9; // xmm2_4
	float v10; // xmm5_4
	float v11; // xmm0_4
	float v12; // xmm5_4
	float v13; // xmm4_4
	float v14; // xmm5_4

	v4 = *(float**)(a3 + 72);
	result = a4;
	v6 = 8 * a2;
	v7 = a1 + 8i64 * a4;
	do
	{
		v8 = *v4;
		v9 = v4[1];
		v10 = *(float*)(v7 + 4);
		a1 += 8i64;
		v4 = (float*)((char*)v4 + v6);
		v7 += 8i64;
		v11 = v9 * v10;
		v12 = (float)(v10 * v8) + (float)(v9 * *(float*)(v7 - 8));
		v13 = (float)(v8 * *(float*)(v7 - 8)) - v11;
		*(float*)(v7 - 8) = *(float*)(a1 - 8) - v13;
		*(float*)(v7 - 4) = *(float*)(a1 - 4) - v12;
		v14 = v12 + *(float*)(a1 - 4);
		*(float*)(a1 - 8) = v13 + *(float*)(a1 - 8);
		*(float*)(a1 - 4) = v14;
		--a4;
	} while (a4);
	return result;
}

