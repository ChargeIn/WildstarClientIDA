#include "../winhttp.h"

//----- (000000014019D2A0) ----------------------------------------------------
__int64 __fastcall sub_14019D2A0(__int64 a1, int** a2)
{
	__int64 v2; // rsi
	int* v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v2 = qword_140C63750;
	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(32i64, 0);
	if (v5)
	{
		*(_QWORD*)v5 = off_140B5E6C8;
		*((_QWORD*)v5 + 2) = 0i64;
		*((_QWORD*)v5 + 1) = 0i64;
		v5[6] = 1;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = *(_QWORD**)(v2 + 16);
	v7 = (_QWORD*)v6[2];
	if (v7 != v6)
	{
		do
		{
			sub_140033260((__int64*)v5 + 1, v7 + 5);
			v8 = v7[3];
			if (v8)
			{
				v7 = (_QWORD*)v7[3];
				for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
					v7 = i;
			}
			else
			{
				for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = (_QWORD*)j;
				if (v7[3] != j)
					v7 = (_QWORD*)j;
			}
		} while (v7 != *(_QWORD**)(v2 + 16));
	}
	*a2 = v5;
	return 0i64;
}
// 140B5E6C8: using guessed type __int64 (__fastcall *off_140B5E6C8[5])();
// 140C63750: using guessed type __int64 qword_140C63750;

