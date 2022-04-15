#include "../winhttp.h"

//----- (0000000140940250) ----------------------------------------------------
__int64 sub_140940250()
{
	int v0; // edi
	int v1; // ebx
	int v2; // esi

	v0 = dword_140C44BE4;
	v1 = dword_140C44C74;
	v2 = dword_140C44D04;
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C468A8) = &off_140C468A0;
	off_140C468A0 = (__int64(__fastcall*)())off_140B55200;
	dword_140C468D4 = v1;
	dword_140C468D8 = v0;
	dword_140C468DC = v2;
	qword_140C468E0 = 0i64;
	qword_140C468F0 = (__int64)sub_14043DDA0;
	dword_140C468E8 = 1;
	dword_140C468C0[0] = v2;
	dword_140C468C4 = v2;
	dword_140C468C8 = v2;
	dword_140C468CC = v2;
	dword_140C468D0 = v2;
	return sub_1407DD89C(sub_140950E60);
}
// 140B55200: using guessed type __int64 (__fastcall *off_140B55200[21])();
// 140C44BE4: using guessed type int dword_140C44BE4;
// 140C44C74: using guessed type int dword_140C44C74;
// 140C44D04: using guessed type int dword_140C44D04;
// 140C468A0: using guessed type __int64 (__fastcall *off_140C468A0)();
// 140C468A8: using guessed type wchar_t *off_140C468A8;
// 140C468C0: using guessed type int dword_140C468C0[];
// 140C468C4: using guessed type int dword_140C468C4;
// 140C468C8: using guessed type int dword_140C468C8;
// 140C468CC: using guessed type int dword_140C468CC;
// 140C468D0: using guessed type int dword_140C468D0;
// 140C468D4: using guessed type int dword_140C468D4;
// 140C468D8: using guessed type int dword_140C468D8;
// 140C468DC: using guessed type int dword_140C468DC;
// 140C468E0: using guessed type __int64 qword_140C468E0;
// 140C468E8: using guessed type int dword_140C468E8;
// 140C468F0: using guessed type __int64 qword_140C468F0;
// 140C63750: using guessed type __int64 qword_140C63750;

