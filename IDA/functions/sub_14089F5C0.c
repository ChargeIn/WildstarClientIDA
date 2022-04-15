#include "../winhttp.h"

//----- (000000014089F5C0) ----------------------------------------------------
__int64 __fastcall sub_14089F5C0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 16i64);
	if (result)
	{
		*(_QWORD*)result = off_1409A9BE8;
		*(_DWORD*)(result + 8) = *(_DWORD*)(a1 + 8);
	}
	return result;
}
// 1409A9BE8: using guessed type __int64 (__fastcall *off_1409A9BE8[6])();

