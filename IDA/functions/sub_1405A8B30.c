#include "../winhttp.h"

//----- (00000001405A8B30) ----------------------------------------------------
__int64 __fastcall sub_1405A8B30(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rsi
	int v10; // r14d
	int v11; // ebx
	int v12; // eax
	unsigned int v13; // eax
	int v14; // eax
	int v15; // r14d
	__int64 v16; // r8
	unsigned int v17; // edx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // [rsp+40h] [rbp+8h] BYREF

	v20 = a1;
	v3 = *(_QWORD*)(a2 + 24);
	if (!v3 || !*(_DWORD*)(v3 + 160) || !(unsigned int)sub_1402DD480(qword_140C65B80 + 8, v3 + 160, &v20))
		return 101i64;
	v7 = v20;
	v8 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v8 && ((*(_DWORD*)(v8 + 8) >> 1) & 1) != 0 && (*(_DWORD*)(*(_QWORD*)(v20 + 8) + 12i64) & 0x40000) == 0)
		return 101i64;
	v9 = *(unsigned int*)(v3 + 164);
	v10 = *(_DWORD*)(a2 + 13816);
	v11 = 101;
	v12 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v20 + 8));
	if (v12)
	{
		if (v12 == 1)
		{
			if ((_DWORD)v9 == -1)
				goto LABEL_34;
			if (sub_140550C00(v7, v9))
			{
				if (!sub_1405517A0(v7, v9))
					goto LABEL_34;
				v13 = *(_DWORD*)(v7 + 16);
				if ((_DWORD)v9 == v13)
				{
					v14 = 0;
				}
				else if ((unsigned int)v9 <= v13)
				{
					if (*(_QWORD*)(v7 + 8 * v9 + 24))
						v14 = sub_1405517A0(v7, v9) ? 0x20 : 0;
					else
						v14 = 0;
				}
				else
				{
					v14 = 0;
				}
				v15 = (v14 - 1) & v10;
				v16 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
				v17 = **(_DWORD**)(v7 + 8);
				v18 = *(_QWORD*)(v16 + 8);
				v19 = v16;
				while (v18)
				{
					if (*(_DWORD*)(v18 + 32) < v17)
					{
						v18 = *(_QWORD*)(v18 + 24);
					}
					else
					{
						v19 = v18;
						v18 = *(_QWORD*)(v18 + 16);
					}
				}
				if (v19 == v16 || (v20 = v19, v17 < *(_DWORD*)(v19 + 32)))
					v20 = v16;
				if (v20 == v16 || v20 == -40 || !(unsigned int)sub_140611680((__int64*)(v20 + 40), v9, v15))
					LABEL_34:
				v11 = 39;
			}
			goto LABEL_35;
		}
		if ((unsigned int)(v12 - 4) > 3)
		{
		LABEL_35:
			if (a3 && v11 != 101)
			{
				*(_BYTE*)(a2 + 72i64 * v11 + 6420) = 1;
				if (*(_DWORD*)(*(_QWORD*)(v7 + 8) + 300i64) < 4u)
					*(_BYTE*)(a2 + 72i64 * v11 + 6428) = 1;
			}
		}
	}
	return (unsigned int)v11;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

