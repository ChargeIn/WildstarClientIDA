#include "../winhttp.h"

//----- (000000014088B570) ----------------------------------------------------
__int64 __fastcall sub_14088B570(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 result; // rax
	__int64 v4; // rdx

	for (i = *(_QWORD**)(a1 + 48); i; i = (_QWORD*)i[1])
		result = (*(__int64(__fastcall**)(_QWORD*))(*i + 8i64))(i);
	v4 = *(_QWORD*)(a1 + 56);
	*(_BYTE*)(a1 + 98) |= 0x10u;
	if (v4)
		return sub_14083AED0(qword_140C61B70, v4);
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

