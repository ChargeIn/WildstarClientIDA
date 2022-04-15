#include "../winhttp.h"

//----- (000000014032ABB0) ----------------------------------------------------
__int64 __fastcall sub_14032ABB0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
	unsigned __int64 i; // rbx

	sub_140312840(*(_QWORD*)(a1 + 16), a2);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, 0i64);
	for (i = 0i64; i < a5; ++i)
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)(*(_QWORD*)(a4 + 8 * i) + 64i64) + 24i64))(
			*(_QWORD*)(*(_QWORD*)(a4 + 8 * i) + 48i64),
			*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a4 + 8 * i) + 64i64) + 4i64),
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 8 * i) + 64i64) + 32i64));
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

