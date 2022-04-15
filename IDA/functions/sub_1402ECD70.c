#include "../winhttp.h"

//----- (00000001402ECD70) ----------------------------------------------------
void __fastcall sub_1402ECD70(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	bool v4; // cc
	__int64 v5; // rdi
	__int64 v6; // rax
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v14; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		*(_QWORD*)(a2 + 72) = *(_QWORD*)(a1 + 2320);
		*(_QWORD*)(a2 + 80) = 0i64;
		v3 = *(_QWORD*)(a1 + 2320);
		if (v3)
			*(_QWORD*)(v3 + 80) = a2;
		else
			*(_QWORD*)(a1 + 2328) = a2;
		v4 = ++ * (_DWORD*)(a1 + 2336) <= 0xFAu;
		*(_QWORD*)(a1 + 2320) = a2;
		if (!v4)
		{
			v5 = *(_QWORD*)(a1 + 2328);
			v6 = *(_QWORD*)(v5 + 80);
			*(_QWORD*)(a1 + 2328) = v6;
			*(_QWORD*)(v6 + 72) = 0i64;
			v7 = *(_DWORD*)(v5 + 24);
			*(_QWORD*)(v5 + 80) = 0i64;
			v8 = *(_QWORD*)(a1 + 2296);
			v9 = *(_QWORD*)(v8 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v7)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			v10 = *(_QWORD*)(a1 + 2296);
			if (v8 != v10)
			{
				while (*(_DWORD*)(v8 + 32) == v7)
				{
					if (*(_QWORD*)(v8 + 40) == v5)
					{
						v14 = v8;
						sub_1402EDAF0(a1 + 2288, &v14);
						break;
					}
					v11 = *(_QWORD*)(v8 + 24);
					if (v11)
					{
						v8 = *(_QWORD*)(v8 + 24);
						for (i = *(_QWORD*)(v11 + 16); i; i = *(_QWORD*)(i + 16))
							v8 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v8 = j;
						if (*(_QWORD*)(v8 + 24) != j)
							v8 = j;
					}
					if (v8 == v10)
						break;
				}
			}
			sub_1402EB220((_QWORD*)v5);
			--* (_DWORD*)(a1 + 2336);
		}
	}
}

