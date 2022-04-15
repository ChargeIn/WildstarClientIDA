//----- (00000001408192F0) ----------------------------------------------------
__int64 __fastcall sub_1408192F0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64(__fastcall * v4)(__int64, _QWORD, __int64); // [rsp+40h] [rbp-28h]
	HMODULE v5; // [rsp+48h] [rbp-20h] BYREF
	__int64 v6; // [rsp+50h] [rbp-18h] BYREF
	unsigned int v7; // [rsp+58h] [rbp-10h]
	int v8; // [rsp+5Ch] [rbp-Ch]

	v5 = 0i64;
	v8 = 0;
	v7 = sub_14080B500(&v5);
	if (v7 && v7 != -14)
		return v7;
	if (v7 == -14)
		qword_140C61228 = 0i64;
	if (qword_140C61228 && dword_140C61230 != dword_140C60980[v8])
		qword_140C61228 = 0i64;
	if (!qword_140C61228 && v5 && nvapi_QueryInterface)
	{
		qword_140C61228 = nvapi_QueryInterface(858601794i64);
		dword_140C61230 = dword_140C60980[v8];
	}
	if (qword_140C61228)
	{
		v4 = (__int64(__fastcall*)(__int64, _QWORD, __int64))qword_140C61228;
		v6 = 0i64;
		if (qword_140C60938)
			qword_140C60938(858601794i64, &v6);
		v7 = v4(a1, a2, a3);
		if (qword_140C60940)
			qword_140C60940(858601794i64, v6, v7);
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
// 140C61228: using guessed type __int64 qword_140C61228;
// 140C61230: using guessed type int dword_140C61230;

