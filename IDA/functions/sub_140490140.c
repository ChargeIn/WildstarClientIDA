#include "../winhttp.h"

//----- (0000000140490140) ----------------------------------------------------
int* __fastcall sub_140490140(__int64 a1, __int64 a2, __int64 a3)
{
	int* result; // rax
	int* v6; // rbx

	result = sub_14018B280(120i64, 0);
	v6 = result;
	if (result)
	{
		sub_140492EF0(result, a2, a3);
		*(_QWORD*)v6 = off_140B67230;
		return v6;
	}
	return result;
}
// 140B67230: using guessed type __int64 (__fastcall *off_140B67230[11])();

