#include "../winhttp.h"

//----- (0000000140426AC0) ----------------------------------------------------
__int64 __fastcall sub_140426AC0(__int64 a1)
{
	__int64 result; // rax

	result = sub_1400EA3E0(a1, "CloseVendorWindow", &unk_1409D0D67);
	if (*(_DWORD*)(qword_140C65898 + 26180) == 49)
		return sub_1403A71F0(qword_140C65898, 0i64, 101i64, 1i64);
	return result;
}
// 1403A71F0: using guessed type __int64 __fastcall sub_1403A71F0(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;

