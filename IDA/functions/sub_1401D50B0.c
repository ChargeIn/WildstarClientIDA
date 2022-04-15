#include "../winhttp.h"

//----- (00000001401D50B0) ----------------------------------------------------
__int64 __fastcall sub_1401D50B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	return (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64)
		+ 96i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64),
			*(unsigned int*)(a1 + 16),
			a2,
			a3,
			a4);
}

