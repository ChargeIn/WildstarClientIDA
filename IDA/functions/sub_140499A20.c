#include "../winhttp.h"

//----- (0000000140499A20) ----------------------------------------------------
__int64 __fastcall sub_140499A20(__int64 a1, int a2)
{
	int v2; // ebp
	int v5; // ebp
	int v6; // ebx
	unsigned int i; // edi
	__int64 v8; // rax

	v2 = *(_DWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 16) = a2;
	if (v2 && !a2)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GalacticArchiveRefresh", &unk_1409D11E3);
	v5 = a2 ^ v2;
	if (v5 < 0 && a2 < 0)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GalacticArchiveArticleAdded", L"G", *(_QWORD*)(a1 + 8));
	v6 = 1;
	for (i = 0; i < 0x10; ++i)
	{
		if ((v6 & v5) != 0 && (v6 & a2) != 0)
		{
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8), i);
			if (v8)
			{
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GalacticArchiveEntryAdded", "Gg", *(_QWORD*)(a1 + 8), v8);
				sub_140437A10((_QWORD*)qword_140C658D8, 0x6Fu, 0, 0i64, 0, 0, 1);
			}
		}
		v6 = __ROL4__(v6, 1);
	}
	return 0i64;
}
// 1409EE14C: using guessed type wchar_t aG_1[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

