#include "../winhttp.h"

//----- (000000014035F590) ----------------------------------------------------
__int64 __fastcall sub_14035F590(__int64 a1)
{
	__int64 v2; // rdi
	_QWORD* v3; // rbx

	if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 56i64))(qword_140C65688, 7i64)
		|| !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 56i64))(qword_140C65688, 6i64))
	{
		v2 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65688 + 192i64))();
		v3 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 208i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			*v3,
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64),
			3i64);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			5i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			*(_QWORD*)qword_140C65670,
			v2 + 88,
			v2 + 96,
			v2 + 96);
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

