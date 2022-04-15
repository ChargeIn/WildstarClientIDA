#include "../winhttp.h"

//----- (000000014080B210) ----------------------------------------------------
__int64 __fastcall sub_14080B210(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // [rsp+8h] [rbp-20h]

	v3 = a1 + *(int*)(a1 + 60) + 4;
	dword_140C60950[2 * a2] = *(_DWORD*)(a1 + *(int*)(a1 + 60) + 88);
	result = *(unsigned int*)(v3 + 4);
	dword_140C60950[2 * a2 + 1] = result;
	return result;
}
// 140C60950: using guessed type _DWORD dword_140C60950[8];

