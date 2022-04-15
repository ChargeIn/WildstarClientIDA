#include "../winhttp.h"

//----- (00000001402F6EB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1402F6EB0(__int64* a1, int a2)
{
	__int64 v2; // rax
	unsigned int v5; // r8d
	__int64 v6; // r10
	unsigned int v7; // r9d
	__int64 v8; // rax
	int v9; // edx
	unsigned int v10; // r8d
	__int64 v11; // rdx
	__int64 v12; // rax
	int v14[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v14[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v14);
	v5 = 0;
	v6 = *(_QWORD*)(a1[7] + 184);
	v7 = *(_DWORD*)(v6 + 32);
	if (v7)
	{
		do
		{
			v8 = v5 + ((v7 - v5) >> 1);
			v9 = *(unsigned __int16*)(*(_QWORD*)(v6 + 40) + 2 * v8);
			if (a2 >= v9)
			{
				if (a2 <= v9)
				{
					v10 = *(unsigned __int16*)(*(_QWORD*)(v6 + 48) + 2i64 * (unsigned int)v8);
					goto LABEL_8;
				}
				v5 = v8 + 1;
			}
			else
			{
				v7 = v5 + ((v7 - v5) >> 1);
			}
		} while (v5 < v7);
	}
	v10 = *(unsigned __int16*)(v6 + 28);
LABEL_8:
	v11 = a1[8];
	v12 = v10 + 1;
	return (unsigned int)v12 < *(_DWORD*)(v11 + 16)
		&& *(_WORD*)(112i64 * v10 + *(_QWORD*)(v11 + 24)) == *(_WORD*)(112 * v12 + *(_QWORD*)(v11 + 24));
}
// 1402F6EB0: using guessed type int var_18[6];

