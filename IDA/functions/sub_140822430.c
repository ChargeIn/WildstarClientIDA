#include "../winhttp.h"

//----- (0000000140822430) ----------------------------------------------------
__int64 __fastcall sub_140822430(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64(__fastcall * v6)(__int64, __int64, _QWORD, __int64, __int64); // [rsp+30h] [rbp-28h]
	HMODULE v7; // [rsp+38h] [rbp-20h] BYREF
	__int64 v8; // [rsp+40h] [rbp-18h] BYREF
	unsigned int v9; // [rsp+48h] [rbp-10h]
	int v10; // [rsp+4Ch] [rbp-Ch]

	v7 = 0i64;
	v10 = 0;
	v9 = sub_14080B500(&v7);
	if (v9 && v9 != -14)
		return v9;
	if (v9 == -14)
		qword_140C617E8 = 0i64;
	if (qword_140C617E8 && dword_140C617F0 != dword_140C60980[v10])
		qword_140C617E8 = 0i64;
	if (!qword_140C617E8 && v7 && nvapi_QueryInterface)
	{
		qword_140C617E8 = nvapi_QueryInterface(2141329210i64);
		dword_140C617F0 = dword_140C60980[v10];
	}
	if (qword_140C617E8)
	{
		v6 = (__int64(__fastcall*)(__int64, __int64, _QWORD, __int64, __int64))qword_140C617E8;
		v8 = 0i64;
		if (qword_140C60938)
			qword_140C60938(2141329210i64, &v8);
		v9 = v6(a1, a2, a3, a4, a5);
		if (qword_140C60940)
			qword_140C60940(2141329210i64, v8, v9);
		--dword_140C60970[v10];
		return v9;
	}
	else
	{
		--dword_140C60970[v10];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C617E8: using guessed type __int64 qword_140C617E8;
// 140C617F0: using guessed type int dword_140C617F0;

