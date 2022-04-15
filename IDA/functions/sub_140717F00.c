#include "../winhttp.h"

//----- (0000000140717F00) ----------------------------------------------------
void __fastcall sub_140717F00(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rbx
	_QWORD* v5; // rax
	__int64 v6; // rsi
	_DWORD* v7; // rcx
	int v8; // ebx
	int v9; // eax

	v2 = *(_QWORD*)(a1 + 96);
	if (v2 && a2)
	{
		*(_DWORD*)(v2 + 28) += a2;
		v4 = *(_QWORD*)(a1 + 96);
		if (*(int*)(v4 + 28) <= 0)
		{
			v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 64));
			if (v6)
			{
				v7 = *(_DWORD**)(a1 + 56);
				v8 = v7[85];
				v9 = (*(__int64 (**)(void))(*(_QWORD*)v7 + 8i64))();
				sub_1404694A0(v6, v9, v8);
			}
			sub_140717FA0(a1);
		}
		else
		{
			v5 = sub_1405BBBB0();
			sub_1405BC0D0((__int64)v5, *(_DWORD*)(a1 + 64), v4);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

