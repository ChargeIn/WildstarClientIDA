#include "../winhttp.h"

//----- (0000000140613750) ----------------------------------------------------
__int64 __fastcall sub_140613750(__int64 a1, int** a2, int a3)
{
	__int64 v3; // rbp
	int* v7; // rax
	unsigned int v8; // ebx
	int* v9; // r8
	bool v10; // zf
	int** v11; // rdx
	__int64 v12; // rcx

	v3 = qword_140C65898;
	if (!a2)
		return 2147942487i64;
	v7 = sub_14018B280(40i64, 0);
	v8 = 0;
	v9 = v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B55048;
		v7[2] = 1;
		*(_QWORD*)v7 = off_140B6FAA8;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		v7[8] = 0;
	}
	else
	{
		v9 = 0i64;
	}
	if (a3)
	{
		v10 = *((_QWORD*)v9 + 2) == 0i64;
		v9[8] = a3;
		v11 = (int**)(v3 + 31256);
		if (v10)
		{
			*((_QWORD*)v9 + 2) = v11;
			*((_QWORD*)v9 + 3) = *v11;
			*v11 = v9;
			v12 = *((_QWORD*)v9 + 3);
			if (v12)
				*(_QWORD*)(v12 + 16) = v9 + 6;
		}
		*a2 = v9;
	}
	else
	{
		v8 = -2147467259;
		if (v9)
			(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v9 + 16i64))(v9, 1i64);
	}
	return v8;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6FAA8: using guessed type __int64 (__fastcall *off_140B6FAA8[24])();
// 140C65898: using guessed type __int64 qword_140C65898;

