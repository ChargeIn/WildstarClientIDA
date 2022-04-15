#include "../winhttp.h"

//----- (000000014006A920) ----------------------------------------------------
__int64 __fastcall sub_14006A920(__int64 a1, int* a2)
{
	int v2; // r8d
	__int64 result; // rax

	if (*a2 != 12)
	{
		v2 = *(_DWORD*)(a1 + 60) + 1;
		if (v2 > *(unsigned __int8*)(*(_QWORD*)a1 + 115i64))
		{
			if (v2 >= 250)
				sub_140062CF0(*(_QWORD*)(a1 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
			*(_BYTE*)(*(_QWORD*)a1 + 115i64) = v2;
		}
		return sub_14006A7E0(a1, a2, (*(_DWORD*)(a1 + 60))++);
	}
	return result;
}

