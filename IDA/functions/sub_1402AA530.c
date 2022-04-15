#include "../winhttp.h"

//----- (00000001402AA530) ----------------------------------------------------
__int64 __fastcall sub_1402AA530(__int64 a1, int a2)
{
	__int64 v4; // rbx
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64(__fastcall * *v8)(); // [rsp+48h] [rbp-79h] BYREF
	const wchar_t* v9; // [rsp+50h] [rbp-71h]
	LPVOID lpTlsValue; // [rsp+58h] [rbp-69h]
	__int64 v11; // [rsp+60h] [rbp-61h]
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-59h] BYREF
	__int64 v13; // [rsp+70h] [rbp-51h]
	LPVOID Value; // [rsp+78h] [rbp-49h]
	__int128 v15; // [rsp+80h] [rbp-41h] BYREF
	LPVOID v16[2]; // [rsp+90h] [rbp-31h]
	__int64 v17[4]; // [rsp+A8h] [rbp-19h] BYREF
	__int64 v18[4]; // [rsp+C8h] [rbp+7h] BYREF
	__int128 v19[3]; // [rsp+E8h] [rbp+27h] BYREF
	__int64 v20; // [rsp+128h] [rbp+67h] BYREF

	if (a2 >= 0)
	{
		*(_DWORD*)(a1 + 80) = a2;
		return (unsigned int)a2;
	}
	else
	{
		v13 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v17[0] = (__int64)TlsValue;
		v17[1] = v13;
		*(_QWORD*)&v15 = &off_140B5E648;
		*((_QWORD*)&v15 + 1) = L"Result";
		v17[2] = (__int64)Value;
		v16[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v15);
		v4 = *(_QWORD*)(a1 + 32);
		LODWORD(v16[1]) = a2;
		v8 = &off_140B5E648;
		*(_QWORD*)&v15 = &off_140B5E640;
		v19[1] = *(_OWORD*)v16;
		v9 = L"FileName";
		v19[0] = v15;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v8);
		v5 = *(_QWORD*)(a1 + 32);
		v18[1] = (__int64)v9;
		v8 = &off_140B5E638;
		v11 = v4;
		v20 = 0x141DE6CB0i64;
		v18[0] = (__int64)&off_140B5E638;
		v18[3] = v4;
		v18[2] = (__int64)lpTlsValue;
		LODWORD(v4) = sub_1401971E0(&dword_140C8A528, 14, &v20, v5, v18, v19, v17);
		v8 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v15 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v16[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v4)
			DebugBreak();
		v6 = *(_QWORD*)(a1 + 56);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
		*(_DWORD*)(a1 + 80) = a2;
		return (unsigned int)a2;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A528: using guessed type _DWORD dword_140C8A528;

