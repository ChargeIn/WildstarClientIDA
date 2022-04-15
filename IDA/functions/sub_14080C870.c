//----- (000000014080C870) ----------------------------------------------------
__int64 __fastcall sub_14080C870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64(__fastcall * v5)(__int64, __int64, __int64, __int64, _QWORD); // [rsp+20h] [rbp-28h]
	HMODULE v6; // [rsp+28h] [rbp-20h] BYREF
	__int64 v7; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v8; // [rsp+38h] [rbp-10h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	v6 = 0i64;
	v9 = 0;
	v8 = sub_14080B500(&v6);
	if (v8 && v8 != -14)
		return v8;
	if (v8 == -14)
		qword_140C60A28 = 0i64;
	if (qword_140C60A28 && dword_140C60A30 != dword_140C60980[v9])
		qword_140C60A28 = 0i64;
	if (!qword_140C60A28 && v6 && nvapi_QueryInterface)
	{
		qword_140C60A28 = nvapi_QueryInterface(585995542i64);
		dword_140C60A30 = dword_140C60980[v9];
	}
	if (qword_140C60A28)
	{
		v5 = (__int64(__fastcall*)(__int64, __int64, __int64, __int64, _QWORD))qword_140C60A28;
		v7 = 0i64;
		if (qword_140C60938)
			qword_140C60938(585995542i64, &v7);
		v8 = v5(a1, a2, a3, a4, v5);
		if (qword_140C60940)
			qword_140C60940(585995542i64, v7, v8);
		--dword_140C60970[v9];
		return v8;
	}
	else
	{
		--dword_140C60970[v9];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type __int64 (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C60A28: using guessed type __int64 qword_140C60A28;
// 140C60A30: using guessed type int dword_140C60A30;

