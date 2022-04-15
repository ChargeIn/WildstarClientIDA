#include "../winhttp.h"

//----- (000000014017BAA0) ----------------------------------------------------
bool __fastcall sub_14017BAA0(__int64 a1)
{
	bool result; // al
	__int64 v2; // rax
	__int64 v3; // rax

	result = 0;
	if (!*(_BYTE*)(a1 + 1092))
	{
		if ((*(_BYTE*)(a1 + 664) & 1) == 0)
			return 1;
		v2 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
		if (!v2)
			return 1;
		v3 = *(_QWORD*)(v2 + 16);
		if (!v3 || v3 != a1 && !sub_1400D1A90(v3, a1))
			return 1;
	}
	return result;
}

