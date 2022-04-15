#include "../winhttp.h"

//----- (00000001401A0B30) ----------------------------------------------------
void __fastcall sub_1401A0B30(__int64 a1)
{
	int* v2; // rcx
	int v3; // eax
	DWORD LastError; // eax
	DWORD v5; // ebx
	int v6; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-29h] BYREF
	__int64 v8; // [rsp+28h] [rbp-21h]
	LPVOID Value; // [rsp+30h] [rbp-19h]
	__int64 v10[4]; // [rsp+40h] [rbp-9h] BYREF
	__int128 v11; // [rsp+60h] [rbp+17h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+70h] [rbp+27h]
	__int128 v13[2]; // [rsp+80h] [rbp+37h] BYREF
	__int64 v14; // [rsp+B0h] [rbp+67h] BYREF

	if (WaitForSingleObject(*(HANDLE*)(a1 + 24), 0xFFFFFFFF) != -1)
	{
		v2 = *(int**)(a1 + 32);
		if (*v2)
		{
			v3 = *v2 - 1;
			*v2 = v3;
			if (v3)
			{
			LABEL_7:
				ReleaseMutex(*(HANDLE*)(a1 + 24));
				return;
			}
		}
		else
		{
			SetEvent(*(HANDLE*)(a1 + 40));
		}
		SetEvent(*(HANDLE*)(a1 + 48));
		goto LABEL_7;
	}
	TlsValue = &off_140B5E648;
	v8 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v10[0] = (__int64)TlsValue;
	v10[1] = v8;
	v10[2] = (__int64)Value;
	LastError = GetLastError();
	*(_QWORD*)&v11 = &off_140B5E648;
	v5 = LastError;
	*((_QWORD*)&v11 + 1) = L"Result";
	lpTlsValue[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v11);
	LODWORD(lpTlsValue[1]) = v5;
	*(_QWORD*)&v11 = &off_140B5E640;
	v13[1] = *(_OWORD*)lpTlsValue;
	v13[0] = v11;
	v14 = 0x141D3EF68i64;
	v6 = sub_140197770(39, &v14, v13, v10);
	*(_QWORD*)&v11 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v6)
		DebugBreak();
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

