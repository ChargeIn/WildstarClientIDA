#include "../winhttp.h"

//----- (000000014057CCE0) ----------------------------------------------------
__int64 __fastcall sub_14057CCE0(__int64 a1, __int64 a2)
{
	int v2; // r10d
	int v4; // r9d
	__int64 v5; // r8
	int v7; // edi
	__int64 v8; // rcx
	int v10; // [rsp+20h] [rbp-48h]
	__int64 v11; // [rsp+20h] [rbp-48h]
	int v12; // [rsp+30h] [rbp-38h]
	__int64 v13; // [rsp+40h] [rbp-28h] BYREF
	int v14; // [rsp+48h] [rbp-20h]
	__int64 v15; // [rsp+4Ch] [rbp-1Ch]
	int v16; // [rsp+54h] [rbp-14h]

	v2 = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 488) = v2;
	v4 = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 492) = v4;
	v5 = *(_QWORD*)(a2 + 24);
	v12 = v4;
	*(_QWORD*)(a1 + 496) = v5;
	v7 = *(_DWORD*)(a2 + 32) - *(_DWORD*)(a1 + 504);
	*(_DWORD*)(a1 + 504) = *(_DWORD*)(a2 + 32);
	v8 = *(_QWORD*)(qword_140C65898 + 29504);
	v15 = 0i64;
	v16 = 0;
	v13 = v5;
	v14 = 1;
	v10 = v2;
	sub_1400EA3E0(v8, "GuildInfluenceAndMoney", "Zimi", a1, v10, &v13, v12);
	if (v7)
	{
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4128i64);
		LODWORD(v11) = v7;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildWarCoinsChanged", byte_1409EA5E4, a1, v11);
	}
	return 0i64;
}
// 14057CDAC: variable 'v11' is possibly undefined
// 1409EA5E4: using guessed type _BYTE byte_1409EA5E4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

