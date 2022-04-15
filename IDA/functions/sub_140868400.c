#include "../winhttp.h"

//----- (0000000140868400) ----------------------------------------------------
__int64 __fastcall sub_140868400(__int64 a1, unsigned __int16 a2, int a3)
{
	int v6; // r9d
	int i; // r10d
	__int64 v8; // rax
	__int64 result; // rax

	v6 = a3;
	for (i = 0; v6; v6 &= v6 - 1)
		++i;
	v8 = sub_140832B30(4 * i * (unsigned int)a2);
	if (!v8)
		return 52i64;
	*(_QWORD*)a1 = v8;
	*(_WORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = a3;
	result = 1i64;
	*(_WORD*)(a1 + 18) = 0;
	return result;
}

