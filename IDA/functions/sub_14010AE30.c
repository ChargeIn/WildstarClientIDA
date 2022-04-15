#include "../winhttp.h"

//----- (000000014010AE30) ----------------------------------------------------
_QWORD* __fastcall sub_14010AE30(_QWORD* a1, __int64 a2, int* a3)
{
	int* v6; // rax

	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	v6 = sub_14018B280(16i64, 0);
	a1[2] = v6;
	a1[3] = v6;
	a1[4] = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	sub_14010AEB0((__int64)a1, a2, a3);
	return a1;
}

