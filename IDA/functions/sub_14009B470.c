#include "../winhttp.h"

//----- (000000014009B470) ----------------------------------------------------
__int64 __fastcall sub_14009B470(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // r10
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 result; // rax

	v3 = -1i64;
	if (*a1)
	{
		v4 = -1i64;
		do
			++v4;
		while (*(_WORD*)(*a1 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
		v5 = 16 * v4 + 8;
	else
		v5 = 16 * (v4 + 1);
	*a2 += v5;
	v6 = a1[1];
	if (v6)
	{
		do
			++v3;
		while (*(_WORD*)(v6 + 2 * v3));
	}
	else
	{
		v3 = 0i64;
	}
	*a3 += 2 * v3;
	if (v3 <= 0x7F)
		result = 16 * v3 + 12;
	else
		result = 16 * (v3 + 1) + 4;
	*a2 += result;
	return result;
}

