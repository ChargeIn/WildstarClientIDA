#include "../winhttp.h"

//----- (000000014048BEF0) ----------------------------------------------------
__int64 sub_14048BEF0()
{
	int* v0; // rax
	__int64 v1; // rcx
	__int64 v2; // rbx

	if (qword_140C665D8)
		return 0i64;
	v0 = sub_14018B280(112i64, 0);
	qword_140C665D8 = v0 ? (__int64)sub_140723A50(v0) : 0i64;
	if ((int)sub_140723CE0(v1) >= 0)
		return 0i64;
	v2 = qword_140C665D8;
	if (qword_140C665D8)
	{
		sub_140723B70(qword_140C665D8);
		sub_14018B900(v2, 0);
	}
	qword_140C665D8 = 0i64;
	return 2147500037i64;
}
// 14048BF29: variable 'v1' is possibly undefined
// 140C665D8: using guessed type __int64 qword_140C665D8;

