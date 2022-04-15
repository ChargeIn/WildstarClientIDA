#include "../winhttp.h"

//----- (00000001405746C0) ----------------------------------------------------
__int64 __fastcall sub_1405746C0(_QWORD* a1, __int64 a2)
{
	unsigned int v5; // ebx
	__int64 v6; // rcx

	if (!a2)
		return 0i64;
	if ((*(_BYTE*)(a1[1] + 36i64) & 1) != 0)
		return sub_1403D6400((__int64)a1);
	if (!qword_140C65898
		|| *(_QWORD*)(qword_140C65898 + 120) != a2
		|| !qword_140C65970
		|| *(_DWORD*)(qword_140C65970 + 8) != 1
		|| (*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1))
	{
		return 0i64;
	}
	v5 = 0;
	if (!a1[15])
		return 0i64;
	v6 = 0i64;
	while (!(unsigned int)sub_1403D7C30(*(_QWORD*)(a1[14] + 8 * v6), a2, 0))
	{
		v6 = ++v5;
		if ((unsigned __int64)v5 >= a1[15])
			return 0i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

