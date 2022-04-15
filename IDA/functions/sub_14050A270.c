#include "../winhttp.h"

//----- (000000014050A270) ----------------------------------------------------
__int64 __fastcall sub_14050A270(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // eax
	__int64 v4; // r9
	__int64 v5; // rdx
	int v6; // edi
	int v7; // r8d
	int v9; // [rsp+38h] [rbp+10h] BYREF
	int v10; // [rsp+3Ch] [rbp+14h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400F26A0(v1 + 384, 1);
	v7 = dword_140B6A878[(int)sub_1400F26A0(v1 + 384, 2) - 1];
	if (!*(_QWORD*)(qword_140C65898 + 120) || (unsigned int)(v7 - 1) > 0x1E)
		return 0i64;
	v10 = (unsigned __int8)v7;
	v9 = v6;
	sub_1403F4900(qword_140C65898, 0x68Eu, (__int64)&v9);
	return 1i64;
}
// 140B6A878: using guessed type _DWORD dword_140B6A878[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

