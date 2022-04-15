#include "../winhttp.h"

//----- (0000000140374E90) ----------------------------------------------------
__int64 __fastcall sub_140374E90(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rbx
	unsigned __int64 v5; // rbp
	int** v6; // r14
	int* v7; // rax
	int* v8; // rcx

	*(_DWORD*)(a1 + 24) = a2;
	result = sub_140374F40(a1);
	if ((int)result >= 0)
	{
		v4 = *(_QWORD*)(a1 + 16) + 2080i64;
		if (*(_QWORD*)v4 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 2088i64))
			sub_1400290D0(v4);
		v5 = (*(__int64(__fastcall**)(__int64))(v4 + 24))(a1 + 24);
		v6 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8)));
		v7 = sub_14018B280(32i64, 0);
		if (v7)
		{
			v8 = *v6;
			*(_QWORD*)v7 = v5;
			*((_QWORD*)v7 + 1) = v8;
			LODWORD(v8) = *(_DWORD*)(a1 + 24);
			*((_QWORD*)v7 + 3) = a1;
			v7[4] = (int)v8;
		}
		*v6 = v7;
		++* (_QWORD*)v4;
		return 0i64;
	}
	return result;
}

