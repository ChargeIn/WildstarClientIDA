#include "../winhttp.h"

//----- (00000001408CEB40) ----------------------------------------------------
__int64 __fastcall sub_1408CEB40(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 24i64);
	if (result)
	{
		*(_QWORD*)result = off_1409B16B0;
		*(_QWORD*)(result + 8) = 2048i64;
		*(_DWORD*)(result + 16) = 0;
		*(_DWORD*)(result + 20) = 1065353216;
		*(_DWORD*)(result + 8) = a1[2];
		*(_DWORD*)(result + 12) = a1[3];
		*(_DWORD*)(result + 16) = a1[4];
		*(_DWORD*)(result + 20) = a1[5];
	}
	return result;
}
// 1409B16B0: using guessed type __int64 (__fastcall *off_1409B16B0[6])();

