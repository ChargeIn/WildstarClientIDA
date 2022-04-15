#include "../winhttp.h"

//----- (0000000140701340) ----------------------------------------------------
__int64 __fastcall sub_140701340(__int64 a1)
{
	unsigned int v1; // edx
	bool v2; // cf
	bool v3; // zf
	_DWORD* v4; // rdx
	__int64 result; // rax

	v1 = *(_DWORD*)(qword_140C65B98 + 268) - 3;
	v2 = v1 < 2;
	v3 = v1 == 2;
	v4 = *(_DWORD**)(a1 + 16);
	v4[2] = 1;
	result = 1i64;
	*v4 = v2 || v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

