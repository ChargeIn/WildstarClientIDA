#include "../winhttp.h"

//----- (0000000140818170) ----------------------------------------------------
__int64 __fastcall sub_140818170(unsigned int a1, __int64 a2, unsigned int a3)
{
	__int64(__fastcall * v4)(_QWORD, __int64, _QWORD); // [rsp+20h] [rbp-28h]
	HMODULE v5; // [rsp+28h] [rbp-20h] BYREF
	__int64 v6; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v7; // [rsp+38h] [rbp-10h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	v5 = 0i64;
	v8 = 0;
	v7 = sub_14080B500(&v5);
	if (v7 && v7 != -14)
		return v7;
	if (v7 == -14)
		qword_140C61178 = 0i64;
	if (qword_140C61178 && dword_140C61180 != dword_140C60980[v8])
		qword_140C61178 = 0i64;
	if (!qword_140C61178 && v5 && nvapi_QueryInterface)
	{
		qword_140C61178 = nvapi_QueryInterface(1621942237i64);
		dword_140C61180 = dword_140C60980[v8];
	}
	if (qword_140C61178)
	{
		v4 = (__int64(__fastcall*)(_QWORD, __int64, _QWORD))qword_140C61178;
		v6 = 0i64;
		if (qword_140C60938)
			qword_140C60938(1621942237i64, &v6);
		v7 = v4(a1, a2, a3);
		if (qword_140C60940)
			qword_140C60940(1621942237i64, v6, v7);
		--dword_140C60970[v8];
		return v7;
	}
	else
	{
		--dword_140C60970[v8];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C61178: using guessed type __int64 qword_140C61178;
// 140C61180: using guessed type int dword_140C61180;

