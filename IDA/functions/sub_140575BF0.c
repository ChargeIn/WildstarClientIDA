#include "../winhttp.h"

//----- (0000000140575BF0) ----------------------------------------------------
__int64 __fastcall sub_140575BF0(__int64 a1)
{
	sub_140575C50((const void***)a1);
	sub_140008410(a1 + 16);
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	if (*(_QWORD*)(a1 + 8))
		sub_1401A4A00((const void***)(a1 + 8));
	if (*(_QWORD*)a1)
		sub_1401A4A00((const void***)a1);
	sub_14018B900(a1, 0);
	return a1;
}

