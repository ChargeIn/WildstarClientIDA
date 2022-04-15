#include "../winhttp.h"

//----- (000000014078DCF0) ----------------------------------------------------
__int64 __fastcall sub_14078DCF0(_QWORD* a1)
{
	int v2; // edi
	int v3; // ebx
	char v4; // al
	__int64 v5; // r8
	char v6; // cl
	int v7; // r9d
	char v8; // cl
	__int64 result; // rax
	int v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_14078DBC0(a1, 3u, &v10);
	v5 = a1[2];
	v6 = v10 - 1;
	*(_DWORD*)(v5 + 8) = 3;
	v7 = -2 << v6;
	v8 = v4;
	result = 1i64;
	*(double*)v5 = (double)(v2 & ~(~v7 << v8) | ((v3 & ~v7) << v8));
	a1[2] += 16i64;
	return result;
}

