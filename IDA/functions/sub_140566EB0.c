#include "../winhttp.h"

//----- (0000000140566EB0) ----------------------------------------------------
int** __fastcall sub_140566EB0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // rdi
	__int64 v10; // rax
	unsigned int v11; // eax
	int v12; // eax
	int v13; // eax
	int* v14; // rax
	__int64 v15; // rax

	v7 = a1;
	if (a4 == *(_QWORD*)(a1 + 8) || a3)
		goto LABEL_5;
	if (*(_DWORD*)a5)
	{
		if (!*(_DWORD*)(a4 + 32))
			goto LABEL_17;
	}
	else if (*(_DWORD*)(a4 + 32))
	{
	LABEL_5:
		v8 = sub_14018B280(64i64, 0);
		v9 = v8;
		if (v8 != (int*)-32i64)
		{
			*((_QWORD*)v8 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v8 + 5) = *(_QWORD*)(a5 + 8);
			*((_QWORD*)v8 + 6) = *(_QWORD*)(a5 + 16);
			*((_QWORD*)v8 + 7) = *(_QWORD*)(a5 + 24);
		}
		*(_QWORD*)(a4 + 16) = v8;
		v10 = *(_QWORD*)(v7 + 8);
		if (a4 == v10)
		{
			*(_QWORD*)(v10 + 8) = v9;
			*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24i64) = v9;
		}
		else if (a4 == *(_QWORD*)(v10 + 16))
		{
			*(_QWORD*)(v10 + 16) = v9;
		}
		goto LABEL_21;
	}
	v11 = *(_DWORD*)(a5 + 4);
	a1 = *(unsigned int*)(a4 + 36);
	if (v11 < (unsigned int)a1)
		goto LABEL_5;
	if (v11 <= (unsigned int)a1)
	{
		v12 = *(_DWORD*)(a5 + 8);
		a1 = *(unsigned int*)(a4 + 40);
		if (v12 < (int)a1)
			goto LABEL_5;
		if (v12 <= (int)a1)
		{
			v13 = *(_DWORD*)(a5 + 12);
			a1 = *(unsigned int*)(a4 + 44);
			if (v13 < (int)a1 || v13 <= (int)a1 && *(_DWORD*)(a5 + 16) < *(_DWORD*)(a4 + 48))
				goto LABEL_5;
		}
	}
LABEL_17:
	v14 = sub_140567240(a1, (_QWORD*)a5);
	*(_QWORD*)(a4 + 24) = v14;
	v9 = v14;
	v15 = *(_QWORD*)(v7 + 8);
	if (a4 == *(_QWORD*)(v15 + 24))
		*(_QWORD*)(v15 + 24) = v9;
LABEL_21:
	*((_QWORD*)v9 + 1) = a4;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64));
	++* (_QWORD*)(v7 + 16);
	*a2 = v9;
	return a2;
}

