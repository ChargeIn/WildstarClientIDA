#include "../winhttp.h"

//----- (00000001403443C0) ----------------------------------------------------
__int64 __fastcall sub_1403443C0(int a1, unsigned int* a2)
{
	__int64 result; // rax

	LODWORD(result) = a1;
	if (a1 < 0
		|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*))(*(_QWORD*)qword_140C65858 + 344i64))(
			qword_140C65858,
			a2[2],
			a2 + 16),
			(int)result < 0))
	{
		sub_14034A1A0((__int64)(a2 + 22), result);
		return (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a2 + 8i64))(a2);
	}
	return result;
}
// 140C65858: using guessed type __int64 qword_140C65858;

