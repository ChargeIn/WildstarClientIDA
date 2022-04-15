#include "../winhttp.h"

//----- (000000014018D5E0) ----------------------------------------------------
_QWORD* __fastcall sub_14018D5E0(_QWORD* a1, __int64 a2, __int64 a3)
{
	int v6; // eax
	unsigned __int64 v7; // rsi
	int* v8; // rax

	*a1 = 0i64;
	v6 = sub_1407DFF50(a2, a3);
	v7 = v6;
	if (v6 != -1)
	{
		v8 = sub_14018B280(2i64 * v6 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		*a1 = v8 + 4;
		sub_1407E0010((_BYTE*)v8 + 16, (int)v7 + 1, v7, a2, a3);
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

