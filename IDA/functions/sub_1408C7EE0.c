//----- (00000001408C7EE0) ----------------------------------------------------
__int64 __fastcall sub_1408C7EE0(int a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // r11d
	__int64 v6; // rdi
	__int64 result; // rax
	__int64 v9; // r8
	unsigned int v10; // ecx
	__int64 v11; // rdx
	float v12; // xmm7_4
	float v13; // xmm2_4
	int v14; // ecx
	float v15; // xmm0_4
	int v16; // ecx
	float v17; // xmm1_4
	float v18; // xmm0_4
	int v19; // ecx
	__int64 v20; // rdx
	__int64 v21; // r8

	v3 = 0;
	v6 = 0i64;
	result = 29101977i64;
	if (a1 >= 4)
	{
		v9 = a3 + 8;
		v10 = ((unsigned int)(a1 - 4) >> 2) + 1;
		v11 = v10;
		v3 = 4 * v10;
		v6 = 4i64 * v10;
		v12 = 1.0 / (float)a1;
		do
		{
			v13 = v12 * *(float*)(a2 + 36);
			v9 += 16i64;
			v14 = 196314165 * result + 907633515;
			v15 = (float)v14;
			v16 = 196314165 * v14 + 907633515;
			v17 = (float)((float)(*(float*)(a2 + 40) * 0.0099999998) * v13) * (float)(v15 * 2.3283064e-10);
			v18 = (float)v16;
			v19 = 196314165 * v16 + 907633515;
			result = (unsigned int)(196314165 * v19 + 907633515);
			*(float*)(v9 - 24) = v17 + v13;
			*(float*)(v9 - 20) = (float)((float)((float)(*(float*)(a2 + 40) * 0.0099999998)
				* (float)(v12 * *(float*)(a2 + 36)))
				* (float)(v18 * 2.3283064e-10))
				+ (float)(v12 * *(float*)(a2 + 36));
			*(float*)(v9 - 16) = (float)((float)((float)(*(float*)(a2 + 40) * 0.0099999998)
				* (float)(v12 * *(float*)(a2 + 36)))
				* (float)((float)v19 * 2.3283064e-10))
				+ (float)(v12 * *(float*)(a2 + 36));
			*(float*)(v9 - 12) = (float)((float)((float)(*(float*)(a2 + 40) * 0.0099999998)
				* (float)(v12 * *(float*)(a2 + 36)))
				* (float)((float)(196314165 * v19 + 907633515) * 2.3283064e-10))
				+ (float)(v12 * *(float*)(a2 + 36));
			--v11;
		} while (v11);
	}
	if (v3 < a1)
	{
		v20 = a3 + 4 * v6;
		v21 = a1 - v3;
		do
		{
			v20 += 4i64;
			result = (unsigned int)(196314165 * result + 907633515);
			*(float*)(v20 - 4) = (float)((float)((float)(*(float*)(a2 + 40) * 0.0099999998)
				* (float)((float)(1.0 / (float)a1) * *(float*)(a2 + 36)))
				* (float)((float)(int)result * 2.3283064e-10))
				+ (float)((float)(1.0 / (float)a1) * *(float*)(a2 + 36));
			--v21;
		} while (v21);
	}
	return result;
}

