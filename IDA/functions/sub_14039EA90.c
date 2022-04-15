#include "../winhttp.h"

//----- (000000014039EA90) ----------------------------------------------------
void __fastcall sub_14039EA90(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	int v4; // r8d

	v1 = *(_QWORD*)(a1 + 120);
	if (v1)
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192));
		if ((!v3 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3)) && *(int*)(a1 + 26184) < 11)
			sub_14039EAF0(a1, a1 + 26184, v4);
	}
}
// 14039EADA: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

