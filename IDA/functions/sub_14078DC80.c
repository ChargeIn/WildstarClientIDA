#include "../winhttp.h"

//----- (000000014078DC80) ----------------------------------------------------
__int64 __fastcall sub_14078DC80(_QWORD* a1)
{
	unsigned int v2; // ebx
	char v3; // al
	__int64 v4; // r8
	char v5; // cl
	int v6; // edx
	char v7; // cl
	__int64 result; // rax
	int v9; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_14078DBC0(a1, 2u, &v9);
	v4 = a1[2];
	v5 = v9 - 1;
	*(_DWORD*)(v4 + 8) = 3;
	v6 = -2 << v5;
	v7 = v3;
	result = 1i64;
	*(double*)v4 = (double)(int)((v2 >> v7) & ~v6);
	a1[2] += 16i64;
	return result;
}

