#include "../winhttp.h"

//----- (00000001404BEC40) ----------------------------------------------------
__int64 __fastcall sub_1404BEC40(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = 0i64;
	for (*a1 = off_140B688A0; v1 < a1[39]; ++v1)
	{
		v3 = *(_QWORD*)(a1[38] + 8 * v1);
		if (v3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 104i64))(v3);
	}
	a1[39] = 0i64;
	(*(void(__fastcall**)(_QWORD*))(a1[4] + 8i64))(a1 + 4);
	v4 = a1[38];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[2];
	*a1 = off_140B687F0;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5);
	a1[4] = off_140B68A90;
	sub_140626760((__int64)(a1 + 4));
	a1[4] = off_140B6FB70;
	return sub_140626760((__int64)(a1 + 4));
}
// 140B687F0: using guessed type __int64 (__fastcall *off_140B687F0[21])();
// 140B688A0: using guessed type __int64 (__fastcall *off_140B688A0[61])();
// 140B68A90: using guessed type __int64 (__fastcall *off_140B68A90[17])();
// 140B6FB70: using guessed type __int64 (__fastcall *off_140B6FB70[30])();

