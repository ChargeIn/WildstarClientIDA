#include "../winhttp.h"

//----- (00000001409404A0) ----------------------------------------------------
__int64 sub_1409404A0()
{
	int v0; // edi
	int v1; // ebx
	int v2; // esi

	v0 = dword_140C44BF0;
	v1 = dword_140C44C80;
	v2 = dword_140C44D10;
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C466B8) = &off_140C466B0;
	off_140C466B0 = (__int64(__fastcall*)())off_140B55200;
	dword_140C466E4 = v1;
	dword_140C466E8 = v0;
	dword_140C466EC = v2;
	qword_140C466F0 = 0i64;
	qword_140C46700 = (__int64)sub_14043DDA0;
	dword_140C466F8 = 1;
	dword_140C466D0[0] = v2;
	dword_140C466D4 = v2;
	dword_140C466D8 = v2;
	dword_140C466DC = v2;
	dword_140C466E0 = v2;
	return sub_1407DD89C(sub_140950F20);
}
// 140B55200: using guessed type __int64 (__fastcall *off_140B55200[21])();
// 140C44BF0: using guessed type int dword_140C44BF0;
// 140C44C80: using guessed type int dword_140C44C80;
// 140C44D10: using guessed type int dword_140C44D10;
// 140C466B0: using guessed type __int64 (__fastcall *off_140C466B0)();
// 140C466B8: using guessed type wchar_t *off_140C466B8;
// 140C466D0: using guessed type int dword_140C466D0[];
// 140C466D4: using guessed type int dword_140C466D4;
// 140C466D8: using guessed type int dword_140C466D8;
// 140C466DC: using guessed type int dword_140C466DC;
// 140C466E0: using guessed type int dword_140C466E0;
// 140C466E4: using guessed type int dword_140C466E4;
// 140C466E8: using guessed type int dword_140C466E8;
// 140C466EC: using guessed type int dword_140C466EC;
// 140C466F0: using guessed type __int64 qword_140C466F0;
// 140C466F8: using guessed type int dword_140C466F8;
// 140C46700: using guessed type __int64 qword_140C46700;
// 140C63750: using guessed type __int64 qword_140C63750;

