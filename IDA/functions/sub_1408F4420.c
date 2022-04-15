//----- (00000001408F4420) ----------------------------------------------------
__int64 __fastcall sub_1408F4420(float* a1, __int64 a2, int* a3)
{
	int v4; // r9d
	int i; // ecx
	float v6; // ecx
	int v7; // ecx
	int v8; // ecx
	__int16 v9; // ax
	float v10; // xmm1_4
	int v11; // eax
	float v12; // xmm1_4
	int v13; // eax
	float v14; // xmm2_4
	int v15; // eax
	float v16; // xmm1_4
	__int64 result; // rax

	*((_DWORD*)a1 + 48) = *a3;
	v4 = *(_DWORD*)(a2 + 8);
	a3[1] &= 0xFFFC0000;
	a3[1] |= v4 & 0x3FFFF;
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
		v4 = 3;
		a3[1] |= 3u;
		break;
	}
	for (i = 0; v4; v4 &= v4 - 1)
		++i;
	*(_DWORD*)a1 = i;
	a3[1] &= 0xE0FFFFFF;
	a3[1] |= (i << 26) & 0x1F000000;
	v6 = *a1;
	a1[29] = 1.0 - (float)(251.32742 / (float)*((int*)a1 + 48));
	v7 = LODWORD(v6) - 1;
	if (!v7)
	{
		v9 = 112;
		goto LABEL_11;
	}
	v8 = v7 - 1;
	if (!v8)
	{
		v9 = 144;
		goto LABEL_11;
	}
	if (v8 == 2)
	{
		v9 = 176;
	LABEL_11:
		*((_WORD*)a1 + 100) = v9;
	}
	v10 = *(float*)(a2 + 60);
	v11 = 214013 * *((_DWORD*)a1 + 25) + 2531011;
	*((_DWORD*)a1 + 25) = v11;
	a1[21] = (float)((float)((float)((float)v11 * 2.3283064e-10) * 2.0) - 1.0) * v10;
	v12 = *(float*)(a2 + 64);
	v13 = 214013 * *((_DWORD*)a1 + 25) + 2531011;
	*((_DWORD*)a1 + 25) = v13;
	a1[22] = (float)((float)((float)((float)v13 * 2.3283064e-10) * 2.0) - 1.0) * v12;
	v14 = *(float*)(a2 + 68);
	v15 = 214013 * *((_DWORD*)a1 + 25) + 2531011;
	*((_DWORD*)a1 + 25) = v15;
	a1[23] = (float)((float)((float)((float)v15 * 2.3283064e-10) * 2.0) - 1.0) * v14;
	v16 = *(float*)(a2 + 72);
	result = (unsigned int)(214013 * *((_DWORD*)a1 + 25) + 2531011);
	*((_DWORD*)a1 + 25) = result;
	a1[24] = (float)((float)((float)((float)(int)result * 2.3283064e-10) * 2.0) - 1.0) * v16;
	*((_BYTE*)a1 + 202) = 1;
	return result;
}

