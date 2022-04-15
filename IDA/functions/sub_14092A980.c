#include "../winhttp.h"

//----- (000000014092A980) ----------------------------------------------------
__int64 __fastcall sub_14092A980(_QWORD* a1, int a2, __int64 a3)
{
	__int64 v3; // rsi
	_QWORD* v6; // rax
	_QWORD* v7; // r9
	char v9; // al

	v3 = a2;
	v6 = sub_14092D610((__int64)a1, 11i64);
	v7 = v6;
	if (!v6)
		return *(unsigned int*)a1;
	*(_BYTE*)v6 = 10;
	a1[11] += 10i64;
	v9 = 65;
	if (byte_1409D00E0[v3] <= 7u)
		v9 = 0;
	*((_BYTE*)v7 + 1) = v9 | 0x48;
	*((_BYTE*)v7 + 2) = (byte_1409D00E0[v3] & 7) - 72;
	*(_QWORD*)((char*)v7 + 3) = a3;
	return 0i64;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];

