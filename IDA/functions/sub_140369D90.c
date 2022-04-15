#include "../winhttp.h"

//----- (0000000140369D90) ----------------------------------------------------
__int64 __fastcall sub_140369D90(_QWORD* a1, char a2, int** a3)
{
	int* v7; // rsi
	int v8; // ebx
	int v9; // r15d
	int v10; // r14d
	__int64 v11; // rax
	int* v12; // rdi
	__int64 i; // rbx
	__int64 j; // rbx
	__int64 k; // rbx

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(32i64, 0);
	if (v7)
	{
		*(_QWORD*)v7 = off_140B787C0;
		v7[6] = 1;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = a2 & 1;
	if ((a2 & 1) != 0)
		*((_QWORD*)v7 + 1) += a1[655];
	v9 = a2 & 2;
	if ((a2 & 2) != 0)
		*((_QWORD*)v7 + 1) += a1[628];
	v10 = a2 & 4;
	if (v10)
		*((_QWORD*)v7 + 1) += a1[539];
	v11 = 8i64 * *((_QWORD*)v7 + 1);
	if (!is_mul_ok(*((_QWORD*)v7 + 1), 8ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	*((_QWORD*)v7 + 2) = v12;
	if (v8)
	{
		for (i = a1[656]; i; i = *(_QWORD*)(i + 1016))
		{
			*(_QWORD*)v12 = i;
			v12 += 2;
			(**(void(__fastcall***)(__int64))i)(i);
		}
	}
	if (v9)
	{
		for (j = a1[629]; j; j = *(_QWORD*)(j + 1176))
		{
			if (j == *(_QWORD*)(j + 32))
			{
				*(_QWORD*)v12 = j;
				v12 += 2;
				(**(void(__fastcall***)(__int64))j)(j);
			}
			else
			{
				--* ((_QWORD*)v7 + 1);
			}
		}
	}
	if (v10)
	{
		for (k = a1[540]; k; k = *(_QWORD*)(k + 216))
		{
			*(_QWORD*)v12 = k;
			v12 += 2;
			(**(void(__fastcall***)(__int64))k)(k);
		}
	}
	*a3 = v7;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

