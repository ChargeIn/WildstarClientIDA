#include "../winhttp.h"

//----- (000000014005BB80) ----------------------------------------------------
__int64 __fastcall sub_14005BB80(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rdi
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx

	v3 = a3;
	if ((unsigned __int64)(a3 + 1) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(a1, aMemoryAllocati);
	result = sub_140064780(a1, *(_QWORD*)(a2 + 24), 16i64 * *(int*)(a2 + 56), 16i64 * a3);
	v6 = *(int*)(a2 + 56);
	*(_QWORD*)(a2 + 24) = result;
	if (v6 < v3)
	{
		result = 16 * v6;
		v7 = v3 - v6;
		do
		{
			result += 16i64;
			*(_DWORD*)(*(_QWORD*)(a2 + 24) + result - 8) = 0;
			--v7;
		} while (v7);
	}
	*(_DWORD*)(a2 + 56) = v3;
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);

