#include "../winhttp.h"

//----- (000000014053FBF0) ----------------------------------------------------
void __fastcall sub_14053FBF0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v3 = v2;
	if (v2)
	{
		if (!*(_QWORD*)(a1 + 8))
		{
			*(_QWORD*)(a1 + 8) = v2 + 5568;
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(v2 + 5568);
			*(_QWORD*)(v2 + 5568) = a1;
			v4 = *(_QWORD*)(a1 + 16);
			if (v4)
				*(_QWORD*)(v4 + 8) = a1 + 16;
		}
		if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 264i64) & 0x4000000) != 0 && !*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v2 + 5624;
			*(_QWORD*)(a1 + 32) = *(_QWORD*)(v2 + 5624);
			*(_QWORD*)(v2 + 5624) = a1;
			v5 = *(_QWORD*)(a1 + 32);
			if (v5)
				*(_QWORD*)(v5 + 24) = a1 + 32;
			sub_140466E60(v3);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

