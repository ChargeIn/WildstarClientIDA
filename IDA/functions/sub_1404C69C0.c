#include "../winhttp.h"

//----- (00000001404C69C0) ----------------------------------------------------
__int64 __fastcall sub_1404C69C0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = *(_QWORD**)(a2 + 32);
	if (v2)
		*v2 = *(_QWORD*)(a2 + 40);
	v3 = *(_QWORD*)(a2 + 40);
	if (v3)
		*(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 32);
	result = 0i64;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 40) = 0i64;
	return result;
}

