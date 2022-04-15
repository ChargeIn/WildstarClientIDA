#include "../winhttp.h"

//----- (0000000140313A00) ----------------------------------------------------
__int64 __fastcall sub_140313A00(__int64 a1, _DWORD* a2)
{
	float v2; // xmm0_4
	__int64 result; // rax
	float v4; // xmm1_4
	float v5; // xmm2_4
	float v6; // xmm4_4
	float v7[6]; // [rsp+0h] [rbp-18h]

	*(_DWORD*)a1 = *a2;
	*(_DWORD*)(a1 + 4) = a2[1];
	*(_DWORD*)(a1 + 8) = a2[2];
	*(_DWORD*)(a1 + 16) = a2[4];
	*(_DWORD*)(a1 + 20) = a2[5];
	*(_DWORD*)(a1 + 24) = a2[6];
	*(_DWORD*)(a1 + 32) = a2[8];
	*(_DWORD*)(a1 + 36) = a2[9];
	*(_DWORD*)(a1 + 40) = a2[10];
	*(_DWORD*)(a1 + 12) = a2[12];
	*(float*)(a1 + 28) = (float)(int)a2[14];
	v2 = 3.0;
	*(float*)(a1 + 44) = (float)(int)a2[15];
	result = (unsigned int)a2[13];
	if ((result & 1) != 0)
		v4 = 1.0;
	else
		v4 = 3.0;
	if ((result & 2) != 0)
		v2 = 1.0;
	v7[2] = 1.0;
	if ((result & 4) == 0)
		v7[2] = 3.0;
	v7[3] = 1.0;
	if ((result & 8) == 0)
		v7[3] = 3.0;
	v5 = -1.0;
	if ((result & 0x10) != 0)
		v6 = -1.0;
	else
		v6 = 1.0;
	if ((result & 0x20) == 0)
		v5 = 1.0;
	v7[1] = v2 * v5;
	v7[0] = v4 * v6;
	*(_OWORD*)(a1 + 48) = *(_OWORD*)v7;
	return result;
}
// 140313A00: using guessed type float var_18[6];

