#include "../winhttp.h"

//----- (00000001403B9720) ----------------------------------------------------
__int64 __fastcall sub_1403B9720(__int64 a1, int* a2)
{
	int v3; // edx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax

	v3 = *a2;
	*(_DWORD*)(a1 + 32132) = v3;
	v5 = sub_1403D90D0(qword_140C65898, v3);
	if (v5)
	{
		v6 = *(_QWORD*)(v5 + 24);
		if (v6)
		{
			v7 = sub_1402092A0(*(_DWORD*)(v6 + 332));
			if (v7)
			{
				if (*(_DWORD*)(v7 + 20) == 1)
					sub_1403A71F0(qword_140C65898, *(_DWORD*)(a1 + 32132), 0x24u, 1);
			}
		}
	}
	sub_1404259D0(*(_QWORD*)(a1 + 29504), a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

