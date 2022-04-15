#include "../winhttp.h"

//----- (00000001408CCEE0) ----------------------------------------------------
__int64 __fastcall sub_1408CCEE0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 80i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409B1618;
	*(_WORD*)(result + 8) = 0;
	*(_BYTE*)(result + 10) = 0;
	*(_DWORD*)(result + 12) = 1056964608;
	*(_DWORD*)(result + 16) = 1048576000;
	*(_DWORD*)(result + 20) = 1048576000;
	*(_DWORD*)(result + 24) = 1056964608;
	*(_DWORD*)(result + 28) = 1048576000;
	*(_QWORD*)(result + 32) = 1048576000i64;
	*(_DWORD*)(result + 44) = 0;
	*(_DWORD*)(result + 48) = 1065353216;
	*(_DWORD*)(result + 52) = 1148846080;
	*(_DWORD*)(result + 56) = 1065353216;
	*(_DWORD*)(result + 40) = 0;
	*(_DWORD*)(result + 60) = 1065353216;
	*(_QWORD*)(result + 64) = 1065353216i64;
	*(_WORD*)(result + 72) = 0;
	return result;
}
// 1409B1618: using guessed type __int64 (__fastcall *off_1409B1618[6])();

