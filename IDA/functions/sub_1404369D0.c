#include "../winhttp.h"

//----- (00000001404369D0) ----------------------------------------------------
__int64 __fastcall sub_1404369D0(__int64 a1)
{
	char v2; // al
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v8; // [rsp+20h] [rbp-18h]
	__int64 v9; // [rsp+20h] [rbp-18h]

	v2 = *(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5584) + 520i64);
	if (v2 != *(_BYTE*)(a1 + 8))
	{
		*(_BYTE*)(a1 + 8) = v2;
		v3 = qword_140C65898;
		if (qword_140C65898)
		{
			v4 = *(_QWORD*)(qword_140C65898 + 120);
			if (v4)
				*(_BYTE*)(v4 + 434) = v2;
			v8 = *(unsigned __int8*)(a1 + 8);
			Apollo_LUAEvent(*(_QWORD*)(v3 + 29504), "PremiumTierChanged", "ii", *(unsigned int*)qword_140C658C8, v8);
			v5 = *(_QWORD*)(qword_140C65898 + 32736);
			if (v5 && *(_QWORD*)(v5 + 24) && (unsigned int)sub_1400480B0(v5))
			{
				LODWORD(v9) = *(unsigned __int8*)(a1 + 8);
				Apollo_LUAEvent(*(_QWORD*)(v6 + 96), "PremiumTierChanged", byte_1409EFD3C, *(unsigned int*)qword_140C658C8, v9);
			}
		}
	}
	return 0i64;
}
// 140436A6C: variable 'v6' is possibly undefined
// 140436A8C: variable 'v9' is possibly undefined
// 1409EFD3C: using guessed type _BYTE byte_1409EFD3C[32];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658C8: using guessed type __int64 qword_140C658C8;

