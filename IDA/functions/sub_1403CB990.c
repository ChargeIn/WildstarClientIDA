#include "../winhttp.h"

//----- (00000001403CB990) ----------------------------------------------------
__int64 __fastcall sub_1403CB990(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // eax
	int* v8; // rax
	__int64 v9; // r8

	v3 = *(_QWORD*)(a1 + 28792);
	if (*(_DWORD*)a2)
	{
		v5 = 0i64;
		if (v3)
		{
			sub_1403B7290(v3);
			*(_QWORD*)(a1 + 28792) = 0i64;
		}
		if ((dword_140DC2318 & 1) == 0)
		{
			dword_140DC2318 |= 1u;
			v6 = sub_140200220(0xB7u);
			if (v6)
				v7 = *(_DWORD*)(v6 + 4);
			else
				v7 = 10000;
			dword_140DC231C = v7;
		}
		v8 = sub_14018B280(96i64, 0);
		if (v8)
			v5 = sub_1406077D0((__int64)v8, dword_140DC231C, v9, 626090);
	}
	else
	{
		if (v3)
			sub_1403B7290(v3);
		v5 = 0i64;
	}
	*(_QWORD*)(a1 + 28792) = v5;
	*(_BYTE*)(a1 + 7020) = *(_BYTE*)(a2 + 4);
	*(_DWORD*)(a1 + 28568) = 1;
	return 0i64;
}
// 1403CBA14: variable 'v9' is possibly undefined
// 140DC2318: using guessed type int dword_140DC2318;
// 140DC231C: using guessed type int dword_140DC231C;

