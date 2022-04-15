#include "../winhttp.h"

//----- (000000014018EFA0) ----------------------------------------------------
_QWORD* sub_14018EFA0(_QWORD* a1, __int64 a2, ...)
{
	int v3; // eax
	unsigned __int64 v4; // r15
	char* v5; // r12
	int* v6; // r14
	unsigned __int64 v7; // rcx
	int* v8; // rbx
	int* v10; // rax
	va_list va; // [rsp+90h] [rbp+18h] BYREF

	va_start(va, a2);
	if (!a2 || (v3 = sub_1407DFF50(a2, (__int64)va), v4 = v3, v3 == -1))
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v10 = sub_14018B280(16i64, 0);
		a1[1] = v10;
		a1[2] = v10;
		a1[3] = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		return a1;
	}
	else
	{
		v5 = 0i64;
		v6 = 0i64;
		if ((unsigned __int64)(v3 + 1i64) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v6 = sub_14018B280(2 * (v3 + 1i64), 0);
			v5 = (char*)v6 + 2 * v4 + 2;
		}
		v7 = v4;
		v8 = v6;
		if ((_DWORD)v4)
		{
			do
			{
				if (v8)
					*(_WORD*)v8 = 0;
				v8 = (int*)((char*)v8 + 2);
				--v7;
			} while (v7);
		}
		if (v8)
			*(_WORD*)v8 = 0;
		sub_1407E0010(v6, (int)v4 + 1, v4, a2, (__int64)va);
		a1[1] = v6;
		a1[2] = v8;
		a1[3] = v5;
		return a1;
	}
}

