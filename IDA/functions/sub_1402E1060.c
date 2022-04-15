#include "../winhttp.h"

//----- (00000001402E1060) ----------------------------------------------------
__int64 __fastcall sub_1402E1060(__int64* a1, int** a2)
{
	__int64 v5; // rax
	unsigned __int64 v6; // rsi
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // r8
	int v12; // ebp
	int v13[4]; // [rsp+20h] [rbp-28h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *a1;
	v13[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 32))(a1, v13);
	v6 = a1[675];
	v7 = sub_14018B280(32i64, 1u);
	if (!v7)
		return 2147942414i64;
	v8 = 0i64;
	*(_QWORD*)v7 = off_140B787C0;
	v7[6] = 1;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 1) = v6;
	if (v6)
	{
		v9 = 8 * v6;
		if (!is_mul_ok(v6, 8ui64))
			v9 = -1i64;
		v10 = sub_14018B280(v9, 1u);
	}
	else
	{
		v10 = 0i64;
	}
	v11 = *((_QWORD*)v7 + 1);
	*((_QWORD*)v7 + 2) = v10;
	if (!v11 || v10)
	{
		sub_1407E4830(v10, 0i64, 8 * v11);
		if (v6)
		{
			while (1)
			{
				v12 = sub_1402E01D0(a1, v8, (__int64*)(*((_QWORD*)v7 + 2) + 8 * v8));
				if (v12 < 0)
					break;
				if (++v8 >= v6)
					goto LABEL_15;
			}
			(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v7 + 32i64))(v7, 1i64);
			return (unsigned int)v12;
		}
		else
		{
		LABEL_15:
			*a2 = v7;
			return 0i64;
		}
	}
	else
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v7 + 32i64))(v7, 1i64);
		return 2147942414i64;
	}
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 1402E1060: using guessed type int var_28[4];

