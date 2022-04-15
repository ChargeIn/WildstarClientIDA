#include "../winhttp.h"

//----- (0000000140341370) ----------------------------------------------------
__int64 __fastcall sub_140341370(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	if (a2 == qword_140C7A200)
		qword_140C7A200 = *(_QWORD*)(a2 + 24);
	if (a2 == qword_140C7A208)
		qword_140C7A208 = *(_QWORD*)(a2 + 16);
	v2 = *(_QWORD*)(a2 + 24);
	if (v2)
		*(_QWORD*)(v2 + 16) = *(_QWORD*)(a2 + 16);
	v3 = *(_QWORD*)(a2 + 16);
	if (v3)
		*(_QWORD*)(v3 + 24) = *(_QWORD*)(a2 + 24);
	result = 0i64;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	return result;
}
// 140C7A200: using guessed type __int64 qword_140C7A200;
// 140C7A208: using guessed type __int64 qword_140C7A208;

