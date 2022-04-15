#include "../winhttp.h"

//----- (0000000140519AA0) ----------------------------------------------------
__int64 __fastcall sub_140519AA0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax
	int v3; // eax
	unsigned int v4; // r8d

	if (!*(_QWORD*)(a1 + 16))
		return 0i64;
	v1 = *(_QWORD*)(a1 + 64);
	if (!v1)
		return 0i64;
	v2 = sub_1403ACBB0(qword_140C65898 + 160, v1);
	if (!v2)
		return 0i64;
	v3 = sub_1405150D0(v2);
	if (v3 == 1)
	{
		return 100;
	}
	else if (v3 > 1)
	{
		if (v3 <= 3)
			return 250i64;
		if (v3 <= 7)
			return 1000i64;
	}
	return v4;
}
// 140519B0A: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

