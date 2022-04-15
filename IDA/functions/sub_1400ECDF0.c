#include "../winhttp.h"

//----- (00000001400ECDF0) ----------------------------------------------------
__int64 __fastcall sub_1400ECDF0(__int64 a1, int* a2)
{
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	__int64 v9; // rbp
	__int64 v10; // rdi
	_QWORD* v11; // rbx
	int v12; // eax
	__int64 v13; // rbx
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	if (!a2)
		return 0i64;
	v5 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v7 + 1), 0);
	v8 = 2 * v7;
	sub_1407DB590(v6, a2, v8);
	if ((int*)((char*)v6 + v8))
		*(_WORD*)((char*)v6 + v8) = 0;
	v9 = *(_QWORD*)(a1 + 3600);
	v10 = v9;
	v11 = *(_QWORD**)(v9 + 8);
	while (v11)
	{
		if ((int)sub_14018E2C0(v11[5], (unsigned __int16*)v6) < 0)
		{
			v11 = (_QWORD*)v11[3];
		}
		else
		{
			v10 = (__int64)v11;
			v11 = (_QWORD*)v11[2];
		}
	}
	if (v10 == v9 || (v12 = sub_14018E2C0((__int64)v6, *(unsigned __int16**)(v10 + 40)), v14 = v10, v12 < 0))
		v14 = v9;
	v13 = v14;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if (v13 == *(_QWORD*)(a1 + 3600))
		return 2147942527i64;
	v14 = v13;
	sub_1400EEAF0(a1 + 3592, &v14);
	return 0i64;
}

