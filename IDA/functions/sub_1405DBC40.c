#include "../winhttp.h"

//----- (00000001405DBC40) ----------------------------------------------------
int** __fastcall sub_1405DBC40(int** a1, __int64 a2, int** a3)
{
	int* v6; // r14
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	int* v11; // rax
	__int64 v13; // [rsp+50h] [rbp+8h] BYREF

	*a1 = *a3;
	a1[1] = a3[1];
	a1[2] = a3[2];
	a1[3] = a3[3];
	a1[4] = a3[4];
	a1[5] = a3[5];
	v6 = *a3;
	if (*a3)
	{
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, v6, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		a1[6] = v9;
	}
	else
	{
		a1[6] = 0i64;
	}
	a1[7] = 0i64;
	v11 = a1[6];
	v13 = a2;
	*a1 = v11;
	if (a2)
		sub_1404BC4D0(qword_140C65BA0 + 480, a3 + 1, &v13);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65BA0: using guessed type __int64 qword_140C65BA0;

