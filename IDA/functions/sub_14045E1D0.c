#include "../winhttp.h"

//----- (000000014045E1D0) ----------------------------------------------------
__int64 __fastcall sub_14045E1D0(__int64 a1, int a2)
{
	int v2; // eax
	__int64 v3; // rdi
	__int64 result; // rax

	v2 = *(_DWORD*)(a1 + 128);
	v3 = a2;
	if (v2 != 20 && v2 != 23)
		sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 688));
	result = sub_1400035B0();
	if ((unsigned int)v3 <= 0x18)
		__asm { jmp     rcx }
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

