#include "../winhttp.h"

//----- (00000001407B23F0) ----------------------------------------------------
__int64 __fastcall sub_1407B23F0(__int64 a1, int** a2)
{
	int* v5; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(24i64, 1u);
	if (!v5)
		return 2147942414i64;
	*(_QWORD*)v5 = off_140B789B0;
	v5[2] = 1;
	*((_QWORD*)v5 + 2) = a1;
	*a2 = v5;
	return 0i64;
}
// 140B789B0: using guessed type __int64 (__fastcall *off_140B789B0[263])();

