#include "../winhttp.h"

//----- (00000001404803F0) ----------------------------------------------------
_DWORD* __fastcall sub_1404803F0(__int64 a1, _DWORD* a2, __int64 a3)
{
	_DWORD* v6; // rax
	_DWORD* v7; // rdi
	_DWORD* i; // rbx
	__int64 v9; // rcx

	v6 = sub_140482150(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(_DWORD**)(a1 + 16);
	for (i = v6; i != v7; i += 10)
	{
		v9 = *((_QWORD*)i + 2);
		if (v9)
			sub_14018B900(v9, 0);
	}
	*(_QWORD*)(a1 + 16) += 40 * ((a3 - (__int64)a2) / -40);
	return a2;
}

