#include "../winhttp.h"

//----- (0000000140708DD0) ----------------------------------------------------
__int64 __fastcall sub_140708DD0(__int64 a1)
{
	unsigned int v2; // edi
	_DWORD* v3; // rax
	int v4; // edx
	__int64 v5; // rax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	if (!dword_140C7E6A0[0])
		sub_1406454B0();
	v3 = (_DWORD*)sub_14024ACC0(v2);
	if (v3)
	{
		v4 = v3[19];
		if (*((_DWORD*)&qword_140C7E6A4 + (int)v3[20]) - v3[18] < (unsigned int)v4)
			v4 = *((_DWORD*)&qword_140C7E6A4 + (int)v3[20]) - v3[18];
	}
	else
	{
		v4 = 0;
	}
	v5 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;

