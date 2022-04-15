#include "../winhttp.h"

//----- (000000014003E380) ----------------------------------------------------
__int64 __fastcall sub_14003E380(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	int* v5; // rax
	unsigned int v6; // edi
	int* v7; // rbx
	__int64 v8; // rcx
	int v9; // eax

	if (!*(_QWORD*)(a1 + 24))
		return 2147500037i64;
	v5 = sub_14018B280(80i64, 0);
	v6 = 0;
	v7 = v5;
	if (v5)
	{
		*(_QWORD*)v5 = off_140B55048;
		v5[2] = 1;
		*((_QWORD*)v5 + 3) = 0i64;
		*((_QWORD*)v5 + 4) = 0i64;
		*((_QWORD*)v5 + 6) = 0i64;
		v5[14] = 0;
		*((_QWORD*)v5 + 2) = 0i64;
		*(_QWORD*)v5 = off_140B55F40;
		v5[10] = 0;
		*((_QWORD*)v5 + 9) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	if (*((void(__fastcall****)(_QWORD))v7 + 9) != a2)
	{
		if (a2)
			(**a2)(a2);
		v8 = *((_QWORD*)v7 + 9);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*((_QWORD*)v7 + 9) = a2;
	}
	v9 = -2147467259;
	if (*((_QWORD*)v7 + 9))
		v9 = 0;
	if (v9 < 0 || (v9 = sub_140048100(a1, (__int64)v7, 1), v9 < 0))
		v6 = v9;
	(*(void(__fastcall**)(int*))(*(_QWORD*)v7 + 8i64))(v7);
	return v6;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55F40: using guessed type __int64 (__fastcall *off_140B55F40[14])();

