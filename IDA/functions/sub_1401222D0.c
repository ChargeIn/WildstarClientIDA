#include "../winhttp.h"

//----- (00000001401222D0) ----------------------------------------------------
int** __fastcall sub_1401222D0(int** a1, int** a2)
{
	unsigned __int64 v4; // rbp
	int* v5; // rax
	int* v6; // rbx
	int* v7; // rbp
	unsigned __int64 v8; // rbp
	int* v9; // rax
	int* v10; // rbx

	if (*a2)
	{
		v4 = *((_QWORD*)*a2 - 1);
		v5 = sub_14018B280(v4 + 17, 0);
		if (v5)
		{
			*(_QWORD*)v5 = off_140B55060;
			*((_QWORD*)v5 + 1) = v4;
		}
		v6 = v5 + 4;
		sub_1407DB590(v5 + 4, *a2, v4);
		*((_BYTE*)v6 + v4) = 0;
		*a1 = v6;
	}
	else
	{
		*a1 = 0i64;
	}
	v7 = a2[1];
	if (v7)
	{
		v8 = *((_QWORD*)v7 - 1);
		v9 = sub_14018B280(v8 + 17, 0);
		if (v9)
		{
			*(_QWORD*)v9 = off_140B55060;
			*((_QWORD*)v9 + 1) = v8;
		}
		v10 = v9 + 4;
		sub_1407DB590(v9 + 4, a2[1], v8);
		*((_BYTE*)v10 + v8) = 0;
		a1[1] = v10;
	}
	else
	{
		a1[1] = 0i64;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

