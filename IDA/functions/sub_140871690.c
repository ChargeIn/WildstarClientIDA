#include "../winhttp.h"

//----- (0000000140871690) ----------------------------------------------------
__int64 __fastcall sub_140871690(__int64 a1)
{
	__int64 i; // rdi
	__int64 v3; // rax

	for (i = 0i64; (unsigned int)i < (unsigned int)((*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 24i64); i = (unsigned int)(i + 1))
		sub_140871750((__int64*)(*(_QWORD*)a1 + 24 * i));
	v3 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v3;
		sub_140881720(dword_140C10F20, v3);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

