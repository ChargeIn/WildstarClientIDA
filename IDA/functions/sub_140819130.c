//----- (0000000140819130) ----------------------------------------------------
__int64 __fastcall sub_140819130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
	__int64(__fastcall * v7)(__int64, __int64, __int64, __int64, __int64, int, _QWORD); // [rsp+30h] [rbp-28h]
	HMODULE v8; // [rsp+38h] [rbp-20h] BYREF
	__int64 v9; // [rsp+40h] [rbp-18h] BYREF
	unsigned int v10; // [rsp+48h] [rbp-10h]
	int v11; // [rsp+4Ch] [rbp-Ch]

	v8 = 0i64;
	v11 = 0;
	v10 = sub_14080B500(&v8);
	if (v10 && v10 != -14)
		return v10;
	if (v10 == -14)
		qword_140C61218 = 0i64;
	if (qword_140C61218 && dword_140C61220 != dword_140C60980[v11])
		qword_140C61218 = 0i64;
	if (!qword_140C61218 && v8 && nvapi_QueryInterface)
	{
		qword_140C61218 = nvapi_QueryInterface(584975274i64);
		dword_140C61220 = dword_140C60980[v11];
	}
	if (qword_140C61218)
	{
		v7 = (__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64, int, _QWORD))qword_140C61218;
		v9 = 0i64;
		if (qword_140C60938)
			qword_140C60938(584975274i64, &v9);
		v10 = v7(a1, a2, a3, a4, a5, a6, v7);
		if (qword_140C60940)
			qword_140C60940(584975274i64, v9, v10);
		--dword_140C60970[v11];
		return v10;
	}
	else
	{
		--dword_140C60970[v11];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C61218: using guessed type __int64 qword_140C61218;
// 140C61220: using guessed type int dword_140C61220;

