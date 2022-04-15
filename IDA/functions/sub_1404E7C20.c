#include "../winhttp.h"

//----- (00000001404E7C20) ----------------------------------------------------
__int64 __fastcall sub_1404E7C20(__int64 a1)
{
	int v3; // r8d
	int v4; // ecx
	__int64 v5; // rax

	if (qword_140C658D0)
	{
		v3 = *(_DWORD*)(qword_140C635F0 + 5896);
		if (v3)
		{
			if (v3 == 1)
				v4 = 8;
			else
				v4 = 19;
		}
		else
		{
			v4 = 6;
		}
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v4;
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

