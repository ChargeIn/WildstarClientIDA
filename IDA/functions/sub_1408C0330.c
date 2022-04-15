//----- (00000001408C0330) ----------------------------------------------------
__int64 __fastcall sub_1408C0330(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	int v5; // ecx
	__int64 v6; // rdx

	if (!a3)
		return 31i64;
	v5 = a2;
	v6 = (unsigned int)(a2 / 5);
	switch (v5)
	{
	case 0:
	case 5:
	case 10:
		*(_DWORD*)(a1 + 20 * v6 + 8) = (int)*a3;
		*(_BYTE*)(v6 + a1 + 76) = 1;
		result = 1i64;
		break;
	case 1:
	case 6:
	case 11:
		*(float*)(a1 + 20 * v6 + 12) = *a3;
		*(_BYTE*)(v6 + a1 + 76) = 1;
		result = 1i64;
		break;
	case 2:
	case 7:
	case 12:
		*(float*)(a1 + 20 * v6 + 16) = *a3;
		*(_BYTE*)(v6 + a1 + 76) = 1;
		result = 1i64;
		break;
	case 3:
	case 8:
	case 13:
		*(float*)(a1 + 20 * v6 + 20) = *a3;
		*(_BYTE*)(v6 + a1 + 76) = 1;
		result = 1i64;
		break;
	case 4:
	case 9:
	case 14:
		*(_BYTE*)(a1 + 20 * v6 + 24) = *a3 != 0.0;
		*(_BYTE*)(v6 + a1 + 76) = 1;
		result = 1i64;
		break;
	case 15:
		*(float*)(a1 + 68) = *a3;
		result = 1i64;
		break;
	case 16:
		*(_BYTE*)(a1 + 72) = *(_BYTE*)a3;
		result = 1i64;
		break;
	default:
		result = 31i64;
		break;
	}
	return result;
}

