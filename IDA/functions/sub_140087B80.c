#include "../winhttp.h"

//----- (0000000140087B80) ----------------------------------------------------
__int64 __fastcall sub_140087B80(__int64 a1, int* a2)
{
	__int64 result; // rax

	result = sub_1400A8C80(a1, a2);
	if ((int)result >= 0)
		return sub_1400A8C80(a1, a2 + 2);
	return result;
}

