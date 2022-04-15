#include "../winhttp.h"

//----- (00000001407C4F30) ----------------------------------------------------
__int64 __fastcall sub_1407C4F30(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 1248); i; i = (_QWORD*)i[13])
		result = (*(__int64(__fastcall**)(_QWORD*))(*i + 280i64))(i);
	return result;
}

