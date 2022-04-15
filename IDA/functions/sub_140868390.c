#include "../winhttp.h"

//----- (0000000140868390) ----------------------------------------------------
__int64 __fastcall sub_140868390(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 40);
	if (v1)
	{
		*(_QWORD*)(a1 + 48) = v1;
		sub_140881720(dword_140C10F20, v1);
		result = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_DWORD*)(a1 + 56) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

