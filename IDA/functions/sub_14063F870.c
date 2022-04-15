#include "../winhttp.h"

//----- (000000014063F870) ----------------------------------------------------
void __fastcall sub_14063F870(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int* v3; // rbp
	int* v4; // rbx
	unsigned __int64 v5; // rsi
	_BYTE* v6; // rdi
	_QWORD* v7; // rcx

	v2 = *(_QWORD*)(a2 + 16);
	v3 = *(int**)(a2 + 8);
	v4 = 0i64;
	v5 = v2 - (_QWORD)v3;
	if (v2 - (_QWORD)v3 != -2)
		v4 = sub_14018B280(v5 + 1, 0);
	sub_1407DB590(v4, v3, v5);
	v6 = (char*)v4 + v2 - (_QWORD)v3;
	if (v6)
		*v6 = 0;
	if (!((qword_140C7E660 - qword_140C7E638) >> 3))
		sub_14063F980();
	*(_QWORD*)(qword_140C7E660 - 8) = sub_14018B280(480i64, 0);
	qword_140C7E660 -= 8i64;
	qword_140C7E650 = *(_QWORD*)qword_140C7E660;
	qword_140C7E658 = qword_140C7E650 + 480;
	v7 = (_QWORD*)(qword_140C7E650 + 448);
	qword_140C7E648 = qword_140C7E650 + 448;
	if (qword_140C7E650 != -448)
	{
		*(_QWORD*)(qword_140C7E650 + 456) = 0i64;
		v7[2] = 0i64;
		v7[3] = 0i64;
		sub_14001B240(v7, v4, (__int64)v6);
	}
	if (v4)
		sub_14018B900((__int64)v4, 0);
}
// 140C7E638: using guessed type __int64 qword_140C7E638;
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E650: using guessed type __int64 qword_140C7E650;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;

