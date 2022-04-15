#include "../winhttp.h"

//----- (0000000140306480) ----------------------------------------------------
__int64 __fastcall sub_140306480(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v6);
	return *(unsigned __int16*)(*(_QWORD*)(a1[8] + 1424) + 32 * a2);
}
// 140306480: using guessed type int var_18[6];

