#include "../winhttp.h"

//----- (00000001408F95C0) ----------------------------------------------------
__int64 __fastcall sub_1408F95C0(unsigned int* a1, __int64 a2, float* a3)
{
	__int64 result; // rax

	switch (*a1)
	{
	case 1u:
		return sub_1408FAE50((__int64)a1, a2, a3);
	case 2u:
		return sub_1408FB170(a1, a2, a3);
	case 4u:
		return sub_1408FB540(a1, a2, a3);
	}
	return result;
}

