#include "../winhttp.h"

//----- (000000014081D1A0) ----------------------------------------------------
__int64 __fastcall sub_14081D1A0(__int64 a1)
{
	__int64(__fastcall * v2)(__int64); // [rsp+20h] [rbp-28h]
	HMODULE v3; // [rsp+28h] [rbp-20h] BYREF
	__int64 v4; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v5; // [rsp+38h] [rbp-10h]
	int v6; // [rsp+3Ch] [rbp-Ch]

	v3 = 0i64;
	v6 = 0;
	v5 = sub_14080B500(&v3);
	if (v5 && v5 != -14)
		return v5;
	if (v5 == -14)
		qword_140C61498 = 0i64;
	if (qword_140C61498 && dword_140C614A0 != dword_140C60980[v6])
		qword_140C61498 = 0i64;
	if (!qword_140C61498 && v3 && nvapi_QueryInterface)
	{
		qword_140C61498 = nvapi_QueryInterface(881850593i64);
		dword_140C614A0 = dword_140C60980[v6];
	}
	if (qword_140C61498)
	{
		v2 = (__int64(__fastcall*)(__int64))qword_140C61498;
		v4 = 0i64;
		if (qword_140C60938)
			qword_140C60938(881850593i64, &v4);
		v5 = v2(a1);
		if (qword_140C60940)
			qword_140C60940(881850593i64, v4, v5);
		--dword_140C60970[v6];
		return v5;
	}
	else
	{
		--dword_140C60970[v6];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C61498: using guessed type __int64 qword_140C61498;
// 140C614A0: using guessed type int dword_140C614A0;

