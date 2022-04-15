#include "../winhttp.h"

//----- (00000001408149B0) ----------------------------------------------------
__int64 __fastcall sub_1408149B0(unsigned int a1, __int64 a2)
{
	__int64(__fastcall * v3)(_QWORD, __int64); // [rsp+20h] [rbp-28h]
	HMODULE v4; // [rsp+28h] [rbp-20h] BYREF
	__int64 v5; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v6; // [rsp+38h] [rbp-10h]
	int v7; // [rsp+3Ch] [rbp-Ch]

	v4 = 0i64;
	v7 = 0;
	v6 = sub_14080B500(&v4);
	if (v6 && v6 != -14)
		return v6;
	if (v6 == -14)
		qword_140C60F48 = 0i64;
	if (qword_140C60F48 && dword_140C60F50 != dword_140C60980[v7])
		qword_140C60F48 = 0i64;
	if (!qword_140C60F48 && v4 && nvapi_QueryInterface)
	{
		qword_140C60F48 = nvapi_QueryInterface(1617407807i64);
		dword_140C60F50 = dword_140C60980[v7];
	}
	if (qword_140C60F48)
	{
		v3 = (__int64(__fastcall*)(_QWORD, __int64))qword_140C60F48;
		v5 = 0i64;
		if (qword_140C60938)
			qword_140C60938(1617407807i64, &v5);
		v6 = v3(a1, a2);
		if (qword_140C60940)
			qword_140C60940(1617407807i64, v5, v6);
		--dword_140C60970[v7];
		return v6;
	}
	else
	{
		--dword_140C60970[v7];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C60F48: using guessed type __int64 qword_140C60F48;
// 140C60F50: using guessed type int dword_140C60F50;

