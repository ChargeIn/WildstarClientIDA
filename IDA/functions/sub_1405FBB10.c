#include "../winhttp.h"

//----- (00000001405FBB10) ----------------------------------------------------
__int64 __fastcall sub_1405FBB10(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 i; // rax
	__int64 j; // rax

	v1 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v1 + 16);
	if (v3 != v1)
	{
		do
		{
			sub_140611710(v3 + 40);
			v4 = *(_QWORD*)(v3 + 24);
			if (v4)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
		} while (v3 != *(_QWORD*)(a1 + 8));
	}
	return 0i64;
}

