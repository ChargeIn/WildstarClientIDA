#include "../winhttp.h"

//----- (00000001405670D0) ----------------------------------------------------
int** __fastcall sub_1405670D0(__int64 a1, int** a2, __int64 a3, __int64 a4, _QWORD* a5)
{
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || *(_DWORD*)a5 < *(_DWORD*)(a4 + 32))
	{
		v11 = sub_14018B280(88i64, 0);
		v9 = v11;
		if (v11 != (int*)-32i64)
		{
			*((_QWORD*)v11 + 4) = *a5;
			*((_QWORD*)v11 + 5) = a5[1];
			*((_QWORD*)v11 + 6) = a5[2];
			*((_QWORD*)v11 + 7) = a5[3];
			*((_QWORD*)v11 + 8) = a5[4];
			*((_QWORD*)v11 + 9) = a5[5];
			*((_QWORD*)v11 + 10) = a5[6];
		}
		*(_QWORD*)(a4 + 16) = v11;
		v12 = *(_QWORD*)(a1 + 8);
		if (a4 == v12)
		{
			*(_QWORD*)(v12 + 8) = v9;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v9;
		}
		else if (a4 == *(_QWORD*)(v12 + 16))
		{
			*(_QWORD*)(v12 + 16) = v9;
		}
	}
	else
	{
		v8 = sub_1405671E0(a1, a5);
		*(_QWORD*)(a4 + 24) = v8;
		v9 = v8;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v10 + 24))
			*(_QWORD*)(v10 + 24) = v9;
	}
	*((_QWORD*)v9 + 1) = a4;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v9;
	return a2;
}

