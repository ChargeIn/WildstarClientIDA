#include "../winhttp.h"

//----- (00000001408D1430) ----------------------------------------------------
__int64 __fastcall sub_1408D1430(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 56i64);
	if (result)
	{
		*(_QWORD*)result = off_1409B1758;
		*(_DWORD*)(result + 8) = a1[2];
		*(_DWORD*)(result + 12) = a1[3];
		*(_DWORD*)(result + 16) = a1[4];
		*(_DWORD*)(result + 20) = a1[5];
		*(_DWORD*)(result + 24) = a1[6];
		*(_DWORD*)(result + 28) = a1[7];
		*(_DWORD*)(result + 32) = a1[8];
		*(_DWORD*)(result + 36) = a1[9];
		*(_DWORD*)(result + 40) = a1[10];
		*(_DWORD*)(result + 44) = a1[11];
		*(_DWORD*)(result + 48) = a1[12];
		*(_BYTE*)(result + 50) = 1;
		*(_BYTE*)(result + 44) = 1;
	}
	return result;
}
// 1409B1758: using guessed type __int64 (__fastcall *off_1409B1758[6])();

