#include "../winhttp.h"

//----- (0000000140506500) ----------------------------------------------------
__int64 __fastcall sub_140506500(__int64 a1)
{
	int v1; // eax

	v1 = *(_DWORD*)(a1 + 704);
	if ((v1 & 2) != 0)
		return 2i64;
	else
		return v1 & 1;
}

