#include "../winhttp.h"

//----- (000000014063F7A0) ----------------------------------------------------
__int64 sub_14063F7A0()
{
	__int64* v0; // rsi
	unsigned __int64 v1; // rbx
	__int64 v2; // rcx
	__int64 result; // rax

	qword_140C7E640 = 8i64;
	qword_140C7E638 = (__int64)sub_14018B280(64i64, 0);
	v0 = (__int64*)(qword_140C7E638 + 8 * ((unsigned __int64)(qword_140C7E640 - 1) >> 1));
	v1 = (unsigned __int64)v0;
	if (v0 < v0 + 1)
	{
		do
		{
			v1 += 8i64;
			*(_QWORD*)(v1 - 8) = sub_14018B280(480i64, 0);
		} while (v1 < (unsigned __int64)(v0 + 1));
	}
	qword_140C7E660 = (__int64)v0;
	qword_140C7E650 = *v0;
	qword_140C7E658 = qword_140C7E650 + 480;
	qword_140C7E680 = (__int64)v0;
	v2 = *v0;
	qword_140C7E648 = qword_140C7E650;
	result = v2 + 480;
	qword_140C7E670 = v2;
	qword_140C7E668 = v2;
	qword_140C7E678 = v2 + 480;
	return result;
}
// 140C7E638: using guessed type __int64 qword_140C7E638;
// 140C7E640: using guessed type __int64 qword_140C7E640;
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E650: using guessed type __int64 qword_140C7E650;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;
// 140C7E668: using guessed type __int64 qword_140C7E668;
// 140C7E670: using guessed type __int64 qword_140C7E670;
// 140C7E678: using guessed type __int64 qword_140C7E678;
// 140C7E680: using guessed type __int64 qword_140C7E680;

