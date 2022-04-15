#include "../winhttp.h"

//----- (00000001404D61B0) ----------------------------------------------------
__int64 __fastcall sub_1404D61B0(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax

	v2 = (__int64)sub_14018B280(1552i64, 0);
	if (v2)
		v2 = sub_140726760(v2);
	*(_QWORD*)(a1 + 200) = v2;
	result = sub_140726EC0(v2);
	if ((int)result >= 0)
	{
		qword_140C665E0 = *(_QWORD*)(a1 + 200);
		return 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 76) = 1i64;
	}
	return result;
}
// 140C665E0: using guessed type __int64 qword_140C665E0;

