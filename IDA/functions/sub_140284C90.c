#include "../winhttp.h"

//----- (0000000140284C90) ----------------------------------------------------
__m128* __fastcall sub_140284C90(__int64 a1, __m128* a2)
{
	__m128* v2; // r8
	__m128* result; // rax
	__int64 v4; // r8
	__m128* v5[10]; // [rsp+30h] [rbp-68h] BYREF

	v2 = *(__m128**)(*(_QWORD*)(a1 + 224) + 16i64);
	v5[0] = a2;
	v5[1] = v2;
	result = sub_1401AFB10(v5, v2);
	*(_DWORD*)(v4 + 128) = 0;
	return result;
}
// 140284CE3: variable 'v4' is possibly undefined

