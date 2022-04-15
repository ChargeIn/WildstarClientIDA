#include "../winhttp.h"

//----- (00000001406F4660) ----------------------------------------------------
__int64 sub_1406F4660()
{
	__int64 v0; // rax
	__int64 result; // rax

	if ((dword_140C8B0E8 & 1) != 0)
	{
		if (dword_140C8B0F4)
			return (unsigned int)dword_140C8B0F0;
	}
	else
	{
		dword_140C8B0E8 |= 1u;
	}
	dword_140C8B0F4 = 1;
	v0 = sub_140200220(0x3EAu);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8B0F0 = result;
	}
	else
	{
		dword_140C8B0F0 = 0;
		return 0i64;
	}
	return result;
}
// 140C8B0E8: using guessed type int dword_140C8B0E8;
// 140C8B0F0: using guessed type int dword_140C8B0F0;
// 140C8B0F4: using guessed type int dword_140C8B0F4;

