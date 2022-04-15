#include "../winhttp.h"

//----- (000000014018EE90) ----------------------------------------------------
_QWORD* sub_14018EE90(_QWORD* a1, __int64 a2, ...)
{
	int v3; // eax
	unsigned __int64 v4; // rbp
	int* v5; // rbx
	__int64 v6; // r14
	char* v7; // r15
	_BYTE* v8; // r14
	int* v10; // rax
	va_list va; // [rsp+80h] [rbp+18h] BYREF

	va_start(va, a2);
	if (!a2 || (v3 = sub_1407E0318(a2, (__int64)va), v4 = v3, v3 == -1))
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v10 = sub_14018B280(8i64, 0);
		a1[1] = v10;
		a1[2] = v10;
		a1[3] = v10 + 2;
		if (v10)
			*(_BYTE*)v10 = 0;
		return a1;
	}
	else
	{
		v5 = 0i64;
		v6 = v3 + 1i64;
		v7 = 0i64;
		if (v3 != -2i64)
		{
			v5 = sub_14018B280(v3 + 1i64, 0);
			v7 = (char*)v5 + v6;
		}
		sub_1407E4830(v5, 0i64, v4);
		v8 = (char*)v5 + v4;
		if ((int*)((char*)v5 + v4))
			*v8 = 0;
		sub_1407E0418(v5, (int)v4 + 1, v4, a2, (__int64)va);
		a1[2] = v8;
		a1[3] = v7;
		a1[1] = v5;
		return a1;
	}
}

