#include "../winhttp.h"

//----- (000000014050BB80) ----------------------------------------------------
__int64 __fastcall sub_14050BB80(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = *(_QWORD*)(v2 + 400);
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = 0x4008000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)(v7 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

