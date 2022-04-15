//----- (00000001408141A0) ----------------------------------------------------
__int64 __fastcall sub_1408141A0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
	__int64 v4; // r8
	__int64(__fastcall * v6)(__int64, _QWORD, __int64, _QWORD, _QWORD); // [rsp+20h] [rbp-28h]
	HMODULE v7; // [rsp+28h] [rbp-20h] BYREF
	__int64 v8; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v9; // [rsp+38h] [rbp-10h]
	int v10; // [rsp+3Ch] [rbp-Ch]

	v7 = 0i64;
	v10 = 0;
	v9 = sub_14080B500(&v7);
	if (v9 && v9 != -14)
		return v9;
	if (v9 == -14)
		qword_140C60EF8 = 0i64;
	if (qword_140C60EF8 && dword_140C60F00 != dword_140C60980[v10])
		qword_140C60EF8 = 0i64;
	if (!qword_140C60EF8 && v7 && nvapi_QueryInterface)
	{
		qword_140C60EF8 = nvapi_QueryInterface(814918706i64);
		dword_140C60F00 = dword_140C60980[v10];
	}
	if (qword_140C60EF8)
	{
		v6 = (__int64(__fastcall*)(__int64, _QWORD, __int64, _QWORD, _QWORD))qword_140C60EF8;
		v8 = 0i64;
		if (qword_140C60938)
			qword_140C60938(814918706i64, &v8);
		v9 = v6(a1, a2, v4, a4, v6);
		if (qword_140C60940)
			qword_140C60940(814918706i64, v8, v9);
		--dword_140C60970[v10];
		return v9;
	}
	else
	{
		--dword_140C60970[v10];
		return 4294967293i64;
	}
}
// 1408142E7: variable 'v4' is possibly undefined
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C60EF8: using guessed type __int64 qword_140C60EF8;
// 140C60F00: using guessed type int dword_140C60F00;

