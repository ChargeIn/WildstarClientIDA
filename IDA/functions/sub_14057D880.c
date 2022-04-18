#include "../winhttp.h"

//----- (000000014057D880) ----------------------------------------------------
__int64 __fastcall sub_14057D880(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v2; // r10
	unsigned __int64 v3; // rax
	__int64 v4; // r8

	v2 = a1[79];
	a1[76] = *(_QWORD*)(a2 + 16);
	a1[77] = *(_QWORD*)(a2 + 64);
	v3 = 0i64;
	if (v2)
	{
		v4 = a2 + 24;
		do
		{
			if (v3 >= 0xA)
				break;
			++v3;
			v4 += 4i64;
			*(_DWORD*)(*(_QWORD*)(a1[78] + 8 * v3 - 8) + 32i64) = *(_DWORD*)(v4 - 4);
		} while (v3 < v2);
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildBankWithdraw", byte_1409EA734, a1);
	return 0i64;
}
// 1409EA734: using guessed type _BYTE byte_1409EA734[48];
// 140C65898: using guessed type __int64 qword_140C65898;

