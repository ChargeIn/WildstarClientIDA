#include "../winhttp.h"

//----- (00000001402579F0) ----------------------------------------------------
__int64 __fastcall sub_1402579F0(__int64 a1)
{
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 56i64))(a1, 20i64))
		sub_140255A10((_QWORD*)a1, 4);
	*(_QWORD*)(a1 + 2352) = *(_QWORD*)(a1 + 1648);
	*(_QWORD*)(a1 + 2360) = 0i64;
	*(_QWORD*)(a1 + 2368) = 0i64;
	*(_QWORD*)(a1 + 2376) = 0i64;
	*(_QWORD*)(a1 + 2392) = 15i64;
	*(_QWORD*)(a1 + 2384) = 0i64;
	*(_QWORD*)(a1 + 2400) = 7i64;
	*(_QWORD*)(a1 + 2412) = 0i64;
	*(_DWORD*)(a1 + 2408) = 0;
	*(_QWORD*)(a1 + 2424) = 0i64;
	*(_DWORD*)(a1 + 2420) = 0;
	*(_DWORD*)(a1 + 2432) = 7;
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
}
// 140C65670: using guessed type __int64 qword_140C65670;

