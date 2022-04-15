#include "../winhttp.h"

//----- (0000000140019510) ----------------------------------------------------
__int64 __fastcall sub_140019510(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rbx

	v1 = 0i64;
	if (!*(_QWORD*)(a1 + 8))
		return 1i64;
	while (1)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v1);
		if (v3)
			break;
	LABEL_5:
		if ((unsigned __int64)++v1 >= *(_QWORD*)(a1 + 8))
			return 1i64;
	}
	while (1)
	{
		v4 = *(_QWORD*)(v3 + 8);
		if (!(unsigned int)sub_14000AA70((__int64*)(v3 + 24)))
			return 0i64;
		v3 = v4;
		if (!v4)
			goto LABEL_5;
	}
}

