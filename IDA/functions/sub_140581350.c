//----- (0000000140581350) ----------------------------------------------------
void sub_140581350()
{
	__int64 v0; // rcx
	__int64 v1; // rcx

	sub_140582460();
	sub_140195D70((__int64)&dword_140C7DEB8);
	v0 = qword_140C7DEC8;
	dword_140C7DEB8 = 0;
	if (qword_140C7DEC8)
	{
		*(_QWORD*)qword_140C7DEC8 = qword_140C7DED0;
		v0 = qword_140C7DEC8;
	}
	if (qword_140C7DED0)
		*(_QWORD*)qword_140C7DED0 = v0;
	qword_140C7DEC8 = 0i64;
	qword_140C7DED0 = 0i64;
	sub_140195D70((__int64)&dword_140C7DE70);
	v1 = xmmword_140C7DE80;
	dword_140C7DE70 = 0;
	if ((_QWORD)xmmword_140C7DE80)
	{
		*(_QWORD*)xmmword_140C7DE80 = *((_QWORD*)&xmmword_140C7DE80 + 1);
		v1 = xmmword_140C7DE80;
	}
	if (*((_QWORD*)&xmmword_140C7DE80 + 1))
		**((_QWORD**)&xmmword_140C7DE80 + 1) = v1;
	xmmword_140C7DE80 = 0i64;
	if (qword_140C7DE60)
	{
		sub_140590610((__int64)&unk_140C7DE50, *(_QWORD**)(qword_140C7DE58 + 8));
		*(_QWORD*)(qword_140C7DE58 + 16) = qword_140C7DE58;
		*(_QWORD*)(qword_140C7DE58 + 8) = 0i64;
		*(_QWORD*)(qword_140C7DE58 + 24) = qword_140C7DE58;
		qword_140C7DE60 = 0i64;
	}
	sub_14018B900(qword_140C7DE58, 0);
	if (qword_140C7DE40)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7DE40 - 16) + 8i64))(qword_140C7DE40 - 16);
	if (*((_QWORD*)&xmmword_140C7DE30 + 1))
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*((_QWORD*)&xmmword_140C7DE30 + 1) - 16i64) + 8i64))(*((_QWORD*)&xmmword_140C7DE30 + 1) - 16i64);
	if (qword_140C7DE18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7DE18 - 16) + 8i64))(qword_140C7DE18 - 16);
	if (qword_140C7DDE0)
		sub_1401A4A00((const void***)&qword_140C7DDE0);
}
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;
// 140C7DE40: using guessed type __int64 qword_140C7DE40;
// 140C7DE58: using guessed type __int64 qword_140C7DE58;
// 140C7DE60: using guessed type __int64 qword_140C7DE60;
// 140C7DE70: using guessed type int dword_140C7DE70;
// 140C7DE80: using guessed type __int128 xmmword_140C7DE80;
// 140C7DEB8: using guessed type int dword_140C7DEB8;
// 140C7DEC8: using guessed type __int64 qword_140C7DEC8;
// 140C7DED0: using guessed type __int64 qword_140C7DED0;

