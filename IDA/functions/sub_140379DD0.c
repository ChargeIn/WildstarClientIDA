#include "../winhttp.h"

//----- (0000000140379DD0) ----------------------------------------------------
__int64 __fastcall sub_140379DD0(__int64 a1, float a2)
{
	__int64 result; // rax

	if (a2 != *(float*)(a1 + 124))
	{
		*(float*)(a1 + 124) = a2;
		return sub_140378B40(a1);
	}
	return result;
}

