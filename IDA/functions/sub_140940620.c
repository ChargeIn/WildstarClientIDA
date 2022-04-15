#include "../winhttp.h"

//----- (0000000140940620) ----------------------------------------------------
__int64 sub_140940620()
{
	int v0; // edi
	int v1; // ebx
	int v2; // esi

	v0 = dword_140C44BF8;
	v1 = dword_140C44C88;
	v2 = dword_140C44D18;
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C464D8) = &off_140C464D0;
	off_140C464D0 = (__int64(__fastcall*)())off_140B55200;
	dword_140C46504 = v1;
	dword_140C46508 = v0;
	dword_140C4650C = v2;
	qword_140C46510 = 0i64;
	qword_140C46520 = (__int64)sub_14043DDA0;
	dword_140C46518 = 1;
	dword_140C464F0[0] = v2;
	dword_140C464F4 = v2;
	dword_140C464F8 = v2;
	dword_140C464FC = v2;
	dword_140C46500 = v2;
	return sub_1407DD89C(sub_140950FA0);
}
// 140B55200: using guessed type __int64 (__fastcall *off_140B55200[21])();
// 140C44BF8: using guessed type int dword_140C44BF8;
// 140C44C88: using guessed type int dword_140C44C88;
// 140C44D18: using guessed type int dword_140C44D18;
// 140C464D0: using guessed type __int64 (__fastcall *off_140C464D0)();
// 140C464D8: using guessed type wchar_t *off_140C464D8;
// 140C464F0: using guessed type int dword_140C464F0[];
// 140C464F4: using guessed type int dword_140C464F4;
// 140C464F8: using guessed type int dword_140C464F8;
// 140C464FC: using guessed type int dword_140C464FC;
// 140C46500: using guessed type int dword_140C46500;
// 140C46504: using guessed type int dword_140C46504;
// 140C46508: using guessed type int dword_140C46508;
// 140C4650C: using guessed type int dword_140C4650C;
// 140C46510: using guessed type __int64 qword_140C46510;
// 140C46518: using guessed type int dword_140C46518;
// 140C46520: using guessed type __int64 qword_140C46520;
// 140C63750: using guessed type __int64 qword_140C63750;

