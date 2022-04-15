#include "../winhttp.h"

//----- (00000001401C7690) ----------------------------------------------------
_QWORD* __fastcall sub_1401C7690(__int64 a1)
{
	__int64 v1; // r8
	__int64 v2; // rax
	_QWORD* result; // rax

	v1 = qword_140C63758 + 48 + 8i64 * *(int*)(a1 + 44);
	v2 = *(_QWORD*)(v1 + 24);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 136) = v2;
	result = *(_QWORD**)(v1 + 24);
	*result = a1;
	*(_QWORD*)(v1 + 24) = a1 + 144;
	return result;
}
// 140C63758: using guessed type __int64 qword_140C63758;

