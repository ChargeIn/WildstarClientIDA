#include "../winhttp.h"

//----- (0000000140426B60) ----------------------------------------------------
__int64 __fastcall sub_140426B60(__int64 a1)
{
	__int64 result; // rax

	result = Apollo_LUAEvent(a1, "CloseTradeskillTrainerWindow", byte_1409D0DCF);
	if (*(_DWORD*)(qword_140C65898 + 26180) == 43)
		return sub_1403A71F0(qword_140C65898, 0i64, 101i64, 1i64);
	return result;
}
// 1403A71F0: using guessed type __int64 __fastcall sub_1403A71F0(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409D0DCF: using guessed type _BYTE byte_1409D0DCF[20];
// 140C65898: using guessed type __int64 qword_140C65898;

