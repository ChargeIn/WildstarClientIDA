#include "../winhttp.h"

//----- (00000001405FAFB0) ----------------------------------------------------
__int64 sub_1405FAFB0()
{
	int* v1; // rax
	__int64* v2; // rbx
	int v3; // edi

	if (qword_140C65BA8)
		return 0i64;
	v1 = sub_14018B280(448i64, 0);
	if (v1)
		v2 = sub_1405F8E90(v1);
	else
		v2 = 0i64;
	v3 = sub_1405F9BB0((__int64)v2);
	if (v3 >= 0)
	{
		qword_140C65BA8 = (__int64)v2;
		return 0i64;
	}
	else
	{
		if (v2)
		{
			sub_1405F91B0(v2);
			sub_14018B900((__int64)v2, 0);
		}
		return (unsigned int)v3;
	}
}
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

