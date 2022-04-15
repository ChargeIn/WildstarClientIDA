#include "../winhttp.h"

//----- (000000014034CA50) ----------------------------------------------------
__int64 __fastcall sub_14034CA50(__int64 a1, float* a2, __int64 a3)
{
	unsigned int v3; // ebp
	unsigned int v4; // r13d
	unsigned int v5; // r15d
	float v6; // xmm6_4
	int v7; // edi
	int v8; // r9d
	float v10; // xmm7_4
	float v12; // eax
	int v13; // edx
	unsigned int v14; // ecx
	float v15; // xmm5_4
	float v16; // xmm4_4
	bool v17; // cc
	__int64 result; // rax
	bool v19; // cf

	v3 = *((_DWORD*)a2 + 8);
	v4 = *((_DWORD*)a2 + 11);
	v5 = *((_DWORD*)a2 + 10);
	v6 = fmaxf(a2[5], *(float*)(a3 + 20));
	v7 = *((_DWORD*)a2 + 7);
	v8 = *((_DWORD*)a2 + 6);
	v10 = fminf(a2[9], *(float*)(a3 + 36));
	v12 = *a2;
	v13 = *((_DWORD*)a2 + 4);
	v14 = *((_DWORD*)a2 + 12);
	v15 = fmaxf(a2[3], *(float*)(a3 + 12));
	v16 = fmaxf(a2[2], *(float*)(a3 + 8));
	*(_DWORD*)a1 = *(_DWORD*)a3 | LODWORD(v12);
	if (v13 < *(_DWORD*)(a3 + 16))
		v13 = *(_DWORD*)(a3 + 16);
	v17 = v8 < *(_DWORD*)(a3 + 24);
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a3 + 4) | *((_DWORD*)a2 + 1);
	if (v17)
		v8 = *(_DWORD*)(a3 + 24);
	result = a1;
	if (v7 < *(_DWORD*)(a3 + 28))
		v7 = *(_DWORD*)(a3 + 28);
	v19 = *(_DWORD*)(a3 + 32) < v3;
	*(float*)(a1 + 20) = v6;
	*(float*)(a1 + 36) = v10;
	*(float*)(a1 + 8) = v16;
	*(float*)(a1 + 12) = v15;
	if (v19)
		v3 = *(_DWORD*)(a3 + 32);
	v19 = v5 < *(_DWORD*)(a3 + 40);
	*(_DWORD*)(a1 + 16) = v13;
	if (v19)
		v5 = *(_DWORD*)(a3 + 40);
	v19 = v4 < *(_DWORD*)(a3 + 44);
	*(_DWORD*)(a1 + 32) = v3;
	if (v19)
		v4 = *(_DWORD*)(a3 + 44);
	if (v14 < *(_DWORD*)(a3 + 48))
		v14 = *(_DWORD*)(a3 + 48);
	*(_DWORD*)(a1 + 24) = v8;
	*(_DWORD*)(a1 + 28) = v7;
	*(_DWORD*)(a1 + 40) = v5;
	*(_DWORD*)(a1 + 44) = v4;
	*(_DWORD*)(a1 + 48) = v14;
	return result;
}

