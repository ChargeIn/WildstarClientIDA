#include "../winhttp.h"

//----- (00000001403AD540) ----------------------------------------------------
__int64 __fastcall sub_1403AD540(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	int v9; // eax

	if (a3)
	{
		if (*(_QWORD*)(a3 + 24) && !sub_140466B90(a2, a3))
			return 181i64;
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 112) + 272i64) & 0x10) == 0)
		{
			v9 = sub_14045A950(a2, *(_DWORD*)(a3 + 8));
			if (a4 || v9 == 2)
			{
				if (*(int*)(*(_QWORD*)(a1 + 112) + 268i64) >= 0)
					return 99i64;
			}
			else
			{
				if (!v9)
				{
					if ((*(_BYTE*)(*(_QWORD*)(a1 + 112) + 272i64) & 1) == 0)
						return 99i64;
					return 0i64;
				}
				if (v9 == 1 && (*(_DWORD*)(*(_QWORD*)(a1 + 112) + 268i64) & 0x4000000) != 0)
					return 99i64;
			}
		}
	}
	return 0i64;
}

