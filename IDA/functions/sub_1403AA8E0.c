#include "../winhttp.h"

//----- (00000001403AA8E0) ----------------------------------------------------
__int64 __fastcall sub_1403AA8E0(__int64* a1, int* a2)
{
	__int64* v4; // rcx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r8
	_DWORD* v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rdx
	_DWORD* i; // rax
	int v12; // [rsp+20h] [rbp-18h]

	if (a2[2])
	{
		v4 = a1 + 4093;
		v5 = 0i64;
		v6 = v4[1];
		if (v6)
		{
			v7 = (_DWORD*)*v4;
			while (*v7 != *a2)
			{
				++v5;
				++v7;
				if (v5 >= v6)
					goto LABEL_6;
			}
			return 0i64;
		}
	LABEL_6:
		sub_140003460(v4, a2);
		goto LABEL_13;
	}
	v8 = a1[4094];
	v9 = 0i64;
	if (v8)
	{
		for (i = (_DWORD*)a1[4093]; *i != *a2; ++i)
		{
			if (++v9 >= v8)
				return 0i64;
		}
		sub_1401C2F20((__int64)(a1 + 4093), v9);
	LABEL_13:
		v12 = a2[2];
		sub_1400EA3E0(a1[3688], "DisabledGameplaySystemNotification", "ib", (unsigned int)*a2, v12);
	}
	return 0i64;
}

