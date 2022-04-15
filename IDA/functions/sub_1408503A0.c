#include "../winhttp.h"

//----- (00000001408503A0) ----------------------------------------------------
__int64 __fastcall sub_1408503A0(__int64 a1, int** a2)
{
	__int64 result; // rax

	if ((unsigned int)sub_1408502F0((__int64*)(a1 + 80), a2) != 1)
		return 2i64;
	result = sub_140850240((__int64*)(a1 + 128), a2);
	if ((_DWORD)result != 1)
		return 2i64;
	*(_BYTE*)(a1 + 90) |= 0x80u;
	return result;
}

