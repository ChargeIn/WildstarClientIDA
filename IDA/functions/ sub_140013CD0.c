#include "../winhttp.h"

//----- (0000000140013CD0) ----------------------------------------------------
__int64 __fastcall sub_140013CD0(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 5552); i; i = (_QWORD*)i[4])
		result = (*(__int64(__fastcall**)(_QWORD*))(*i + 32i64))(i);
	return result;
}

