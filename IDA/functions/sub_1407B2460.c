#include "../winhttp.h"

//----- (00000001407B2460) ----------------------------------------------------
__int64 __fastcall sub_1407B2460(float a1, int** a2)
{
	int* v4; // rax

	if (!a2)
		return 2147942487i64;
	v4 = sub_14018B280(16i64, 1u);
	if (!v4)
		return 2147942414i64;
	*(_QWORD*)v4 = off_140B787F0;
	v4[2] = 1;
	*((float*)v4 + 3) = a1;
	*a2 = v4;
	return 0i64;
}
// 140B787F0: using guessed type __int64 (__fastcall *off_140B787F0[319])();

