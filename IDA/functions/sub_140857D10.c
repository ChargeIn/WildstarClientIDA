#include "../winhttp.h"

//----- (0000000140857D10) ----------------------------------------------------
__int64 __fastcall sub_140857D10(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD*)(a1 + 72); i != *(_QWORD*)(a1 + 80); i += 32i64)
		result = sub_1408382F0(
			qword_140C61BB0,
			a2,
			*(_DWORD*)i,
			*(_DWORD*)(i + 8),
			*(_DWORD*)(i + 4),
			*(_DWORD*)(i + 28),
			*(int**)(i + 16),
			*(_DWORD*)(i + 24),
			a3,
			0);
	return result;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

