#include "../winhttp.h"

//----- (0000000140729490) ----------------------------------------------------
__int64 __fastcall sub_140729490(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	if (a1)
	{
		if (*(_DWORD*)(a1 + 20) == 2)
		{
			if (dword_140C4B428)
				sub_14072AFA0(a1, &dword_140C4B428);
			v2 = *(_QWORD*)(a1 + 1176);
			*(_DWORD*)(a1 + 20) = 3;
			sub_14078AD30(v2);
		}
		return sub_1400EA3E0(*(_QWORD*)(a1 + 1424), "ShowGachaUI", byte_1409D15AB);
	}
	return result;
}
// 1409D15AB: using guessed type _BYTE byte_1409D15AB[20];
// 140C4B428: using guessed type int dword_140C4B428;

