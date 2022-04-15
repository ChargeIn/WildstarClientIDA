#include "../winhttp.h"

//----- (000000014048FFE0) ----------------------------------------------------
int* __fastcall sub_14048FFE0(__int64 a1, __int64 a2)
{
	int* result; // rax

	result = sub_14018B280(16i64, 0);
	if (result)
	{
		*((_QWORD*)result + 1) = a2;
		*(_QWORD*)result = off_140B68F20;
	}
	return result;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

