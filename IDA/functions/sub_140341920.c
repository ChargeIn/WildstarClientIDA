#include "../winhttp.h"

//----- (0000000140341920) ----------------------------------------------------
__int64 __fastcall sub_140341920(__int64 a1, __int64 a2)
{
	__int64* v4; // r8
	int** v5; // rsi
	__int64 v6; // r8
	int* v7; // rcx
	bool v8; // zf
	__int64 v9; // rax
	int** v10; // rbx
	__int64 v11; // rax

	if (a2 == a1)
		return 2147942487i64;
	v4 = *(__int64**)(a1 + 80);
	v5 = (int**)(a1 + 80);
	if (v4)
	{
		while (*v4 != a2 && !(unsigned int)sub_1403416F0(*v4, a2))
		{
			v4 = *(__int64**)(v6 + 24);
			if (!v4)
				goto LABEL_6;
		}
		return 2147942487i64;
	}
LABEL_6:
	v7 = sub_14018B280(48i64, 0);
	if (v7)
	{
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *((_QWORD*)v7 + 2) == 0i64;
	*(_QWORD*)v7 = a2;
	if (v8)
	{
		*((_QWORD*)v7 + 2) = v5;
		*((_QWORD*)v7 + 3) = *v5;
		*v5 = v7;
		v9 = *((_QWORD*)v7 + 3);
		if (v9)
			*(_QWORD*)(v9 + 16) = v7 + 6;
	}
	v10 = (int**)(a2 + 88);
	v8 = *((_QWORD*)v7 + 4) == 0i64;
	*((_QWORD*)v7 + 1) = a1;
	if (v8)
	{
		*((_QWORD*)v7 + 4) = v10;
		*((_QWORD*)v7 + 5) = *v10;
		*v10 = v7;
		v11 = *((_QWORD*)v7 + 5);
		if (v11)
			*(_QWORD*)(v11 + 32) = v7 + 10;
	}
	return 0i64;
}
// 14034196C: variable 'v6' is possibly undefined

