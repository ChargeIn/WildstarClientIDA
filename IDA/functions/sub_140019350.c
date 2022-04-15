#include "../winhttp.h"

//----- (0000000140019350) ----------------------------------------------------
void __fastcall __noreturn sub_140019350(HINSTANCE a1, __int64 a2, __int64 a3, int a4)
{
	int* v6; // rax
	__int64 v7; // rcx

	v6 = sub_14018B280(5976i64, 0);
	if (v6)
		qword_140C635F0 = sub_14000A490((__int64)v6);
	else
		qword_140C635F0 = 0i64;
	if (sub_14000AC90(v7, a1, a4) >= 0)
		sub_140008BC0();
	if (qword_140C635F0)
		(**(void(__fastcall***)(__int64, __int64))qword_140C635F0)(qword_140C635F0, 1i64);
	dword_140C635F8 = 1;
	sub_1407DBC08();
	sub_140008490();
	sub_1407DBCC8(0);
	JUMPOUT(0x1400193D2i64);
}
// 1400193CD: control flows out of bounds to 1400193D2
// 140019393: variable 'v7' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C635F8: using guessed type int dword_140C635F8;

