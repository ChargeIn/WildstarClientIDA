//----- (00000001405E6140) ----------------------------------------------------
__m128 __fastcall sub_1405E6140(__int64 a1, int a2, int a3, int a4)
{
	__int128 v4; // xmm0
	__int64 v5; // rbx
	int* v8; // rsi
	__int128 v9; // xmm2
	int v10; // r9d
	float* v11; // rax
	float v12; // edx
	float v13; // xmm1_4
	float v14; // xmm0_4
	__int64 v15; // rcx
	float* v16; // rax
	float v17; // xmm0_4

	v5 = a2;
	if ((unsigned __int64)a2 >= 0x42)
		return (__m128)0i64;
	v8 = *(int**)(a1 + 8i64 * a2 + 16);
	sub_14079E410(v8, a3, a4, 0);
	v9 = v4;
	if (*(_DWORD*)(a1 + 544) == v10)
		return (__m128)v9;
	v11 = *(float**)(a1 + 8 * v5 + 552);
	v12 = *v11;
	if (*(_DWORD*)v11 == 2)
	{
		v13 = 0.0;
		goto LABEL_8;
	}
	v13 = 1.0;
	if (LODWORD(v12) == 3)
	{
	LABEL_8:
		v14 = v11[1];
		if (LODWORD(v12) == 3)
			v13 = v13 * v14;
		else
			v13 = v13 + v14;
		v15 = *((_QWORD*)v11 + 3);
		if (v15)
		{
			v16 = (float*)(*((_QWORD*)v11 + 2) + 12i64);
			do
			{
				v17 = *v16;
				if (LODWORD(v12) == 3)
					v13 = v13 * v17;
				else
					v13 = v13 + v17;
				v16 += 5;
				--v15;
			} while (v15);
		}
	}
	if (*v8 == 3)
	{
		*(float*)&v9 = *(float*)&v9 * v13;
		return (__m128)v9;
	}
	*(float*)&v9 = *(float*)&v9 + v13;
	return (__m128)v9;
}
// 1405E6185: variable 'v4' is possibly undefined
// 1405E618F: variable 'v10' is possibly undefined

