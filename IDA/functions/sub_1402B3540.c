#include "../winhttp.h"

//----- (00000001402B3540) ----------------------------------------------------
__int64 __fastcall sub_1402B3540(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // r11
	int v6; // eax
	__int64 v7; // rcx
	unsigned __int64 i; // rax

	v4 = *(_QWORD*)(a1 + 48);
	if (a2 < v4)
	{
		v6 = *(_DWORD*)(a1 + 68);
		v7 = 0i64;
		if (v6 >= 2)
		{
			if (v6 <= 3)
			{
				if (!a4 && a3 < *(_QWORD*)(a1 + 40))
					return *(_QWORD*)(a1 + 72) + 48 * (a2 + a3 * v4);
			}
			else if (v6 == 4 && !a3)
			{
				for (i = *(_QWORD*)(a1 + 32); a2; --a2)
				{
					v7 += i;
					if (i > 1)
						i >>= 1;
				}
				if (a4 < i)
					return *(_QWORD*)(a1 + 72) + 48 * (a4 + v7);
			}
		}
	}
	return 0i64;
}

