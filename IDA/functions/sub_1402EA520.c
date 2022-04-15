#include "../winhttp.h"

//----- (00000001402EA520) ----------------------------------------------------
__int64 __fastcall sub_1402EA520(__int64 a1)
{
	if ((*(_DWORD*)(a1 + 64))-- != 1)
		return *(unsigned int*)(a1 + 64);
	sub_1402ECD70(*(_QWORD*)(a1 + 56), a1);
	return *(unsigned int*)(a1 + 64);
}

