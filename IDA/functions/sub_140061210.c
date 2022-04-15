#include "../winhttp.h"

//----- (0000000140061210) ----------------------------------------------------
unsigned __int64 __fastcall sub_140061210(__int64 a1, int a2)
{
	__int64 v2; // rbp
	__int64 v3; // rsi
	int v5; // edi
	__int64 v6; // rax

	v2 = *(_QWORD*)(a1 + 64);
	v3 = a2;
	v5 = a2 + 6;
	if ((unsigned __int64)(a2 + 7) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(a1, aMemoryAllocati);
	v6 = sub_140064780(a1, *(_QWORD*)(a1 + 64), 16i64 * *(int*)(a1 + 88), 16i64 * v5);
	*(_QWORD*)(a1 + 64) = v6;
	*(_DWORD*)(a1 + 88) = v5;
	*(_QWORD*)(a1 + 56) = v6 + 16 * v3;
	return sub_140061150((_QWORD*)a1, v2);
}
// 14005ABE0: using guessed type void __fastcall __noreturn sub_14005ABE0(_QWORD, _QWORD);

