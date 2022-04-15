#include "../winhttp.h"

//----- (00000001400CD440) ----------------------------------------------------
int* __fastcall sub_1400CD440(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rax
	int v6; // ecx
	__int64 v8; // rcx
	float* v9; // rax
	int v10; // ecx
	float v11[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 680);
	if (!v2)
		goto LABEL_6;
	v4 = *(_QWORD*)(v2 + 32);
	if (v4)
	{
		v5 = sub_1400CB3D0(v4, v11);
		v6 = v5[2] - *v5;
		LODWORD(v5) = v5[3] - v5[1];
		*a2 = v6;
		a2[1] = (int)v5;
		return a2;
	}
	v8 = *(_QWORD*)(v2 + 16);
	if (v8)
	{
		v9 = sub_140141910(v8, v11);
		v10 = (int)*v9;
		a2[1] = (int)v9[1];
		*a2 = v10;
		return a2;
	}
	else
	{
	LABEL_6:
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
}
// 1400CD440: using guessed type float var_18[6];

