#include "../winhttp.h"

//----- (000000014054F0D0) ----------------------------------------------------
float __fastcall sub_14054F0D0(__int64 a1)
{
	unsigned int v1; // eax

	v1 = *(_DWORD*)(a1 + 20);
	if (!v1)
		return 0.0;
	if (v1 <= dword_140C636A8)
		return (float)0 * 0.001;
	return (float)(int)(v1 - dword_140C636A8) * 0.001;
}
// 140C636A8: using guessed type int dword_140C636A8;

