#include "../winhttp.h"

//----- (000000014054E5E0) ----------------------------------------------------
int** __fastcall sub_14054E5E0(__int64 a1, int** a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	__int64 v7; // rsi
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax

	v7 = a1;
	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (a1 = *(unsigned int*)(a4 + 32), *a5 < (unsigned int)a1)
		|| (unsigned int)a1 >= *a5 && a5[1] < *(_DWORD*)(a4 + 36))
	{
		v9 = sub_14054E8E0(a1, (__int64)a5);
		*(_QWORD*)(a4 + 16) = v9;
		v11 = *(_QWORD*)(v7 + 8);
		if (a4 == v11)
		{
			*(_QWORD*)(v11 + 8) = v9;
			*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24i64) = v9;
		}
		else if (a4 == *(_QWORD*)(v11 + 16))
		{
			*(_QWORD*)(v11 + 16) = v9;
		}
	}
	else
	{
		v8 = sub_14054E8E0(a1, (__int64)a5);
		*(_QWORD*)(a4 + 24) = v8;
		v9 = v8;
		v10 = *(_QWORD*)(v7 + 8);
		if (a4 == *(_QWORD*)(v10 + 24))
			*(_QWORD*)(v10 + 24) = v9;
	}
	*((_QWORD*)v9 + 1) = a4;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64));
	++* (_QWORD*)(v7 + 16);
	*a2 = v9;
	return a2;
}

