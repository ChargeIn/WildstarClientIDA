#include "../winhttp.h"

//----- (0000000140109C00) ----------------------------------------------------
__int64 __fastcall sub_140109C00(float* a1)
{
	__int64 v1; // r9
	__int64 v2; // rax
	double v3; // xmm1_8
	_DWORD* v4; // rax
	__int64 v5; // r11
	unsigned int v7; // r10d
	__int64 v8; // r9
	unsigned int v9; // ecx
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12[6]; // [rsp+20h] [rbp-48h]
	int v13[6]; // [rsp+38h] [rbp-30h]

	v1 = *(_QWORD*)a1;
	v2 = (__int64)(*(_QWORD*)(*(_QWORD*)a1 + 96i64) - *(_QWORD*)(*(_QWORD*)a1 + 88i64)) >> 3;
	if (!v2)
	{
		if ((*(_QWORD*)(v1 + 64) - *(_QWORD*)(v1 + 56)) / 304i64)
			goto LABEL_3;
		return 2147942487i64;
	}
	if ((int)v2 <= 0)
		return 2147942487i64;
LABEL_3:
	if ((int)((__int64)(*(_QWORD*)(v1 + 96) - *(_QWORD*)(v1 + 88)) >> 3) > 0)
		v1 = **(_QWORD**)(v1 + 88);
	*(_QWORD*)&v3 = (unsigned int)dword_140C63664;
	*(float*)&v3 = (float)(*(float*)&dword_140C63664 - a1[2]) * a1[3];
	v4 = (_DWORD*)sub_140101180(v1, v3, 0i64);
	if (!v4)
		return 2147500037i64;
	v7 = 0;
	v8 = v5 + 8;
	v12[0] = v4[2];
	v12[1] = v4[3];
	v12[2] = v4[4];
	v12[3] = v4[5];
	v12[4] = v4[6];
	v12[5] = v4[7];
	v13[0] = v4[8];
	v13[1] = v4[9];
	v13[2] = v4[10];
	v13[3] = v4[11];
	v13[4] = v4[12];
	v13[5] = v4[13];
	do
	{
		v9 = v7;
		v8 += 16i64;
		v10 = v7 / 5;
		++v7;
		v11 = v9 - 5 * (_DWORD)v10;
		*(_DWORD*)(v8 - 24) = v12[v11];
		*(_DWORD*)(v8 - 20) = v13[v10];
		*(_DWORD*)(v8 - 16) = v12[(unsigned int)(v11 + 1)];
		*(_DWORD*)(v8 - 12) = v13[(unsigned int)(v10 + 1)];
	} while (v7 < 0x19);
	return 0i64;
}
// 140109CC8: variable 'v5' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;

