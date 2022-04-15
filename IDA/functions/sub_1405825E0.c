#include "../winhttp.h"

//----- (00000001405825E0) ----------------------------------------------------
__int64 __fastcall sub_1405825E0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		*(_DWORD*)(v3 + 20) = *(_DWORD*)(a2 + 16);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildFlags", byte_1409EA8CC, v3);
	}
	return 0i64;
}
// 1409EA8CC: using guessed type _BYTE byte_1409EA8CC[120];
// 140C65898: using guessed type __int64 qword_140C65898;

