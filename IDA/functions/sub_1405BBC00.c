#include "../winhttp.h"

//----- (00000001405BBC00) ----------------------------------------------------
void sub_1405BBC00()
{
	__int64 v0; // rdi

	v0 = qword_140C65B88;
	if (qword_140C65B88)
	{
		sub_1405BB940((_QWORD*)qword_140C65B88);
		sub_140008410(v0 + 40);
		sub_14018B900(*(_QWORD*)(v0 + 48), 0);
		sub_140008410(v0 + 8);
		sub_14018B900(*(_QWORD*)(v0 + 16), 0);
		sub_14018B900(v0, 0);
	}
	qword_140C65B88 = 0i64;
}
// 140C65B88: using guessed type __int64 qword_140C65B88;

