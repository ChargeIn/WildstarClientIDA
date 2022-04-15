#include "../winhttp.h"

//----- (0000000140325650) ----------------------------------------------------
_BOOL8 __fastcall sub_140325650(unsigned int* a1, __int64 a2)
{
	return *a1 == *(_DWORD*)a2
		&& !(unsigned int)sub_1407E6AF0(*((unsigned __int64**)a1 + 1), *(_QWORD*)(a2 + 8), 4i64 * *a1);
}

