#include "../winhttp.h"

//----- (00000001401807E0) ----------------------------------------------------
void __fastcall sub_1401807E0(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	float v5; // xmm1_4
	unsigned int v6; // r14d
	unsigned int v7; // r15d
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	__int64 v11; // r9
	int v12; // ebx
	__int64 v13; // [rsp+20h] [rbp-79h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-49h] BYREF
	__int64 v15; // [rsp+58h] [rbp-41h]
	LPVOID Value; // [rsp+60h] [rbp-39h]
	__int64(__fastcall * *v17)(); // [rsp+70h] [rbp-29h] BYREF
	__int64 v18; // [rsp+78h] [rbp-21h]
	LPVOID v19; // [rsp+80h] [rbp-19h]
	__int128 v20; // [rsp+90h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A0h] [rbp+7h]
	__int128 v22; // [rsp+B0h] [rbp+17h] BYREF
	__int128 v23; // [rsp+C0h] [rbp+27h]
	__int64 v24; // [rsp+100h] [rbp+67h] BYREF

	v1 = (_QWORD*)(a1 + 2096);
	v3 = *(_QWORD*)(a1 + 2096);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*v1 = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 2112);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 2112) = 0i64;
	}
	v5 = *(float*)(a1 + 1040);
	v6 = (int)(float)((float)*(int*)(a1 + 1048) * v5);
	if (v6 - 1 > 0x1FFF)
		v6 = 1;
	v7 = (int)(float)((float)*(int*)(a1 + 1052) * v5);
	if (v7 - 1 > 0x1FFF)
		v7 = 1;
	v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v6,
		v7,
		1i64,
		0,
		5,
		1,
		256,
		0,
		v1);
	if (v8 < 0)
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
		LODWORD(lpTlsValue[1]) = v8;
		*(_QWORD*)&v20 = &off_140B5E640;
		v23 = *(_OWORD*)lpTlsValue;
		v24 = 0x141D36CA0i64;
		v22 = v20;
		v9 = sub_140197770(13, &v24, v6, v7, &v22, &v17);
		*(_QWORD*)&v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v9)
			DebugBreak();
	}
	v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		*(unsigned int*)(a1 + 1048),
		*(unsigned int*)(a1 + 1052),
		1i64,
		0,
		5,
		0,
		256,
		0,
		a1 + 2112);
	if (v10 < 0)
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
		v11 = *(unsigned int*)(a1 + 1048);
		LODWORD(lpTlsValue[1]) = v10;
		*(_QWORD*)&v20 = &off_140B5E640;
		v23 = *(_OWORD*)lpTlsValue;
		v24 = 0x141D36DE0i64;
		v22 = v20;
		LODWORD(v13) = *(_DWORD*)(a1 + 1052);
		v12 = sub_1401971E0(&dword_140C8A158, 13, &v24, v11, v13, &v22, &v17);
		*(_QWORD*)&v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v12)
			DebugBreak();
	}
	*(_DWORD*)(a1 + 1024) = 1;
}
// 140180B05: variable 'v13' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A158: using guessed type _DWORD dword_140C8A158;

