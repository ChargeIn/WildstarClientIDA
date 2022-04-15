#include "../winhttp.h"

//----- (00000001402D9B70) ----------------------------------------------------
__int64 __fastcall sub_1402D9B70(unsigned __int64 a1, int* a2, int** a3)
{
	int* v7; // rbx
	__int64 v8; // rax
	int* v9; // rax
	__int64 v10; // r8
	__int64 v11; // rcx

	if (a1 && !a2 || !a3)
		return 2147942487i64;
	if (a1)
	{
		v7 = sub_14018B280(32i64, 0);
		if (v7)
		{
			v7[2] = 1;
			*((_QWORD*)v7 + 2) = 0i64;
			*(_QWORD*)v7 = off_140B62F38;
			*((_QWORD*)v7 + 3) = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		*((_QWORD*)v7 + 2) = a1;
		v8 = 12 * a1;
		if (!is_mul_ok(a1, 0xCui64))
			v8 = -1i64;
		v9 = sub_14018B280(v8, 0);
		v10 = 3i64 * *((_QWORD*)v7 + 2);
		*((_QWORD*)v7 + 3) = v9;
		sub_1407DB590(v9, a2, 4 * v10);
		*a3 = v7;
		return 0i64;
	}
	else
	{
		v11 = qword_140C657F8;
		*a3 = *(int**)(qword_140C657F8 + 656);
		(***(void(__fastcall****)(_QWORD))(v11 + 656))(*(_QWORD*)(v11 + 656));
		return 0i64;
	}
}
// 140B62F38: using guessed type __int64 (__fastcall *off_140B62F38[20])();
// 140C657F8: using guessed type __int64 qword_140C657F8;

