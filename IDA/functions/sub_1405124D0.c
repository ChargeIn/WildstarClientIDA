#include "../winhttp.h"

//----- (00000001405124D0) ----------------------------------------------------
__int64 sub_1405124D0()
{
	_QWORD** v0; // rax
	_QWORD* i; // rbx
	__int64 v2; // rdi
	__int64 v3; // rcx
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	__int64 result; // rax

	v0 = (_QWORD**)qword_140C7D5E8;
	for (i = *(_QWORD**)qword_140C7D5E8; i != v0; i = (_QWORD*)*i)
	{
		v2 = i[2];
		if (v2)
		{
			v3 = *(_QWORD*)(v2 + 40);
			if (v3)
				sub_14018B900(v3, 0);
			sub_14018B900(v2, 0);
			v0 = (_QWORD**)qword_140C7D5E8;
		}
	}
	v4 = *v0;
	if (*v0 != v0)
	{
		do
		{
			v5 = (__int64)v4;
			v4 = (_QWORD*)*v4;
			sub_14018B900(v5, 0);
			v0 = (_QWORD**)qword_140C7D5E8;
		} while (v4 != (_QWORD*)qword_140C7D5E8);
	}
	*v0 = v0;
	*(_QWORD*)(qword_140C7D5E8 + 8) = qword_140C7D5E8;
	result = 0i64;
	qword_140C7D624 = 0i64;
	dword_140C7D62C = 0;
	xmmword_140C7D630 = 0i64;
	return result;
}
// 140C7D5E8: using guessed type __int64 qword_140C7D5E8;
// 140C7D624: using guessed type __int64 qword_140C7D624;
// 140C7D62C: using guessed type int dword_140C7D62C;
// 140C7D630: using guessed type __int128 xmmword_140C7D630;

