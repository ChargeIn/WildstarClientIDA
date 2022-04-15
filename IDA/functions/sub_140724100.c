#include "../winhttp.h"

//----- (0000000140724100) ----------------------------------------------------
void sub_140724100()
{
	_QWORD* v0; // rdi
	_QWORD** v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rcx
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD** v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	unsigned __int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rbx

	v0 = (_QWORD*)qword_140C665D8;
	v1 = *(_QWORD***)(qword_140C665D8 + 56);
	v2 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v3 = (__int64)v2;
			v2 = (_QWORD*)*v2;
			sub_14018B900(v3, 0);
		} while (v2 != (_QWORD*)v0[7]);
	}
	*(_QWORD*)v0[7] = v0[7];
	*(_QWORD*)(v0[7] + 8i64) = v0[7];
	v4 = (_QWORD**)v0[9];
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)v0[9]);
	}
	*(_QWORD*)v0[9] = v0[9];
	*(_QWORD*)(v0[9] + 8i64) = v0[9];
	v7 = (_QWORD**)v0[11];
	v8 = *v7;
	if (*v7 != v7)
	{
		do
		{
			v9 = (__int64)v8;
			v8 = (_QWORD*)*v8;
			sub_14018B900(v9, 0);
		} while (v8 != (_QWORD*)v0[11]);
	}
	v10 = 0i64;
	*(_QWORD*)v0[11] = v0[11];
	for (*(_QWORD*)(v0[11] + 8i64) = v0[11]; v10 < v0[2]; ++v10)
	{
		v11 = *(_QWORD*)(v0[3] + 8 * v10);
		if (v11)
		{
			do
			{
				v12 = *(_QWORD*)(v11 + 8);
				sub_140787D10(*(_QWORD**)(v11 + 24));
				v11 = v12;
			} while (v12);
		}
	}
}
// 140C665D8: using guessed type __int64 qword_140C665D8;

