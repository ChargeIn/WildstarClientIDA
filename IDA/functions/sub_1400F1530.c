#include "../winhttp.h"

//----- (00000001400F1530) ----------------------------------------------------
__int64 __fastcall sub_1400F1530(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rax
	__int64 v4; // r10
	__int64 v5; // r8
	__int64 result; // rax

	*a3 += 8i64;
	v3 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), *(_DWORD*)(*a3 - 8i64));
	v5 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v5 = *v3;
	result = *((unsigned int*)v3 + 2);
	*(_DWORD*)(v5 + 8) = result;
	*(_QWORD*)(v4 + 16) += 16i64;
	return result;
}
// 1400F1551: variable 'v4' is possibly undefined

