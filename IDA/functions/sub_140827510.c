#include "../winhttp.h"

//----- (0000000140827510) ----------------------------------------------------
__int64 __fastcall sub_140827510(char* a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdi
	unsigned __int64 i; // rcx
	char v8; // dl
	char* v9; // r8
	char* v10; // rdx
	int v11; // ecx
	char v12[280]; // [rsp+20h] [rbp-118h] BYREF

	if (!a1)
		return 0i64;
	v3 = -1i64;
	v4 = -1i64;
	do
		++v4;
	while (a1[v4]);
	v5 = 259i64;
	if ((unsigned __int64)(v4 + 1) <= 0x103)
	{
		v6 = -1i64;
		do
			++v6;
		while (a1[v6]);
		v5 = v6 + 1;
	}
	sub_1407EA1F8(v12, 260i64, a1, v5);
	v12[v5] = 0;
	do
		++v3;
	while (a1[v3]);
	for (i = 0i64; i < v3; ++i)
	{
		v8 = v12[i];
		if ((unsigned __int8)(v8 - 65) <= 0x19u)
			v12[i] = v8 + 32;
	}
	v9 = &v12[(unsigned int)v3];
	v10 = v12;
	for (result = 2166136261i64; v10 < v9; result = v11 ^ (unsigned int)(16777619 * result))
		v11 = (unsigned __int8)*v10++;
	return result;
}
// 140827510: using guessed type char var_118[280];

