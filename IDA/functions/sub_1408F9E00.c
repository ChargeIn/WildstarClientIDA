//----- (00000001408F9E00) ----------------------------------------------------
void** __fastcall sub_1408F9E00(__int64 a1)
{
	void** result; // rax
	unsigned int v2; // r15d
	unsigned int v4; // r14d
	__int64 v5; // rbp
	__m128 v6; // xmm1
	__int64 v7; // rsi
	float v8; // xmm7_4
	double v9; // xmm2_8
	float v10; // xmm0_4
	double v11; // xmm0_8
	double v12; // xmm0_8
	__int64 v13; // rbx
	float v14; // xmm6_4
	double v15; // xmm0_8
	double v16; // xmm0_8
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rdx
	float v20; // xmm6_4
	void* retaddr; // [rsp+D8h] [rbp+0h] BYREF

	result = &retaddr;
	v2 = *(_DWORD*)(a1 + 464);
	v4 = 0;
	if (v2)
	{
		v5 = 0i64;
		do
		{
			v6 = (__m128) * (unsigned int*)(a1 + 504);
			v7 = *(_QWORD*)(a1 + 24);
			v8 = 1.0;
			v6.m128_f32[0] = (float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(*(float*)(a1 + 508) * *(float*)(a1 + 508));
			*(_QWORD*)&v9 = _mm_sqrt_ps(v6).m128_u64[0];
			if (*(_BYTE*)(v7 + 84))
			{
				v10 = *(float*)(v7 + 12) * 0.0099999998;
				if (*(float*)&v9 > v10)
				{
					*(float*)&v9 = *(float*)&v9 / v10;
					v11 = sub_1408FE170(v9);
					v12 = sub_1408FBFC0(
						COERCE_DOUBLE(1092616192i64),
						(float)((float)(*(float*)&v11 * 1.442695) * (float)(*(float*)(v7 + 16) * -6.0)) * 0.050000001);
					v8 = *(float*)&v12;
				}
			}
			v13 = *(_QWORD*)(a1 + 40);
			v14 = sub_1408FAD00(a1, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v13 + v5 + 4)), *(float*)(v13 + v5 + 8));
			*(_QWORD*)&v15 = *(unsigned int*)(v13 + v5);
			*(float*)&v15 = *(float*)&v15 * 0.0625;
			v16 = sub_1408FBFC0(v15, (float)((float)(*(float*)(v7 + 20) + 1.0) * 48.0) * 0.041524101);
			*(float*)&v16 = *(float*)&v16 * *(float*)(v13 + v5 + 12);
			v17 = v4 & 3;
			v18 = v4++ >> 2;
			v5 += 28i64;
			v19 = v17 + 28 * v18;
			v20 = v14 * (float)(*(float*)&v16 * v8);
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v19 + 16) = 0;
			*(float*)(*(_QWORD*)(a1 + 48) + 4 * v19 + 32) = v20;
			result = *(void***)(a1 + 48);
			*((float*)result + v19) = v20;
		} while (v4 < v2);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

