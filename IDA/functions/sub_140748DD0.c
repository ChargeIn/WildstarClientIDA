#include "../winhttp.h"

//----- (0000000140748DD0) ----------------------------------------------------
__int64 __fastcall sub_140748DD0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int8 v3; // dl
	__int64 result; // rax
	_DWORD* v5; // rcx

	if (*(_QWORD*)(qword_140C65898 + 120) && !(unsigned int)sub_1403BB8D0())
	{
		v2 = 0i64;
		v3 = *(_BYTE*)(qword_140C65898 + 28140);
		while (v3)
		{
			if (--v3 < 4u)
				goto LABEL_7;
		LABEL_8:
			if ((unsigned __int64)++v2 >= 4)
			{
			LABEL_9:
				sub_1403CD800(v2, v3);
				return 0i64;
			}
		}
		v3 = 3;
	LABEL_7:
		if ((*(_BYTE*)(qword_140C65898 + 4i64 * v3 + 5192) & 1) != 0)
			goto LABEL_9;
		goto LABEL_8;
	}
	v5 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	*v5 = 0;
	v5[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

