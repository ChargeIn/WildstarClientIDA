#include "../winhttp.h"

//----- (000000014018D540) ----------------------------------------------------
_QWORD* sub_14018D540(_QWORD* a1, __int64 a2, ...)
{
	int v3; // eax
	unsigned __int64 v4; // rsi
	int* v5; // rax
	va_list va; // [rsp+70h] [rbp+18h] BYREF

	va_start(va, a2);
	*a1 = 0i64;
	v3 = sub_1407DFF50(a2, (__int64)va);
	v4 = v3;
	if (v3 != -1)
	{
		v5 = sub_14018B280(2i64 * v3 + 18, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v4;
			*(_QWORD*)v5 = off_140B55060;
		}
		*a1 = v5 + 4;
		sub_1407E0010((_BYTE*)v5 + 16, (int)v4 + 1, v4, a2, (__int64)va);
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

