#include "../winhttp.h"

//----- (000000014045B790) ----------------------------------------------------
__int64 __fastcall sub_14045B790(__int64 a1, unsigned int a2)
{
	sub_14045B6F0(a1, a2);
	if (a1 && (*(_QWORD*)(qword_140C65898 + 120) == a1 || *(_QWORD*)(qword_140C65898 + 25744) == a1))
		return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayerTitleChange", &unk_1409D10E1);
	else
		return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "UnitTitleChanged", L"U", *(unsigned int*)(a1 + 8));
}
// 1409EE06C: using guessed type wchar_t aU_11[2];
// 140C65898: using guessed type __int64 qword_140C65898;

