#include "../winhttp.h"

//----- (0000000140500770) ----------------------------------------------------
int* __fastcall sub_140500770(__int64 a1, char* a2, __int64 a3)
{
	int* v6; // rax
	int* v7; // rbp
	char v8; // cl
	__int64 v9; // rdx
	__int64 v10; // rdi
	int* v11; // rsi
	int* v12; // rbx
	__int64 v13; // rdx
	int* v16; // [rsp+48h] [rbp+10h]

	v6 = sub_14018B280(72i64, 0);
	v7 = v6;
	v16 = v6;
	if (v6 != (int*)-32i64)
	{
		v6[8] = *((_DWORD*)a2 + 8);
		sub_140030C70((__int64)(v6 + 10), (__int64)(a2 + 40));
	}
	v8 = *a2;
	*((_QWORD*)v7 + 1) = a3;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 3) = 0i64;
	*(_BYTE*)v7 = v8;
	v9 = *((_QWORD*)a2 + 3);
	if (v9)
		*((_QWORD*)v7 + 3) = sub_140500770(a1, v9, v7);
	v10 = *((_QWORD*)a2 + 2);
	v11 = v7;
	if (!v10)
		return v7;
	do
	{
		v12 = sub_14018B280(72i64, 0);
		if (v12 != (int*)-32i64)
		{
			v12[8] = *(_DWORD*)(v10 + 32);
			sub_140030C70((__int64)(v12 + 10), v10 + 40);
		}
		*(_BYTE*)v12 = *(_BYTE*)v10;
		*((_QWORD*)v12 + 2) = 0i64;
		*((_QWORD*)v12 + 3) = 0i64;
		*((_QWORD*)v11 + 2) = v12;
		*((_QWORD*)v12 + 1) = v11;
		v13 = *(_QWORD*)(v10 + 24);
		if (v13)
			*((_QWORD*)v12 + 3) = sub_140500770(a1, v13, v12);
		v10 = *(_QWORD*)(v10 + 16);
		v11 = v12;
	} while (v10);
	return v16;
}

