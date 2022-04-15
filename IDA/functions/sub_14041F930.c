#include "../winhttp.h"

//----- (000000014041F930) ----------------------------------------------------
__int64 sub_14041F930()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A97C)
		return (unsigned int)dword_140C8A978;
	dword_140C8A97C = 1;
	v0 = sub_140200220(0x4E7u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A978 = result;
	}
	else
	{
		dword_140C8A978 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A978: using guessed type int dword_140C8A978;
// 140C8A97C: using guessed type int dword_140C8A97C;

