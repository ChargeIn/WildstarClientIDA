#include "../winhttp.h"

//----- (0000000140553790) ----------------------------------------------------
__int64 __fastcall sub_140553790(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax
	__int64 v6; // rcx
	int v7; // eax
	unsigned int v8; // ebx
	__int64 i; // rsi
	unsigned int v10; // eax
	unsigned int v11; // ebx

	v2 = *(_DWORD*)(a1 + 16);
	if (a2 == v2 || a2 > v2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 8i64 * a2 + 24);
	if (!*(_DWORD*)(v6 + 4))
		return 1i64;
	v7 = *(_DWORD*)(v6 + 8);
	if ((v7 & 2) != 0)
	{
		v8 = 0;
		if (a2)
		{
			for (i = a1 + 24; ; i += 8i64)
			{
				v10 = *(_DWORD*)(a1 + 16);
				if (v8 != v10
					&& v8 <= v10
					&& *(_QWORD*)i
					&& (*(_DWORD*)(*(_QWORD*)i + 8i64) & 0x20) == 0
					&& !(unsigned int)sub_1405510D0(a1, v8))
				{
					break;
				}
				if (++v8 >= a2)
					return 1i64;
			}
			return 0i64;
		}
	}
	else if ((v7 & 1) != 0)
	{
		v11 = a2 - 1;
		if ((int)(a2 - 1) >= 0)
		{
			while (!(unsigned int)sub_1405510D0(a1, v11) && (unsigned int)sub_140553790(a1, v11)
				|| (unsigned int)sub_1405510D0(a1, v11))
			{
				if ((--v11 & 0x80000000) != 0)
					return 1i64;
			}
			return 0i64;
		}
	}
	return 1i64;
}

