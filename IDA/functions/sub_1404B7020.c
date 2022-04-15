#include "../winhttp.h"

//----- (00000001404B7020) ----------------------------------------------------
_BOOL8 __fastcall sub_1404B7020(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbx
	_BOOL8 result; // rax
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rsi
	__int64 v8; // rsi
	__int64 v9; // rax
	int v10; // ebp
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rcx

	v3 = sub_1405B1510(&qword_140C7DFB0);
	if (!v3)
		return 0i64;
	v5 = sub_140205FA0(a2);
	v6 = v5;
	if (!v5 || *(_DWORD*)(v3 + 64) != *(_DWORD*)(v5 + 12))
		return 0i64;
	v7 = *(unsigned int*)(v5 + 16);
	if (v7 >= (__int64)(*(_QWORD*)(v3 + 256) - *(_QWORD*)(v3 + 248)) >> 3)
		return 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(v3 + 248) + 8 * v7);
	if (!v8)
		return 0i64;
	v9 = sub_140206C60(*(_DWORD*)(v8 + 4));
	if (!v9)
		return 0i64;
	v10 = *(_DWORD*)(v9 + 128);
	result = (((v10 - 1) & 0xFFFFFFFD) != 0
		|| ((v11 = *(_QWORD*)(v3 + 232), v12 = *(unsigned int*)(v6 + 16), !v11)
			|| (unsigned int)v12 >= *(_DWORD*)(v3 + 272)
			? (v13 = 0i64)
			: (v13 = v11 + 192 * v12),
			sub_1405A9C70(v13) > 0.0))
		&& ((unsigned int)(v10 - 2) > 1 || *(_DWORD*)(v8 + 56));
	return result;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

