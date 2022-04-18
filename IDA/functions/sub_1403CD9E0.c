#include "../winhttp.h"

//----- (00000001403CD9E0) ----------------------------------------------------
__int64 __fastcall sub_1403CD9E0(__int64 a1, _DWORD* a2)
{
	int v4; // ecx
	__int64 v5; // rax
	__int64(__fastcall * *v7)(); // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	int v9; // [rsp+2Ch] [rbp-Ch]

	sub_140008410(a1 + 5208);
	*(_DWORD*)(a1 + 28124) = -1;
	*(_QWORD*)(a1 + 28344) = 0i64;
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "AbilityBookChange", &unk_1409D10C6);
	if (*a2)
	{
		v4 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
		v9 = 31;
		v8 = v4;
		v7 = off_140B6F3A0;
		if (sub_14060AF20((__int64)&v7))
		{
			v5 = sub_1403D90D0(qword_140C65898, v8);
			if (v5)
			{
				if (sub_14047DCA0(v5))
					sub_14060AFE0((int*)&v7, v8);
			}
		}
	}
	return 0i64;
}
// 140B6F3A0: using guessed type __int64 (__fastcall *off_140B6F3A0[249])();
// 140C65898: using guessed type __int64 qword_140C65898;

