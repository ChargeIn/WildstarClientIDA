#include "../winhttp.h"

//----- (0000000140345E50) ----------------------------------------------------
__int64 __fastcall sub_140345E50(__int64 a1, int a2, __int64 a3)
{
	int v5; // [rsp+48h] [rbp+10h] BYREF

	v5 = a2;
	if (a3 && *(_QWORD*)a3)
	{
		if ((unsigned int)sub_140828280(0, &v5, 1u, (__int64)sub_1403451B0, a3) != 1)
		{
			(*(void(__fastcall**)(__int64, _QWORD))a3)(2147500037i64, *(_QWORD*)(a3 + 8));
			return 2147500037i64;
		}
	}
	else if ((unsigned int)sub_1408281C0(0, &v5, 1u) != 1)
	{
		return 2147500037i64;
	}
	return 0i64;
}

