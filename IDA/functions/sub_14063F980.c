#include "../winhttp.h"

//----- (000000014063F980) ----------------------------------------------------
__int64 sub_14063F980()
{
	__int64 v0; // r8
	__int64 v1; // rbp
	__int64 v2; // rsi
	unsigned __int64 v3; // rcx
	int* v4; // rsi
	__int64* v5; // rax
	__int64 v6; // rdi
	int* v7; // rbx
	__int64 result; // rax
	__int64 v9; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C7E680 - qword_140C7E660;
	v9 = 1i64;
	v1 = (qword_140C7E680 - qword_140C7E660) >> 3;
	v2 = v1 + 2;
	if (qword_140C7E640 <= (unsigned __int64)(2 * (v1 + 2)))
	{
		v5 = &v9;
		if (qword_140C7E640)
			v5 = &qword_140C7E640;
		v6 = *v5 + qword_140C7E640 + 2;
		v7 = sub_14018B280(8 * v6, 0);
		v4 = &v7[2 * ((unsigned __int64)(v6 - v2) >> 1) + 2];
		sub_1407DB590(v4, (int*)qword_140C7E660, (qword_140C7E680 - qword_140C7E660 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
		sub_14018B900(qword_140C7E638, 0);
		qword_140C7E638 = (__int64)v7;
		qword_140C7E640 = v6;
	}
	else
	{
		v3 = (unsigned __int64)(qword_140C7E640 - v2) >> 1;
		v4 = (int*)(qword_140C7E638 + 8 + 8 * v3);
		if ((unsigned __int64)v4 >= qword_140C7E660)
			sub_1407DB590(&v4[2 * (v1 + 1 - ((v0 + 8) >> 3))], (int*)qword_140C7E660, 8 * ((v0 + 8) >> 3));
		else
			sub_1407DB590((int*)(qword_140C7E638 + 8 + 8 * v3), (int*)qword_140C7E660, (v0 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
	}
	qword_140C7E660 = (__int64)v4;
	qword_140C7E650 = *(_QWORD*)v4;
	qword_140C7E658 = qword_140C7E650 + 480;
	qword_140C7E680 = (__int64)&v4[2 * v1];
	qword_140C7E670 = *(_QWORD*)qword_140C7E680;
	result = qword_140C7E670 + 480;
	qword_140C7E678 = qword_140C7E670 + 480;
	return result;
}
// 140C7E638: using guessed type __int64 qword_140C7E638;
// 140C7E640: using guessed type __int64 qword_140C7E640;
// 140C7E650: using guessed type __int64 qword_140C7E650;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;
// 140C7E670: using guessed type __int64 qword_140C7E670;
// 140C7E678: using guessed type __int64 qword_140C7E678;
// 140C7E680: using guessed type __int64 qword_140C7E680;

