#include "../winhttp.h"

//----- (00000001401B6BF0) ----------------------------------------------------
__int64 __fastcall sub_1401B6BF0(__int64 a1, _QWORD* a2, int** a3)
{
	__int64 v3; // rbp
	int* v7; // rax
	int* v8; // rbx
	int v9; // esi

	v3 = *(_QWORD*)&qword_140C63788;
	if (!*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4888i64))
		return 2147500037i64;
	if (!a3)
		return 2147942487i64;
	if (!*a2 || !*(_WORD*)*a2)
		return 2147500037i64;
	v7 = sub_14018B280(96i64, 0);
	v8 = v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B5F928;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
		*((_QWORD*)v7 + 9) = 0i64;
		*((_QWORD*)v7 + 10) = 0i64;
		v7[22] = 1;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_1401CE8E0((__int64)v8, *(_QWORD*)(v3 + 4888), (__int64)a2);
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	else
	{
		if (v8)
		{
			sub_1401CE7A0(v8);
			sub_14018B900((__int64)v8, 0);
		}
		return (unsigned int)v9;
	}
}
// 140B5F928: using guessed type __int64 (__fastcall *off_140B5F928[13])();

