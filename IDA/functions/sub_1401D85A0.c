#include "../winhttp.h"

//----- (00000001401D85A0) ----------------------------------------------------
__int64 __fastcall sub_1401D85A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v10; // rax
	int* v11; // rbx
	int v12; // edi

	if (!a2 && a3)
		return 2147942487i64;
	v10 = sub_14018B280(32i64, 1u);
	v11 = v10;
	if (!v10)
		return 2147942414i64;
	v10[2] = 1;
	*(_QWORD*)v10 = off_140B5F4F0;
	*((_QWORD*)v10 + 2) = a2;
	*((_QWORD*)v10 + 3) = a3;
	v12 = (*(__int64(__fastcall**)(__int64, int*, __int64, __int64))(*(_QWORD*)a1 + 88i64))(a1, v10, a4, a5);
	(*(void(__fastcall**)(int*))(*(_QWORD*)v11 + 8i64))(v11);
	if (v12 >= 0)
		return 0i64;
	else
		return (unsigned int)v12;
}
// 140B5F4F0: using guessed type __int64 (__fastcall *off_140B5F4F0[37])();

