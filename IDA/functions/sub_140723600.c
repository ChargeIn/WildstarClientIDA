#include "../winhttp.h"

//----- (0000000140723600) ----------------------------------------------------
__int64 __fastcall sub_140723600(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	unsigned int v5; // r9d
	unsigned __int64 v6; // rdx
	__int64 v7; // rax
	unsigned int v8; // esi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 i; // rcx
	__int64 v12; // rsi
	__int64 v14; // rbx
	char v15[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v16; // [rsp+28h] [rbp-30h]
	__int64 v17; // [rsp+30h] [rbp-28h]
	unsigned int v18; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 8);
	v5 = 0;
	v6 = (*(_QWORD*)(a1 + 16) - v2) / 40;
	if (v6)
	{
		v7 = 0i64;
		while (*(_DWORD*)(v2 + 40 * v7 + 32) != *(_DWORD*)(a2 + 8))
		{
			v7 = ++v5;
			if (v5 >= v6)
				goto LABEL_5;
		}
		return v2 + 40i64 * v5;
	}
	else
	{
	LABEL_5:
		v8 = *(_DWORD*)(a2 + 8);
		v17 = 0i64;
		v16 = sub_14018B280(48i64, 0);
		*(_BYTE*)v16 = 0;
		*((_QWORD*)v16 + 1) = 0i64;
		*((_QWORD*)v16 + 2) = v16;
		*((_QWORD*)v16 + 3) = v16;
		v9 = *(_QWORD*)(a1 + 8);
		v10 = *(_QWORD*)(a1 + 16);
		v18 = v8;
		for (i = v9; i != v10; i += 40i64)
		{
			if (v8 <= *(_DWORD*)(i + 32))
				break;
		}
		v12 = (i - v9) / 40;
		if (v10 == *(_QWORD*)(a1 + 24) || i != v10)
		{
			sub_140723790((__int64*)a1, i, (__int64)v15);
		}
		else
		{
			if (v10)
			{
				sub_14048B2A0(v10, (__int64)v15);
				*(_DWORD*)(v10 + 32) = v18;
			}
			*(_QWORD*)(a1 + 16) += 40i64;
		}
		v14 = *(_QWORD*)(a1 + 8);
		*(_DWORD*)(a1 + 64) = (*(_DWORD*)(a1 + 16) - (int)v14) / 40;
		sub_140008410((__int64)v15);
		sub_14018B900((__int64)v16, 0);
		return v14 + 40 * v12;
	}
}
// 140723600: using guessed type char var_38[8];

