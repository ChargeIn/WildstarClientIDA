#include "../winhttp.h"

//----- (00000001400DF440) ----------------------------------------------------
__int64 __fastcall sub_1400DF440(_QWORD* a1)
{
	__int64 v2; // r13
	_DWORD* v3; // rax
	int* v4; // rsi
	int* v5; // rbx
	int v6; // ebp
	__int64 v7; // rax
	char* v9; // r14
	unsigned __int64 v10; // r15
	int* v11; // r14
	_DWORD* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rax

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = (int*)&unk_1409D0306;
		else
			v4 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v5 = 0i64;
		v6 = -1;
		v7 = -1i64;
		while (*((_BYTE*)v4 + ++v7) != 0)
			;
		v9 = (char*)v4 + v7;
		v10 = v7;
		if (v7 != -2)
			v5 = sub_14018B280(v7 + 1, 0);
		sub_1407DB590(v5, v4, v10);
		v11 = (int*)((char*)v5 + v9 - (char*)v4);
		if (v11)
			*(_BYTE*)v11 = 0;
		if (v11 != v5)
		{
			v12 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v12 < a1[2] && v12 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
				v6 = sub_140056D60(a1, 3u);
			v13 = *(_QWORD*)(v2 + 32);
			if (sub_140151290(v13 + 3552, v5))
			{
				v14 = sub_140151100(v13 + 3552, v5);
				sub_140150A60(v14, v6);
			}
		}
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

