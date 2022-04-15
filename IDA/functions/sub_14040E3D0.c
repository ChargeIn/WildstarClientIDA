#include "../winhttp.h"

//----- (000000014040E3D0) ----------------------------------------------------
__int64 __fastcall sub_14040E3D0(__int64 a1, __int64 a2)
{
	float v5; // xmm0_4
	__int64 v6; // rcx

	if ((dword_140C8ABC8 & 1) == 0)
	{
		dword_140C8ABC8 |= 1u;
		qword_140C8ABC0 = (__int64)off_140B66A68;
		sub_1407DD89C(sub_140950BC0);
	}
	if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 320i64) != 1)
		return 0i64;
	v5 = (*(float(__fastcall**)(__int64*, _QWORD))(qword_140C8ABC0 + 8))(&qword_140C8ABC0, *(unsigned int*)(a2 + 12));
	return sub_14040E610(v6, a2, 7, v5 * *(float*)(a1 + 200));
}
// 14040E459: variable 'v6' is possibly undefined
// 140950BC0: using guessed type __int64 __fastcall sub_140950BC0();
// 140B66A68: using guessed type __int64 (__fastcall *off_140B66A68[116])();
// 140C8ABC0: using guessed type __int64 qword_140C8ABC0;
// 140C8ABC8: using guessed type int dword_140C8ABC8;

