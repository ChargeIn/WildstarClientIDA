#include "../winhttp.h"

//----- (00000001401C5690) ----------------------------------------------------
__int64 __fastcall sub_1401C5690(__int64 a1, int** a2, char a3)
{
	int* v6; // rbx
	int* v7; // rax

	if (!a2)
		return 2147942487i64;
	v6 = sub_14018B280(32i64, a3 | 1u);
	if (!v6)
		return 2147942414i64;
	v6[2] = 1;
	*((_QWORD*)v6 + 2) = 0i64;
	*(_QWORD*)v6 = off_140B5F548;
	if (a1)
	{
		v7 = sub_14018B280(a1, 1u);
		*((_QWORD*)v6 + 2) = v7;
		if (!v7)
		{
			sub_1401C5610(v6);
			return 2147942414i64;
		}
	}
	*((_QWORD*)v6 + 3) = a1;
	*a2 = v6;
	return 0i64;
}
// 140B5F548: using guessed type __int64 (__fastcall *off_140B5F548[26])();

