#include "../winhttp.h"

//----- (00000001405BEDA0) ----------------------------------------------------
__int64 __fastcall sub_1405BEDA0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8

	v2 = *(unsigned int*)(a2 + 32);
	if ((_DWORD)v2)
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(qword_140C65898 + 120),
				v2,
				0i64,
				0i64,
				0);
	else
		return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

