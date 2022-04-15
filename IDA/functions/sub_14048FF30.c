#include "../winhttp.h"

//----- (000000014048FF30) ----------------------------------------------------
int* __fastcall sub_14048FF30(__int64 a1, __int64 a2, int a3)
{
	int* result; // rax

	result = sub_14018B280(24i64, 0);
	if (result)
	{
		*((_QWORD*)result + 1) = a2;
		result[4] = a3;
		*(_QWORD*)result = off_140B68F20;
	}
	return result;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

