#include "../winhttp.h"

//----- (0000000140170650) ----------------------------------------------------
__int64 __fastcall sub_140170650(__int64 a1, int a2, int* a3)
{
	int v6; // eax
	int v8; // [rsp+50h] [rbp+8h] BYREF

	if (*(int*)(a1 + 1380) >= 0 && !a2)
		*(_DWORD*)(a1 + 1380) = -1;
	if (*(_DWORD*)(a1 + 1572) == -1
		|| *(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)
		|| (v6 = a3[1], v8 = 0, sub_1400D4070(a1, 0x14u, (char*)a1, "ii>b", *a3, v6, &v8), !v8))
	{
		*(_DWORD*)(a1 + 1572) = -1;
		return sub_1400D2550(a1, a2, a3);
	}
	else
	{
		sub_1400D2550(a1, a2, a3);
		return 0i64;
	}
}

