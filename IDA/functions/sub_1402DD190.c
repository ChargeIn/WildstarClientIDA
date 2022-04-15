#include "../winhttp.h"

//----- (00000001402DD190) ----------------------------------------------------
__int64 __fastcall sub_1402DD190(__int64 a1, int** a2)
{
	int* v5; // rax
	int* v6; // rdi
	unsigned int v7; // esi
	__int64 v8; // rax
	unsigned int i; // ecx
	__int64 v10; // rax
	int* v11; // rax
	__int64 j; // rbx

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(32i64, 1u);
	v6 = v5;
	if (!v5)
		return 2147942414i64;
	v7 = 0;
	*(_QWORD*)v5 = off_140B787C0;
	v5[6] = 1;
	*((_QWORD*)v5 + 1) = 0i64;
	*((_QWORD*)v5 + 2) = 0i64;
	v8 = *(_QWORD*)(a1 + 1824);
	for (i = 0; v8; ++i)
		v8 = *(_QWORD*)(v8 + 56);
	*((_QWORD*)v6 + 1) = i;
	if (i)
	{
		v10 = 8i64 * i;
		if (!is_mul_ok(i, 8ui64))
			v10 = -1i64;
		v11 = sub_14018B280(v10, 1u);
	}
	else
	{
		v11 = 0i64;
	}
	*((_QWORD*)v6 + 2) = v11;
	if (!*((_QWORD*)v6 + 1) || v11)
	{
		for (j = *(_QWORD*)(a1 + 1824); j; ++v7)
		{
			*(_QWORD*)(*((_QWORD*)v6 + 2) + 8i64 * v7) = j;
			(**(void(__fastcall***)(__int64))j)(j);
			j = *(_QWORD*)(j + 56);
		}
		*a2 = v6;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v6 + 32i64))(v6, 1i64);
		return 2147942414i64;
	}
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

