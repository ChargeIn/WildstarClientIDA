#include "../winhttp.h"

//----- (00000001400D1AC0) ----------------------------------------------------
char __fastcall sub_1400D1AC0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
	if (!v2)
		return 0;
	v3 = *(_QWORD*)(v2 + 16);
	if (!v3)
		return 0;
	if (v3 == a1)
		return 1;
	return sub_1400D1A90(v3, a1);
}

