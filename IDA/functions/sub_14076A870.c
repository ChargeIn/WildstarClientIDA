#include "../winhttp.h"

//----- (000000014076A870) ----------------------------------------------------
__int64 __fastcall sub_14076A870(__int64 a1)
{
	int v1; // edx
	int v3; // eax
	_DWORD* v4; // rcx
	bool v5; // zf
	__int64 result; // rax

	v1 = 0;
	if (*(_QWORD*)(qword_140C65B98 + 208)
		|| *(_DWORD*)(qword_140C65B98 + 172)
		|| (v3 = 0, *(_DWORD*)(qword_140C65B98 + 180)))
	{
		v3 = 1;
	}
	v4 = *(_DWORD**)(a1 + 16);
	v5 = v3 == 0;
	result = 1i64;
	LOBYTE(v1) = !v5;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

