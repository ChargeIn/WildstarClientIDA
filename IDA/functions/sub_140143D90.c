#include "../winhttp.h"

//----- (0000000140143D90) ----------------------------------------------------
__int64 __fastcall sub_140143D90(__int64 a1)
{
	_DWORD* v2; // rdi
	_DWORD* v3; // rax
	int v4; // edx
	BOOL v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = (_DWORD*)sub_140143AE0(a1, 1);
	v3 = (_DWORD*)sub_140143AE0(a1, 2);
	v4 = 0;
	v5 = v2 == v3 || v2 && v3 && *v2 == *v3;
	v6 = *(_DWORD**)(a1 + 16);
	v7 = !v5;
	result = 1i64;
	LOBYTE(v4) = !v7;
	v6[2] = 1;
	*v6 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

