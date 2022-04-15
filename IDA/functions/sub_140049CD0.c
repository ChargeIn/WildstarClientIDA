#include "../winhttp.h"

//----- (0000000140049CD0) ----------------------------------------------------
__int64 __fastcall sub_140049CD0(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 1; i <= 0x14; ++i)
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 88i64))(
			*(_QWORD*)(a1 + 16),
			i,
			0i64,
			0i64);
	return result;
}

