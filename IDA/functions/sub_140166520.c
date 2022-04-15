#include "../winhttp.h"

//----- (0000000140166520) ----------------------------------------------------
__int64 __fastcall sub_140166520(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // edi
	char* v5; // rax
	int v6; // ebp
	__m128i* v7; // rbx
	__int64 v8; // rax
	__int64* v9; // rcx
	__int64 v10; // rdx
	__int64 v12; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v13; // [rsp+38h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v12, v5);
	v6 = v3 - 1;
	v7 = v13;
	if (v6 >= 0 && v6 < *(_DWORD*)(v2 + 1160) && v4 >= 0 && v4 < *(_DWORD*)(v2 + 1144))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v6);
		v9 = v4 >= *(_DWORD*)(v8 + 24) ? 0i64 : *(__int64**)(*(_QWORD*)(v8 + 16) + 8i64 * v4);
		v10 = *(_QWORD*)(*v9 + 32);
		if (v10)
			sub_140109710(v9 + 14, v10 + 240, v13, 0);
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}

