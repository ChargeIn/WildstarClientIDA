#include "../winhttp.h"

//----- (0000000140631390) ----------------------------------------------------
__int64 sub_140631390()
{
	__int64 result; // rax
	int* v1; // rax
	_QWORD* v2; // rbx
	int v3; // edi

	if (qword_140C65C18)
		return 0i64;
	v1 = sub_14018B280(200i64, 0);
	if (v1)
	{
		v2 = (_QWORD*)sub_14062FDC0((__int64)v1);
		qword_140C65C18 = (__int64)v2;
	}
	else
	{
		v2 = 0i64;
		qword_140C65C18 = 0i64;
	}
	v3 = sub_140630250();
	if (v3 >= 0)
		return 0i64;
	if (v2)
	{
		sub_140630100(v2);
		sub_14018B900((__int64)v2, 0);
	}
	result = (unsigned int)v3;
	qword_140C65C18 = 0i64;
	return result;
}
// 140C65C18: using guessed type __int64 qword_140C65C18;

