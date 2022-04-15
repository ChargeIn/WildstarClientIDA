#include "../winhttp.h"

//----- (00000001407D5910) ----------------------------------------------------
__int64 __fastcall sub_1407D5910(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_OWORD*)a2 = *(_OWORD*)(a1 + 2624);
	*(_DWORD*)(a2 + 24) = *(_DWORD*)(a1 + 2648);
	*(_DWORD*)(a2 + 28) = *(_DWORD*)(a1 + 2652);
	*(_DWORD*)(a2 + 32) = *(_DWORD*)(a1 + 2656);
	*(_DWORD*)(a2 + 36) = *(_DWORD*)(a1 + 2660);
	*(_DWORD*)(a2 + 60) = *(_DWORD*)(a1 + 2684);
	*(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 2688);
	*(_DWORD*)(a2 + 68) = *(_DWORD*)(a1 + 2692);
	*(_DWORD*)(a2 + 72) = *(_DWORD*)(a1 + 2696);
	*(_DWORD*)(a2 + 76) = *(_DWORD*)(a1 + 2700);
	*(_DWORD*)(a2 + 80) = *(_DWORD*)(a1 + 2704);
	result = *(unsigned int*)(a1 + 2708);
	*(_DWORD*)(a2 + 84) = result;
	return result;
}

