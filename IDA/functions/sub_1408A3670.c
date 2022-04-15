//----- (00000001408A3670) ----------------------------------------------------
__int64 __fastcall sub_1408A3670(__int64 a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	double v5; // xmm0_8

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 8) = *a3;
		result = 1i64;
		break;
	case 1:
		*(_DWORD*)(a1 + 12) = *a3;
		result = 1i64;
		break;
	case 2:
		*(_DWORD*)(a1 + 16) = *a3;
		result = 1i64;
		break;
	case 3:
		*(_DWORD*)(a1 + 20) = *a3;
		result = 1i64;
		break;
	case 4:
		v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
		result = 1i64;
		*(_DWORD*)(a1 + 24) = LODWORD(v5);
		break;
	case 5:
		*(_BYTE*)(a1 + 28) = *(_BYTE*)a3;
		result = 1i64;
		break;
	case 6:
		*(_BYTE*)(a1 + 29) = *(_BYTE*)a3;
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

