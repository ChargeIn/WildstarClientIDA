#include "../winhttp.h"

//----- (00000001403CC420) ----------------------------------------------------
__int64 __fastcall sub_1403CC420(__int64 a1, _DWORD* a2)
{
	int v3; // [rsp+20h] [rbp-18h]

	if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 6304i64))
		return 1i64;
	v3 = a2[1];
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_MentorLeftAOI", byte_1409EA4A4, *a2 / 0x3E8u, v3);
	return 0i64;
}
// 1409EA4A4: using guessed type _BYTE byte_1409EA4A4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

