#include "../winhttp.h"

//----- (000000014086B570) ----------------------------------------------------
_DWORD* __fastcall sub_14086B570(__int64** a1, int a2, _DWORD* a3)
{
	__int64* v3; // rax
	_DWORD* v7; // rdi
	__int64* v8; // rax
	__int64* v9; // rcx
	__int64* v10; // rax
	_DWORD* result; // rax
	__int64* v12; // rcx
	__int64* v13; // rax
	_DWORD* v14; // rax

	v3 = *a1;
	if (*a1)
	{
		while (*((_DWORD*)v3 + 2) != a2)
		{
			v3 = (__int64*)*v3;
			if (!v3)
				goto LABEL_4;
		}
		v7 = (_DWORD*)v3 + 3;
		if (v3 != (__int64*)-12i64)
		{
			*v7 = *a3;
			*((_DWORD*)v3 + 4) = a3[1];
			*((_DWORD*)v3 + 5) = a3[2];
			return v7;
		}
	}
	else
	{
	LABEL_4:
		v7 = 0i64;
	}
	if (!a1[2])
	{
		if (*((_DWORD*)a1 + 8) >= *((_DWORD*)a1 + 7))
			return v7;
		v8 = (__int64*)sub_1408819F0(dword_140C10F20, 24i64);
		if (!v8)
			return v7;
		*v8 = (__int64)a1[2];
		a1[2] = v8;
	}
	v9 = a1[1];
	v10 = a1[2];
	if (v9)
		*v9 = (__int64)v10;
	else
		*a1 = v10;
	v12 = a1[2];
	a1[1] = v12;
	a1[2] = (__int64*)*v12;
	*v12 = 0i64;
	v13 = a1[1];
	++* ((_DWORD*)a1 + 8);
	v14 = v13 + 1;
	if (!v14)
		return v7;
	*v14 = a2;
	result = v14 + 1;
	*result = *a3;
	result[1] = a3[1];
	result[2] = a3[2];
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

