#include "../winhttp.h"

//----- (0000000140109900) ----------------------------------------------------
_DWORD* __fastcall sub_140109900(__int64 a1, _DWORD* a2, int* a3, unsigned int a4)
{
	int* v4; // r10
	__int64 v6; // rcx
	unsigned int v7; // r11d
	unsigned int v9; // r8d
	unsigned int v10; // r9d
	unsigned int v11; // ebx
	double v12; // xmm1_8
	_DWORD* v13; // rax
	int v14; // eax
	int v15; // ecx
	unsigned int v16; // eax
	unsigned int v17; // eax

	v4 = a3;
	v6 = *(_QWORD*)a1;
	v7 = a4;
	if (v6)
	{
		if ((int)((__int64)(*(_QWORD*)(v6 + 96) - *(_QWORD*)(v6 + 88)) >> 3) > 0)
			v6 = **(_QWORD**)(v6 + 88);
		*(_QWORD*)&v12 = (unsigned int)dword_140C63664;
		*(float*)&v12 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8)) * *(float*)(a1 + 12);
		v13 = (_DWORD*)sub_140101180(v6, v12, 0i64);
		LODWORD(v6) = v13[3] - v13[2];
		v9 = v13[9] - v13[8];
		v10 = v13[7] - v13[6];
		v11 = v13[13] - v13[12];
	}
	else
	{
		v9 = 0;
		v10 = 0;
		v11 = 0;
	}
	v14 = v7;
	if ((unsigned int)v6 < v7)
		v14 = v6;
	*v4 += v14;
	v15 = *v4;
	v16 = v7;
	if (v9 < v7)
		v16 = v9;
	v4[1] += v16;
	v17 = v7;
	if (v10 < v7)
		v17 = v10;
	v4[2] -= v17;
	if (v11 < v7)
		v7 = v11;
	v4[3] -= v7;
	*a2 = v15;
	a2[1] = v4[1];
	a2[2] = v4[2];
	a2[3] = v4[3];
	return a2;
}
// 14010997A: variable 'v7' is possibly undefined
// 140109980: variable 'v4' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;

