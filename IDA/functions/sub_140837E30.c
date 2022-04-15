#include "../winhttp.h"

//----- (0000000140837E30) ----------------------------------------------------
__int64 __fastcall sub_140837E30(__int64 a1, int* a2, unsigned int a3, int a4)
{
	__int64 v6; // rdi
	int* v8; // rcx

	v6 = a3;
	if (*(_QWORD*)a1)
	{
		sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		*(_QWORD*)a1 = 0i64;
	}
	*(_QWORD*)(a1 + 8) = 0i64;
	if (!a2 || !(_DWORD)v6)
		return 31i64;
	v8 = (int*)sub_1408819F0(dword_140C10F20, 12 * v6);
	*(_QWORD*)a1 = v8;
	if (v8)
	{
		sub_1407DB590(v8, a2, (unsigned int)(12 * v6));
		*(_DWORD*)(a1 + 8) = v6;
		*(_DWORD*)(a1 + 12) = a4;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1 + 8) = 0;
		return 52i64;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

