#include "../winhttp.h"

//----- (00000001402AA830) ----------------------------------------------------
__int64 __fastcall sub_1402AA830(_QWORD* a1, unsigned int a2)
{
	__int64 v3; // rdi
	unsigned int* v4; // rdx
	int v5; // esi
	int v6; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-29h] BYREF
	__int64 v9; // [rsp+38h] [rbp-21h]
	LPVOID Value; // [rsp+40h] [rbp-19h]
	__int64 v11[4]; // [rsp+50h] [rbp-9h] BYREF
	__int128 v12; // [rsp+70h] [rbp+17h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+27h]
	__int128 v14[2]; // [rsp+90h] [rbp+37h] BYREF
	__int64 v15; // [rsp+C0h] [rbp+67h] BYREF

	v3 = 8i64 * a2;
	if (*(_QWORD*)(v3 + a1[9]))
		return *(_QWORD*)(v3 + a1[9]);
	v4 = (unsigned int*)(*(_QWORD*)(a1[6] + 16i64) + 16i64 * a2);
	v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1[2] + 6336i64) + 120i64))(
		*(_QWORD*)(a1[2] + 6336i64),
		*((_QWORD*)v4 + 1),
		*v4,
		0i64,
		v3 + a1[9]);
	if (v5 >= 0)
		return *(_QWORD*)(v3 + a1[9]);
	v9 = 0i64;
	TlsValue = &off_140B5E648;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v11[0] = (__int64)TlsValue;
	v11[1] = v9;
	*(_QWORD*)&v12 = &off_140B5E648;
	*((_QWORD*)&v12 + 1) = L"Result";
	v11[2] = (__int64)Value;
	lpTlsValue[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v12);
	LODWORD(lpTlsValue[1]) = v5;
	*(_QWORD*)&v12 = &off_140B5E640;
	v14[1] = *(_OWORD*)lpTlsValue;
	v15 = 0x141DE6C30i64;
	v14[0] = v12;
	v6 = sub_1401971E0(&dword_140C8A524, 14, &v15, v14, v11);
	*(_QWORD*)&v12 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v6)
		DebugBreak();
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A524: using guessed type _DWORD dword_140C8A524;

