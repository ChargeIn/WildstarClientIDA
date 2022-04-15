#include "../winhttp.h"

//----- (00000001405B1510) ----------------------------------------------------
__int64 __fastcall sub_1405B1510(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rdx

	result = a1[6];
	if (!result)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v3
			|| (result = sub_1405B16C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v3 + 6120), 1)) == 0
			&& (result = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v3 + 6124))) == 0)
		{
			v4 = a1[2];
			v5 = a1[3];
			if (v4 == v5)
				return a1[5];
			while (*(_DWORD*)(*(_QWORD*)v4 + 48i64) != 5)
			{
				v4 += 8i64;
				if (v4 == v5)
					return a1[5];
			}
			if (!*(_QWORD*)v4)
				return a1[5];
			else
				return 0i64;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

