#include "../winhttp.h"

//----- (0000000140857210) ----------------------------------------------------
__int64 __fastcall sub_140857210(__int64 a1, __int64 a2)
{
	*(_QWORD*)(a1 + 232) = a2;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
}

