#include "../winhttp.h"

//----- (00000001401A1280) ----------------------------------------------------
int* sub_1401A1280()
{
	_QWORD* v0; // rax
	__int64 v1; // rcx

	dword_140C77708 = 5;
	qword_140C676C0 = 0i64;
	qword_140C676B8 = 0i64;
	qword_140C77748 = 0i64;
	xmmword_140C77750 = 0i64;
	dword_140C674A4 = 0;
	qword_140C676C8 = 0i64;
	qword_140C776D0 = 0i64;
	qword_140C776D8 = 0i64;
	qword_140C776E0 = 0i64;
	qword_140C776E8 = 0i64;
	qword_140C776F0 = 0i64;
	qword_140C77700 = 0i64;
	qword_140C776F8 = 0i64;
	hConsoleOutput = (HANDLE)-1i64;
	qword_140C77728 = (HANDLE)-1i64;
	v0 = &unk_140C674A8;
	v1 = 8i64;
	do
	{
		*v0 = 0x200000002i64;
		v0[1] = 0x200000002i64;
		v0[2] = 0x200000002i64;
		v0 += 8;
		*(v0 - 5) = 0x200000002i64;
		*(v0 - 4) = 0x200000002i64;
		*(v0 - 3) = 0x200000002i64;
		*(v0 - 2) = 0x200000002i64;
		*(v0 - 1) = 0x200000002i64;
		--v1;
	} while (v1);
	*v0 = 0x200000002i64;
	*((_DWORD*)v0 + 2) = 2;
	dword_140C674A0 = 1;
	return &dword_140C674A0;
}
// 140C674A0: using guessed type int dword_140C674A0;
// 140C674A4: using guessed type int dword_140C674A4;
// 140C676B8: using guessed type __int64 qword_140C676B8;
// 140C676C0: using guessed type __int64 qword_140C676C0;
// 140C676C8: using guessed type __int64 qword_140C676C8;
// 140C776D0: using guessed type __int64 qword_140C776D0;
// 140C776D8: using guessed type __int64 qword_140C776D8;
// 140C776E0: using guessed type __int64 qword_140C776E0;
// 140C776E8: using guessed type __int64 qword_140C776E8;
// 140C776F0: using guessed type __int64 qword_140C776F0;
// 140C776F8: using guessed type __int64 qword_140C776F8;
// 140C77700: using guessed type __int64 qword_140C77700;
// 140C77708: using guessed type int dword_140C77708;
// 140C77748: using guessed type __int64 qword_140C77748;
// 140C77750: using guessed type __int128 xmmword_140C77750;

