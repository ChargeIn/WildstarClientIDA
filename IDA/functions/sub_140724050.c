#include "../winhttp.h"

//----- (0000000140724050) ----------------------------------------------------
_QWORD* __fastcall sub_140724050(_QWORD* a1, char a2)
{
	_QWORD* v4; // rbx
	int i; // edi

	if ((a2 & 2) != 0)
	{
		v4 = &a1[13 * *((int*)a1 - 2)];
		for (i = *((_DWORD*)a1 - 2) - 1; i >= 0; --i)
		{
			v4 -= 13;
			sub_140787A10(v4);
		}
		if ((a2 & 1) != 0)
			sub_14018B900((__int64)(a1 - 1), 0);
		return a1 - 1;
	}
	else
	{
		sub_140787A10(a1);
		if ((a2 & 1) != 0)
			sub_14018B900((__int64)a1, 0);
		return a1;
	}
}

