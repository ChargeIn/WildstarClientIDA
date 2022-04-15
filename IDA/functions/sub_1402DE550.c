#include "../winhttp.h"

//----- (00000001402DE550) ----------------------------------------------------
_BOOL8 __fastcall sub_1402DE550(__int64 a1, __int64* a2)
{
	__int64 v5; // rsi

	if ((__int64*)a1 == a2)
		return 1i64;
	v5 = *(_QWORD*)(a1 + 24);
	return !(unsigned int)sub_1407E6AF0((unsigned __int64*)v5, a2[3], 0x50ui64)
		&& !(unsigned int)sub_1407E6AF0(*(unsigned __int64**)(a1 + 32), a2[4], 24i64 * *(unsigned int*)(v5 + 64))
		&& !(unsigned int)sub_1407E6AF0(*(unsigned __int64**)(a1 + 40), a2[5], 72i64 * *(unsigned int*)(v5 + 68));
}

