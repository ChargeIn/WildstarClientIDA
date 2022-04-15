#include "../winhttp.h"

//----- (0000000140757850) ----------------------------------------------------
__int64 __fastcall sub_140757850(_QWORD* a1)
{
	unsigned int v2; // edx
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // [rsp+38h] [rbp+10h]

	v2 = sub_140056D60(a1, 1u);
	if (v2)
	{
		v4 = qword_140C7CC98;
		v5 = *(_QWORD*)(qword_140C7CC98 + 8);
		if (!v5)
			goto LABEL_10;
		do
		{
			if (*(_DWORD*)(v5 + 32) < v2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v4 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
		if (v4 == qword_140C7CC98 || (v8 = v4, v2 < *(_DWORD*)(v4 + 32)))
			LABEL_10:
		v8 = qword_140C7CC98;
		if (v8 != qword_140C7CC98 && (v6 = *(_DWORD*)(v8 + 36)) != 0 && (v7 = sub_140491C60(qword_140C65968, v6)) != 0)
		{
			sub_140432AC0(a1, v7);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C7CC98: using guessed type __int64 qword_140C7CC98;

