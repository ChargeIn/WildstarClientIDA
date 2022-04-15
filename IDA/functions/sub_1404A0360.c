#include "../winhttp.h"

//----- (00000001404A0360) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A0360(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // r8d

	if (!qword_140C65970)
		return 0i64;
	v8 = sub_1403D7BC0(qword_140C65970, a5);
	v9 = v8;
	if (v8)
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 208i64))(v8);
	else
		v10 = 0;
	return sub_1404A2090(v9, a3, v10, a4);
}
// 1404A03BA: variable 'v9' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

