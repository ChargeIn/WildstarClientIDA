//----- (000000014062EEE0) ----------------------------------------------------
__int64* __fastcall sub_14062EEE0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rcx
	int v4; // eax
	__int128 v5; // xmm0
	__int128* v6; // rax
	__int64 v7; // rcx

	qword_140C7E4B0 = (__int64)&off_140B5E6E8;
	v3 = *(_QWORD*)a3;
	dword_140C7E4C0 = 1;
	qword_140C7E4B8 = v3;
	v4 = *(_DWORD*)(a3 + 8);
	dword_140C7E4C8 = 0;
	dword_140C7E4C4 = v4;
	if (v3)
		*(_QWORD*)sub_14019D520(qword_140C63750 + 8, &qword_140C7E4B8) = &qword_140C7E4B0;
	v5 = xmmword_140C7E4A0;
	dword_140C7E558 = 0;
	qword_140C7E4B0 = (__int64)off_140B6FBF8;
	qword_140C7E560 = 0i64;
	xmmword_140C7E540 = xmmword_140C7E4A0;
	qword_140C7E550 = (__int64)&xmmword_140C7E4A0;
	v6 = (__int128*)&unk_140C7E4D0;
	v7 = 5i64;
	while (1)
	{
		*v6++ = v5;
		if (!--v7)
			break;
		v5 = xmmword_140C7E540;
	}
	return &qword_140C7E4B0;
}
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140B6FBF8: using guessed type __int64 (__fastcall *off_140B6FBF8[13])();
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C7E4A0: using guessed type __int128 xmmword_140C7E4A0;
// 140C7E4B0: using guessed type __int64 qword_140C7E4B0;
// 140C7E4B8: using guessed type __int64 qword_140C7E4B8;
// 140C7E4C0: using guessed type int dword_140C7E4C0;
// 140C7E4C4: using guessed type int dword_140C7E4C4;
// 140C7E4C8: using guessed type int dword_140C7E4C8;
// 140C7E540: using guessed type __int128 xmmword_140C7E540;
// 140C7E550: using guessed type __int64 qword_140C7E550;
// 140C7E558: using guessed type int dword_140C7E558;
// 140C7E560: using guessed type __int64 qword_140C7E560;

