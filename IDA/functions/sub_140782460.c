#include "../winhttp.h"

//----- (0000000140782460) ----------------------------------------------------
__int64 __fastcall sub_140782460(__int64 a1, __int64 a2, int a3, int* a4)
{
	int* v5; // rax
	__int64 result; // rax
	int v7[6]; // [rsp+30h] [rbp-18h] BYREF

	v5 = sub_140785230((int*)(a1 + 56), v7, a3, *(_DWORD*)(a2 + 3412));
	*a4 = *v5;
	a4[1] = v5[1];
	result = (unsigned int)v5[2];
	a4[2] = result;
	return result;
}
// 140782460: using guessed type int var_18[6];

