#include "../winhttp.h"

//----- (000000014001B1A0) ----------------------------------------------------
__int64 __fastcall sub_14001B1A0(__int64 a1, int* a2, int* a3)
{
	int* v4; // rcx
	unsigned __int64 v6; // rsi
	unsigned __int64 v7; // r8
	int* v9; // rdi
	int* v10; // rsi

	v4 = *(int**)(a1 + 8);
	v6 = (char*)a3 - (char*)a2;
	v7 = *(_QWORD*)(a1 + 16) - (_QWORD)v4;
	if (v6 > v7)
	{
		sub_1407DB590(v4, a2, v7);
		sub_14001B050((_QWORD*)a1, (int*)((char*)a2 + *(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)), a3);
	}
	else
	{
		sub_1407DB590(v4, a2, v6);
		v9 = *(int**)(a1 + 16);
		v10 = (int*)(*(_QWORD*)(a1 + 8) + v6);
		if (v10 != v9)
		{
			sub_1407DB590(v10, *(int**)(a1 + 16), 1ui64);
			*(_QWORD*)(a1 + 16) += (char*)v10 - (char*)v9;
		}
	}
	return a1;
}

