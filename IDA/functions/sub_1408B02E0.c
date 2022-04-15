//----- (00000001408B02E0) ----------------------------------------------------
void __fastcall sub_1408B02E0(__int64 a1, __int64 a2, __int64 a3, float a4, __int64 a5)
{
	unsigned int v5; // r9d
	unsigned int v6; // r8d
	__int64 v8; // rdi
	unsigned int v9; // r11d
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rax
	float v13; // xmm1_4
	float v14; // xmm1_4
	unsigned int v15; // r11d
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdi
	__int64 v19; // r11
	unsigned int v20; // edx
	__int64 v21; // rcx
	unsigned int v22; // eax

	v5 = *(_DWORD*)(a1 + 8);
	v6 = 0;
	v8 = 0i64;
	v9 = v5 >> 1;
	if (v5 >> 1 >= 4)
	{
		v10 = a2 + 4;
		v11 = a5 - a2;
		v12 = ((v9 - 4) >> 2) + 1;
		v6 = 4 * v12;
		v8 = 4i64 * (unsigned int)v12;
		do
		{
			v10 += 16i64;
			v13 = (float)(a4 * *(float*)(v11 + v10 - 16)) * *(float*)(v10 - 16);
			*(float*)(v10 - 20) = (float)(a4 * *(float*)(v11 + v10 - 20)) * *(float*)(v10 - 20);
			*(float*)(v10 - 16) = v13;
			v14 = (float)(a4 * *(float*)(v11 + v10 - 8)) * *(float*)(v10 - 8);
			*(float*)(v10 - 12) = (float)(a4 * *(float*)(v11 + v10 - 12)) * *(float*)(v10 - 12);
			*(float*)(v10 - 8) = v14;
			--v12;
		} while (v12);
	}
	if (v6 < v9)
	{
		v15 = v9 - v6;
		v16 = a2 + 4 * v8;
		v6 += v15;
		v17 = v15;
		do
		{
			v16 += 4i64;
			*(float*)(v16 - 4) = (float)(a4 * *(float*)(v16 + a5 - a2 - 4)) * *(float*)(v16 - 4);
			--v17;
		} while (v17);
	}
	v18 = v6;
	if (v6 < v5)
	{
		if ((int)(v5 - v6) >= 4)
		{
			v19 = a2 + 8 + 4i64 * v6;
			v18 = v6 + 4i64 * (((v5 - 3 - v6 - 1) >> 2) + 1);
			do
			{
				v19 += 16i64;
				v20 = v5 - v6;
				v6 += 4;
				*(float*)(v19 - 24) = (float)(a4 * *(float*)(a5 + 4i64 * (v20 - 1))) * *(float*)(v19 - 24);
				*(float*)(v19 - 20) = (float)(a4 * *(float*)(a5 + 4i64 * (v20 - 2))) * *(float*)(v19 - 20);
				*(float*)(v19 - 16) = (float)(a4 * *(float*)(a5 + 4i64 * (v20 - 3))) * *(float*)(v19 - 16);
				*(float*)(v19 - 12) = (float)(a4 * *(float*)(a5 + 4i64 * (v20 - 4))) * *(float*)(v19 - 12);
			} while (v6 < v5 - 3);
		}
		if (v6 < v5)
		{
			v21 = a2 + 4 * v18;
			do
			{
				v21 += 4i64;
				v22 = v5 - v6++;
				*(float*)(v21 - 4) = (float)(a4 * *(float*)(a5 + 4i64 * (v22 - 1))) * *(float*)(v21 - 4);
			} while (v6 < v5);
		}
	}
}

