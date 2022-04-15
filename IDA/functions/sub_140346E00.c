#include "../winhttp.h"

//----- (0000000140346E00) ----------------------------------------------------
__int64 __fastcall sub_140346E00(volatile signed __int32* a1)
{
	unsigned __int32 v2; // ebx

	v2 = _InterlockedDecrement(a1 + 2);
	if (!v2)
	{
		(*(void(__fastcall**)(volatile signed __int32*))(*(_QWORD*)a1 + 56i64))(a1);
		if (!_InterlockedDecrement(a1 + 3))
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 88i64))(a1, 1i64);
	}
	return v2;
}

