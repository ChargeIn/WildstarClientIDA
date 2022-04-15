#include "../winhttp.h"

//----- (00000001400E2D20) ----------------------------------------------------
void __fastcall sub_1400E2D20(__int64 a1)
{
	int v2; // eax
	unsigned int v3; // edx
	int v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v6)(); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	sub_1400EA3E0(*(_QWORD*)a1, *(_BYTE**)(a1 + 48), &unk_1409D0307);
	if (*(_BYTE*)(a1 + 76))
	{
		if (qword_140C63728)
		{
			v2 = *(_DWORD*)(qword_140C63728 + 232) - *(_DWORD*)(a1 + 84);
			if (v2 < 0)
				v2 = 0;
		}
		else
		{
			v2 = 0;
		}
		v3 = *(_DWORD*)(a1 + 72);
		if (v2 < v3)
			v3 -= v2;
		v4 = 0;
		v7 = 0i64;
		v6 = sub_1400E2D20;
		v5 = a1;
		sub_140195960(a1 + 80, v3, (__int64)&v4, 4);
	}
}
// 140C63728: using guessed type __int64 qword_140C63728;

