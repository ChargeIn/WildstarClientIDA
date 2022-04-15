#include "../winhttp.h"

//----- (00000001400F9C30) ----------------------------------------------------
__int64 __fastcall sub_1400F9C30(__int64 a1, float a2, float a3)
{
	__int64 result; // rax

	if (a2 != *(float*)(a1 + 24) || fabs(a3) != *(float*)(a1 + 28))
	{
		*(float*)(a1 + 24) = a2;
		if (a3 == 0.0)
		{
			*(float*)(a1 + 16) = a2;
		}
		else if (a2 != *(float*)(a1 + 16))
		{
			result = (unsigned int)dword_140C636A8;
			*(_DWORD*)(a1 + 8) = dword_140C636A8;
			*(float*)(a1 + 28) = fabs(a3);
			return result;
		}
		result = (unsigned int)dword_140C636A8;
		*(_DWORD*)(a1 + 28) = 0;
		*(_DWORD*)(a1 + 8) = result;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

