#include "../winhttp.h"

//----- (00000001400ABC90) ----------------------------------------------------
__int64 __fastcall sub_1400ABC90(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // r10
	__int64 v6; // r10
	__int64 v7; // rax
	__int64 result; // rax

	*a2 += 32i64;
	v3 = *(_QWORD*)(a1 + 8);
	v4 = -1i64;
	if (v3)
	{
		v5 = -1i64;
		do
			++v5;
		while (*(_WORD*)(v3 + 2 * v5));
	}
	else
	{
		v5 = 0i64;
	}
	*a3 += 2 * v5;
	if (v5 <= 0x7F)
		v6 = 16 * v5 + 8;
	else
		v6 = 16 * (v5 + 1);
	*a2 += v6 + 232;
	*a3 += 16i64;
	*a2 += 46i64;
	v7 = *(_QWORD*)(a1 + 64);
	if (v7)
	{
		do
			++v4;
		while (*(_WORD*)(v7 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
		result = 16 * v4 + 136;
	else
		result = 16 * (v4 + 1) + 128;
	*a2 += result;
	return result;
}

