#include "../winhttp.h"

//----- (000000014057EF20) ----------------------------------------------------
void __fastcall sub_14057EF20(__int64* a1)
{
	__int64 v1; // rax
	int v2; // [rsp+20h] [rbp-18h] BYREF
	__int64 v3; // [rsp+28h] [rbp-10h]

	if (*((_DWORD*)a1 + 4) == 3)
	{
		if (a1[82])
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "WarPartyBossTokensUpdated", byte_1409EA85C, a1);
		}
		else
		{
			v1 = *a1;
			v2 = *(_DWORD*)(qword_140C635F0 + 5760);
			v3 = v1;
			sub_1403F4900(qword_140C65898, 0x956u, (__int64)&v2);
		}
	}
}
// 1409EA85C: using guessed type _BYTE byte_1409EA85C[24];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

