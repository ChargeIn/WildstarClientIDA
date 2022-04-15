#include "../winhttp.h"

//----- (00000001403DA360) ----------------------------------------------------
__int64 __fastcall sub_1403DA360(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r15
	__int64 v6; // rbp
	__int64 v7; // rax
	int v8; // r14d
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rcx

	result = sub_1403D90D0((__int64)a1, *(_DWORD*)a2);
	v5 = result;
	if (result)
	{
		v6 = qword_140C65898;
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		v8 = 0;
		if (v7 && *(_DWORD*)a2 == *(_DWORD*)(v7 + 8))
			sub_1403D9000(a1);
		v9 = 0;
		if (*(_BYTE*)(a2 + 4))
		{
			while (1)
			{
				result = sub_140466A90(v5, (int*)(*(_QWORD*)(a2 + 8) + 12i64 * v9));
				if ((int)result < 0)
					break;
				if (++v9 >= *(unsigned __int8*)(a2 + 4))
				{
					v6 = qword_140C65898;
					goto LABEL_9;
				}
			}
		}
		else
		{
		LABEL_9:
			v10 = *(_QWORD*)(v6 + 120);
			if (v10)
			{
				LOBYTE(v8) = *(_DWORD*)a2 == *(_DWORD*)(v10 + 8);
				if (v8)
				{
					v11 = a1[15];
					v12 = (unsigned int)dword_140C636A8;
					a1[4023] = (unsigned int)dword_140C636A8;
					if (v11)
					{
						v13 = v11 + 1472;
						v14 = 197i64;
						do
						{
							v13 += 8i64;
							v12 = *(_QWORD*)(v13 - 8) + 2860486313i64 * v12;
							--v14;
						} while (v14);
					}
					v15 = a1[3688];
					a1[4022] = v12;
					sub_1400A8020(v15 + 4672);
				}
			}
			return 0i64;
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

