#include "../winhttp.h"

//----- (000000014041F890) ----------------------------------------------------
__int64 sub_14041F890()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8AA4C)
		return (unsigned int)dword_140C8AA48;
	dword_140C8AA4C = 1;
	v0 = sub_140200220(0x507u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8AA48 = result;
	}
	else
	{
		dword_140C8AA48 = 0;
		return 0i64;
	}
	return result;
}
// 140C8AA48: using guessed type int dword_140C8AA48;
// 140C8AA4C: using guessed type int dword_140C8AA4C;

