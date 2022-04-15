#include "../winhttp.h"

//----- (00000001407129A0) ----------------------------------------------------
__int64 __fastcall sub_1407129A0(__int64* a1)
{
	__int64 result; // rax
	int* v3; // rax
	__int64 v4; // rbx
	unsigned int v5; // esi

	if (!a1)
		return 2147942487i64;
	v3 = sub_14018B280(88i64, 0);
	if (v3)
		v4 = sub_140712760((__int64)v3);
	else
		v4 = 0i64;
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
		qword_140C65848,
		v4 + 16,
		0i64);
	v5 = result;
	if ((int)result >= 0)
	{
		*a1 = v4;
	}
	else
	{
		if (v4)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 16i64))(v4, 1i64);
		return v5;
	}
	return result;
}
// 140C65848: using guessed type __int64 qword_140C65848;

