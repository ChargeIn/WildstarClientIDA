#include "../winhttp.h"

//----- (0000000140832B30) ----------------------------------------------------
__int64 __fastcall sub_140832B30(unsigned int a1)
{
	unsigned int* v1; // rdx
	__int64 v2; // rcx
	__int64 result; // rax

	if (a1 < 0x400)
		a1 = 1024;
	v1 = &dword_140C61D00[6 * ((unsigned __int64)(a1 - 1) >> 10)];
	if (!*v1)
		return sub_140881960(dword_140C10F28, a1, 0x10u);
	v2 = *v1 - 1;
	result = *(_QWORD*)&v1[2 * v2 + 2];
	*v1 = v2;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61D00: using guessed type unsigned int dword_140C61D00[146];

