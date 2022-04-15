#include "../winhttp.h"

//----- (0000000140481E00) ----------------------------------------------------
void __fastcall sub_140481E00(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4)
{
	__int64 v5; // rbx
	__int64 v6; // rsi
	int* v7; // rax
	int* v8; // rdi
	_QWORD* v9; // [rsp+50h] [rbp+18h]

	if (a3 != a4)
	{
		v9 = a3;
		do
		{
			v5 = *a2;
			v6 = (__int64)(a3 + 2);
			v7 = sub_14018B280(128i64, 0);
			v8 = v7;
			if (v7 != (int*)-16i64)
				sub_140474E10((__int64)(v7 + 4), v6);
			*(_QWORD*)v8 = v5;
			*((_QWORD*)v8 + 1) = *(_QWORD*)(v5 + 8);
			**(_QWORD**)(v5 + 8) = v8;
			*(_QWORD*)(v5 + 8) = v8;
			a3 = (_QWORD*)*v9;
			v9 = a3;
		} while (a3 != a4);
	}
}

