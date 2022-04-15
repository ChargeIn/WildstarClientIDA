//----- (00000001408A7A30) ----------------------------------------------------
__int64 __fastcall sub_1408A7A30(__int64 a1, __int16 a2, float* a3)
{
	int v6; // ecx
	__int64 v7; // rdx
	int v8; // r8d
	int v9; // r8d
	int v10; // r8d
	int v11; // r8d
	__int64 v12; // rdx
	__int64 result; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // rdx
	int v20; // r8d
	int v21; // r8d
	int v22; // r8d
	int v23; // eax
	float v24; // eax
	float v25; // eax
	float v26; // eax
	double v27; // xmm0_8

	if (!a3)
		return 31i64;
	if (a2 >= 60)
	{
		switch (a2)
		{
		case '<':
			v23 = (int)*a3;
			*(_BYTE*)(a1 + 144) = 1;
			*(_DWORD*)(a1 + 128) = v23;
			result = 1i64;
			break;
		case '=':
			v24 = *a3;
			*(_BYTE*)(a1 + 144) = 1;
			*(float*)(a1 + 132) = v24;
			result = 1i64;
			break;
		case '>':
			v25 = *a3;
			*(_BYTE*)(a1 + 144) = 1;
			*(float*)(a1 + 136) = v25;
			result = 1i64;
			break;
		case '?':
			v26 = *a3;
			*(_BYTE*)(a1 + 144) = 1;
			*(float*)(a1 + 140) = v26;
			result = 1i64;
			break;
		case '@':
			v27 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 148) = LODWORD(v27);
			break;
		case 'A':
			result = 1i64;
			*(float*)(a1 + 152) = *a3;
			break;
		default:
			return 31i64;
		}
	}
	else
	{
		v6 = a2;
		v7 = (unsigned int)(a2 / 10);
		v8 = v6 - 10 * v7;
		if (a2 < 0)
			return 31i64;
		if (a2 < 30)
		{
			if (!v8)
			{
				v17 = (int)*a3;
				v18 = a1 + 20 * v7;
				*(_BYTE*)(v18 + 25) = 1;
				*(_DWORD*)(v18 + 8) = v17;
				return 1i64;
			}
			v9 = v8 - 1;
			if (!v9)
			{
				v16 = a1 + 20 * v7;
				*(float*)(v16 + 12) = *a3;
				*(_BYTE*)(v16 + 25) = 1;
				return 1i64;
			}
			v10 = v9 - 1;
			if (!v10)
			{
				v15 = a1 + 20 * v7;
				*(float*)(v15 + 16) = *a3;
				*(_BYTE*)(v15 + 25) = 1;
				return 1i64;
			}
			v11 = v10 - 1;
			if (!v11)
			{
				v14 = a1 + 20 * v7;
				*(float*)(v14 + 20) = *a3;
				*(_BYTE*)(v14 + 25) = 1;
				return 1i64;
			}
			if (v11 == 1)
			{
				v12 = a1 + 20 * v7;
				result = 1i64;
				*(_BYTE*)(v12 + 24) = *a3 != 0.0;
				*(_BYTE*)(v12 + 25) = 1;
				return result;
			}
			return 31i64;
		}
		v19 = (unsigned int)((v6 - 30) / 10);
		if (!v8)
		{
			*(_DWORD*)(a1 + 20 * v19 + 68) = (int)*a3;
			*(_BYTE*)(a1 + 20 * v19 + 85) = 1;
			return 1i64;
		}
		v20 = v8 - 1;
		if (!v20)
		{
			*(float*)(a1 + 20 * v19 + 72) = *a3;
			*(_BYTE*)(a1 + 20 * v19 + 85) = 1;
			return 1i64;
		}
		v21 = v20 - 1;
		if (!v21)
		{
			*(float*)(a1 + 20 * v19 + 76) = *a3;
			*(_BYTE*)(a1 + 20 * v19 + 85) = 1;
			return 1i64;
		}
		v22 = v21 - 1;
		if (!v22)
		{
			*(float*)(a1 + 20 * v19 + 80) = *a3;
			*(_BYTE*)(a1 + 20 * v19 + 85) = 1;
			return 1i64;
		}
		if (v22 != 1)
			return 31i64;
		*(_BYTE*)(a1 + 20 * v19 + 84) = *a3 != 0.0;
		*(_BYTE*)(a1 + 20 * v19 + 85) = 1;
		return 1i64;
	}
	return result;
}
// 1408A7B6C: conditional instruction was optimized away because r10.2<0

