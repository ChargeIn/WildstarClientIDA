#include "../winhttp.h"

//----- (00000001405DF720) ----------------------------------------------------
void __fastcall sub_1405DF720(__int64 a1)
{
	int v1; // eax
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v5)(); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]
	int v7; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 656);
	if (*(_DWORD*)(a1 + 752) != v1 && v1 != 4)
	{
		if ((unsigned int)sub_1405DF7C0(a1))
		{
			v7 = *(_DWORD*)(a1 + 752);
			sub_1400161D0(qword_140C635F0, 0x3A7u, (__int64)&v7);
		}
		else if (!*(_QWORD*)(a1 + 776))
		{
			v3 = 0;
			v6 = 0i64;
			v4 = a1;
			v5 = sub_1405DF720;
			sub_140195960(a1 + 760, 800, (__int64)&v3, 4);
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

