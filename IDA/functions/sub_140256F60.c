#include "../winhttp.h"

//----- (0000000140256F60) ----------------------------------------------------
__int64 __fastcall sub_140256F60(__int64 a1)
{
	_OWORD* v2; // rax
	__int64 v3; // rax
	__int64 result; // rax
	int v5; // [rsp+30h] [rbp-28h] BYREF
	__int64 v6; // [rsp+38h] [rbp-20h]
	int v7; // [rsp+44h] [rbp-14h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v6 = *(_QWORD*)(a1 + 1728);
	v5 = 1;
	v7 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v5,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 1i64);
	v6 = *(_QWORD*)(a1 + 1720);
	v5 = 1;
	v7 = 0;
	(*(void(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v5, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 0i64, 0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1720),
		0i64,
		*(_QWORD*)(a1 + 2056));
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2288),
		0i64);
	v2 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			48i64,
			0i64,
			0i64,
			0);
	if (v2)
	{
		*v2 = *(_OWORD*)(a1 + 544);
		v2[1] = *(_OWORD*)(a1 + 560);
		v2[2] = *(_OWORD*)(a1 + 592);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		a1 + 1736,
		a1 + 1744,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v3 = *(_QWORD*)(a1 + 1656);
	*(_QWORD*)(a1 + 2360) = 0i64;
	*(_QWORD*)(a1 + 2352) = v3;
	*(_QWORD*)(a1 + 2368) = 0i64;
	*(_QWORD*)(a1 + 2376) = 0i64;
	result = *(_QWORD*)(a1 + 1720);
	*(_QWORD*)(a1 + 2392) = 0i64;
	*(_DWORD*)(a1 + 2400) = 3;
	*(_DWORD*)(a1 + 2404) = 1;
	*(_DWORD*)(a1 + 2408) = 2;
	*(_DWORD*)(a1 + 2412) = 2;
	*(_QWORD*)(a1 + 2384) = result;
	*(_QWORD*)(a1 + 2416) = 2i64;
	*(_QWORD*)(a1 + 2424) = 0i64;
	*(_DWORD*)(a1 + 2432) = 2;
	*(_DWORD*)(a1 + 148) = 13;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

