#include "../winhttp.h"

//----- (000000014036F9F0) ----------------------------------------------------
void __fastcall sub_14036F9F0(__int64 a1)
{
	__int64 v2; // rcx

	sub_14004EED0((__int64*)(a1 + 56), 0i64);
	if (*(_QWORD*)(a1 + 48))
	{
		((void (*)(void))sub_14036F9F0)();
		sub_14036F9F0(*(_QWORD*)(a1 + 48) + 80i64);
		sub_14036F9F0(*(_QWORD*)(a1 + 48) + 160i64);
		sub_14036F9F0(*(_QWORD*)(a1 + 48) + 240i64);
	}
	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
		sub_14036FF20(v2);
	*(_QWORD*)(a1 + 48) = 0i64;
}

