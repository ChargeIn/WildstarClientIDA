#include "../winhttp.h"

//----- (00000001405D9B60) ----------------------------------------------------
__int64 __fastcall sub_1405D9B60(__int64 a1, char a2)
{
	bool v2; // zf
	__int64 v5; // rax

	v2 = *(_DWORD*)(a1 + 344) == 0;
	*(_QWORD*)a1 = off_140B6DF10;
	if (!v2)
	{
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		if (v5)
			sub_140466CA0(v5, dword_140C39050[*(int*)(a1 + 336)]);
	}
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6DF10: using guessed type __int64 (__fastcall *off_140B6DF10[81])();
// 140C39050: using guessed type _DWORD dword_140C39050[31];
// 140C65898: using guessed type __int64 qword_140C65898;

