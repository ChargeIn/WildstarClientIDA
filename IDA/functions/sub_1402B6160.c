#include "../winhttp.h"

//----- (00000001402B6160) ----------------------------------------------------
__int64 __fastcall sub_1402B6160(__int16 a1)
{
	__int64 result; // rax

	result = 0i64;
	if ((a1 & 8) != 0)
		return (a1 & 0x800 | 0x2000u) >> 11;
	if ((a1 & 0x10) != 0)
		return 1i64;
	if ((a1 & 0x200) != 0)
		return 2i64;
	if ((a1 & 0x400) != 0)
		return 3i64;
	if ((a1 & 0x100) != 0)
		return 6i64;
	return result;
}

