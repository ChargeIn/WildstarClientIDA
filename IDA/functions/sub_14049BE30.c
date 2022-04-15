#include "../winhttp.h"

//----- (000000014049BE30) ----------------------------------------------------
__int64 sub_14049BE30()
{
	int* v1; // rax
	__int64 v2; // rbx
	int v3; // edi

	if (qword_140C659A0)
		return 0i64;
	v1 = sub_14018B280(120i64, 0);
	v2 = (__int64)v1;
	if (v1)
	{
		sub_1404A1BE0((__int64)v1);
		*(_QWORD*)v2 = off_140B67740;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	if (v3 >= 0)
	{
		qword_140C659A0 = v2;
		return 0i64;
	}
	else
	{
		(**(void(__fastcall***)(__int64, __int64))v2)(v2, 1i64);
		return (unsigned int)v3;
	}
}
// 140B67740: using guessed type __int64 (__fastcall *off_140B67740[3])();
// 140C659A0: using guessed type __int64 qword_140C659A0;

