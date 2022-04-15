#include "../winhttp.h"

//----- (00000001402CA320) ----------------------------------------------------
_QWORD* __fastcall sub_1402CA320(__int64 a1, _QWORD* a2, __int64 a3)
{
	_QWORD* v6; // rax
	_QWORD* v7; // rdi
	_QWORD* i; // rbx
	_QWORD* result; // rax

	v6 = sub_1402CAF00(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(_QWORD**)(a1 + 16);
	for (i = v6; i != v7; i += 22)
		sub_1402D3190(i);
	result = a2;
	*(_QWORD*)(a1 + 16) += 176 * ((a3 - (__int64)a2) / -176);
	return result;
}

