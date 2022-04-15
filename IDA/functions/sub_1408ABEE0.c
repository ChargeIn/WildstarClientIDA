#include "../winhttp.h"

//----- (00000001408ABEE0) ----------------------------------------------------
__int64 __fastcall sub_1408ABEE0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 88i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409A9F68;
	*(_WORD*)(result + 8) = 0;
	*(_BYTE*)(result + 10) = 0;
	*(_DWORD*)(result + 12) = 0;
	*(_DWORD*)(result + 16) = 1065353216;
	*(_DWORD*)(result + 20) = 1148846080;
	*(_DWORD*)(result + 24) = 1065353216;
	*(_DWORD*)(result + 28) = 1065353216;
	*(_DWORD*)(result + 32) = 1065353216;
	*(_BYTE*)(result + 36) = 0;
	*(_DWORD*)(result + 40) = 0;
	*(_DWORD*)(result + 44) = 1065353216;
	*(_DWORD*)(result + 48) = 1148846080;
	*(_DWORD*)(result + 52) = 1065353216;
	*(_DWORD*)(result + 56) = 1065353216;
	*(_DWORD*)(result + 60) = 1065353216;
	*(_BYTE*)(result + 64) = 0;
	*(_DWORD*)(result + 68) = 0;
	*(_DWORD*)(result + 72) = 1065353216;
	*(_DWORD*)(result + 76) = 1065353216;
	*(_DWORD*)(result + 80) = 1024;
	*(_WORD*)(result + 84) = 0;
	return result;
}
// 1409A9F68: using guessed type __int64 (__fastcall *off_1409A9F68[6])();

