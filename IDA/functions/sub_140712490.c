#include "../winhttp.h"

//----- (0000000140712490) ----------------------------------------------------
__int64 sub_140712490()
{
	__int64 v0; // r9
	_DWORD* v1; // rcx
	unsigned int v2; // r10d
	unsigned int v3; // eax
	int v4; // eax
	char v6; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C635F0;
	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v1 = (_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 364i64);
		v2 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 380i64);
		v3 = dword_140C636A8 - *v1;
		if (v3 >= v2)
		{
			if (v3 < *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 372i64))
			{
				*v1 += v2;
			}
			else
			{
				*v1 = dword_140C636A8;
				v1[1] = 1;
			}
			goto LABEL_8;
		}
		v4 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 368i64);
		if (v4 != *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 376i64))
		{
			*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 368i64) = v4 + 1;
		LABEL_8:
			v6 = 0;
			sub_1400161D0(v0, 0x3E7u, (__int64)&v6);
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;

