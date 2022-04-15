#include "../winhttp.h"

//----- (0000000140630250) ----------------------------------------------------
__int64 sub_140630250()
{
	__int64 v0; // rdx
	int v1; // r8d
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // ecx
	__int64 v5; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // ecx
	__int64 v11; // rcx
	__int64 k; // rcx
	__int64 m; // rcx

	v0 = qword_140C65C18;
	v1 = dword_140C636A8;
	v2 = *(_QWORD*)(qword_140C65C18 + 88);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 != v2)
	{
		do
		{
			v4 = *(_DWORD*)(v3 + 52);
			*(_DWORD*)(v3 + 60) = v1;
			*(_DWORD*)(v3 + 56) = v4;
			v5 = *(_QWORD*)(v3 + 24);
			if (v5)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v5 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
		} while (v3 != *(_QWORD*)(v0 + 88));
	}
	v8 = *(_QWORD*)(v0 + 120);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		do
		{
			v10 = *(_DWORD*)(v9 + 52);
			*(_DWORD*)(v9 + 60) = v1;
			*(_DWORD*)(v9 + 56) = v10;
			v11 = *(_QWORD*)(v9 + 24);
			if (v11)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (k = *(_QWORD*)(v11 + 16); k; k = *(_QWORD*)(k + 16))
					v9 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v9 = m;
				if (*(_QWORD*)(v9 + 24) != m)
					v9 = m;
			}
		} while (v9 != *(_QWORD*)(v0 + 120));
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65C18: using guessed type __int64 qword_140C65C18;

