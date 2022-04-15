#include "../winhttp.h"

//----- (00000001404CCAA0) ----------------------------------------------------
__int64 sub_1404CCAA0()
{
	int* v1; // rax
	__int64 v2; // rbx
	int v3; // edi

	if (qword_140C65A10)
		return 0i64;
	v1 = sub_14018B280(80i64, 0);
	if (v1)
		v2 = sub_1404CCB30((__int64)v1);
	else
		v2 = 0i64;
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	if (v3 >= 0)
	{
		qword_140C65A10 = v2;
		return 0i64;
	}
	else
	{
		(**(void(__fastcall***)(__int64, __int64))v2)(v2, 1i64);
		return (unsigned int)v3;
	}
}
// 140C65A10: using guessed type __int64 qword_140C65A10;

