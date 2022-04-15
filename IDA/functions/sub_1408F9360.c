//----- (00000001408F9360) ----------------------------------------------------
__int64 __fastcall sub_1408F9360(__int64 a1, __int64 a2, _DWORD* a3)
{
	int v5; // r9d
	int i; // ecx
	float v7; // xmm1_4
	__int64 result; // rax

	*(_DWORD*)(a1 + 4) = *a3;
	*(float*)(a1 + 8) = 1.0 / (double)(int)*a3;
	v5 = *(_DWORD*)(a2 + 8);
	a3[1] &= 0xFFFC0000;
	a3[1] |= v5 & 0x3FFFF;
	switch (a3[1] & 0x3FFFF)
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
		a3[1] &= 0xFFFC0003;
		v5 = 3;
		a3[1] |= 3u;
		break;
	}
	for (i = 0; v5; v5 &= v5 - 1)
		++i;
	*(_DWORD*)a1 = i;
	a3[1] &= 0xE0FFFFFF;
	a3[1] |= (i << 26) & 0x1F000000;
	sub_1408FBA30((__m128*)(a1 + 160), *(_DWORD*)(a2 + 32), *(_DWORD*)(a1 + 4));
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 44);
	v7 = *(float*)(a2 + 64);
	result = (unsigned int)(214013 * *(_DWORD*)(a1 + 152) + 2531011);
	*(_DWORD*)(a1 + 152) = result;
	*(_WORD*)(a1 + 513) = 256;
	*(_BYTE*)(a1 + 512) = 1;
	*(_DWORD*)(a1 + 472) = 0;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(float*)(a1 + 96) = (float)((float)((float)((float)(int)result * 2.3283064e-10) * 2.0) - 1.0) * v7;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

