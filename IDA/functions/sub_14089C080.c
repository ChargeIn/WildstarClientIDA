//----- (000000014089C080) ----------------------------------------------------
__int64 __fastcall sub_14089C080(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	double v5; // xmm0_8

	if (a2)
	{
		switch (a2)
		{
		case 1:
			v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 12) = LODWORD(v5);
			*(_BYTE*)(a1 + 24) |= 2u;
			break;
		case 2:
			*(float*)(a1 + 16) = *a3;
			*(_BYTE*)(a1 + 24) |= 4u;
			return 1i64;
		case 3:
			*(float*)(a1 + 20) = *a3;
			*(_BYTE*)(a1 + 24) |= 8u;
			return 1i64;
		default:
			return 31i64;
		}
	}
	else
	{
		*(float*)(a1 + 8) = *a3;
		*(_BYTE*)(a1 + 24) |= 1u;
		return 1i64;
	}
	return result;
}

