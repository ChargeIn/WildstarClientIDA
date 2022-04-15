#include "../winhttp.h"

//----- (00000001409520A0) ----------------------------------------------------
__int64 sub_1409520A0()
{
	__int64 result; // rax

	if (qword_140C7CFB0)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7CFB0 - 16) + 8i64))(qword_140C7CFB0 - 16);
	if (qword_140C7CFA0)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7CFA0 - 16) + 8i64))(qword_140C7CFA0 - 16);
	if (qword_140C7CF90)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7CF90 - 16) + 8i64))(qword_140C7CF90 - 16);
	return result;
}
// 140C7CF90: using guessed type __int64 qword_140C7CF90;
// 140C7CFA0: using guessed type __int64 qword_140C7CFA0;
// 140C7CFB0: using guessed type __int64 qword_140C7CFB0;

