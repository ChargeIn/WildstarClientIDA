#include "../winhttp.h"

//----- (0000000140582790) ----------------------------------------------------
__int64 __fastcall sub_140582790(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	v4 = v3;
	if (v3)
	{
		sub_140590120(v3 + 824, (_QWORD*)(a2 + 16));
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildEventLogChange", byte_1409EA76C, v4);
	}
	return 0i64;
}
// 1409EA76C: using guessed type _BYTE byte_1409EA76C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

