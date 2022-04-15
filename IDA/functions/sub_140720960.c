#include "../winhttp.h"

//----- (0000000140720960) ----------------------------------------------------
__int64 __fastcall sub_140720960(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 128i64))(a1);
	if (result)
		return *(_QWORD*)(result + 3264);
	return result;
}

