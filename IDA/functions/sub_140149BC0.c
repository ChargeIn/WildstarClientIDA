#include "../winhttp.h"

//----- (0000000140149BC0) ----------------------------------------------------
__int64 __fastcall sub_140149BC0(_QWORD* a1)
{
	__int64 v2; // rdi
	__m128* v3; // rbx
	__m128* v4; // rax
	int v5; // eax
	_DWORD* v6; // rdx
	__int64 v7; // rcx
	__int64 result; // rax
	float v9; // xmm0_4
	float v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = (__m128*)sub_140056AB0(a1, 3u);
	v5 = sub_1401B25D0(v2, v3, v4, &v10);
	v6 = (_DWORD*)a1[2];
	v6[2] = 1;
	*v6 = v5 != 0;
	a1[2] += 16i64;
	v7 = a1[2];
	if (!v5)
		return 1i64;
	v9 = v10;
	*(_DWORD*)(v7 + 8) = 3;
	result = 2i64;
	*(double*)v7 = v9;
	a1[2] += 16i64;
	return result;
}

