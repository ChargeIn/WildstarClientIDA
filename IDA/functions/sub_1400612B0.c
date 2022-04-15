#include "../winhttp.h"

//----- (00000001400612B0) ----------------------------------------------------
__int64 __fastcall sub_1400612B0(__int64 a1, int a2)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 80);
	v3 = a2;
	if ((unsigned __int64)(a2 + 1) > 0x666666666666666i64)
		sub_14005ABE0(a1, aMemoryAllocati);
	v5 = sub_140064780(a1, *(_QWORD*)(a1 + 80), 40i64 * *(int*)(a1 + 92));
	v6 = *(_QWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 92) = v3;
	*(_QWORD*)(a1 + 80) = v5;
	v7 = v5 + 40 * ((v6 - v2) / 40);
	result = v5 + 40 * (v3 - 1);
	*(_QWORD*)(a1 + 40) = v7;
	*(_QWORD*)(a1 + 72) = result;
	return result;
}
// 14005ABE0: using guessed type void __fastcall __noreturn sub_14005ABE0(_QWORD, _QWORD);
// 140064780: using guessed type __int64 __fastcall sub_140064780(_QWORD, _QWORD, _QWORD);

