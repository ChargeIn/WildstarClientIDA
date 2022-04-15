#include "../winhttp.h"

//----- (0000000140832DE0) ----------------------------------------------------
__int64 __fastcall sub_140832DE0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	unsigned __int8 v3; // bl
	int v4; // eax
	__int64 result; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v1 = a1;
	v6 = 0i64;
	v2 = sub_14085EA40(a1);
	LOBYTE(v1) = *(_BYTE*)(v1 + 382);
	v6 = v2;
	v3 = (unsigned __int8)v1 >> 7;
	v4 = sub_14085CF90(&v6);
	result = sub_140832B90(v4);
	if (!result)
		return sub_140832E30(&v6, v3);
	return result;
}

