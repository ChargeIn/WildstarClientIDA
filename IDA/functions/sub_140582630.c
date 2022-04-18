#include "../winhttp.h"

//----- (0000000140582630) ----------------------------------------------------
__int64 __fastcall sub_140582630(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	v4 = v3;
	if (v3)
	{
		*(_QWORD*)(v3 + 472) = *(unsigned __int16*)(a2 + 32);
		*(_QWORD*)(v3 + 480) = *(unsigned __int16*)(a2 + 34);
		sub_140581160(v3, (__int128*)(a2 + 16));
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildMemberChange", byte_1409EA3D4, v4);
	}
	return 0i64;
}
// 1409EA3D4: using guessed type _BYTE byte_1409EA3D4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

