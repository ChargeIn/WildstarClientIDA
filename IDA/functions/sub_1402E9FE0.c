#include "../winhttp.h"

//----- (00000001402E9FE0) ----------------------------------------------------
__int64 sub_1402E9FE0()
{
	_QWORD* v0; // rbx
	int* v1; // rcx
	__int64 v2; // rax
	int* v3; // rax
	int v4; // edx
	int v5; // edi

	v0 = 0i64;
	if (!byte_140C890F4)
	{
		v1 = sub_14018B280(24i64, 0);
		if (v1)
		{
			*((_QWORD*)v1 + 1) = 2i64;
			*((_QWORD*)v1 + 2) = 0i64;
			*(_QWORD*)v1 = &unk_140C38790;
		}
		else
		{
			v1 = 0i64;
		}
		v2 = qword_140C63770;
		byte_140C890F4 = 1;
		qword_140C63770 = (__int64)v1;
		*((_QWORD*)v1 + 2) = v2;
	}
	if (qword_140C65800)
		return 0i64;
	v3 = sub_14018B280(2352i64, 0);
	if (v3)
		v0 = (_QWORD*)sub_1402EA5B0((__int64)v3);
	v5 = sub_1402EB270(v0, v4);
	if (v5 >= 0)
	{
		qword_140C65800 = (__int64)v0;
		return 0i64;
	}
	if (v0)
	{
		sub_1402EAE60((__int64)v0);
		sub_14018B900((__int64)v0, 0);
	}
	return (unsigned int)v5;
}
// 1402EA063: variable 'v4' is possibly undefined
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C65800: using guessed type __int64 qword_140C65800;
// 140C890F4: using guessed type char byte_140C890F4;

