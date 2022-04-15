#include "../winhttp.h"

//----- (000000014001F440) ----------------------------------------------------
int* __fastcall sub_14001F440(__int64 a1, _QWORD* a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(72i64, 0);
	if (v3 != (int*)-32i64)
	{
		*((_QWORD*)v3 + 4) = *a2;
		sub_14001E1E0((__int64)(v3 + 10), (__int64)(a2 + 1));
	}
	return v3;
}

