#include "../winhttp.h"

//----- (000000014080B190) ----------------------------------------------------
__int64 sub_14080B190()
{
	HMODULE v1; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v2; // [rsp+28h] [rbp-10h]

	v2 = sub_14080B500(&v1);
	if (v2 == -14)
		v2 = 0;
	if (!v2)
		--dword_140C60970;
	return v2;
}
// 140C60970: using guessed type int dword_140C60970;

