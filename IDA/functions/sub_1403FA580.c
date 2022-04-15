#include "../winhttp.h"

//----- (00000001403FA580) ----------------------------------------------------
void __fastcall sub_1403FA580(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx

	sub_1403FA490(a1, 0);
	if (a2)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32736) + 96i64);
		if (*(_DWORD*)(a2 + 4))
			sub_1400EA3E0(v4, "OpenStoreLinkCategory", byte_1409EFC74);
		else
			sub_1400EA3E0(v4, "OpenStoreLinkSingle", byte_1409EFC4C, *(unsigned int*)(a2 + 12), *(_QWORD*)(a2 + 16) + 1i64);
		sub_140400940((__int64*)(a1 + 72), *(_QWORD*)(qword_140C635F0 + 5792), *(_DWORD*)a2);
	}
}
// 1409EFC4C: using guessed type _BYTE byte_1409EFC4C[40];
// 1409EFC74: using guessed type _BYTE byte_1409EFC74[48];
// 140C635F0: using guessed type __int64 qword_140C635F0;

