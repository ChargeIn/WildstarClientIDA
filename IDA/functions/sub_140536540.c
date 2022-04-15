#include "../winhttp.h"

//----- (0000000140536540) ----------------------------------------------------
__int64 __fastcall sub_140536540(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 i; // rax
	__int64 j; // rax

	v1 = sub_14052E9B0(a1);
	v3 = v1;
	if (v1)
	{
		v4 = *(_QWORD*)(v1 + 1384);
		v5 = *(_QWORD*)(v4 + 16);
		if (v5 != v4)
		{
			do
			{
				sub_140772560(v5 + 48, v2);
				v6 = *(_QWORD*)(v5 + 24);
				if (v6)
				{
					v5 = *(_QWORD*)(v5 + 24);
					for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
						v5 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v5 = j;
					if (*(_QWORD*)(v5 + 24) != j)
						v5 = j;
				}
			} while (v5 != *(_QWORD*)(v3 + 1384));
		}
	}
	return 0i64;
}
// 140536574: variable 'v2' is possibly undefined

