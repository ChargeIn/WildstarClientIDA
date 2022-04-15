#include "../winhttp.h"

//----- (0000000140830940) ----------------------------------------------------
__int64 __fastcall sub_140830940(__int64** a1, __int64 a2)
{
	__int64* v3; // rax
	__int64 result; // rax
	__int64* v5; // rcx
	__int64* v6; // rax
	__int64* v7; // rcx
	__int64* v8; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h]

	v3 = *a1;
	LODWORD(v9) = *(_DWORD*)(a2 + 24);
	BYTE4(v9) = (*(_BYTE*)(a2 + 91) & 2) != 0;
	if (!*a1)
		goto LABEL_7;
	while (*(_DWORD*)(a2 + 24) != *((_DWORD*)v3 + 2) || ((*(_BYTE*)(a2 + 91) & 2) != 0) != *((_BYTE*)v3 + 12))
	{
		v3 = (__int64*)*v3;
		if (!v3)
			goto LABEL_7;
	}
	result = (__int64)(v3 + 1);
	if (!result)
	{
	LABEL_7:
		if (!a1[2])
		{
			result = *((unsigned int*)a1 + 7);
			if (*((_DWORD*)a1 + 8) >= (unsigned int)result)
				return result;
			result = sub_1408819F0(dword_140C10F20, 16i64);
			if (!result)
				return result;
			*(_QWORD*)result = a1[2];
			a1[2] = (__int64*)result;
		}
		v5 = a1[1];
		v6 = a1[2];
		if (v5)
			*v5 = (__int64)v6;
		else
			*a1 = v6;
		v7 = a1[2];
		a1[1] = v7;
		a1[2] = (__int64*)*v7;
		result = v9;
		*v7 = 0i64;
		v8 = a1[1];
		++* ((_DWORD*)a1 + 8);
		v8[1] = v9;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

