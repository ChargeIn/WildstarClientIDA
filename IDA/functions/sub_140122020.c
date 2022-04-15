#include "../winhttp.h"

//----- (0000000140122020) ----------------------------------------------------
int** __fastcall sub_140122020(__int64 a1, int** a2, __int64 a3, __int64 a4, int** a5)
{
	__int64 v5; // rdi
	char* v8; // r11
	int* v9; // r10
	int v10; // r8d
	int v11; // eax
	int* v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax

	v5 = a4;
	if (a4 != *(_QWORD*)(a1 + 8) && !a3)
	{
		v8 = *(char**)(a4 + 32);
		v9 = *a5;
		LOBYTE(a4) = *(_BYTE*)*a5;
		v10 = (char)a4 - *v8;
		if (!v10)
		{
			while ((_BYTE)a4)
			{
				LODWORD(a4) = *((char*)v9 + 1);
				v11 = v8[1];
				v9 = (int*)((char*)v9 + 1);
				++v8;
				v10 = a4 - v11;
				if ((_DWORD)a4 != v11)
					goto LABEL_6;
			}
			goto LABEL_7;
		}
	LABEL_6:
		if (v10 >= 0)
		{
		LABEL_7:
			v12 = sub_14018B280(48i64, 0);
			if (v12 != (int*)-32i64)
				sub_1401222D0((int**)v12 + 4, a5);
			*(_QWORD*)(v5 + 24) = v12;
			v13 = *(_QWORD*)(a1 + 8);
			if (v5 == *(_QWORD*)(v13 + 24))
				*(_QWORD*)(v13 + 24) = v12;
			goto LABEL_17;
		}
	}
	v12 = sub_14018B280(48i64, 0);
	if (v12 != (int*)-32i64)
		sub_1401222D0((int**)v12 + 4, a5);
	*(_QWORD*)(v5 + 16) = v12;
	v14 = *(_QWORD*)(a1 + 8);
	if (v5 == v14)
	{
		*(_QWORD*)(v14 + 8) = v12;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
	}
	else if (v5 == *(_QWORD*)(v14 + 16))
	{
		*(_QWORD*)(v14 + 16) = v12;
	}
LABEL_17:
	*((_QWORD*)v12 + 1) = v5;
	*((_QWORD*)v12 + 2) = 0i64;
	*((_QWORD*)v12 + 3) = 0i64;
	sub_1400081C0((__int64)v12, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v12;
	return a2;
}

