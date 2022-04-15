//----- (00000001408F4B00) ----------------------------------------------------
void __fastcall sub_1408F4B00(__int64 a1)
{
	unsigned int v1; // r15d
	unsigned int v3; // esi
	__int64 v4; // rbx
	__int64 v5; // rcx
	double v6; // xmm8_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	float v9; // xmm7_4
	unsigned int v10; // xmm6_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	double v13; // xmm6_8
	float v14; // xmm7_4
	__int64 v15; // rdx
	unsigned int v16; // r8d
	__int64 v17; // r8
	unsigned int v18; // esi
	__int64 v19; // rbp
	__int64 v20; // rbx
	double v21; // xmm0_8
	double v22; // xmm6_8
	float v23; // xmm0_4
	__int64 v24; // rbx
	__int64 v25; // rdi

	v1 = *(_DWORD*)(a1 + 196);
	if (*(_DWORD*)a1 == 2)
	{
		v18 = 0;
		if (v1)
		{
			v19 = 0i64;
			do
			{
				v20 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)&v21 = *(unsigned int*)(v20 + v19);
				*(float*)&v21 = *(float*)&v21 / *(float*)(*(_QWORD*)(a1 + 8) + 20i64);
				v22 = sub_1408FBFC0(v21, 0.16666667);
				v23 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
					(float)((float)(90.0 - *(float*)(v20 + v19 + 4))
						* 3.1415927)
					* 0.0055555557)));
				v24 = v18 & 3;
				v25 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * (v18 >> 2);
				*(float*)&v22 = (float)((float)((float)(*(float*)&v22 * v23) * 3.1415927) * 0.25) + 0.78539819;
				*(float*)(v25 + 4 * v24 + 112) = sub_1408FC950(v22);
				++v18;
				v19 += 20i64;
				*(float*)(v25 + 4 * v24 + 128) = sub_1408FE3D0(v22);
			} while (v18 < v1);
		}
	}
	else if (*(_DWORD*)a1 == 4)
	{
		v3 = 0;
		if (v1)
		{
			v4 = 0i64;
			do
			{
				v5 = *(_QWORD*)(a1 + 16);
				HIDWORD(v6) = 0;
				*(_QWORD*)&v7 = *(unsigned int*)(v4 + v5);
				*(float*)&v7 = *(float*)&v7 / *(float*)(*(_QWORD*)(a1 + 8) + 20i64);
				*(float*)&v6 = (float)((float)(90.0 - *(float*)(v4 + v5 + 4)) * 3.1415927) * 0.0055555557;
				v8 = sub_1408FBFC0(v7, 0.16666667);
				v9 = *(float*)&v8;
				*(float*)&v10 = (float)((float)((float)(sub_1408FC950(v6) * *(float*)&v8) * 3.1415927) * 0.25) + 0.78539819;
				v11 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v10));
				v12 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v10));
				HIDWORD(v13) = 0;
				*(float*)&v13 = (float)((float)((float)(sub_1408FE3D0(v6) * v9) * 3.1415927) * 0.25) + 0.78539819;
				v14 = sub_1408FE3D0(v13);
				*(float*)&v8 = sub_1408FC950(v13);
				v15 = v3 & 3;
				v16 = v3++ >> 2;
				v4 += 20i64;
				v17 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * v16;
				*(float*)(v17 + 4 * v15 + 112) = v14 * v11;
				*(float*)(v17 + 4 * v15 + 128) = v14 * v12;
				*(float*)(v17 + 4 * v15 + 144) = *(float*)&v8 * v11;
				*(float*)(v17 + 4 * v15 + 160) = *(float*)&v8 * v12;
			} while (v3 < v1);
		}
	}
}

