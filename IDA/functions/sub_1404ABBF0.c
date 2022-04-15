#include "../winhttp.h"

//----- (00000001404ABBF0) ----------------------------------------------------
__int64 sub_1404ABBF0()
{
	int* v0; // rax
	_QWORD* v1; // rcx
	__int64 v2; // rbx

	if (qword_140C659D0)
		return 0i64;
	v0 = sub_14018B280(400i64, 0);
	if (v0)
	{
		v1 = sub_1404ABC80(v0);
		qword_140C659D0 = (__int64)v1;
	}
	else
	{
		v1 = 0i64;
		qword_140C659D0 = 0i64;
	}
	if ((*(int(__fastcall**)(_QWORD*)) * v1)(v1) >= 0)
		return 0i64;
	sub_1404AC840();
	v2 = qword_140C659D0;
	if (qword_140C659D0)
	{
		sub_1404ABF70((_QWORD*)qword_140C659D0);
		sub_14018B900(v2, 0);
	}
	qword_140C659D0 = 0i64;
	return 2147500037i64;
}
// 140C659D0: using guessed type __int64 qword_140C659D0;

