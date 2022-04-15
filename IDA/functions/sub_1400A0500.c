#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0500) ----------------------------------------------------
__int64 __fastcall sub_1400A0500(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int64 v3; // rax
	__int64 result; // rax

	if (*a1)
	{
		v3 = -1i64;
		do
			++v3;
		while (*(_WORD*)(*a1 + 2 * v3));
	}
	else
	{
		v3 = 0i64;
	}
	*a3 += 2 * v3;
	if (v3 <= 0x7F)
		result = 16 * v3 + 182;
	else
		result = 16 * (v3 + 1) + 174;
	*a2 += result;
	return result;
}

