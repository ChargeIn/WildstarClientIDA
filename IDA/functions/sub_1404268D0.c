#include "../winhttp.h"

//----- (00000001404268D0) ----------------------------------------------------
__int64 __fastcall sub_1404268D0(__int64 a1)
{
	__int64 result; // rax

	result = Apollo_LUAEvent(a1, "HideRealmBank", &unk_1409D0DA3);
	if (*(_DWORD*)(qword_140C65898 + 26180) == 67)
		return sub_1403A71F0(qword_140C65898, 0i64, 101i64, 1i64);
	return result;
}
// 1403A71F0: using guessed type __int64 __fastcall sub_1403A71F0(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;

