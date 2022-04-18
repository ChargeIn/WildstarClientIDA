#include "../winhttp.h"

//----- (0000000140602180) ----------------------------------------------------
__int64 __fastcall sub_140602180(__int64 a1, __int64 a2)
{
	int v5; // [rsp+20h] [rbp-18h]

	v5 = *(_DWORD*)(a2 + 16);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Invite_Result", byte_1409EA2BC, *(_QWORD*)(a2 + 8), v5);
	if (*(_DWORD*)(a2 + 16) == 10)
		sub_1406070A0(a1);
	return 0i64;
}
// 1409EA2BC: using guessed type _BYTE byte_1409EA2BC[40];
// 140C65898: using guessed type __int64 qword_140C65898;

