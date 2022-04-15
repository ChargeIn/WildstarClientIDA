#include "../winhttp.h"

//----- (0000000140618020) ----------------------------------------------------
int** __fastcall sub_140618020(__int64 a1, int** a2, __int64 a3, __int64 a4, unsigned int* a5)
{
	unsigned int v8; // ecx
	bool v9; // cf
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3)
		goto LABEL_10;
	v8 = *(_DWORD*)(a4 + 32);
	v9 = *a5 < v8;
	if (*a5 == v8)
		v9 = a5[1] < *(_DWORD*)(a4 + 36);
	if (v9)
	{
	LABEL_10:
		v10 = sub_14018B280(40i64, 0);
		if (v10 != (int*)-32i64)
			*((_QWORD*)v10 + 4) = *(_QWORD*)a5;
		*(_QWORD*)(a4 + 16) = v10;
		v12 = *(_QWORD*)(a1 + 8);
		if (a4 == v12)
		{
			*(_QWORD*)(v12 + 8) = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (a4 == *(_QWORD*)(v12 + 16))
		{
			*(_QWORD*)(v12 + 16) = v10;
		}
	}
	else
	{
		v10 = sub_14018B280(40i64, 0);
		if (v10 != (int*)-32i64)
			*((_QWORD*)v10 + 4) = *(_QWORD*)a5;
		*(_QWORD*)(a4 + 24) = v10;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v11 + 24))
			*(_QWORD*)(v11 + 24) = v10;
	}
	*((_QWORD*)v10 + 1) = a4;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 3) = 0i64;
	sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v10;
	return a2;
}

