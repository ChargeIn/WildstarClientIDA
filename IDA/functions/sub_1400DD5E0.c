#include "../winhttp.h"

//----- (00000001400DD5E0) ----------------------------------------------------
__int64 __fastcall sub_1400DD5E0(_QWORD* a1)
{
	__int64 v2; // rdi

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
		*(_DWORD*)(v2 + 676) = sub_140056D60(a1, 2u);
	return 0i64;
}

