#include "../winhttp.h"

//----- (0000000140255A10) ----------------------------------------------------
__int64 __fastcall sub_140255A10(_QWORD* a1, int a2)
{
	__int64 v2; // rax
	int v5; // ebx
	int v6; // ebx
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // r8
	int v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+48h] [rbp-20h]
	int v13; // [rsp+54h] [rbp-14h]

	v2 = a1[206];
	v11 = 1;
	v12 = v2;
	v13 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v11,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 291);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 15i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 1i64, 0i64);
	if (!a2)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			4i64,
			5i64);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			2i64,
			6i64,
			2i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			1i64,
			2);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			a1[269],
			1i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a1[207],
			0i64,
			0i64);
		v8 = a1[211];
		goto LABEL_11;
	}
	v5 = a2 - 1;
	if (!v5)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			4i64,
			5i64);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			6i64,
			6i64,
			2i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			1i64,
			2);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			a1[269],
			3i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a1[207],
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			a1[211]);
		v9 = a1[216];
		goto LABEL_12;
	}
	v6 = v5 - 1;
	if (!v6)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			1i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			4i64,
			4i64,
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			0i64,
			2);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			a1[269],
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a1[208],
			0i64,
			0i64);
		v8 = a1[213];
		goto LABEL_11;
	}
	v7 = v6 - 1;
	if (!v7)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			4i64,
			5i64);
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			2i64,
			2i64,
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			0i64,
			2);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			a1[269],
			5i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a1[207],
			0i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			a1[211]);
		v9 = a1[216];
	LABEL_12:
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(qword_140C65670, 2i64, v9);
		goto LABEL_13;
	}
	if (v7 == 1)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, int, int, _DWORD))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			4i64,
			5i64,
			0i64,
			1,
			5,
			0);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			128i64,
			128i64,
			128i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			1i64,
			2);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			a1[269],
			1i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			a1[207],
			0i64,
			0i64);
		v8 = a1[207];
	LABEL_11:
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(qword_140C65670, 1i64, v8);
		v9 = 0i64;
		goto LABEL_12;
	}
LABEL_13:
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		3i64,
		a1[213]);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD*, _QWORD*, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		a1 + 217,
		a1 + 218,
		0i64);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140C65670: using guessed type __int64 qword_140C65670;

