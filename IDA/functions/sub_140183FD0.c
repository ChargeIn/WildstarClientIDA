#include "../winhttp.h"

//----- (0000000140183FD0) ----------------------------------------------------
void __fastcall sub_140183FD0(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // r14d
	unsigned int v6; // r15d
	unsigned int v7; // r12d
	unsigned int v8; // r13d
	int v9; // ebx
	int v10; // ebx
	int v11; // ebx
	int v12; // ebx
	__int64 v13; // [rsp+28h] [rbp-79h]
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-49h] BYREF
	__int64 v15; // [rsp+60h] [rbp-41h]
	LPVOID Value; // [rsp+68h] [rbp-39h]
	__int64(__fastcall * *v17)(); // [rsp+78h] [rbp-29h] BYREF
	__int64 v18; // [rsp+80h] [rbp-21h]
	LPVOID v19; // [rsp+88h] [rbp-19h]
	__int128 v20; // [rsp+98h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A8h] [rbp+7h]
	__int128 v22; // [rsp+B8h] [rbp+17h] BYREF
	__int128 v23; // [rsp+C8h] [rbp+27h]
	__int64 v24; // [rsp+108h] [rbp+67h] BYREF

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		v2 = (_QWORD*)(a1 + 1104);
		v3 = *(_QWORD*)(a1 + 1104);
		if (v3)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 8i64))(v3, 0i64);
			*v2 = 0i64;
		}
		v4 = *(_QWORD*)(a1 + 1120);
		if (v4)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 8i64))(v4, 0i64);
			*(_QWORD*)(a1 + 1120) = 0i64;
		}
		v5 = *(_DWORD*)(a1 + 1080);
		v6 = *(_DWORD*)(a1 + 1084);
		if (v5 - 1 > 0x1FFF)
			v5 = 1;
		if (v6 - 1 > 0x1FFF)
			v6 = 1;
		v7 = v5;
		if (v5 - 1 > 0x1FFF)
			v7 = 1;
		v8 = v6;
		if (v6 - 1 > 0x1FFF)
			v8 = 1;
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v7,
			v8,
			1i64,
			0,
			5,
			1,
			256,
			0,
			v2);
		if (v9 < 0)
		{
			TlsValue = &off_140B5E648;
			v15 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = TlsValue;
			v18 = v15;
			*(_QWORD*)&v20 = &off_140B5E648;
			v19 = Value;
			*((_QWORD*)&v20 + 1) = L"Result";
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v20);
			LODWORD(lpTlsValue[1]) = v9;
			*(_QWORD*)&v20 = &off_140B5E640;
			v23 = *(_OWORD*)lpTlsValue;
			v24 = 0x141D385E0i64;
			v22 = v20;
			v10 = sub_140197770(13, &v24, v7, v8, &v22, &v17);
			*(_QWORD*)&v20 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v10)
				DebugBreak();
		}
		v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v5,
			v6,
			1i64,
			0,
			3,
			1,
			256,
			0,
			a1 + 1120);
		if (v11 < 0)
		{
			TlsValue = &off_140B5E648;
			v15 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = TlsValue;
			v18 = v15;
			*(_QWORD*)&v20 = &off_140B5E648;
			*((_QWORD*)&v20 + 1) = L"Result";
			v19 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v20);
			*(_QWORD*)&v20 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v11;
			v24 = 0x141D386A0i64;
			v22 = v20;
			v23 = *(_OWORD*)lpTlsValue;
			LODWORD(v13) = v6;
			v12 = sub_1401971E0(&dword_140C8A160, 13, &v24, v5, v13, &v22, &v17);
			*(_QWORD*)&v20 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v12)
				DebugBreak();
		}
		*(_DWORD*)(a1 + 1024) = 1;
	}
}
// 1401842FB: variable 'v13' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A160: using guessed type _DWORD dword_140C8A160;

