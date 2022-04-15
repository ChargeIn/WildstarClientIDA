#include "../winhttp.h"

//----- (000000014002A050) ----------------------------------------------------
__int64 __fastcall sub_14002A050(__int64 a1, __int64 a2, __int64 a3)
{
	__int64* v3; // rbx
	__int64 v5; // rcx
	int v6; // edi
	int v7; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v10; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * *v12)(); // [rsp+50h] [rbp-28h]
	__int64 v13; // [rsp+58h] [rbp-20h]
	LPVOID v14; // [rsp+60h] [rbp-18h]
	__int64 v15; // [rsp+80h] [rbp+8h] BYREF

	v3 = (__int64*)(a1 + 16);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
	{
		sub_14018B900(v5, 0);
		*v3 = 0i64;
	}
	v6 = sub_1400C2EB0(v3, a2, a3);
	if (v6 >= 0)
		return 0i64;
	TlsValue = &off_140B5E648;
	v10 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v15 = 0x141CE8840i64;
	v12 = TlsValue;
	v13 = v10;
	v14 = lpTlsValue;
	v7 = sub_1401971E0(&dword_140C89FE8, 22, &v15);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v7)
		DebugBreak();
	return (unsigned int)v6;
}
// 14002A082: variable 'a2' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C89FE8: using guessed type _DWORD dword_140C89FE8;

