#include "../winhttp.h"

//----- (0000000140632020) ----------------------------------------------------
void __fastcall sub_140632020(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	_QWORD* v4; // rdi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_140632020(a1, v2[3]);
			v4 = (_QWORD*)v2[2];
			v2[5] = off_140B68F20;
			sub_14018B900((__int64)v2, 0);
			v2 = v4;
		} while (v4);
	}
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

