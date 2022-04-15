#include "../winhttp.h"

//----- (0000000140336330) ----------------------------------------------------
__int64 __fastcall sub_140336330(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rax

	if (!*(_QWORD*)(a1 + 32))
		return 2147500037i64;
	v3 = sub_140338550(*(__int64**)(a1 + 24));
	if (!v3)
		return 2147500037i64;
	sub_140337F20(*(_QWORD**)(a1 + 32), v3);
	result = 0i64;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
	return result;
}

