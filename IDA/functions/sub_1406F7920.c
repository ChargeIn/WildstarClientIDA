#include "../winhttp.h"

//----- (00000001406F7920) ----------------------------------------------------
__int64 __fastcall sub_1406F7920(__int64 a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	GetLocalTime(&SystemTime);
	return sub_1406F7570(a1, &SystemTime);
}
// 140C63650: using guessed type __int64 qword_140C63650;

