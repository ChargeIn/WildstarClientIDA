#include "../winhttp.h"

//----- (0000000140873EB0) ----------------------------------------------------
__int64 __fastcall sub_140873EB0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	__int64 v4; // rdx

	v1 = *(_QWORD*)(a1 + 48);
	if (v1)
	{
		result = sub_140881720(dword_140C10F20, v1);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 64);
	if (v4)
	{
		result = sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	*(_DWORD*)(a1 + 72) = 0;
	*(_DWORD*)(a1 + 56) = 0;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

