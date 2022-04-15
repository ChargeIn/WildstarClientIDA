#include "../winhttp.h"

//----- (00000001405F6B00) ----------------------------------------------------
__int64 __fastcall sub_1405F6B00(__int64 a1)
{
	__int64 result; // rax

	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1))
		return 1i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	if ((_DWORD)result)
		return 1i64;
	return result;
}

