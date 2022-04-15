//----- (000000014081CEA0) ----------------------------------------------------
__int64 sub_14081CEA0()
{
	__int64 v0; // rcx
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
		qword_140C61478 = 0i64;
	if (qword_140C61478)
	{
		v0 = v6;
		if (dword_140C61480 != dword_140C60980[v6])
			qword_140C61478 = 0i64;
	}
	if (!qword_140C61478 && v3 && nvapi_QueryInterface)
	{
		qword_140C61478 = nvapi_QueryInterface(597443909i64);
		v0 = v6;
		dword_140C61480 = dword_140C60980[v6];
	}
	if (qword_140C61478)
	{
		v2 = (__int64(__fastcall*)(__int64))qword_140C61478;
		v4 = 0i64;
		if (qword_140C60938)
			qword_140C60938(597443909i64, &v4);
		v5 = v2(v0);
		if (qword_140C60940)
			qword_140C60940(597443909i64, v4, v5);
		--dword_140C60970[v6];
		return v5;
	}
	else
	{
		--dword_140C60970[v6];
		return 4294967293i64;
	}
}
// 14081CFBC: variable 'v0' is possibly undefined
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C61478: using guessed type __int64 qword_140C61478;
// 140C61480: using guessed type int dword_140C61480;

