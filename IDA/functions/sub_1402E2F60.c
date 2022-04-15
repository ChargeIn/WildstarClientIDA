#include "../winhttp.h"

//----- (00000001402E2F60) ----------------------------------------------------
__int64 __fastcall sub_1402E2F60(unsigned int* a1, unsigned __int64 a2, int** a3)
{
	int* v7; // rax
	int* v8; // rbx
	int v9; // esi

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(40i64, 1u);
	v8 = v7;
	if (!v7)
		return 2147942414i64;
	*(_QWORD*)v7 = off_140B63120;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 3) = 0i64;
	*((_QWORD*)v7 + 4) = 0i64;
	v7[2] = 1;
	v9 = sub_1402E2BC0((__int64)v7, a1, a2);
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	else
	{
		sub_1402E2C80(v8);
		return (unsigned int)v9;
	}
}
// 140B63120: using guessed type __int64 (__fastcall *off_140B63120[7])();

