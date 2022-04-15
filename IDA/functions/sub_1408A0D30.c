#include "../winhttp.h"

//----- (00000001408A0D30) ----------------------------------------------------
__int64 __fastcall sub_1408A0D30(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 32i64);
	if (result)
	{
		*(_QWORD*)result = off_1409A9C88;
		*(_DWORD*)(result + 8) = a1[2];
		*(_DWORD*)(result + 12) = a1[3];
		*(_DWORD*)(result + 16) = a1[4];
		*(_DWORD*)(result + 20) = a1[5];
		*(_DWORD*)(result + 24) = a1[6];
		*(_DWORD*)(result + 28) = a1[7];
	}
	return result;
}
// 1409A9C88: using guessed type __int64 (__fastcall *off_1409A9C88[6])();

