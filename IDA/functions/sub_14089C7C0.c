//----- (000000014089C7C0) ----------------------------------------------------
__int64 __fastcall sub_14089C7C0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, int* a5)
{
	int v7; // eax
	float v8; // xmm0_4
	int v9; // eax
	__int16 v10; // ax
	int v11; // r8d
	int v12; // edx
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	double v16; // xmm0_8
	int v17; // eax
	float v18; // xmm1_4
	int v19; // eax
	int v20; // eax
	int v21; // edx
	int v22; // eax
	int v23; // ecx
	float v24; // xmm0_4
	__int64 v25; // rsi
	unsigned int v26; // eax
	__int64 v27; // rax
	__int64 result; // rax
	__int64 v29; // rcx
	__int64 v30; // rdx
	float v31; // xmm6_4
	float v32; // xmm7_4
	float v33; // xmm0_4
	bool v34; // zf
	float v35; // xmm7_4
	float v36; // xmm6_4
	float v37; // xmm0_4
	float* v38; // rdi
	__int64(__fastcall * v39)(__int64, __int64, int); // rax
	__int64(__fastcall * v40)(__int64, __int64, int); // rcx

	*(_QWORD*)(a1 + 328) = a3;
	v7 = *a5;
	*(_DWORD*)(a1 + 8) = *a5;
	v8 = (float)v7 * 0.5;
	if (v8 >= 20000.0)
		v8 = 20000.0;
	*(float*)(a1 + 48) = v8;
	*(_QWORD*)(a1 + 320) = a4;
	*(_DWORD*)(a1 + 152) = a4[5];
	*(_DWORD*)(a1 + 156) = a4[6];
	*(_DWORD*)(a1 + 160) = a4[7];
	*(_DWORD*)(a1 + 164) = a4[8];
	*(_DWORD*)(a1 + 168) = a4[9];
	*(_DWORD*)(a1 + 172) = a4[10];
	*(_DWORD*)(a1 + 176) = a4[11];
	*(_DWORD*)(a1 + 180) = a4[12];
	*(_DWORD*)(a1 + 184) = a4[13];
	*(_DWORD*)(a1 + 188) = a4[14];
	*(_DWORD*)(a1 + 192) = a4[15];
	*(_DWORD*)(a1 + 196) = a4[16];
	*(_DWORD*)(a1 + 200) = a4[17];
	*(_DWORD*)(a1 + 204) = a4[18];
	v9 = a4[19];
	*(_DWORD*)(a1 + 208) = v9;
	a5[1] ^= (a5[1] ^ v9) & 0x3FFFF;
	switch (a5[1] & 0x3FFFF)
	{
	case 3:
	case 4:
	case 7:
	case 8:
	case 0xB:
	case 0xC:
	case 0xF:
	case 0x33:
	case 0x37:
	case 0x3B:
	case 0x3F:
		break;
	default:
		a5[1] = a5[1] & 0xFFFC0000 | 4;
		break;
	}
	v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 328) + 144i64))(*(_QWORD*)(a1 + 328));
	*(_WORD*)(a1 + 12) = v10;
	*(_BYTE*)(a1 + 60) = v10 != 0;
	if (*(_DWORD*)(a1 + 180) == 1)
	{
		v11 = (int)(float)((float)*(int*)(a1 + 8) * *(float*)(a1 + 188));
		*(_DWORD*)(a1 + 104) = v11;
		v12 = (int)(float)((float)*(int*)(a1 + 8) * *(float*)(a1 + 192));
		*(_DWORD*)(a1 + 108) = v12;
		v13 = (int)(float)((float)*(int*)(a1 + 8) * *(float*)(a1 + 196));
		*(_DWORD*)(a1 + 112) = v13;
		v14 = (int)(float)((float)*(int*)(a1 + 8) * *(float*)(a1 + 204));
		*(_DWORD*)(a1 + 116) = v14;
		*(_DWORD*)(a1 + 28) = v11 + v13 + v12 + v14;
		v15 = *(_DWORD*)(a1 + 104);
		if (!v15)
			v15 = 1;
		*(_DWORD*)(a1 + 104) = v15;
		*(float*)(a1 + 84) = 1.0 / (float)v15;
		v16 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a1 + 200) * 0.050000001);
		v17 = *(_DWORD*)(a1 + 108);
		if (!v17)
			v17 = 1;
		*(_DWORD*)(a1 + 108) = v17;
		*(_DWORD*)(a1 + 92) = 0;
		v18 = (float)v17;
		v19 = *(_DWORD*)(a1 + 116);
		if (!v19)
			v19 = 1;
		*(_DWORD*)(a1 + 116) = v19;
		*(float*)(a1 + 88) = (float)(-1.0 / v18) * (float)(1.0 - *(float*)&v16);
		*(float*)(a1 + 96) = (float)(-1.0 / (float)v19) * *(float*)&v16;
		*(_DWORD*)(a1 + 124) = 0;
	}
	else
	{
		if (v10 == 1)
		{
			v20 = *a5;
			*(_DWORD*)(a1 + 108) = 0;
			v21 = (int)(float)((float)v20 * 0.0049999999);
			*(_DWORD*)(a1 + 104) = v21;
			*(_DWORD*)(a1 + 112) = (int)(float)((float)*(int*)(a1 + 8) * *(float*)(a1 + 184));
			v22 = *a5;
			*(_QWORD*)(a1 + 88) = 0i64;
			v23 = (int)(float)((float)v22 * 0.0049999999);
			*(_DWORD*)(a1 + 116) = v23;
			*(float*)(a1 + 84) = 1.0 / (float)v21;
			*(float*)(a1 + 96) = -1.0 / (float)v23;
			*(_DWORD*)(a1 + 124) = 0;
		}
		else
		{
			*(_QWORD*)(a1 + 104) = 0i64;
			v24 = (float)*(int*)(a1 + 8) * *(float*)(a1 + 184);
			*(_DWORD*)(a1 + 116) = 0;
			*(_QWORD*)(a1 + 84) = 0i64;
			*(_QWORD*)(a1 + 92) = 0i64;
			*(_DWORD*)(a1 + 112) = (int)v24;
			*(_DWORD*)(a1 + 124) = 1065353216;
		}
		*(_DWORD*)(a1 + 28) = *(_DWORD*)(a1 + 104) + *(_DWORD*)(a1 + 116) + *(_DWORD*)(a1 + 112) + *(_DWORD*)(a1 + 108);
	}
	v25 = 3i64;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a1 + 28) * *(__int16*)(a1 + 12);
	v26 = *(_DWORD*)(a1 + 176);
	if (v26 <= 3)
	{
		v31 = *(float*)(a1 + 152);
		v32 = *(float*)(a1 + 156);
		if (v31 == v32)
			v33 = *(float*)(a1 + 152);
		else
			v33 = (float)((float)((float)(int)sub_1407DDB28() * 0.000030518509) * (float)(v32 - v31)) + v31;
		v34 = *(_BYTE*)(a1 + 160) == 0;
		*(float*)(a1 + 44) = v33;
		if (!v34)
		{
			v35 = *(float*)(a1 + 172);
			v36 = *(float*)(a1 + 168);
			if (v36 == v35)
				v37 = *(float*)(a1 + 168);
			else
				v37 = (float)((float)((float)(int)sub_1407DDB28() * 0.000030518509) * (float)(v35 - v36)) + v36;
			*(float*)(a1 + 52) = v37;
		}
	}
	else if (v26 == 5)
	{
		v27 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 120i64);
		*(_QWORD*)(a1 + 144) = v27;
		if (!v27)
			return 52i64;
		*(_QWORD*)(a1 + 64) = 0x3FFFFFFFi64;
		*(_DWORD*)(a1 + 76) = 1040457992;
		v29 = 12i64;
		v30 = 3i64;
		do
		{
			v29 += 40i64;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 52) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 48) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 44) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 40) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 36) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 32) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 28) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 24) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 20) = 0;
			*(_DWORD*)(v29 + *(_QWORD*)(a1 + 144) - 16) = 0;
			--v30;
		} while (v30);
		*(_DWORD*)(a1 + 72) = 0;
	}
	v38 = (float*)(a1 + 212);
	*(float*)(a1 + 80) = (float)(4 * *(_DWORD*)(a1 + 8));
	do
	{
		sub_14089D3F0(v38, (float)((float)*(int*)(a1 + 8) * 18000.0) * 0.000020833333, *(float*)(a1 + 80));
		v38 += 9;
		--v25;
	} while (v25);
	switch (*(_DWORD*)(a1 + 176))
	{
	case 0:
		v34 = *(_BYTE*)(a1 + 160) == 0;
		*(_QWORD*)(a1 + 136) = &unk_140C111E0;
		if (!v34)
		{
			v39 = sub_14089E3D0;
			v40 = sub_14089E670;
			goto LABEL_37;
		}
		*(_QWORD*)(a1 + 128) = sub_14089E940;
		goto LABEL_50;
	case 1:
		v34 = *(_BYTE*)(a1 + 160) == 0;
		*(_QWORD*)(a1 + 136) = &unk_140C119E0;
		if (v34)
			goto LABEL_43;
		v39 = sub_14089D490;
		v40 = sub_14089D900;
		goto LABEL_37;
	case 2:
		v34 = *(_BYTE*)(a1 + 160) == 0;
		*(_QWORD*)(a1 + 136) = &unk_140C121E0;
		if (v34)
			goto LABEL_43;
		v39 = sub_14089D490;
		v40 = sub_14089D900;
		goto LABEL_37;
	case 3:
		v34 = *(_BYTE*)(a1 + 160) == 0;
		*(_QWORD*)(a1 + 136) = &unk_140C129E0;
		if (v34)
		{
		LABEL_43:
			*(_QWORD*)(a1 + 128) = sub_14089DDB0;
		}
		else
		{
			v39 = sub_14089D490;
			v40 = sub_14089D900;
		LABEL_37:
			if (*(_DWORD*)(a1 + 164) == 1)
				v39 = v40;
			*(_QWORD*)(a1 + 128) = v39;
		}
	LABEL_50:
		result = 1i64;
		break;
	case 4:
		*(_QWORD*)(a1 + 128) = sub_14089EB90;
		goto LABEL_50;
	case 5:
		*(_QWORD*)(a1 + 128) = sub_14089E1A0;
		goto LABEL_50;
	default:
		goto LABEL_50;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

