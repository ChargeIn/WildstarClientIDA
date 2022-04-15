#include "../winhttp.h"

//----- (0000000140619660) ----------------------------------------------------
__int64 sub_140619660()
{
	int* v0; // rax
	unsigned __int64 v1; // rdx
	__int64 v2; // r8
	int* v3; // rbx

	if (qword_140C65BB8)
		return 0i64;
	v0 = sub_14018B280(216i64, 0);
	v3 = v0;
	if (v0)
	{
		sub_1404CD470(v0, v1);
		*(_QWORD*)v3 = off_140B6FAC0;
	}
	else
	{
		v3 = 0i64;
	}
	qword_140C65BB8 = (__int64)v3;
	if ((int)sub_1404CD630(v3, v1, v2) >= 0)
		return 0i64;
	if (qword_140C65BB8)
		(**(void(__fastcall***)(__int64, __int64))qword_140C65BB8)(qword_140C65BB8, 1i64);
	qword_140C65BB8 = 0i64;
	return 2147500037i64;
}
// 14061968A: variable 'v1' is possibly undefined
// 1406196A7: variable 'v2' is possibly undefined
// 140B6FAC0: using guessed type __int64 (__fastcall *off_140B6FAC0[21])();
// 140C65BB8: using guessed type __int64 qword_140C65BB8;

