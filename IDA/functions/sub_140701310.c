#include "../winhttp.h"

//----- (0000000140701310) ----------------------------------------------------
__int64 __fastcall sub_140701310(__int64 a1)
{
	_DWORD* v1; // r8
	bool v2; // zf
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 16);
	v2 = *(_DWORD*)(qword_140C65898 + 29980) == 0;
	v1[2] = 1;
	result = 1i64;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

