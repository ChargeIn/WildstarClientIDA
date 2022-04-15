//----- (00000001408A3C60) ----------------------------------------------------
void __fastcall sub_1408A3C60(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // r14
	unsigned __int16 v6; // ax
	int v7; // edx
	__int64 v8; // r13
	int v9; // ecx
	unsigned int i; // ebp
	bool v11; // r12
	__m128* v12; // r15
	float v13; // xmm6_4
	float v14; // xmm7_4
	float v15; // xmm8_4
	float v16; // xmm12_4
	unsigned int v17; // esi
	float* v18; // r15
	float v19; // xmm9_4
	float v20; // xmm10_4
	float j; // xmm11_4
	int* v22; // rbx
	double v23; // xmm3_8
	double v24; // xmm2_8
	float v25; // xmm1_4
	unsigned int k; // esi
	int* v27; // rbx
	double v28; // xmm3_8
	double v29; // xmm2_8
	float v30; // xmm1_4
	__m128* v32; // [rsp+100h] [rbp+18h]

	v3 = *(_DWORD**)(a1 + 24);
	v4 = a2;
	*(_DWORD*)(a1 + 48) = v3[2];
	*(_DWORD*)(a1 + 52) = v3[3];
	*(_DWORD*)(a1 + 56) = v3[4];
	*(_DWORD*)(a1 + 60) = v3[5];
	*(_DWORD*)(a1 + 64) = v3[6];
	*(_DWORD*)(a1 + 68) = v3[7];
	*(_DWORD*)(a1 + 72) = v3[8];
	*(_DWORD*)(a1 + 76) = v3[9];
	*(_DWORD*)(a1 + 80) = v3[10];
	*(_DWORD*)(a1 + 84) = v3[11];
	*(_DWORD*)(a1 + 88) = v3[12];
	*(_DWORD*)(a1 + 92) = v3[13];
	*(_DWORD*)(a1 + 96) = v3[14];
	*(_DWORD*)(a1 + 100) = v3[15];
	*(_DWORD*)(a1 + 104) = v3[16];
	*(_DWORD*)(a1 + 108) = v3[17];
	sub_1408A5970((__int64)v3, 0);
	v5 = 0i64;
	if (!*(_BYTE*)(a1 + 108))
		*(_DWORD*)(a1 + 60) = 0;
	if (*(_BYTE*)(a1 + 111))
	{
		if ((unsigned int)sub_1408A4580(a1, v4) != 1)
			return;
		*(_BYTE*)(a1 + 111) = 0;
	}
	if (*(_BYTE*)(a1 + 100))
	{
		sub_1408A46A0(a1);
		*(_BYTE*)(a1 + 100) = 0;
	}
	if (*(_DWORD*)(a1 + 184))
	{
		sub_1408A1640(
			(unsigned int*)(a1 + 176),
			v4,
			(int)(float)((float)(*(float*)(a1 + 104) * 0.001) * (float)*(int*)(a1 + 188)));
		v6 = *(_WORD*)(v4 + 18);
		if (v6)
		{
			v7 = *(_DWORD*)(v4 + 8);
			v8 = v6;
			if (!*(_BYTE*)(a1 + 110))
				v7 &= ~8u;
			v9 = v7;
			for (i = 0; v9; v9 &= v9 - 1)
				++i;
			v11 = !*(_BYTE*)(a1 + 109) && (v7 & 7) == 7;
			v12 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 8i64))(
				*(_QWORD*)(a1 + 32),
				4i64 * *(unsigned __int16*)(v4 + 16));
			v32 = v12;
			if (v12)
			{
				v13 = (float)(100.0 - *(float*)(a1 + 96)) * 0.0099999998;
				v14 = (float)(100.0 - *(float*)(a1 + 160)) * 0.0099999998;
				v15 = 1.0 - v13;
				v16 = 1.0 - v14;
				if (*(_BYTE*)(a1 + 108))
				{
					v17 = 0;
					v18 = (float*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 8i64))(
						*(_QWORD*)(a1 + 32),
						4 * v8);
					v19 = *(float*)(a1 + 76);
					v20 = *(float*)(a1 + 60);
					for (j = *(float*)(a1 + 124); v17 < i; ++v17)
					{
						if (!v11 || v17 != 2)
						{
							if (v18)
								sub_1408A4860(*(_QWORD*)(a1 + 16) + 24 * v5, (unsigned __int64)v18, v8, v20, j, v19);
							v22 = (int*)(*(_QWORD*)v4 + 4 * v17 * (unsigned __int64)*(unsigned __int16*)(v4 + 16));
							sub_1407DB590((int*)v32, v22, (unsigned int)(4 * v8));
							sub_1408A6560(*(_QWORD*)(a1 + 8) + 56i64 * (unsigned int)v5, (float*)v22, v8, v18);
							*(_QWORD*)&v23 = *(unsigned int*)(a1 + 92);
							*(_QWORD*)&v24 = *(unsigned int*)(a1 + 156);
							v25 = *(float*)&v23;
							*(float*)&v23 = *(float*)&v23 * v15;
							*(float*)&v24 = *(float*)&v24 * v16;
							v5 = (unsigned int)(v5 + 1);
							sub_1408A6050(v22, v32, v24, v23, *(float*)(a1 + 156) * v14, v25 * v13, v8);
							v4 = a2;
						}
					}
					if (v18)
						(*(void(__fastcall**)(_QWORD, float*))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32), v18);
					v12 = v32;
				}
				else
				{
					for (k = 0; k < i; ++k)
					{
						if (!v11 || k != 2)
						{
							v27 = (int*)(*(_QWORD*)v4 + 4 * k * (unsigned __int64)*(unsigned __int16*)(v4 + 16));
							sub_1407DB590((int*)v12, v27, (unsigned int)(4 * v8));
							sub_1408A6560(*(_QWORD*)(a1 + 8) + 56i64 * (unsigned int)v5, (float*)v27, v8, 0i64);
							*(_QWORD*)&v28 = *(unsigned int*)(a1 + 92);
							*(_QWORD*)&v29 = *(unsigned int*)(a1 + 156);
							LODWORD(v5) = v5 + 1;
							v30 = *(float*)&v28;
							*(float*)&v28 = *(float*)&v28 * v15;
							*(float*)&v29 = *(float*)&v29 * v16;
							sub_1408A6050(v27, v12, v29, v28, *(float*)(a1 + 156) * v14, v30 * v13, v8);
							v4 = a2;
						}
					}
				}
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32), v12);
				*(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 48);
				*(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 52);
				*(_DWORD*)(a1 + 120) = *(_DWORD*)(a1 + 56);
				*(_DWORD*)(a1 + 124) = *(_DWORD*)(a1 + 60);
				*(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 64);
				*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 68);
				*(_DWORD*)(a1 + 136) = *(_DWORD*)(a1 + 72);
				*(_DWORD*)(a1 + 140) = *(_DWORD*)(a1 + 76);
				*(_DWORD*)(a1 + 144) = *(_DWORD*)(a1 + 80);
				*(_DWORD*)(a1 + 148) = *(_DWORD*)(a1 + 84);
				*(_DWORD*)(a1 + 152) = *(_DWORD*)(a1 + 88);
				*(_DWORD*)(a1 + 156) = *(_DWORD*)(a1 + 92);
				*(_DWORD*)(a1 + 160) = *(_DWORD*)(a1 + 96);
				*(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 100);
				*(_DWORD*)(a1 + 168) = *(_DWORD*)(a1 + 104);
				*(_DWORD*)(a1 + 172) = *(_DWORD*)(a1 + 108);
			}
		}
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;

