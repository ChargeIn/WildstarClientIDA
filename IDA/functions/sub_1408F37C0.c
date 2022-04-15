//----- (00000001408F37C0) ----------------------------------------------------
__int64 __fastcall sub_1408F37C0(__int64 a1, __int16 a2, float* a3)
{
	__int64 result; // rax
	unsigned int v5; // edi
	int v6; // eax
	double v7; // xmm0_8
	float* v8; // [rsp+40h] [rbp+18h] BYREF

	v8 = a3;
	if (!a3)
		return 31i64;
	v5 = 1;
	if (a2 == 0x7FFF)
	{
		*(_DWORD*)(a1 + 232) |= 0x17u;
		v5 = sub_1408F3BF0(a1, &v8);
		if (v5 == 1)
			return sub_1408F3D80(a1, (__int64*)&v8);
		else
			return v5;
	}
	else
	{
		switch (a2)
		{
		case -1:
			return v5;
		case 0:
			*(float*)(a1 + 152) = *a3;
			result = 1i64;
			break;
		case 1:
			*(float*)(a1 + 180) = *a3;
			result = 1i64;
			break;
		case 2:
			*(_BYTE*)(a1 + 208) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 3:
			*(_DWORD*)(a1 + 232) |= 0x10u;
			*(float*)(a1 + 156) = *a3;
			result = 1i64;
			break;
		case 4:
			*(float*)(a1 + 184) = *a3;
			result = 1i64;
			break;
		case 5:
			*(_BYTE*)(a1 + 209) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 6:
			*(float*)(a1 + 160) = *a3;
			result = 1i64;
			break;
		case 7:
			*(float*)(a1 + 188) = *a3;
			result = 1i64;
			break;
		case 8:
			*(_BYTE*)(a1 + 210) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 9:
			*(float*)(a1 + 164) = *a3;
			result = 1i64;
			break;
		case 10:
			*(float*)(a1 + 192) = *a3;
			result = 1i64;
			break;
		case 11:
			*(_BYTE*)(a1 + 211) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 20:
			*(float*)(a1 + 168) = *a3;
			result = 1i64;
			break;
		case 21:
			*(float*)(a1 + 196) = *a3;
			result = 1i64;
			break;
		case 22:
			*(_BYTE*)(a1 + 212) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 23:
			*(float*)(a1 + 172) = *a3;
			result = 1i64;
			break;
		case 24:
			*(float*)(a1 + 200) = *a3;
			result = 1i64;
			break;
		case 25:
			*(_BYTE*)(a1 + 213) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 26:
			v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 176) = LODWORD(v7);
			break;
		case 27:
			*(float*)(a1 + 204) = *a3;
			result = 1i64;
			break;
		case 28:
			*(_BYTE*)(a1 + 214) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 40:
			if (*(_WORD*)a3)
			{
				v6 = 51;
				if (*(_WORD*)a3 != 2)
					v6 = 3;
				*(_DWORD*)(a1 + 128) = v6;
				result = 1i64;
			}
			else
			{
				*(_DWORD*)(a1 + 128) = 4;
				result = 1i64;
			}
			break;
		case 42:
			*(float*)(a1 + 120) = *a3;
			result = 1i64;
			break;
		case 43:
			*(float*)(a1 + 124) = *a3;
			result = 1i64;
			break;
		case 44:
			*(float*)(a1 + 132) = *a3;
			result = 1i64;
			break;
		case 45:
			*(float*)(a1 + 136) = *a3;
			result = 1i64;
			break;
		case 46:
			*(float*)(a1 + 144) = *a3;
			result = 1i64;
			break;
		case 48:
			*(float*)(a1 + 148) = *a3;
			result = 1i64;
			break;
		default:
			return 31;
		}
	}
	return result;
}

