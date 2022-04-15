#include "../winhttp.h"

//----- (00000001408BFFD0) ----------------------------------------------------
__int64 __fastcall sub_1408BFFD0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 80i64);
	if (result)
	{
		*(_QWORD*)result = off_1409AA448;
		*(_WORD*)(result + 76) = 257;
		*(_BYTE*)(result + 78) = 1;
	}
	return result;
}
// 1409AA448: using guessed type __int64 (__fastcall *off_1409AA448[6])();

