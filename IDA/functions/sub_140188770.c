#include "../winhttp.h"

//----- (0000000140188770) ----------------------------------------------------
float __fastcall sub_140188770(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rax
	__int64 v5; // r8
	float v6; // xmm6_4
	__int64 v7; // rdx
	float v8; // xmm8_4
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // r8
	__int64 v12; // rcx
	float v13; // xmm1_4
	float v14; // xmm7_4
	__int64 v15; // rax
	__int64 v16; // rcx

	v4 = sub_140188E00(a1 + 48, a2, a3);
	v6 = 0.0;
	v7 = *(_QWORD*)(v4 + 16);
	if (*(_QWORD*)(v4 + 8) == v7)
		v8 = 0.0;
	else
		v8 = *(float*)(v7 - 16);
	v9 = sub_140188E00(a1 + 160, v7, v5);
	v12 = *(_QWORD*)(v9 + 16);
	if (*(_QWORD*)(v9 + 8) == v12)
		v13 = 0.0;
	else
		v13 = *(float*)(v12 - 16);
	v14 = fmaxf(v13, v8);
	v15 = sub_140188E00(a1 + 104, v10, v11);
	v16 = *(_QWORD*)(v15 + 16);
	if (*(_QWORD*)(v15 + 8) != v16)
		v6 = *(float*)(v16 - 16);
	return fmaxf(v14, v6);
}
// 1401887B2: variable 'v5' is possibly undefined
// 1401887D7: variable 'v10' is possibly undefined
// 1401887D7: variable 'v11' is possibly undefined

