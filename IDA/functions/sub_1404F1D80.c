#include "../winhttp.h"

//----- (00000001404F1D80) ----------------------------------------------------
__int64 __fastcall sub_1404F1D80(__int64 a1)
{
	_DWORD* v1; // rdx
	bool v2; // zf

	v1 = *(_DWORD**)(a1 + 16);
	v2 = qword_140C63630 == 0;
	v1[2] = 1;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63630: using guessed type __int64 qword_140C63630;

