#include "../winhttp.h"

//----- (0000000140404090) ----------------------------------------------------
void __fastcall sub_140404090(__int64 a1, unsigned int a2, unsigned __int64 a3, int* a4)
{
	_QWORD* v4; // r15
	unsigned __int64 v6; // r11
	__int64 v7; // rdi
	unsigned __int64 v9; // r10
	unsigned __int64 v10; // rcx
	__int64 v11; // r9
	unsigned int v12; // edx
	unsigned __int64 v13; // rax
	__int64 v14; // r14
	__int64 v15; // rcx
	__int64 v16; // rax
	int* v17; // rdi
	__int64 v18; // rbx
	unsigned __int64 v19; // rbx
	int* v20; // r8
	char* v21; // rcx
	char v22; // [rsp+20h] [rbp-38h] BYREF

	v4 = (_QWORD*)qword_140C658A0;
	v6 = *(_QWORD*)(qword_140C658A0 + 8);
	v7 = *(_QWORD*)qword_140C658A0;
	v9 = 0i64;
	if (v6)
	{
		while (1)
		{
			v10 = v9 + ((v6 - v9) >> 1);
			v11 = *(_QWORD*)(v7 + 8 * v10);
			v12 = **(_DWORD**)(v11 + 8);
			if (v12 < a2)
				break;
			if (v12 <= a2)
			{
				v13 = *(_QWORD*)(v11 + 16);
				if (v13 < a3)
					break;
				if (v13 <= a3)
					goto LABEL_10;
			}
			v6 = v9 + ((v6 - v9) >> 1);
		LABEL_8:
			if (v9 >= v6)
				goto LABEL_9;
		}
		v9 = v10 + 1;
		goto LABEL_8;
	}
LABEL_9:
	v10 = v9;
LABEL_10:
	if (v10 < *(_QWORD*)(qword_140C658A0 + 8))
	{
		v14 = 8 * v10;
		v15 = *(_QWORD*)(8 * v10 + v7);
		if (**(_DWORD**)(v15 + 8) == a2 && *(_QWORD*)(v15 + 16) == a3)
		{
			v16 = 0i64;
			v17 = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v16;
				while (*((_WORD*)a4 + v16));
			}
			v18 = (2 * v16) >> 1;
			if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v17 = sub_14018B280(2 * (v18 + 1), 0);
			v19 = 2 * v18;
			sub_1407DB590(v17, a4, v19);
			v20 = (int*)((char*)v17 + v19);
			if ((int*)((char*)v17 + v19))
				*(_WORD*)v20 = 0;
			v21 = (char*)(*(_QWORD*)(v14 + *v4) + 24i64);
			if (&v22 != v21)
				sub_14001C480((__int64)v21, v17, v20);
			if (v17)
				sub_14018B900((__int64)v17, 0);
		}
	}
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

