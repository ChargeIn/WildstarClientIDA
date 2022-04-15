#include "../winhttp.h"

//----- (000000014010AEB0) ----------------------------------------------------
void __fastcall sub_14010AEB0(__int64 a1, __int64 a2, int* a3)
{
	_WORD* v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	int* v9; // rbp
	__int64 v10; // rbx
	signed __int64 v11; // rbx
	int* v12; // r15
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	__int64 v17; // rax
	int* v18; // rdx
	__int64 v19; // rax
	bool v20; // zf
	_QWORD* v21; // rsi
	_WORD* v22; // rax
	char v23; // [rsp+20h] [rbp-48h] BYREF
	int v24; // [rsp+80h] [rbp+18h]

	if (a3)
	{
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v8;
			while (*((_WORD*)a3 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, a3, v11);
		v12 = (int*)((char*)v9 + v11);
		if ((int*)((char*)v9 + v11))
			*(_WORD*)v12 = 0;
		v13 = v11 >> 1;
		if ((!(((char*)v12 - (char*)v9) >> 1)
			|| (HIWORD(v24) = 46, v14 = (int*)sub_14002C8A0(v9, (__int64)v12, v24), v14 == v12)
			|| ((char*)v14 - (char*)v9) >> 1 == -1)
			&& (!v13
				|| ((HIWORD(v24) = 92, v15 = (int*)sub_14002C8A0(v9, (__int64)v12, v24), v15 == v12)
					|| ((char*)v15 - (char*)v9) >> 1 == -1)
				&& ((HIWORD(v24) = 47, v16 = (int*)sub_14002C8A0(v9, (__int64)v12, v24), v16 == v12)
					|| ((char*)v16 - (char*)v9) >> 1 == -1)))
		{
			*(_DWORD*)a1 = sub_1400F6A90(a2 + 2688, (__int64)a3);
			v22 = *(_WORD**)(a1 + 16);
			if (v22 != *(_WORD**)(a1 + 24))
			{
				*v22 = 0;
				*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16);
			}
		}
		else
		{
			v17 = qword_140C63650;
			*(_DWORD*)a1 = -1;
			v18 = *(int**)(v17 + 784);
			if (v18 && *(_WORD*)v18)
			{
				v19 = 0i64;
				do
					v20 = *((_WORD*)v18 + ++v19) == 0;
				while (!v20);
				v21 = (_QWORD*)(a1 + 8);
				sub_14001C480((__int64)v21, v18, (int*)((char*)v18 + 2 * v19));
				do
					v20 = *((_WORD*)&unk_1409D552C + ++v7) == 0;
				while (!v20);
				sub_14001C310(v21, (int*)&unk_1409D552C, (int*)((char*)&unk_1409D552C + 2 * v7));
				sub_14001C310(v21, v9, v12);
			}
			else if (&v23 != (char*)(a1 + 8))
			{
				sub_14001C480(a1 + 8, v9, v12);
			}
		}
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
	else
	{
		*(_DWORD*)a1 = -1;
		v6 = *(_WORD**)(a1 + 16);
		if (v6 != *(_WORD**)(a1 + 24))
		{
			*v6 = 0;
			*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16);
		}
	}
}
// 14010AFDB: conditional instruction was optimized away because rbx.8!=0
// 140C63650: using guessed type __int64 qword_140C63650;

