#include "../winhttp.h"

//----- (0000000140368D90) ----------------------------------------------------
__int64 __fastcall sub_140368D90(__int64 a1, int** a2)
{
	int* v5; // rax
	int* v6; // rcx
	int** v7; // r8
	__int64 v8; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(272i64, 0);
	v6 = v5;
	if (v5)
	{
		v7 = (int**)(a1 + 5400);
		*(_QWORD*)v5 = off_140B65C68;
		*((_QWORD*)v5 + 28) = 0i64;
		*((_QWORD*)v5 + 29) = 0i64;
		*((_QWORD*)v5 + 30) = 0i64;
		*((_QWORD*)v5 + 31) = 0i64;
		*((_QWORD*)v5 + 32) = 0i64;
		*((_QWORD*)v5 + 1) = 1i64;
		*((_QWORD*)v5 + 2) = a1;
		if (!*((_QWORD*)v5 + 29))
		{
			*((_QWORD*)v5 + 29) = v7;
			*((_QWORD*)v5 + 30) = *v7;
			*v7 = v5;
			v8 = *((_QWORD*)v5 + 30);
			if (v8)
			{
				*(_QWORD*)(v8 + 232) = v6 + 60;
				*a2 = v6;
				return 0i64;
			}
		}
	}
	else
	{
		v6 = 0i64;
	}
	*a2 = v6;
	return 0i64;
}
// 140B65C68: using guessed type __int64 (__fastcall *off_140B65C68[10])();

