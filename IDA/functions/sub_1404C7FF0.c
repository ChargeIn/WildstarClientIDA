#include "../winhttp.h"

//----- (00000001404C7FF0) ----------------------------------------------------
void __fastcall sub_1404C7FF0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned __int64 v6; // rbp
	int** v7; // rsi
	int* v8; // rax
	int* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // [rsp+38h] [rbp+10h] BYREF

	if (a2 && a3)
	{
		v4 = a1 + 160;
		v5 = *(_QWORD*)(a1 + 168);
		v11 = a2;
		if (*(_QWORD*)(a1 + 160) == v5)
			sub_1400290D0(a1 + 160);
		v6 = (*(__int64(__fastcall**)(__int64*))(v4 + 24))(&v11);
		v7 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v6 % *(_QWORD*)(v4 + 8)));
		v8 = sub_14018B280(32i64, 0);
		if (v8)
		{
			v9 = *v7;
			*(_QWORD*)v8 = v6;
			*((_QWORD*)v8 + 1) = v9;
			v10 = v11;
			*((_QWORD*)v8 + 3) = a3;
			*((_QWORD*)v8 + 2) = v10;
		}
		*v7 = v8;
		++* (_QWORD*)v4;
	}
}

