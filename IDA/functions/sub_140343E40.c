#include "../winhttp.h"

//----- (0000000140343E40) ----------------------------------------------------
__int64 __fastcall sub_140343E40(unsigned __int16* a1)
{
	unsigned __int16 v1; // ax
	char v2; // r8
	unsigned __int16* i; // rdx
	__int64 v5; // rbx

	v1 = *a1;
	v2 = 0;
	for (i = a1; *i; v1 = *i)
	{
		++i;
		v2 += 29 * v1;
	}
	v5 = qword_140C7A100[v2 & 0x1F];
	if (!v5)
		return 0i64;
	while ((unsigned int)sub_14018E2C0(v5 + 8, a1))
	{
		v5 = *(_QWORD*)(v5 + 624);
		if (!v5)
			return 0i64;
	}
	return v5;
}
// 140C7A100: using guessed type _QWORD qword_140C7A100[32];

