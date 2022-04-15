#include "../winhttp.h"

//----- (000000014040E340) ----------------------------------------------------
__int64 __fastcall sub_14040E340(__int64 a1, __int64 a2)
{
	float v5; // xmm0_4
	__int64 v6; // rcx

	if ((dword_140C8ABB4 & 1) == 0)
	{
		dword_140C8ABB4 |= 1u;
		qword_140C8ABB8 = (__int64)off_140B66A78;
		sub_1407DD89C(sub_140950BB0);
	}
	if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 320i64) != 1)
		return 0i64;
	v5 = (*(float(__fastcall**)(__int64*, _QWORD))(qword_140C8ABB8 + 8))(&qword_140C8ABB8, *(unsigned int*)(a2 + 12));
	return sub_14040E610(v6, a2, 42, v5 * *(float*)(a1 + 196));
}
// 14040E3C9: variable 'v6' is possibly undefined
// 140950BB0: using guessed type __int64 __fastcall sub_140950BB0();
// 140B66A78: using guessed type __int64 (__fastcall *off_140B66A78[114])();
// 140C8ABB4: using guessed type int dword_140C8ABB4;
// 140C8ABB8: using guessed type __int64 qword_140C8ABB8;

