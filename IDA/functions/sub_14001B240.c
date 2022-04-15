#include "../winhttp.h"

//----- (000000014001B240) ----------------------------------------------------
_BYTE* __fastcall sub_14001B240(_QWORD* a1, int* a2, __int64 a3)
{
	unsigned __int64 v5; // rsi
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rbx
	_BYTE* result; // rax

	v5 = a3 - (_QWORD)a2;
	v7 = a3 - (_QWORD)a2 + 1;
	if (a3 - (_QWORD)a2 != -2)
	{
		v8 = sub_14018B280(v7, 0);
		a1[1] = v8;
		a1[2] = v8;
		a1[3] = (char*)v8 + v7;
	}
	v9 = (int*)a1[1];
	sub_1407DB590(v9, a2, v5);
	result = (_BYTE*)((char*)v9 - (char*)a2 + a3);
	a1[2] = result;
	if (result)
		*result = 0;
	return result;
}

