#include "../winhttp.h"

//----- (00000001401549C0) ----------------------------------------------------
void __fastcall sub_1401549C0(__int64 a1, __m128i* a2)
{
	int* v4; // rax
	__int64* v5; // rbp
	__int64 v6; // rsi
	char v7; // al
	__int64 v8; // rbx
	__int64* v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rdi
	int* v12; // rax
	__int64 v13; // [rsp+50h] [rbp+18h] BYREF

	v4 = sub_14018B280(16i64, 0);
	v5 = 0i64;
	v6 = (__int64)v4;
	if (v4)
		*(_WORD*)v4 = 0;
	v13 = 0i64;
	v7 = sub_1400E27B0(qword_140C63650, a2, &v13);
	v8 = v13;
	if (v7)
	{
		v9 = (__int64*)sub_14018B280(24i64, 0);
		if (v9)
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			v5 = sub_1401538F0(v9, a1, v10);
		}
		v11 = *(_QWORD*)(a1 + 80);
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			*((_QWORD*)v12 + 2) = v5;
		*(_QWORD*)v12 = v11;
		*((_QWORD*)v12 + 1) = *(_QWORD*)(v11 + 8);
		**(_QWORD**)(v11 + 8) = v12;
		*(_QWORD*)(v11 + 8) = v12;
	}
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	if (v6)
		sub_14018B900(v6, 0);
}
// 140C63650: using guessed type __int64 qword_140C63650;

