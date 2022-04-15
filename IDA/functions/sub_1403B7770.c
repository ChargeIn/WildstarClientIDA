#include "../winhttp.h"

//----- (00000001403B7770) ----------------------------------------------------
__int64 __fastcall sub_1403B7770(__int64 a1, __int64 a2)
{
	unsigned int v2; // edx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = *(_DWORD*)(a2 + 8);
	if (v2)
		sub_1403A6770(a1, v2);
	v4 = *(_QWORD*)(a1 + 120);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 + 5640);
		if (v5)
		{
			while (*(_DWORD*)(v5 + 4) != 3 || *(_DWORD*)(v5 + 12) != 777)
			{
				v5 = *(_QWORD*)(v5 + 136);
				if (!v5)
					return 0i64;
			}
			sub_1407A0390(v5);
		}
	}
	return 0i64;
}

