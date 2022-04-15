#include "../winhttp.h"

//----- (00000001401C5740) ----------------------------------------------------
__int64 __fastcall sub_1401C5740(int* a1, unsigned __int64 a2, int** a3)
{
	__int64 result; // rax
	int* v7; // rbx
	int* v8; // rax

	if (!a1 && a2 || !a3)
		return 2147942487i64;
	v7 = sub_14018B280(32i64, 1u);
	if (v7)
	{
		v7[2] = 1;
		*((_QWORD*)v7 + 2) = 0i64;
		*(_QWORD*)v7 = off_140B5F548;
		if (!a2)
		{
		LABEL_9:
			*((_QWORD*)v7 + 3) = a2;
			result = 0i64;
			*a3 = v7;
			return result;
		}
		v8 = sub_14018B280(a2, 1u);
		*((_QWORD*)v7 + 2) = v8;
		if (v8)
		{
			sub_1407DB590(v8, a1, a2);
			goto LABEL_9;
		}
		sub_1401C5610(v7);
	}
	return 2147942414i64;
}
// 140B5F548: using guessed type __int64 (__fastcall *off_140B5F548[26])();

