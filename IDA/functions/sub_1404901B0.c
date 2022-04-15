#include "../winhttp.h"

//----- (00000001404901B0) ----------------------------------------------------
int* __fastcall sub_1404901B0(__int64 a1, __int64 a2, int a3)
{
	int* result; // rax

	result = sub_14018B280(32i64, 0);
	if (result)
	{
		*((_QWORD*)result + 1) = a2;
		*((_QWORD*)result + 2) = 0i64;
		*(_QWORD*)result = off_140B67398;
		result[6] = a3;
	}
	return result;
}
// 140B67398: using guessed type __int64 (__fastcall *off_140B67398[12])();

