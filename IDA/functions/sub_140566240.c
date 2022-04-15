#include "../winhttp.h"

//----- (0000000140566240) ----------------------------------------------------
__int64 __fastcall sub_140566240(__int64 a1, unsigned int(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 v3; // rdi
	__int64 v7; // rcx
	__int64 v8; // rbx

	v3 = 0i64;
	if (!*(_QWORD*)(a1 + 8))
		return 1i64;
	while (1)
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v3);
		if (v7)
			break;
	LABEL_5:
		if ((unsigned __int64)++v3 >= *(_QWORD*)(a1 + 8))
			return 1i64;
	}
	while (1)
	{
		v8 = *(_QWORD*)(v7 + 8);
		if (!a2(v7 + 24, a3))
			return 0i64;
		v7 = v8;
		if (!v8)
			goto LABEL_5;
	}
}

