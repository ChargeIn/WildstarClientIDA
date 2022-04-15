#include "../winhttp.h"

//----- (0000000140054DD0) ----------------------------------------------------
__int64 sub_140054DD0()
{
	__int64 result; // rax
	int* v1; // rax
	__int64 v2; // rcx
	int v3; // ebx

	if (qword_140C63630)
		return 0i64;
	v1 = sub_14018B280(120i64, 0);
	if (v1)
	{
		v2 = sub_140054E60((__int64)v1);
		qword_140C63630 = v2;
	}
	else
	{
		v2 = 0i64;
		qword_140C63630 = 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	if (v3 >= 0)
		return 0i64;
	if (qword_140C63630)
		(**(void(__fastcall***)(__int64, __int64))qword_140C63630)(qword_140C63630, 1i64);
	result = (unsigned int)v3;
	qword_140C63630 = 0i64;
	return result;
}
// 140C63630: using guessed type __int64 qword_140C63630;

