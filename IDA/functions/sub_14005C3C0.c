#include "../winhttp.h"

//----- (000000014005C3C0) ----------------------------------------------------
_QWORD* __fastcall sub_14005C3C0(__int64 a1, int a2)
{
	_QWORD* result; // rax
	double v3; // [rsp+8h] [rbp+8h]

	if ((unsigned int)(a2 - 1) < *(_DWORD*)(a1 + 56))
		return (_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64 * (a2 - 1));
	if ((double)a2 == 0.0)
	{
		result = *(_QWORD**)(a1 + 32);
	}
	else
	{
		v3 = (double)a2;
		result = (_QWORD*)(*(_QWORD*)(a1 + 32)
			+ 40 * ((unsigned int)(LODWORD(v3) + HIDWORD(v3)) % (((1i64 << *(_BYTE*)(a1 + 11)) - 1) | 1)));
	}
	while (*((_DWORD*)result + 6) != 3 || (double)a2 != *((double*)result + 2))
	{
		result = (_QWORD*)result[4];
		if (!result)
			return &unk_140A12138;
	}
	return result;
}

