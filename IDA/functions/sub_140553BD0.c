#include "../winhttp.h"

//----- (0000000140553BD0) ----------------------------------------------------
__int64 __fastcall sub_140553BD0(__int64 a1, _DWORD* a2)
{
	__int64 v5; // r8
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r12
	unsigned int v10; // r14d
	__int64 v11; // rdi
	__int64 v12; // rbp
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // r15
	int v16; // eax
	__int64 v17; // [rsp+80h] [rbp+18h]

	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v6 = **(_DWORD**)(a1 + 8);
	v7 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v6)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v5 || (v17 = v8, v6 < *(_DWORD*)(v8 + 32)))
		v17 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v17 == v5)
		return 0i64;
	v9 = v17 + 40;
	if (v17 == -40)
		return 0i64;
	v10 = 0;
	v11 = 0i64;
	if (*(_DWORD*)(a1 + 16))
	{
		while (1)
		{
			v12 = *(_QWORD*)(a1 + 8 * v11 + 24);
			if (v12)
			{
				if (!(unsigned int)sub_1405510D0(a1, v11))
				{
					if ((unsigned int)sub_140553790(a1, v11))
					{
						if (*(_QWORD*)v9)
						{
							v13 = *(unsigned int*)(*(_QWORD*)v9 + 16i64);
							if ((_DWORD)v11 != (_DWORD)v13 && (unsigned int)v11 <= (unsigned int)v13)
							{
								v14 = *(_QWORD*)(v9 + 8 * v11 + 16);
								if (v14)
								{
									v10 = *(_DWORD*)(v14 + 56);
									if (v10)
										break;
									v15 = sub_140487750(v13, *(_DWORD*)(v12 + 52), 1);
									if (!v15)
										break;
									v16 = sub_1405516A0(a1, v11);
									v10 = sub_140487E40(v15, v16, (unsigned int*)(v12 + 24), 4u, 0, 0, 0i64);
									if (v10)
										break;
								}
							}
						}
					}
				}
			}
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= *(_DWORD*)(a1 + 16))
				return v10;
		}
		*a2 = v11;
	}
	return v10;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

