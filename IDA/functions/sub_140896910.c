#include "../winhttp.h"

//----- (0000000140896910) ----------------------------------------------------
__int64 __fastcall sub_140896910(__int64 a1)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD*)(a1 + 48); i != *(_QWORD*)(a1 + 56); i += 16i64)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(i + 8) + 8i64))(*(_QWORD*)(i + 8));
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a1 + 48);
	result = 65534i64;
	*(_WORD*)(a1 + 72) &= ~1u;
	return result;
}

