#include "../winhttp.h"

//----- (00000001406DCE30) ----------------------------------------------------
__int64 __fastcall sub_1406DCE30(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v6; // ecx
	__int64 v7; // rbx
	int v8; // eax

	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D2120(a1, a2, a3, a4);
	v6 = *a3;
	v7 = a2;
	*(_DWORD*)(a1 + 904) = *a3;
	*(_DWORD*)(a1 + 908) = a3[1];
	*(_DWORD*)(a1 + 8i64 * a2 + 864) = v6;
	*(_DWORD*)(a1 + 8i64 * a2 + 868) = *(_DWORD*)(a1 + 908);
	v8 = sub_14018CDF0();
	*(_DWORD*)(a1 + 932) = v8;
	*(_DWORD*)(a1 + 4 * v7 + 912) = v8;
	*(_BYTE*)(a1 + 2064) = 1;
	return 0i64;
}

