#include "../winhttp.h"

//----- (000000014064ABB0) ----------------------------------------------------
__int64 __fastcall sub_14064ABB0(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // r9
	unsigned int v7; // esi
	float v8; // xmm6_4
	float v9; // xmm7_4
	float v10; // xmm0_4
	__int64 v11; // rax

	v2 = sub_1406499E0(a1);
	if (v2)
	{
		v3 = sub_140200220(0x58u);
		if (v3)
			v7 = *(_DWORD*)(v3 + 4);
		else
			v7 = 500;
		v8 = *(float*)(v2 + 1516);
		v9 = *(float*)(v2 + 2332);
		v10 = sub_1404602F0(v2, v4, v5, v6);
		v11 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v11 + 8) = 3;
		*(double*)v11 = (float)((float)((float)((float)(v10 * (float)(0x3E8 / v7)) / v8) - v9) * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 14064AC11: variable 'v4' is possibly undefined
// 14064AC11: variable 'v5' is possibly undefined
// 14064AC11: variable 'v6' is possibly undefined

