//----- (00000001401C4800) ----------------------------------------------------
__int64* sub_1401C4800()
{
	DWORD v0; // eax
	__int64 v1; // rcx

	sub_140019600(&qword_140C78568);
	v0 = TlsAlloc();
	qword_140C785B4 = 1i64;
	xmmword_140C78590 = 0i64;
	xmmword_140C785A0 = 0i64;
	dword_140C785BC = v0;
	qword_140C796D0 = 0i64;
	qword_140C796D8 = 0i64;
	qword_140C796E0 = 0i64;
	qword_140C796E8 = 0i64;
	qword_140C78560 = 0i64;
	dword_140C785B0 = 0;
	qword_140C796C0 = 0i64;
	dword_140C796C8 = 0;
	sub_1401C53D0();
	dword_140C796CC = 1;
	sub_1401C4930(v1, (__int64)L"TOTAL");
	return &qword_140C78560;
}
// 1401C488B: variable 'v1' is possibly undefined
// 140B5F4E0: using guessed type wchar_t aTotal[6];
// 140C78560: using guessed type __int64 qword_140C78560;
// 140C78568: using guessed type __int64 qword_140C78568;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C785B4: using guessed type __int64 qword_140C785B4;
// 140C796C0: using guessed type __int64 qword_140C796C0;
// 140C796C8: using guessed type int dword_140C796C8;
// 140C796CC: using guessed type int dword_140C796CC;
// 140C796D0: using guessed type __int64 qword_140C796D0;
// 140C796D8: using guessed type __int64 qword_140C796D8;
// 140C796E0: using guessed type __int64 qword_140C796E0;

