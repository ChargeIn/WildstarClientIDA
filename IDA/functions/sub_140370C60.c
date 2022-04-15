#include "../winhttp.h"

//----- (0000000140370C60) ----------------------------------------------------
_QWORD* __fastcall sub_140370C60(__int64 a1)
{
	return sub_140370B30(
		(__int64*)a1,
		**(_QWORD**)(a1 + 8),
		*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 8) + 8i64),
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64));
}

