#include "../winhttp.h"

//----- (000000014053D140) ----------------------------------------------------
void __fastcall sub_14053D140(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rbx
	__int64 v4; // r8
	__int64 v5; // rax

	v2 = (_DWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v3 = (__int64)v2;
	if (v2)
	{
		v2[1578] = 1;
		v4 = *(_QWORD*)(qword_140C65898 + 120);
		if (v4 && v2[2] == *(_DWORD*)(v4 + 8))
			*(_DWORD*)(qword_140C65898 + 28568) = 1;
		v5 = sub_140561C30(qword_140C65B70, v2[1408]);
		if (!v5 && *(_QWORD*)(qword_140C65898 + 120) == v3)
		{
			v5 = sub_14039DF50(qword_140C65898);
			if (v5)
				v5 = sub_1404695E0(v5);
		}
		if (v5 == a1)
			sub_1404698A0(v3);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

