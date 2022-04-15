#include "../winhttp.h"

//----- (00000001404ACBA0) ----------------------------------------------------
__int64 __fastcall sub_1404ACBA0(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	_QWORD* v5; // rbx
	unsigned int** v6; // rsi
	__int64 v7; // rdi
	int* v8; // rax
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	char v12[8]; // [rsp+20h] [rbp-28h] BYREF
	_QWORD* v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h]

	if (**(_QWORD**)(a2 + 8) != *(_QWORD*)(a2 + 8))
		return 2147500037i64;
	sub_14048B2A0((__int64)v12, a1 + 8);
	if (v14)
	{
		v5 = (_QWORD*)v13[2];
		while (v5 != v13)
		{
			v6 = *(unsigned int***)(v5[5] + 16i64);
			if (sub_1404AD9B0(qword_140C659D0, **v6) || ((*v6)[3] & 4) != 0)
			{
				v7 = *(_QWORD*)(a2 + 8);
				v8 = sub_14018B280(24i64, 0);
				if (v8 != (int*)-16i64)
					*((_QWORD*)v8 + 2) = v6;
				*(_QWORD*)v8 = v7;
				*((_QWORD*)v8 + 1) = *(_QWORD*)(v7 + 8);
				**(_QWORD**)(v7 + 8) = v8;
				*(_QWORD*)(v7 + 8) = v8;
			}
			v9 = v5[3];
			if (v9)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
		}
		v4 = 0;
	}
	else
	{
		v4 = -2147467259;
	}
	sub_140008410((__int64)v12);
	sub_14018B900((__int64)v13, 0);
	return v4;
}
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 1404ACBA0: using guessed type char var_28[8];

