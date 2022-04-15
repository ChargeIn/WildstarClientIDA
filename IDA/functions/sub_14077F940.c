#include "../winhttp.h"

//----- (000000014077F940) ----------------------------------------------------
void __fastcall sub_14077F940(_DWORD* a1, unsigned int a2)
{
	__int64 v2; // r11
	__int64 v3; // r8

	v2 = 0i64;
	v3 = 0i64;
	if (qword_140C7DE20)
	{
		while (*(_DWORD*)(*(_QWORD*)(qword_140C7DE18 + 8 * v3) + 16i64) != 3)
		{
			if (++v3 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_6;
		}
		v2 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
	}
LABEL_6:
	if (*(_QWORD*)(qword_140C65898 + 120) && v2 && !*(_DWORD*)(v2 + 560))
		sub_1405C9B90(a1, a2);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

