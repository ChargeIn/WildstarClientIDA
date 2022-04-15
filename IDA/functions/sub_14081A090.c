//----- (000000014081A090) ----------------------------------------------------
__int64 __fastcall sub_14081A090(
	__int64 a1,
	unsigned int a2,
	__int64 a3,
	unsigned int a4,
	__int64 a5,
	int a6,
	int a7,
	__int64 a8,
	__int64 a9,
	__int64 a10,
	__int64 a11,
	__int64 a12,
	__int64 a13)
{
	__int64(__fastcall * v14)(__int64, _QWORD, __int64, _QWORD, __int64, int, int, __int64, __int64, __int64, __int64, __int64, __int64); // [rsp+70h] [rbp-28h]
	HMODULE v15; // [rsp+78h] [rbp-20h] BYREF
	__int64 v16; // [rsp+80h] [rbp-18h] BYREF
	unsigned int v17; // [rsp+88h] [rbp-10h]
	int v18; // [rsp+8Ch] [rbp-Ch]

	v15 = 0i64;
	v18 = 0;
	v17 = sub_14080B500(&v15);
	if (v17 && v17 != -14)
		return v17;
	if (v17 == -14)
		qword_140C612A8 = 0i64;
	if (qword_140C612A8 && dword_140C612B0 != dword_140C60980[v18])
		qword_140C612A8 = 0i64;
	if (!qword_140C612A8 && v15 && nvapi_QueryInterface)
	{
		qword_140C612A8 = nvapi_QueryInterface(3147013861i64);
		dword_140C612B0 = dword_140C60980[v18];
	}
	if (qword_140C612A8)
	{
		v14 = (__int64(__fastcall*)(__int64, _QWORD, __int64, _QWORD, __int64, int, int, __int64, __int64, __int64, __int64, __int64, __int64))qword_140C612A8;
		v16 = 0i64;
		if (qword_140C60938)
			qword_140C60938(3147013861i64, &v16);
		v17 = v14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		if (qword_140C60940)
			qword_140C60940(3147013861i64, v16, v17);
		--dword_140C60970[v18];
		return v17;
	}
	else
	{
		--dword_140C60970[v18];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C612A8: using guessed type __int64 qword_140C612A8;
// 140C612B0: using guessed type int dword_140C612B0;

