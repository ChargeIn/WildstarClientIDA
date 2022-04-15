#include "../winhttp.h"

//----- (00000001405CEF50) ----------------------------------------------------
void __fastcall sub_1405CEF50(__int64 a1, unsigned int* a2, double a3, double a4)
{
	int* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rdx
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned __int64 v12; // r15
	int** v13; // r14
	int* v14; // rax
	int* v15; // rcx

	v6 = sub_14018B280(48i64, 0);
	v7 = (__int64)v6;
	if (v6)
	{
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*(_QWORD*)v6 = 0i64;
		*((_QWORD*)v6 + 1) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	if ((int)sub_1405CAF20(v7, a1, a2, a4) >= 0)
	{
		v9 = (__int64*)(a1 + 560);
		if (!*(_QWORD*)(v7 + 16))
		{
			*(_QWORD*)(v7 + 16) = v9;
			*(_QWORD*)(v7 + 24) = *v9;
			*v9 = v7;
			v10 = *(_QWORD*)(v7 + 24);
			if (v10)
				*(_QWORD*)(v10 + 16) = v7 + 24;
		}
		v11 = a1 + 568;
		if (*(_QWORD*)v11 == *(_QWORD*)(v11 + 8))
			sub_1400290D0(v11);
		v12 = (*(__int64(__fastcall**)(unsigned int*))(v11 + 24))(a2 + 6);
		v13 = (int**)(*(_QWORD*)(v11 + 16) + 8 * (v12 % *(_QWORD*)(v11 + 8)));
		v14 = sub_14018B280(32i64, 0);
		if (v14)
		{
			v15 = *v13;
			*(_QWORD*)v14 = v12;
			*((_QWORD*)v14 + 1) = v15;
			LODWORD(v15) = a2[6];
			*((_QWORD*)v14 + 3) = v7;
			v14[4] = (int)v15;
		}
		else
		{
			v14 = 0i64;
		}
		*v13 = v14;
		++* (_QWORD*)v11;
	}
	else if (v7)
	{
		sub_1405CAE70(v7, v8, a3, a4);
		sub_14018B900(v7, 0);
	}
}
// 1405CEFB0: variable 'v8' is possibly undefined

