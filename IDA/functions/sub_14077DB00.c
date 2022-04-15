#include "../winhttp.h"

//----- (000000014077DB00) ----------------------------------------------------
__int64 __fastcall sub_14077DB00(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	int* v9; // rax
	int* v10; // rbx
	unsigned __int64 v11; // rbp
	int** v12; // rsi
	int* v13; // rax
	int* v14; // rcx
	__int64 v15; // rcx
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	v17 = a2;
	v7 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v17);
	v8 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v7 % *(_QWORD*)(a1 + 8)));
	if (v8)
	{
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 32))(&v17, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_5;
		}
		if (v8 != (_QWORD*)-24i64)
			return 2147500037i64;
	}
LABEL_5:
	v9 = sub_14018B280(16i64, 0);
	v10 = v9;
	if (!v9)
		return 2147500037i64;
	*(_QWORD*)v9 = v17;
	v9[2] = a3;
	v9[3] = a4;
	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v11 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v17);
	v12 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v11 % *(_QWORD*)(a1 + 8)));
	v13 = sub_14018B280(32i64, 0);
	if (v13)
	{
		v14 = *v12;
		*(_QWORD*)v13 = v11;
		*((_QWORD*)v13 + 1) = v14;
		v15 = v17;
		*((_QWORD*)v13 + 3) = v10;
		*((_QWORD*)v13 + 2) = v15;
	}
	*v12 = v13;
	++* (_QWORD*)a1;
	return 0i64;
}

