#include "../winhttp.h"

//----- (00000001404900D0) ----------------------------------------------------
int* __fastcall sub_1404900D0(__int64 a1, __int64 a2, int a3)
{
	int* result; // rax
	int* v6; // rbx

	result = sub_14018B280(136i64, 0);
	v6 = result;
	if (result)
	{
		sub_140492F80((__int64)result, a2, a3);
		*(_QWORD*)v6 = off_140B673A8;
		return v6;
	}
	return result;
}
// 140B673A8: using guessed type __int64 (__fastcall *off_140B673A8[10])();

