#include "../winhttp.h"

//----- (0000000140787950) ----------------------------------------------------
__int64 __fastcall sub_140787950(__int64 a1)
{
	_QWORD** v1; // rdx
	__int64 result; // rax
	_QWORD* i; // rcx

	v1 = *(_QWORD***)(a1 + 40);
	result = 0i64;
	for (i = *v1; i != v1; ++result)
		i = (_QWORD*)*i;
	return result;
}

