#include "../winhttp.h"

//----- (00000001402E9F20) ----------------------------------------------------
__int64 __fastcall sub_1402E9F20(int a1, __int64 a2, void(__fastcall*** a3)(_QWORD), int** a4)
{
	int* v9; // rax
	int* v10; // rbx

	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(48i64, 1u);
	v10 = v9;
	if (!v9)
		return 2147942414i64;
	v9[2] = 1;
	*((_QWORD*)v9 + 5) = 0i64;
	*(_QWORD*)v9 = off_140B638F0;
	v9[6] = 12 * a1;
	v9[3] = 13;
	v9[4] = a1;
	v9[5] = 12;
	*((_QWORD*)v9 + 5) = a3;
	(**a3)(a3);
	*((_QWORD*)v10 + 4) = a2;
	*a4 = v10;
	return 0i64;
}
// 140B638F0: using guessed type __int64 (__fastcall *off_140B638F0[7])();

