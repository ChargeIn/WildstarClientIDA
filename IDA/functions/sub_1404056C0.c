#include "../winhttp.h"

//----- (00000001404056C0) ----------------------------------------------------
void sub_1404056C0()
{
	_QWORD* v0; // rdi
	_QWORD* v1; // rcx
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rbp
	unsigned __int64 i; // rbx
	__int64 v6; // rax
	__int64 v7; // rsi

	v0 = (_QWORD*)qword_140C658A0;
	sub_14040AC60(qword_140C658A0);
	v1 = (_QWORD*)v0[26];
	v2 = qword_140C65C30;
	if ((_QWORD*)qword_140C65C30 == v1)
		v2 = 0i64;
	v1[2] = 0i64;
	v1[3] = 0i64;
	v1[4] = 0i64;
	v1[5] = 0i64;
	qword_140C65C30 = v2;
	if (v0[11])
	{
		sub_14040AC60((__int64)v0);
		v3 = v0[11];
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			v0[11] = 0i64;
		}
	}
	v4 = v0[32];
	for (i = 0i64; i < v4; ++i)
	{
		v6 = v0[31];
		v7 = *(_QWORD*)(v6 + 8 * i);
		if (v7)
		{
			sub_140401490(*(_QWORD*)(v6 + 8 * i));
			sub_14018B900(v7, 0);
		}
	}
	v0[32] = 0i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C30: using guessed type __int64 qword_140C65C30;

