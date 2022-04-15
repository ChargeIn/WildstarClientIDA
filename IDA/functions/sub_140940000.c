#include "../winhttp.h"

//----- (0000000140940000) ----------------------------------------------------
__int64 sub_140940000()
{
	int v0; // edi
	int v1; // ebx
	int v2; // esi

	v0 = dword_140C44BD8;
	v1 = dword_140C44C68;
	v2 = dword_140C44CF8;
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C46848) = &off_140C46840;
	off_140C46840 = (__int64(__fastcall*)())off_140B55200;
	dword_140C46874 = v1;
	dword_140C46878 = v0;
	dword_140C4687C = v2;
	qword_140C46880 = 0i64;
	qword_140C46890 = (__int64)sub_14043DDA0;
	dword_140C46888 = 1;
	dword_140C46860[0] = v2;
	dword_140C46864 = v2;
	dword_140C46868 = v2;
	dword_140C4686C = v2;
	dword_140C46870 = v2;
	return sub_1407DD89C(sub_140950DA0);
}
// 140B55200: using guessed type __int64 (__fastcall *off_140B55200[21])();
// 140C44BD8: using guessed type int dword_140C44BD8;
// 140C44C68: using guessed type int dword_140C44C68;
// 140C44CF8: using guessed type int dword_140C44CF8;
// 140C46840: using guessed type __int64 (__fastcall *off_140C46840)();
// 140C46848: using guessed type wchar_t *off_140C46848;
// 140C46860: using guessed type int dword_140C46860[];
// 140C46864: using guessed type int dword_140C46864;
// 140C46868: using guessed type int dword_140C46868;
// 140C4686C: using guessed type int dword_140C4686C;
// 140C46870: using guessed type int dword_140C46870;
// 140C46874: using guessed type int dword_140C46874;
// 140C46878: using guessed type int dword_140C46878;
// 140C4687C: using guessed type int dword_140C4687C;
// 140C46880: using guessed type __int64 qword_140C46880;
// 140C46888: using guessed type int dword_140C46888;
// 140C46890: using guessed type __int64 qword_140C46890;
// 140C63750: using guessed type __int64 qword_140C63750;

