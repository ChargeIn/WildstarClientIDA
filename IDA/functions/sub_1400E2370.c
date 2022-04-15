#include "../winhttp.h"

//----- (00000001400E2370) ----------------------------------------------------
__int64 __fastcall sub_1400E2370(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 v6; // [rsp+50h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 1832)
		|| (*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65848 + 32i64))(qword_140C65848, &v6) < 0)
	{
		return 0i64;
	}
	(*(void(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)v6 + 16i64))(
		v6,
		L"External_Source",
		a2,
		0i64);
	v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 1832)
		+ 24i64))(
			*(_QWORD*)(a1 + 1832),
			*(_QWORD*)(a1 + 1840),
			0i64,
			0i64,
			0i64,
			0i64,
			v6);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return v4;
}
// 140A17200: using guessed type wchar_t aExternalSource[16];
// 140C65848: using guessed type __int64 qword_140C65848;

