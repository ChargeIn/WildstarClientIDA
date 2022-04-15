#include "../winhttp.h"

//----- (0000000140865FC0) ----------------------------------------------------
__int64 sub_140865FC0()
{
	__int64 result; // rax

	result = sub_1408819F0(dword_140C10F20, 32i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = 0i64;
	*(_QWORD*)(result + 8) = 0i64;
	*(_DWORD*)(result + 16) = 0;
	*(_DWORD*)(result + 24) = 1;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

