#include "../winhttp.h"

//----- (00000001400F9C10) ----------------------------------------------------
__int64 __fastcall sub_1400F9C10(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 16) = *a2;
	if (*(float*)(a1 + 28) == 0.0)
		*(_DWORD*)(a1 + 24) = *a2;
	result = (unsigned int)dword_140C636A8;
	*(_DWORD*)(a1 + 8) = dword_140C636A8;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

