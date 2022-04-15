#include "../winhttp.h"

//----- (0000000140537500) ----------------------------------------------------
__int64 __fastcall sub_140537500(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 i; // rax
	__int64 j; // rax

	v1 = sub_14052E9B0(a1);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 1384);
		v4 = *(_QWORD*)(v3 + 16);
		if (v4 != v3)
		{
			do
			{
				sub_140774990(v4 + 48);
				v5 = *(_QWORD*)(v4 + 24);
				if (v5)
				{
					v4 = *(_QWORD*)(v4 + 24);
					for (i = *(_QWORD*)(v5 + 16); i; i = *(_QWORD*)(i + 16))
						v4 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v4 = j;
					if (*(_QWORD*)(v4 + 24) != j)
						v4 = j;
				}
			} while (v4 != *(_QWORD*)(v2 + 1384));
		}
	}
	return 0i64;
}

