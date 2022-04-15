#include "../winhttp.h"

//----- (000000014043C620) ----------------------------------------------------
__int64 sub_14043C620()
{
	_QWORD** v0; // rax
	_QWORD* i; // rbx
	__int64 v2; // rdi
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rbx
	__int64 v6; // rcx

	sub_14043DA00((__int64)dword_140C7CC70);
	sub_14043DA00((__int64)&unk_140C7CC80);
	sub_140008410((__int64)&unk_140C7CC90);
	v0 = (_QWORD**)qword_140C7CD58;
	for (i = *(_QWORD**)qword_140C7CD58; i != v0; i = (_QWORD*)*i)
	{
		v2 = i[2];
		if (v2)
		{
			sub_140195D70(i[2]);
			*(_DWORD*)v2 = 0;
			v3 = *(_QWORD**)(v2 + 16);
			if (v3)
				*v3 = *(_QWORD*)(v2 + 24);
			v4 = *(_QWORD**)(v2 + 24);
			if (v4)
				*v4 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)(v2 + 16) = 0i64;
			*(_QWORD*)(v2 + 24) = 0i64;
			sub_14018B900(v2, 0);
			v0 = (_QWORD**)qword_140C7CD58;
		}
	}
	v5 = *v0;
	if (*v0 != v0)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
			v0 = (_QWORD**)qword_140C7CD58;
		} while (v5 != (_QWORD*)qword_140C7CD58);
	}
	*v0 = v0;
	*(_QWORD*)(qword_140C7CD58 + 8) = qword_140C7CD58;
	return 0i64;
}
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD58: using guessed type __int64 qword_140C7CD58;

