#include "../winhttp.h"

//----- (000000014088C230) ----------------------------------------------------
__int64 __fastcall sub_14088C230(__int64 a1)
{
	__int64 v1; // rbx

	if (!*(_QWORD*)(a1 + 16))
		return *(_QWORD*)(a1 + 112);
	v1 = *(_QWORD*)(a1 + 112);
	return v1 + sub_14088C230();
}

