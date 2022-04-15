#include "../winhttp.h"

//----- (00000001403FDAE0) ----------------------------------------------------
int* __fastcall sub_1403FDAE0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rdi
	int* v9; // rbp
	int* v10; // rbx
	__int64 v11; // rdx

	v6 = sub_1403FE330(a1, a2 + 32);
	*(_BYTE*)v6 = *(_BYTE*)a2;
	*((_QWORD*)v6 + 1) = a3;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 3) = 0i64;
	v7 = *(_QWORD*)(a2 + 24);
	if (v7)
		*((_QWORD*)v6 + 3) = sub_1403FDAE0(a1, v7, v6);
	v8 = *(_QWORD*)(a2 + 16);
	v9 = v6;
	if (!v8)
		return v6;
	do
	{
		v10 = sub_14018B280(176i64, 0);
		if (v10 != (int*)-32i64)
		{
			*((_QWORD*)v10 + 5) = 0i64;
			*((_QWORD*)v10 + 6) = 0i64;
			*((_QWORD*)v10 + 7) = 0i64;
			sub_14001C1B0((_QWORD*)v10 + 4, *(int**)(v8 + 40), *(_QWORD*)(v8 + 48));
			sub_140474E10((__int64)(v10 + 16), v8 + 64);
		}
		*(_BYTE*)v10 = *(_BYTE*)v8;
		*((_QWORD*)v10 + 2) = 0i64;
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v9 + 2) = v10;
		*((_QWORD*)v10 + 1) = v9;
		v11 = *(_QWORD*)(v8 + 24);
		if (v11)
			*((_QWORD*)v10 + 3) = sub_1403FDAE0(a1, v11, v10);
		v8 = *(_QWORD*)(v8 + 16);
		v9 = v10;
	} while (v8);
	return v6;
}

