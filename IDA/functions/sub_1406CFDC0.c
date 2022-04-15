#include "../winhttp.h"

//----- (00000001406CFDC0) ----------------------------------------------------
__int64 __fastcall sub_1406CFDC0(_QWORD* a1)
{
	__int64 v2; // rbx
	char* v3; // rax
	__int64 v4; // rdx
	__m128i* v5; // rdi
	__int64 v7; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v8; // [rsp+38h] [rbp-20h]

	v2 = sub_1406CFB40(a1);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v7, v3);
		v4 = *(_QWORD*)(v2 + 32);
		v5 = v8;
		if (v4)
			sub_140109710((__int64*)(v2 + 2144), v4 + 240, v8, 0);
		*(_DWORD*)(v2 + 2252) = 0;
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
	return 0i64;
}

