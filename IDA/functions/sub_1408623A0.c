#include "../winhttp.h"

//----- (00000001408623A0) ----------------------------------------------------
__int64 __fastcall sub_1408623A0(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // r9
	unsigned __int16 v5; // ax
	__int64 v6; // r8
	__int64 v7; // rcx
	int* v8; // rdx
	__int64 result; // rax
	int* v10; // r8

	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 176i64);
	v5 = 1;
	v6 = a2;
	if ((*(_BYTE*)(v3 + 19) & 7) != 0)
		v5 = *(_WORD*)(v3 + 16);
	if (a2 >= v5)
		return 2i64;
	v7 = 3i64 * a2;
	v8 = &dword_140C10FB0;
	if (*(_QWORD*)(v3 + 8))
		v8 = *(int**)(v3 + 8);
	result = 1i64;
	v10 = &v8[6 * v6];
	*a3 = v8[2 * v7];
	a3[1] = v10[1];
	a3[2] = v10[2];
	a3[3] = v10[3];
	a3[4] = v10[4];
	a3[5] = v10[5];
	return result;
}
// 140C10FB0: using guessed type int dword_140C10FB0;

