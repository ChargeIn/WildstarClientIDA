#include "../winhttp.h"

//----- (00000001407DBF4C) ----------------------------------------------------
void __noreturn sub_1407DBF4C()
{
	unsigned __int16 v0; // si
	int v1; // eax
	__int16* v2; // rax

	v0 = sub_1407E2694();
	sub_1407DC1C4(2);
	if (!sub_1407E3FA4())
	{
		if (dword_140C5F550 == 1)
			sub_1407E1CF4();
		sub_1407E1D68(28);
		sub_1407DBBB8(0xFFu);
	}
	if (!(unsigned int)sub_1407E3F00())
	{
		if (dword_140C5F550 == 1)
			sub_1407E1CF4();
		sub_1407E1D68(16);
		sub_1407DBBB8(0xFFu);
	}
	sub_1407E22D0();
	if ((int)sub_1407E3FC4() < 0)
		sub_1407DC0D8(27);
	qword_140DC6340 = (__int64)GetCommandLineW();
	qword_140C5F548 = sub_1407E46B0();
	if ((int)sub_1407E42F0() < 0)
		sub_1407DBBD0(8);
	if ((int)sub_1407E4578() < 0)
		sub_1407DBBD0(9);
	v1 = sub_1407DBC18(1u);
	if (v1)
		sub_1407DBBD0(v1);
	v2 = sub_1407E4734();
	sub_140019350((HINSTANCE)0x140000000i64, 0i64, (__int64)v2, v0);
}
// 140C5F550: using guessed type int dword_140C5F550;
// 140DC6340: using guessed type __int64 qword_140DC6340;

