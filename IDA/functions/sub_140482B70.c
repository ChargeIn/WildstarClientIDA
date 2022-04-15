#include "../winhttp.h"

//----- (0000000140482B70) ----------------------------------------------------
__int64 sub_140482B70()
{
	int* v1; // rax
	_QWORD* v2; // rbx
	int v3; // edi

	if (qword_140C65918)
		return 0i64;
	v1 = sub_14018B280(184i64, 0);
	if (v1)
		v2 = sub_140482C00(v1);
	else
		v2 = 0i64;
	v3 = sub_140482EA0((__int64)v2);
	if (v3 >= 0)
	{
		qword_140C65918 = (__int64)v2;
		return 0i64;
	}
	else
	{
		if (v2)
			(*(void(__fastcall**)(_QWORD*, __int64)) * v2)(v2, 1i64);
		return (unsigned int)v3;
	}
}
// 140C65918: using guessed type __int64 qword_140C65918;

