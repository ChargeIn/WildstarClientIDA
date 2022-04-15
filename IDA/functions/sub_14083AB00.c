#include "../winhttp.h"

//----- (000000014083AB00) ----------------------------------------------------
__int64 __fastcall sub_14083AB00(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rax
	_QWORD* v4; // r9
	__int64 i; // rcx
	_QWORD* v7; // rdx

	v3 = *(_QWORD**)(a2 + 40);
	v4 = *(_QWORD**)(a2 + 48);
	for (i = a2 + 40; v3 != v4; ++v3)
	{
		if (*v3 == a3)
			break;
	}
	v7 = 0i64;
	if (v3 != v4)
		v7 = v3;
	if (v7)
		return 28i64;
	if (*(_BYTE*)(a2 + 73) == 0xFF || !sub_14084CA80(i, a3))
		return 27i64;
	++* (_BYTE*)(a2 + 73);
	return 1i64;
}

