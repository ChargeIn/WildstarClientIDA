#include "../winhttp.h"

//----- (00000001407F20D0) ----------------------------------------------------
__int64 __fastcall sub_1407F20D0(int a1, _QWORD* a2, char* a3, _OWORD* a4)
{
	__int64 result; // rax
	__int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

	if (a1)
	{
		sub_1407F6A98(v6, a3, a4);
		result = v6[0];
		*a2 = v6[0];
	}
	else
	{
		sub_1407F6B60(&v7, a3, a4);
		result = v7;
		*(_DWORD*)a2 = v7;
	}
	return result;
}
// 1407F20D0: using guessed type __int64 var_18[3];

