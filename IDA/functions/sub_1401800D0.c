#include "../winhttp.h"

//----- (00000001401800D0) ----------------------------------------------------
__int64 __fastcall sub_1401800D0(unsigned __int64* a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	unsigned __int64 v5; // rcx
	int v9; // ebx
	int v10; // ebx
	_QWORD* v11; // rcx
	__int64 v13; // [rsp+28h] [rbp-79h]
	__int128 v14; // [rsp+58h] [rbp-49h] BYREF
	LPVOID v15; // [rsp+68h] [rbp-39h]
	__int128 TlsValue; // [rsp+78h] [rbp-29h] BYREF
	LPVOID Value; // [rsp+88h] [rbp-19h]
	__int128 v18; // [rsp+98h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A8h] [rbp+7h]
	__int128 v20[2]; // [rsp+B8h] [rbp+17h] BYREF
	__int64 v21; // [rsp+108h] [rbp+67h] BYREF

	v5 = *a1;
	if (v5)
	{
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v5 + 8i64))(v5);
		*a1 = 0i64;
	}
	v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, unsigned __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		a3,
		a4,
		1i64,
		0,
		3,
		1,
		256,
		0,
		a1);
	if (v9 < 0)
	{
		*(_QWORD*)&TlsValue = &off_140B5E648;
		*((_QWORD*)&TlsValue + 1) = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = TlsValue;
		*(_QWORD*)&v18 = &off_140B5E648;
		*((_QWORD*)&v18 + 1) = L"Result";
		v15 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v18);
		LODWORD(lpTlsValue[1]) = v9;
		*(_QWORD*)&v18 = &off_140B5E640;
		v20[1] = *(_OWORD*)lpTlsValue;
		v21 = 0x141D36D50i64;
		v20[0] = v18;
		LODWORD(v13) = a4;
		v10 = sub_1401971E0(&dword_140C8A15C, 13, &v21, a3, v13, v20, &v14);
		*(_QWORD*)&v18 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v10)
			DebugBreak();
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	*((_QWORD*)&TlsValue + 1) = *a1;
	LODWORD(TlsValue) = 1;
	HIDWORD(Value) = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&TlsValue,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v14 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v14);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v11 = *(_QWORD**)a2;
	*(_QWORD*)&v14 = 0i64;
	TlsValue = xmmword_140B7B240;
	*((_QWORD*)&v14 + 1) = __PAIR64__(a4, a3);
	if (v11)
		sub_140103CF0(
			v11,
			(unsigned int*)&v14,
			(__m128*) & TlsValue,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a2 + 8)) * *(float*)(a2 + 12)));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
}
// 140180235: variable 'v13' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C8A15C: using guessed type _DWORD dword_140C8A15C;

