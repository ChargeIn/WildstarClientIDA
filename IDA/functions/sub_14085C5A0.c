#include "../winhttp.h"

//----- (000000014085C5A0) ----------------------------------------------------
__int64 __fastcall sub_14085C5A0(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 112); i != *(_QWORD**)(a1 + 120); ++i)
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
	return result;
}

