//----- (00000001408F1C10) ----------------------------------------------------
__int64 __fastcall sub_1408F1C10(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	double v5; // xmm0_8
	double v6; // xmm0_8
	float* v7; // [rsp+40h] [rbp+18h] BYREF

	if (!a3)
		return 31i64;
	if (a2 == 0x7FFF)
	{
		v7 = a3;
		return sub_1408F2080(a1, (__int64*)&v7);
	}
	else
	{
		switch (a2)
		{
		case 0:
			v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 16) = LODWORD(v5);
			break;
		case 1:
			*(float*)(a1 + 24) = *a3;
			result = 1i64;
			break;
		case 2:
			*(float*)(a1 + 28) = *a3;
			result = 1i64;
			break;
		case 3:
			*(float*)(a1 + 32) = *a3;
			result = 1i64;
			break;
		case 4:
			*(float*)(a1 + 36) = *a3;
			result = 1i64;
			break;
		case 5:
			*(float*)(a1 + 40) = *a3;
			result = 1i64;
			break;
		case 6:
			if (*a3 == 0.0)
			{
				*(_BYTE*)(a1 + 48) = 0;
				result = 1i64;
			}
			else
			{
				result = 1i64;
				*(_BYTE*)(a1 + 48) = 1;
			}
			break;
		case 7:
			if (*a3 == 0.0)
			{
				*(_BYTE*)(a1 + 49) = 0;
				result = 1i64;
			}
			else
			{
				result = 1i64;
				*(_BYTE*)(a1 + 49) = 1;
			}
			break;
		case 8:
			if (*a3 == 0.0)
			{
				*(_BYTE*)(a1 + 50) = 0;
				result = 1i64;
			}
			else
			{
				result = 1i64;
				*(_BYTE*)(a1 + 50) = 1;
			}
			break;
		case 9:
			*(float*)(a1 + 44) = *a3;
			result = 1i64;
			break;
		case 10:
			v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 20) = LODWORD(v6);
			break;
		default:
			result = 31i64;
			break;
		}
	}
	return result;
}

