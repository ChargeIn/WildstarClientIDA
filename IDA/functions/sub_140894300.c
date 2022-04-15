#include "../winhttp.h"

//----- (0000000140894300) ----------------------------------------------------
bool __fastcall sub_140894300(__int64 a1, int a2, _QWORD* a3)
{
	bool result; // al
	__int64 v7; // rcx

	result = 1;
	if (!sub_140851B30(a1, a2, a3))
	{
		v7 = *(_QWORD*)(a1 + 72);
		if (!v7 || !sub_14085AB30(v7, a2, a3))
			return 0;
	}
	return result;
}

