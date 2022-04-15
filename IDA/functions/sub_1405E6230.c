//----- (00000001405E6230) ----------------------------------------------------
__m128 __fastcall sub_1405E6230(__int64 a1, int a2, float* a3, int a4)
{
	__int64 v4; // rbx
	float* v5; // rdi
	__int64 v6; // r11
	__m128 v7; // xmm3
	float* v8; // rax
	float v9; // edx
	float v10; // xmm1_4
	float v11; // xmm0_4
	__int64 v12; // rcx
	float* v13; // rax
	float v14; // xmm0_4

	v4 = a2;
	v5 = *(float**)(a1 + 8i64 * a2 + 16);
	v7 = sub_14079E630(v5, a3, a4);
	if (!*(_DWORD*)(v6 + 544))
		return v7;
	v8 = *(float**)(v6 + 8 * v4 + 552);
	v9 = *v8;
	if (*(_DWORD*)v8 == 2)
	{
		v10 = 0.0;
		goto LABEL_6;
	}
	v10 = 1.0;
	if (LODWORD(v9) == 3)
	{
	LABEL_6:
		v11 = v8[1];
		if (LODWORD(v9) == 3)
			v10 = v10 * v11;
		else
			v10 = v10 + v11;
		v12 = *((_QWORD*)v8 + 3);
		if (v12)
		{
			v13 = (float*)(*((_QWORD*)v8 + 2) + 12i64);
			do
			{
				v14 = *v13;
				if (LODWORD(v9) == 3)
					v10 = v10 * v14;
				else
					v10 = v10 + v14;
				v13 += 5;
				--v12;
			} while (v12);
		}
	}
	if (*(_DWORD*)v5 == 3)
	{
		v7.m128_f32[0] = v7.m128_f32[0] * v10;
		return v7;
	}
	v7.m128_f32[0] = v7.m128_f32[0] + v10;
	return v7;
}
// 1405E6256: variable 'v6' is possibly undefined

