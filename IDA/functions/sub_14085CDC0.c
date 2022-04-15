#include "../winhttp.h"

//----- (000000014085CDC0) ----------------------------------------------------
void __fastcall sub_14085CDC0(__int64 a1, __int64 a2)
{
	int v4; // eax
	unsigned __int16 i; // r8
	int v6; // ebx
	__int64* v7; // rax

	if (!*(_QWORD*)(a1 + 8))
	{
		v4 = *(_DWORD*)(a1 + 16);
		for (i = 0; v4; v4 &= v4 - 1)
			++i;
		v6 = i;
		v7 = sub_1408771E0();
		*(_QWORD*)(a1 + 8) = sub_1408772F0((__int64**)v7, a2, v6, dword_140C110B4, 16, 1);
	}
}
// 140C110B4: using guessed type int dword_140C110B4;

