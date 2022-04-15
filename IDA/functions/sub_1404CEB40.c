#include "../winhttp.h"

//----- (00000001404CEB40) ----------------------------------------------------
__int64 sub_1404CEB40()
{
	int* v0; // rax
	__int64 v1; // rcx

	if (qword_140C65A20)
		return 0i64;
	v0 = sub_14018B280(144i64, 0);
	if (v0)
	{
		v1 = sub_1404CEBC0((__int64)v0);
		qword_140C65A20 = v1;
	}
	else
	{
		v1 = 0i64;
		qword_140C65A20 = 0i64;
	}
	if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1) >= 0)
		return 0i64;
	if (qword_140C65A20)
		(**(void(__fastcall***)(__int64, __int64))qword_140C65A20)(qword_140C65A20, 1i64);
	qword_140C65A20 = 0i64;
	return 2147500037i64;
}
// 140C65A20: using guessed type __int64 qword_140C65A20;

