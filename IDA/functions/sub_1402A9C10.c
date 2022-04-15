#include "../winhttp.h"

//----- (00000001402A9C10) ----------------------------------------------------
__int64 __fastcall sub_1402A9C10(__int64 a1, unsigned int a2, int a3)
{
	__int64 v6; // rdi
	_QWORD* v7; // r15
	int v8; // r15d
	void* v9; // rcx
	int v10; // ebx
	__int64 v12; // [rsp+20h] [rbp-69h]
	__int64 v13; // [rsp+28h] [rbp-61h]
	int v14; // [rsp+38h] [rbp-51h]
	int v15; // [rsp+40h] [rbp-49h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-39h] BYREF
	__int64 v17; // [rsp+58h] [rbp-31h]
	LPVOID Value; // [rsp+60h] [rbp-29h]
	__int64 v19[4]; // [rsp+70h] [rbp-19h] BYREF
	__int128 v20; // [rsp+90h] [rbp+7h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A0h] [rbp+17h]
	__int128 v22[2]; // [rsp+B0h] [rbp+27h] BYREF
	__int64 v23; // [rsp+F0h] [rbp+67h] BYREF

	v6 = 8i64 * (a3 + 23 * a2);
	v7 = (_QWORD*)(v6 + *(_QWORD*)(a1 + 80));
	if (*v7)
		return *(_QWORD*)(v6 + *(_QWORD*)(a1 + 80));
	v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
		+ 6336i64)
		+ 88i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * a3 + 6584),
			dword_140AE5D90[a3],
			*(_QWORD*)(16i64 * a2 + *(_QWORD*)(*(_QWORD*)(a1 + 48) + 48i64) + 8),
			*(unsigned int*)(16i64 * a2 + *(_QWORD*)(*(_QWORD*)(a1 + 48) + 48i64)),
			v7);
	if (v8 >= 0)
		return *(_QWORD*)(v6 + *(_QWORD*)(a1 + 80));
	v9 = &unk_1409E4134;
	if (*(_QWORD*)(a1 + 32))
		v9 = *(void**)(a1 + 32);
	v23 = 0x141DE6B90i64;
	v15 = *(_DWORD*)(a1 + 28);
	v14 = *(_DWORD*)(a1 + 24);
	LODWORD(v13) = *(_DWORD*)(a1 + 40);
	LODWORD(v12) = a3;
	sub_1401A3130(14, 2, &v23, a2, v12, v13, v9, v14, v15);
	TlsValue = &off_140B5E648;
	v17 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v19[0] = (__int64)TlsValue;
	v19[1] = v17;
	*(_QWORD*)&v20 = &off_140B5E648;
	*((_QWORD*)&v20 + 1) = L"Result";
	v19[2] = (__int64)Value;
	lpTlsValue[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v20);
	LODWORD(lpTlsValue[1]) = v8;
	*(_QWORD*)&v20 = &off_140B5E640;
	v22[1] = *(_OWORD*)lpTlsValue;
	v23 = 0x141DE6B20i64;
	v22[0] = v20;
	v10 = sub_1401971E0(&dword_140C8A518, 14, &v23, v22, v19);
	*(_QWORD*)&v20 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v10)
		DebugBreak();
	return 0i64;
}
// 1402A9CF6: variable 'v12' is possibly undefined
// 1402A9CF6: variable 'v13' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE5D90: using guessed type unsigned int dword_140AE5D90[24];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A518: using guessed type _DWORD dword_140C8A518;

