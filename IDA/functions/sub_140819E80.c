//----- (0000000140819E80) ----------------------------------------------------
__int64 __fastcall sub_140819E80(
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
	__int64 a11)
{
	__int64(__fastcall * v12)(__int64, _QWORD, __int64, _QWORD, __int64, int, int, __int64, __int64, __int64, __int64); // [rsp+60h] [rbp-28h]
	HMODULE v13; // [rsp+68h] [rbp-20h] BYREF
	__int64 v14; // [rsp+70h] [rbp-18h] BYREF
	unsigned int v15; // [rsp+78h] [rbp-10h]
	int v16; // [rsp+7Ch] [rbp-Ch]

	v13 = 0i64;
	v16 = 0;
	v15 = sub_14080B500(&v13);
	if (v15 && v15 != -14)
		return v15;
	if (v15 == -14)
		qword_140C61298 = 0i64;
	if (qword_140C61298 && dword_140C612A0 != dword_140C60980[v16])
		qword_140C61298 = 0i64;
	if (!qword_140C61298 && v13 && nvapi_QueryInterface)
	{
		qword_140C61298 = nvapi_QueryInterface(1779880864i64);
		dword_140C612A0 = dword_140C60980[v16];
	}
	if (qword_140C61298)
	{
		v12 = (__int64(__fastcall*)(__int64, _QWORD, __int64, _QWORD, __int64, int, int, __int64, __int64, __int64, __int64))qword_140C61298;
		v14 = 0i64;
		if (qword_140C60938)
			qword_140C60938(1779880864i64, &v14);
		v15 = v12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		if (qword_140C60940)
			qword_140C60940(1779880864i64, v14, v15);
		--dword_140C60970[v16];
		return v15;
	}
	else
	{
		--dword_140C60970[v16];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C61298: using guessed type __int64 qword_140C61298;
// 140C612A0: using guessed type int dword_140C612A0;

