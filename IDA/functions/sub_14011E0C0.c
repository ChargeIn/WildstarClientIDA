#include "../winhttp.h"

//----- (000000014011E0C0) ----------------------------------------------------
__int64 __fastcall sub_14011E0C0(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	int* v7; // rcx
	int v8; // eax

	v1 = 0i64;
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
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = *(int**)(a1 + 16);
	v8 = *(_DWORD*)(v1 + 2876) >> 2;
	v7[2] = 1;
	*v7 = v8 & 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

