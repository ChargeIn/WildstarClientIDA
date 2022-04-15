#include "../winhttp.h"

//----- (0000000140780A00) ----------------------------------------------------
unsigned __int64 __fastcall sub_140780A00(__int64 a1, int a2)
{
	__int64 v3; // rdx
	unsigned __int64 result; // rax
	_DWORD* i; // rcx

	v3 = qword_140C7E688;
	if (!qword_140C7E688)
	{
		qword_140C7E688 = (__int64)sub_14018B280(16768i64, qword_140C7E688);
		sub_1407E4830((int*)qword_140C7E688, 0i64, 0x4180ui64);
		v3 = qword_140C7E688;
	}
	result = 0i64;
	for (i = (_DWORD*)v3; *i != a2; i += 524)
	{
		if (++result >= 8)
			return result;
	}
	result = v3 + 2096 * result;
	if (result)
		*(_DWORD*)result = 0;
	return result;
}
// 140C7E688: using guessed type __int64 qword_140C7E688;

