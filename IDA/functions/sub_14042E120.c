#include "../winhttp.h"

//----- (000000014042E120) ----------------------------------------------------
__int64 __fastcall sub_14042E120(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax

	result = Apollo_LUAEvent(a1, "UnitEnteredCombat", byte_1409EDC64, a2, a3);
	if (a3)
	{
		if ((result = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(result + 8) == a2
			|| (result = *(_QWORD*)(qword_140C65898 + 120)) != 0 && *(_DWORD*)(result + 8) == a2)
		{
			if (qword_140C63620)
			{
				if (*(_QWORD*)(qword_140C63620 + 24))
					return Apollo_LUAEvent(*(_QWORD*)(qword_140C63620 + 88), "EnteredCombat", &unk_1409D01F7);
			}
		}
	}
	return result;
}
// 1409EDC64: using guessed type _BYTE byte_1409EDC64[4];
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;

