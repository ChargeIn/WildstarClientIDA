#include "../winhttp.h"

//----- (00000001401D8710) ----------------------------------------------------
__int64 __fastcall sub_1401D8710(__int64 a1, __int64 a2, __int64 a3)
{
	int* v7; // rax
	int* v8; // rbx
	int v9; // edi

	if (!a3)
		return 0i64;
	if (!a2)
		return 2147942487i64;
	v7 = sub_14018B280(32i64, 1u);
	v8 = v7;
	if (!v7)
		return 2147942414i64;
	v7[2] = 1;
	*(_QWORD*)v7 = off_140B5F4F0;
	*((_QWORD*)v7 + 2) = a2;
	*((_QWORD*)v7 + 3) = a3;
	v9 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 104i64))(a1, v7);
	(*(void(__fastcall**)(int*))(*(_QWORD*)v8 + 8i64))(v8);
	if (v9 >= 0)
		return 0i64;
	else
		return (unsigned int)v9;
}
// 140B5F4F0: using guessed type __int64 (__fastcall *off_140B5F4F0[37])();

