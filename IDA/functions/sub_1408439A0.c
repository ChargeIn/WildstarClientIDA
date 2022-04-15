#include "../winhttp.h"

//----- (00000001408439A0) ----------------------------------------------------
__int64 __fastcall sub_1408439A0(__int64 a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rcx
	__int64 v4; // rax
	_QWORD* v6; // rcx
	__int64 v7; // rax

	if (!*(_QWORD*)(a1 + 16))
	{
		if (*(_DWORD*)(a1 + 32) >= *(_DWORD*)(a1 + 28))
			return 0i64;
		v2 = (_QWORD*)sub_1408819F0(dword_140C10F20, 32i64);
		if (!v2)
			return 0i64;
		*v2 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 16) = v2;
	}
	v3 = *(_QWORD**)(a1 + 8);
	v4 = *(_QWORD*)(a1 + 16);
	if (v3)
		*v3 = v4;
	else
		*(_QWORD*)a1 = v4;
	v6 = *(_QWORD**)(a1 + 16);
	*(_QWORD*)(a1 + 8) = v6;
	*(_QWORD*)(a1 + 16) = *v6;
	*v6 = 0i64;
	v7 = *(_QWORD*)(a1 + 8);
	++* (_DWORD*)(a1 + 32);
	return v7 + 8;
}
// 140C10F20: using guessed type int dword_140C10F20;

