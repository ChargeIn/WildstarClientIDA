#include "../winhttp.h"

//----- (00000001408CE180) ----------------------------------------------------
__int64 __fastcall sub_1408CE180(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, int* a5)
{
	int v7; // r10d
	int i; // r8d
	int v9; // eax
	int v10; // r8d
	int j; // ecx
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a2;
	v7 = 0;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v7;
	*(_DWORD*)(a1 + 56) = v7;
	*(_DWORD*)(a1 + 60) = *a5;
	sub_1408CED00(a4, (_DWORD*)(a1 + 24));
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a1 + 28);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 36);
	v9 = sub_1407DDB28();
	v10 = 0;
	*(float*)(a1 + 64) = (float)((float)((float)(214013 * v9 + 2531011) * 2.3283064e-10)
		* (float)(*(float*)(a1 + 32) - (float)-*(float*)(a1 + 32)))
		- *(float*)(a1 + 32);
	for (j = a5[1] & 0x3FFFF; j; j &= j - 1)
		++v10;
	result = sub_1408AC810(a1 + 72, a2, v10, *a5, *(_DWORD*)(a1 + 24), 1);
	*(_WORD*)(a1 + 824) = 0;
	*(_DWORD*)(a1 + 832) = 0;
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

