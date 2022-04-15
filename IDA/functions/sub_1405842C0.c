#include "../winhttp.h"

//----- (00000001405842C0) ----------------------------------------------------
__int64 __fastcall sub_1405842C0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 i; // rbx
	__int64 v5; // rdx
	int v6; // r8d
	BOOL v7; // ecx

	v2 = qword_140C7DE20;
	for (i = 0i64; i < v2; ++i)
	{
		v5 = *(_QWORD*)(qword_140C7DE18 + 8 * i);
		v6 = *(_DWORD*)(v5 + 768);
		v7 = *(_QWORD*)(a2 + 8) == *(_QWORD*)v5;
		*(_DWORD*)(v5 + 768) = v7;
		if (v7 && !v6)
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"GuildNameplateChange",
				byte_1409EA6A4,
				*(_QWORD*)(qword_140C7DE18 + 8 * i));
	}
	return 0i64;
}
// 1409EA6A4: using guessed type _BYTE byte_1409EA6A4[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

