#include "../winhttp.h"

//----- (0000000140863820) ----------------------------------------------------
__int64 __fastcall sub_140863820(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = a2;
	if (a2 && (*(_BYTE*)(a2 + 91) & 4) != 0)
	{
		*(_BYTE*)(a1 + 776) |= 1u;
		return sub_1408524D0(a2, 0i64, a1 + 796);
	}
	else
	{
		*(_BYTE*)(a1 + 776) &= ~1u;
		*(_DWORD*)(a1 + 796) = 1056964608;
		*(_DWORD*)(a1 + 800) = 1065353216;
		*(_DWORD*)(a1 + 804) = 1120403456;
		*(_BYTE*)(a1 + 808) = 0;
	}
	return result;
}

