#include "../winhttp.h"

//----- (0000000140818310) ----------------------------------------------------
__int64 __fastcall sub_140818310(__int64 a1, __int64 a2)
{
	__int64(__fastcall * v3)(__int64, __int64); // [rsp+20h] [rbp-28h]
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
		qword_140C61188 = 0i64;
	if (qword_140C61188 && dword_140C61190 != dword_140C60980[v7])
		qword_140C61188 = 0i64;
	if (!qword_140C61188 && v4 && nvapi_QueryInterface)
	{
		qword_140C61188 = nvapi_QueryInterface(383655018i64);
		dword_140C61190 = dword_140C60980[v7];
	}
	if (qword_140C61188)
	{
		v3 = (__int64(__fastcall*)(__int64, __int64))qword_140C61188;
		v5 = 0i64;
		if (qword_140C60938)
			qword_140C60938(383655018i64, &v5);
		v6 = v3(a1, a2);
		if (qword_140C60940)
			qword_140C60940(383655018i64, v5, v6);
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
// 140C61188: using guessed type __int64 qword_140C61188;
// 140C61190: using guessed type int dword_140C61190;

