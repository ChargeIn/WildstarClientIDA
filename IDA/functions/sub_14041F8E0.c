#include "../winhttp.h"

//----- (000000014041F8E0) ----------------------------------------------------
__int64 sub_14041F8E0()
{
	__int64 v0; // rax
	__int64 result; // rax

	if (dword_140C8A9AC)
		return (unsigned int)dword_140C8A9A8;
	dword_140C8A9AC = 1;
	v0 = sub_140200220(0x403u);
	if (v0)
	{
		result = *(unsigned int*)(v0 + 4);
		dword_140C8A9A8 = result;
	}
	else
	{
		dword_140C8A9A8 = 0;
		return 0i64;
	}
	return result;
}
// 140C8A9A8: using guessed type int dword_140C8A9A8;
// 140C8A9AC: using guessed type int dword_140C8A9AC;

