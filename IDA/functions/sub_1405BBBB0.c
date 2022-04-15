#include "../winhttp.h"

//----- (00000001405BBBB0) ----------------------------------------------------
_QWORD* sub_1405BBBB0()
{
	_QWORD* result; // rax
	int* v1; // rax

	result = (_QWORD*)qword_140C65B88;
	if (!qword_140C65B88)
	{
		v1 = sub_14018B280((unsigned int)(qword_140C65B88 + 72), 0);
		if (v1)
		{
			result = sub_1405B92D0(v1);
			qword_140C65B88 = (__int64)result;
		}
		else
		{
			qword_140C65B88 = 0i64;
			return 0i64;
		}
	}
	return result;
}
// 140C65B88: using guessed type __int64 qword_140C65B88;

