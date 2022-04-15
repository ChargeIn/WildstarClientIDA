#include "../winhttp.h"

//----- (00000001404AAB00) ----------------------------------------------------
__int64 sub_1404AAB00()
{
	int* v1; // rax
	__int64 v2; // rbx
	int v3; // edi

	if (qword_140C659C0)
		return 0i64;
	v1 = sub_14018B280(40i64, 0);
	v2 = (__int64)v1;
	if (v1)
	{
		*((_QWORD*)v1 + 2) = 0i64;
		*((_QWORD*)v1 + 1) = 0i64;
		*((_QWORD*)v1 + 4) = 0i64;
		*((_QWORD*)v1 + 3) = 0i64;
		*(_QWORD*)v1 = off_140B68760;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	if (v3 >= 0)
	{
		qword_140C659C0 = v2;
		return 0i64;
	}
	else
	{
		(**(void(__fastcall***)(__int64, __int64))v2)(v2, 1i64);
		return (unsigned int)v3;
	}
}
// 140B68760: using guessed type __int64 (__fastcall *off_140B68760[8])();
// 140C659C0: using guessed type __int64 qword_140C659C0;

