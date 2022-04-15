#include "../winhttp.h"

//----- (000000014091BA50) ----------------------------------------------------
__int64 __fastcall sub_14091BA50(__int64 a1, unsigned int a2)
{
	if ((!*(_DWORD*)(a1 + 316) || a2 <= 0x7F) && a2 <= 0xFF)
		return *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + a2);
	return a2;
}

