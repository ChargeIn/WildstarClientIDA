#include "../winhttp.h"

//----- (00000001407E1420) ----------------------------------------------------
__int64 __fastcall sub_1407E1420(
	__int64(__fastcall* a1)(unsigned __int64, __int64, __int64, __int64),
	unsigned __int64 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5)
{
	int v10; // ebx
	unsigned int v11; // esi

	if (a2 && a3)
	{
		sub_1407DDFA8(a2);
		v10 = sub_1407E3974(a2);
		v11 = a1(a2, a3, a4, a5);
		sub_1407E393C(v10, a2);
		sub_1407DE044(a2);
		return v11;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

