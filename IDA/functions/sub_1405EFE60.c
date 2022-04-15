#include "../winhttp.h"

//----- (00000001405EFE60) ----------------------------------------------------
void __fastcall sub_1405EFE60(_QWORD* a1, int a2, int* a3, unsigned int a4)
{
	unsigned int v5; // ebx
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rax

	if ((unsigned __int64)a4 < a1[4043] && *(_DWORD*)(a1[4042] + 48i64 * a4 + 8) == a2)
	{
		v5 = 0;
		v6 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v6;
			while (*((_WORD*)a3 + v6));
		}
		sub_14001C480(a1[4038] + 32i64 * a4, a3, (int*)((char*)a3 + 2 * v6));
		v7 = a1[4041];
		if (v7)
		{
			v8 = 0i64;
			while (1)
			{
				v9 = 32 * v8;
				if (*(_QWORD*)(v9 + a1[4040] + 8) == *(_QWORD*)(v9 + a1[4040] + 16)
					|| *(_QWORD*)(v9 + a1[4038] + 8) == *(_QWORD*)(v9 + a1[4038] + 16))
				{
					break;
				}
				v8 = ++v5;
				if (v5 >= v7)
					goto LABEL_10;
			}
		}
		else
		{
		LABEL_10:
			sub_1405EF710(a1);
		}
	}
}

