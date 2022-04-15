#include "../winhttp.h"

//----- (00000001402CED30) ----------------------------------------------------
__int64 __fastcall sub_1402CED30(__int64* a1, __int64 a2)
{
	int* v3; // rax
	__int64 result; // rax

	a1[1] = a2;
	if (a2)
	{
		v3 = sub_14018B280(4 * a2 + 16, 0);
		if (v3)
		{
			result = (__int64)(v3 + 4);
			*(_QWORD*)(result - 16) = &off_140B5F110;
			*a1 = result;
		}
		else
		{
			result = 16i64;
			*a1 = 16i64;
		}
	}
	else
	{
		result = 0i64;
		*a1 = 0i64;
	}
	return result;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

