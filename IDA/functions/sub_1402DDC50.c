#include "../winhttp.h"

//----- (00000001402DDC50) ----------------------------------------------------
__int64 __fastcall sub_1402DDC50(int a1, __int64 a2, void(__fastcall*** a3)(_QWORD), int** a4)
{
	__int64 v7; // rbp
	int* v9; // rax
	int* v10; // rbx
	_DWORD* v11; // rdx
	int v12; // eax
	int v13; // ecx

	v7 = a1;
	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(48i64, 1u);
	v10 = v9;
	if (!v9)
		return 2147942414i64;
	v9[2] = 1;
	*(_QWORD*)v9 = off_140B62E18;
	*((_QWORD*)v9 + 4) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	*((_QWORD*)v9 + 5) = 0i64;
	v9[3] = v7;
	v11 = (_DWORD*)((char*)&unk_140C41340 + 56 * v7);
	v12 = v11[10] * v11[6];
	v13 = v11[11] * v11[7];
	*((_QWORD*)v10 + 3) = a2;
	*((_QWORD*)v10 + 4) = a3;
	*((_QWORD*)v10 + 2) = a2 - (v13 + v12);
	(**a3)(a3);
	*a4 = v10;
	return 0i64;
}
// 140B62E18: using guessed type __int64 (__fastcall *off_140B62E18[56])();

