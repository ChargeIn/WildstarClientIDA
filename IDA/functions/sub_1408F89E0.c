#include "../winhttp.h"

//----- (00000001408F89E0) ----------------------------------------------------
__int64 __fastcall sub_1408F89E0(__int64 a1, __int16 a2, float* a3)
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
		*(_DWORD*)(a1 + 168) |= 7u;
		v5 = sub_1408F8D80(a1, &v8);
		if (v5 == 1 && (v5 = sub_1408F8EE0(a1, (__int64*)&v8), v5 == 1))
			return sub_1408F90A0(a1, (unsigned __int16**)&v8);
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
			*(float*)(a1 + 120) = *a3;
			result = 1i64;
			break;
		case 1:
			*(float*)(a1 + 136) = *a3;
			result = 1i64;
			break;
		case 2:
			*(_BYTE*)(a1 + 152) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 20:
			*(float*)(a1 + 124) = *a3;
			result = 1i64;
			break;
		case 21:
			*(float*)(a1 + 140) = *a3;
			result = 1i64;
			break;
		case 22:
			*(_BYTE*)(a1 + 153) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 23:
			*(float*)(a1 + 128) = *a3;
			result = 1i64;
			break;
		case 24:
			*(float*)(a1 + 144) = *a3;
			result = 1i64;
			break;
		case 25:
			*(_BYTE*)(a1 + 154) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 26:
			v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *a3 * 0.050000001);
			result = 1i64;
			*(_DWORD*)(a1 + 132) = LODWORD(v7);
			break;
		case 27:
			*(float*)(a1 + 148) = *a3;
			result = 1i64;
			break;
		case 28:
			*(_BYTE*)(a1 + 155) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 40:
			if (*(_WORD*)a3)
			{
				v6 = 51;
				if (*(_WORD*)a3 != 2)
					v6 = 3;
				*(_DWORD*)(a1 + 80) = v6;
				result = 1i64;
			}
			else
			{
				*(_DWORD*)(a1 + 80) = 4;
				result = 1i64;
			}
			break;
		case 42:
			*(float*)(a1 + 72) = *a3;
			result = 1i64;
			break;
		case 43:
			*(float*)(a1 + 76) = *a3;
			result = 1i64;
			break;
		case 44:
			*(float*)(a1 + 84) = *a3;
			result = 1i64;
			break;
		case 45:
			*(float*)(a1 + 88) = *a3;
			result = 1i64;
			break;
		case 46:
			*(_DWORD*)(a1 + 104) = *(unsigned __int16*)a3;
			result = 1i64;
			break;
		case 47:
			*(float*)(a1 + 108) = *a3;
			result = 1i64;
			break;
		case 48:
			*(float*)(a1 + 112) = *a3;
			result = 1i64;
			break;
		case 49:
			*(_BYTE*)(a1 + 156) = *(_BYTE*)a3;
			result = 1i64;
			break;
		case 50:
			*(float*)(a1 + 96) = *a3;
			result = 1i64;
			break;
		case 51:
			*(_DWORD*)(a1 + 116) = *(unsigned __int16*)a3;
			result = 1i64;
			break;
		case 52:
			*(float*)(a1 + 92) = *a3;
			result = 1i64;
			break;
		default:
			return 31;
		}
	}
	return result;
}

