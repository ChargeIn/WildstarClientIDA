#include "../winhttp.h"

//----- (0000000140391870) ----------------------------------------------------
__int64 __fastcall sub_140391870(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rsi
	int* v5; // r14
	__int64 result; // rax

	v2 = qword_140DC2140;
	v4 = qword_140DC2140 + 1;
	v5 = sub_14018DB00(qword_140DC2138, qword_140DC2140 + 1, 8i64);
	*(_QWORD*)&v5[2 * v2] = *a2;
	if ((int*)qword_140DC2138 != v5)
	{
		sub_1407DB590(v5, (int*)qword_140DC2138, 8 * qword_140DC2140);
		if (qword_140DC2138)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140DC2138 - 16) + 8i64))(qword_140DC2138 - 16);
		qword_140DC2138 = (__int64)v5;
	}
	result = v2;
	qword_140DC2140 = v4;
	return result;
}
// 140DC2138: using guessed type __int64 qword_140DC2138;
// 140DC2140: using guessed type __int64 qword_140DC2140;

