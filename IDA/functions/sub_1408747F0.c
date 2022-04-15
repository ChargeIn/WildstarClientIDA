#include "../winhttp.h"

//----- (00000001408747F0) ----------------------------------------------------
__int64 __fastcall sub_1408747F0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 192);
	if (v1)
	{
		*(_QWORD*)(a1 + 200) = v1;
		sub_140881720(dword_140C10F20, v1);
		result = 0i64;
		*(_QWORD*)(a1 + 192) = 0i64;
		*(_QWORD*)(a1 + 200) = 0i64;
		*(_DWORD*)(a1 + 208) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

