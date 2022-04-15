#include "../winhttp.h"

//----- (00000001406F6830) ----------------------------------------------------
__int64 __fastcall sub_1406F6830(__int64 a1)
{
	unsigned __int64* v2; // rdx
	unsigned __int64 v3; // r8
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]

	v2 = (unsigned __int64*)sub_14018F0E0(&v5, *(unsigned __int16**)(qword_140C635F0 + 5752))[1];
	if (v2)
	{
		v3 = -1i64;
		do
			++v3;
		while (*((_BYTE*)v2 + v3));
		sub_140058710(a1, v2, v3);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v6)
		sub_14018B900(v6, 0);
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

