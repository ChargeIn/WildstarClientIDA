#include "../winhttp.h"

//----- (00000001402EF870) ----------------------------------------------------
__int64 __fastcall sub_1402EF870(__int64 a1, __int64 a2, int a3, int* a4)
{
	_QWORD* v5; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	unsigned __int64 v10; // rbx
	__int64 v11; // rax
	int* v12; // rax

	*(_QWORD*)a1 = &off_140B64078;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 8) = a2;
	v5 = (_QWORD*)(a2 + 72);
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v5;
		v7 = a1 + 24;
		*(_QWORD*)v7 = *v5;
		*v5 = a1;
		if (*(_QWORD*)v7)
			*(_QWORD*)(*(_QWORD*)v7 + 16i64) = v7;
	}
	*(_DWORD*)(a1 + 32) = a3;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)a1 = off_140B64028;
	if (a4)
	{
		v8 = -1i64;
		while (*((_WORD*)a4 + ++v8) != 0)
			;
		v10 = (unsigned int)(v8 + 1);
		v11 = 2 * v10;
		if (!is_mul_ok(v10, 2ui64))
			v11 = -1i64;
		v12 = sub_14018B280(v11, 0);
		*(_QWORD*)(a1 + 40) = v12;
		sub_1407DB590(v12, a4, 2 * v10);
	}
	return a1;
}
// 140B64028: using guessed type __int64 (__fastcall *off_140B64028[11])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

