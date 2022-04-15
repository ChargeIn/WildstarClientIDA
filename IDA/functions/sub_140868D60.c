#include "../winhttp.h"

//----- (0000000140868D60) ----------------------------------------------------
__int64 __fastcall sub_140868D60(__int64 a1)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 248) = 0;
	result = 3i64;
	do
	{
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		a1 += 64i64;
		*(_QWORD*)(a1 - 40) = 0i64;
		*(_QWORD*)(a1 - 32) = 0i64;
		*(_QWORD*)(a1 - 24) = 0i64;
		*(_QWORD*)(a1 - 16) = 0i64;
		*(_QWORD*)(a1 - 8) = 0i64;
		--result;
	} while (result);
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	return result;
}

