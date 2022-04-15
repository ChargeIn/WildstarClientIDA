#include "../winhttp.h"

//----- (000000014085BC80) ----------------------------------------------------
_DWORD* __fastcall sub_14085BC80(__int64** a1, int a2)
{
	__int64* v2; // rax
	__int64 v5; // rdi
	__int64* v6; // rax
	__int64* v7; // rcx
	__int64* v8; // rax
	__int64* v10; // rcx
	__int64* v11; // rax
	_DWORD* v12; // rax

	v2 = *a1;
	if (*a1)
	{
		while (*((_DWORD*)v2 + 2) != a2)
		{
			v2 = (__int64*)*v2;
			if (!v2)
				goto LABEL_4;
		}
		v5 = (__int64)v2 + 12;
		if (v2 != (__int64*)-12i64)
			return (_DWORD*)v5;
	}
	else
	{
	LABEL_4:
		v5 = 0i64;
	}
	if (!a1[2])
	{
		if (*((_DWORD*)a1 + 8) >= *((_DWORD*)a1 + 7))
			return (_DWORD*)v5;
		v6 = (__int64*)sub_1408819F0(dword_140C10F20, 32i64);
		if (!v6)
			return (_DWORD*)v5;
		*v6 = (__int64)a1[2];
		a1[2] = v6;
	}
	v7 = a1[1];
	v8 = a1[2];
	if (v7)
		*v7 = (__int64)v8;
	else
		*a1 = v8;
	v10 = a1[2];
	a1[1] = v10;
	a1[2] = (__int64*)*v10;
	*v10 = 0i64;
	v11 = a1[1];
	++* ((_DWORD*)a1 + 8);
	v12 = v11 + 1;
	if (!v12)
		return (_DWORD*)v5;
	*v12 = a2;
	return v12 + 1;
}
// 140C10F20: using guessed type int dword_140C10F20;

