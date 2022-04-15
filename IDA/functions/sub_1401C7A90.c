#include "../winhttp.h"

//----- (00000001401C7A90) ----------------------------------------------------
__int64 __fastcall sub_1401C7A90(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r8
	__int64 v4; // rax

	v2 = qword_140C63758;
	v3 = qword_140C63758 + 8i64 * *(int*)(a1 + 44);
	v4 = *(_QWORD*)(v3 + 144);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 136) = v4;
	**(_QWORD**)(v3 + 144) = a1;
	*(_QWORD*)(v3 + 144) = a1 + 144;
	return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v2 + 176) + 16i64))(
		*(_QWORD*)(v2 + 176),
		*(unsigned int*)(a1 + 16));
}
// 140C63758: using guessed type __int64 qword_140C63758;

