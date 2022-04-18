#include "../winhttp.h"

//----- (0000000140584190) ----------------------------------------------------
__int64 __fastcall sub_140584190(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax
	_WORD* v5; // rdx
	__int64 v6; // rcx

	sub_1405848F0(a1, (unsigned __int64*)a2, a2 + 664, a2 + 744, *(_DWORD*)(a2 + 800));
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildChange", &unk_1409D0EB3);
	v4 = sub_1405845F0(v3, *(_QWORD*)a2);
	if (v4)
	{
		v5 = *(_WORD**)(v4 + 544);
		if (v5)
		{
			v6 = 0i64;
			if (*v5)
			{
				do
					++v6;
				while (v5[v6]);
				if (v6)
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildMessageOfTheDay", byte_1409EA7B4, v4);
			}
		}
	}
	return 0i64;
}
// 1405841DA: variable 'v3' is possibly undefined
// 1409EA7B4: using guessed type _BYTE byte_1409EA7B4[40];
// 140C65898: using guessed type __int64 qword_140C65898;

