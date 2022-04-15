#include "../winhttp.h"

//----- (0000000140384480) ----------------------------------------------------
__int64 __fastcall sub_140384480(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if ((*(_DWORD*)(*(_QWORD*)a1 + 132i64) & 0x100000) != 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 320i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16i64) + 504i64));
		(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16i64) + 120i64),
			4i64,
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 160) + 32i64),
			4i64,
			1i64);
	}
	else
	{
		if (!*(_DWORD*)(a1 + 168))
			goto LABEL_6;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 320i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 176) + 32i64));
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16i64) + 120i64),
			4i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 160) + 32i64),
			4i64);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 656i64))(qword_140C65670, 3i64);
LABEL_6:
	if (*(_DWORD*)(a1 + 1000))
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(qword_140C65670, a2, a4);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 992));
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 976),
			5i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
			+ 656i64))(
				qword_140C65670,
				3i64,
				0i64,
				*(unsigned int*)(a1 + 1000),
				0,
				*(_DWORD*)(a1 + 984),
				0,
				1);
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

