#include "../winhttp.h"

//----- (00000001404E7C90) ----------------------------------------------------
__int64 __fastcall sub_1404E7C90(__int64 a1)
{
	int v3; // ecx
	__int64 v4; // rax

	if (qword_140C658D0)
	{
		v3 = 7;
		v4 = *(_QWORD*)(a1 + 16);
		if (*(_DWORD*)(qword_140C635F0 + 5896))
			v3 = 19;
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)v3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C658D0: using guessed type __int64 qword_140C658D0;

