#include "../winhttp.h"

//----- (00000001400594A0) ----------------------------------------------------
__int64 __fastcall sub_1400594A0(__int64* a1)
{
	if (a1)
	{
		sub_14018B900(*a1, 0);
		sub_14018B900((__int64)a1, 0);
		return 0i64;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		return 0xFFFFFFFFi64;
	}
}

