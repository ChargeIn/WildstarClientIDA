#include "../winhttp.h"

//----- (0000000140420BF0) ----------------------------------------------------
__int64 __fastcall sub_140420BF0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v4; // rax

	*a3 += 8i64;
	v4 = sub_140224D00(*(_DWORD*)(*a3 - 8i64));
	return sub_140434100(a2, v4);
}

