#include "../winhttp.h"

//----- (0000000140499500) ----------------------------------------------------
__int64 __fastcall sub_140499500(__int64 a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1 + 48;
	*(_QWORD*)(v3 - 48) = off_140B676E8;
	sub_140008410(v3);
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	sub_140008410(a1 + 16);
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B676E8: using guessed type __int64 (__fastcall *off_140B676E8[14])();

