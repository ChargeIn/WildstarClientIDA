#include "../winhttp.h"

//----- (00000001402D5D40) ----------------------------------------------------
__int64 __fastcall sub_1402D5D40(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // ebx
	int v7; // eax
	__int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 32i64))(a2);
	v5 = v4 + v3;
	v6 = 0;
	v9[1] = v5;
	v9[0] = v4;
	v9[2] = 0i64;
	v7 = sub_1402D5650(v9, v4 + 80, v4);
	if (v7 < 0)
		return (unsigned int)v7;
	return v6;
}

