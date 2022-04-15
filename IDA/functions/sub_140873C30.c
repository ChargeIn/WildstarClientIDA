#include "../winhttp.h"

//----- (0000000140873C30) ----------------------------------------------------
__int64 __fastcall sub_140873C30(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 96);
	if (v1)
	{
		result = sub_140881720(dword_140C10F20, v1);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

