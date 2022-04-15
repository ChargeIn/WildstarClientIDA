#include "../winhttp.h"

//----- (000000014085CB70) ----------------------------------------------------
__int64 __fastcall sub_14085CB70(__int64 a1)
{
	int v2; // edx
	__int16 v3; // cx
	__int64 result; // rax

	*(_DWORD*)(a1 + 24) = GetTickCount();
	v2 = 3;
	*(_DWORD*)(a1 + 16) = 3;
	v3 = 0;
	*(_DWORD*)(a1 + 28) = (int)(1000.0 / ((double)dword_140C110B4 * 0.0009765625));
	do
	{
		++v3;
		v2 &= v2 - 1;
	} while (v2);
	result = 1i64;
	*(_WORD*)(a1 + 32) = 2 * v3;
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;

