#include "../winhttp.h"

//----- (0000000140367D50) ----------------------------------------------------
__int64 __fastcall sub_140367D50(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // eax
	unsigned int v6; // ecx
	char v8[52]; // [rsp+20h] [rbp-78h] BYREF
	char v9[68]; // [rsp+54h] [rbp-44h] BYREF

	v3 = sub_14034CA50((__int64)v8, (float*)(a1 + 180), a2);
	v4 = sub_14034C930((__int64)v9, v3, a1 + 232);
	v5 = sub_140354C20(a1, v4);
	v6 = 0;
	if (v5 < 0)
		return (unsigned int)v5;
	return v6;
}
// 140367D50: using guessed type char var_78[52];
// 140367D50: using guessed type char var_44[68];

