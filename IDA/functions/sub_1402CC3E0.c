#include "../winhttp.h"

//----- (00000001402CC3E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402CC3E0(__int64 a1, _OWORD* a2)
{
	__int128 v3; // xmm0
	__int64 v4; // rax
	unsigned __int64 result; // rax
	int v6[4]; // [rsp+20h] [rbp-78h] BYREF
	__int64 v7[10]; // [rsp+30h] [rbp-68h] BYREF

	*(_OWORD*)(a1 + 80) = *a2;
	v3 = a2[1];
	v7[0] = a1 + 80;
	*(_OWORD*)(a1 + 96) = v3;
	*(_OWORD*)(a1 + 112) = a2[2];
	*(_OWORD*)(a1 + 128) = a2[3];
	sub_1401AFC20(v7, (double*)(a1 + 144));
	v4 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 240) = 0;
	v6[0] = 0;
	result = (*(__int64(__fastcall**)(__int64, int*, __int64))(v4 + 64))(a1, v6, 5i64);
	if ((_DWORD)result)
		return sub_1402CB5A0(a1);
	return result;
}
// 1402CC3E0: using guessed type __int64 var_68[10];
// 1402CC3E0: using guessed type int var_78[4];

