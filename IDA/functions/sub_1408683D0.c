#include "../winhttp.h"

//----- (00000001408683D0) ----------------------------------------------------
__int64 __fastcall sub_1408683D0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 32);
	if (v1)
		sub_140881720(dword_140C10F28, v1);
	result = 0i64;
	*(_WORD*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

