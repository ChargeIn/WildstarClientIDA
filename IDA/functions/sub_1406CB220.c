#include "../winhttp.h"

//----- (00000001406CB220) ----------------------------------------------------
__int64 __fastcall sub_1406CB220(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v6; // edx
	int v7; // eax

	if (*(char*)(a1 + 28) >= 0 || a2)
		return sub_1400D2120(a1, a2, a3, a4);
	v6 = *a3;
	*(_DWORD*)(a1 + 904) = *a3;
	*(_DWORD*)(a1 + 908) = a3[1];
	*(_DWORD*)(a1 + 864) = v6;
	*(_DWORD*)(a1 + 868) = *(_DWORD*)(a1 + 908);
	v7 = sub_14018CDF0();
	*(_DWORD*)(a1 + 932) = v7;
	*(_DWORD*)(a1 + 912) = v7;
	return (unsigned int)sub_1400C3D70(a1 + 1024, a3) == 9;
}

