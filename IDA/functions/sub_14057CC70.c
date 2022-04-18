#include "../winhttp.h"

//----- (000000014057CC70) ----------------------------------------------------
__int64 __fastcall sub_14057CC70(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	int* v5; // rax
	__int64 v6; // rcx

	v2 = *(unsigned __int16*)(a2 + 96);
	v3 = a2 + 16;
	*(_QWORD*)(a1 + 472) = v2;
	*(_QWORD*)(a1 + 480) = *(unsigned __int16*)(v3 + 82);
	v5 = sub_140580D70(a1, v3);
	v6 = *(_QWORD*)(qword_140C65898 + 29504);
	if (v5)
		sub_1404276F0(v6, a1, (__int64)v5);
	else
		Apollo_LUAEvent(v6, "GuildMemberChange", byte_1409EA3D4, a1);
	return 0i64;
}
// 1409EA3D4: using guessed type _BYTE byte_1409EA3D4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

