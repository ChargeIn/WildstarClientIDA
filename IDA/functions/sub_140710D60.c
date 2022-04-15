#include "../winhttp.h"

//----- (0000000140710D60) ----------------------------------------------------
__int64 __fastcall sub_140710D60(__int64 a1)
{
	__int64 v1; // rax
	unsigned __int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rcx
	int v7; // eax
	_DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v5 = (unsigned int)v1;
			if ((unsigned int)v1 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, -1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v9[1] = 2;
	v9[2] = 0;
	v9[0] = v7;
	sub_1403F4900(qword_140C65898, 0xC5u, (__int64)v9);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

