#include "../winhttp.h"

//----- (00000001401DCD30) ----------------------------------------------------
_DWORD* __fastcall sub_1401DCD30(_QWORD** a1)
{
	_BYTE* v2; // rax
	_BYTE* v3; // rax
	_DWORD* v4; // rax
	_DWORD* result; // rax
	char v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = (_BYTE*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, char*, __int64))(*a1[8] + 72i64))(a1[8], 0i64, &v6, 2i64);
	if (v2)
	{
		*v2 = -1;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1[8] + 80i64))(a1[8], 0i64);
	}
	v3 = (_BYTE*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, char*, __int64))(*a1[9] + 72i64))(a1[9], 0i64, &v6, 2i64);
	if (v3)
	{
		*v3 = 0;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1[9] + 80i64))(a1[9], 0i64);
	}
	v4 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, char*, __int64))(*a1[10] + 72i64))(
		a1[10],
		0i64,
		&v6,
		2i64);
	if (v4)
	{
		*v4 = -16777216;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1[10] + 80i64))(a1[10], 0i64);
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, char*, __int64))(*a1[11] + 72i64))(
		a1[11],
		0i64,
		&v6,
		2i64);
	if (result)
	{
		*result = -8421377;
		return (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1[11] + 80i64))(a1[11], 0i64);
	}
	return result;
}

