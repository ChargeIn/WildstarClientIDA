#include "../winhttp.h"

//----- (000000014045AD90) ----------------------------------------------------
void __fastcall sub_14045AD90(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	unsigned int v5; // eax
	int v6; // r8d
	__int64 v7; // rcx

	v2 = a2;
	if (*(_QWORD*)(a1 + 312))
		sub_1403DEA10(qword_140C65898, a1);
	if (!(_DWORD)v2
		|| ((v4 = *(_QWORD*)(a1 + 280)) == 0
			? (v5 = 0)
			: (v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4)),
			v6 = *(_DWORD*)(a1 + 8),
			v7 = v2 | ((unsigned __int64)v5 << 32),
			*(_QWORD*)(a1 + 312) = v7,
			(int)sub_1403DE8C0(v7, v2, v6) < 0))
	{
		*(_QWORD*)(a1 + 312) = 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

