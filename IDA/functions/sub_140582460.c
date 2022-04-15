#include "../winhttp.h"

//----- (0000000140582460) ----------------------------------------------------
void sub_140582460()
{
	unsigned __int64 v0; // rsi
	unsigned __int64 v1; // rbx
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rcx

	v0 = qword_140C7DE20;
	v1 = 0i64;
	for (dword_140C7DE28 = 1; v1 < v0; ++v1)
	{
		v2 = *(_QWORD*)(qword_140C7DE18 + 8 * v1);
		if (v2)
		{
			sub_14057B140(*(_QWORD*)(qword_140C7DE18 + 8 * v1));
			sub_14018B900(v2, 0);
		}
	}
	v3 = xmmword_140C7DE30;
	qword_140C7DE20 = 0i64;
	if ((_QWORD)xmmword_140C7DE30)
	{
		if (*(_QWORD*)xmmword_140C7DE30)
			(**(void(__fastcall***)(__int64))(*(_QWORD*)xmmword_140C7DE30 - 16i64))(*(_QWORD*)xmmword_140C7DE30 - 16i64);
		sub_14018B900(v3, 0);
	}
	v4 = qword_140C7DDE0;
	for (*(_QWORD*)&xmmword_140C7DE30 = 0i64; qword_140C7DDE0; v4 = qword_140C7DDE0)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 16i64))(v4, 1i64);
	if ((_QWORD)xmmword_140C7DE80)
		sub_140195D70((__int64)&dword_140C7DE70);
	if (qword_140C7DEC8)
		sub_140195D70((__int64)&dword_140C7DEB8);
}
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DE28: using guessed type int dword_140C7DE28;
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;
// 140C7DE70: using guessed type int dword_140C7DE70;
// 140C7DE80: using guessed type __int128 xmmword_140C7DE80;
// 140C7DEB8: using guessed type int dword_140C7DEB8;
// 140C7DEC8: using guessed type __int64 qword_140C7DEC8;

