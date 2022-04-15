#include "../winhttp.h"

//----- (000000014094D940) ----------------------------------------------------
void sub_14094D940()
{
	__int64 v0; // rcx

	sub_1401A1360();
	nullsub_1(v0);
	if (qword_140C77748)
		sub_14018B900(qword_140C77748, 0);
	if (qword_140C676B8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C676B8 - 16) + 8i64))(qword_140C676B8 - 16);
}
// 14094D949: variable 'v0' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C676B8: using guessed type __int64 qword_140C676B8;
// 140C77748: using guessed type __int64 qword_140C77748;

