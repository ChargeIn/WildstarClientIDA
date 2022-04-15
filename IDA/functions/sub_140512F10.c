#include "../winhttp.h"

//----- (0000000140512F10) ----------------------------------------------------
__int64 __fastcall sub_140512F10(__int64 a1)
{
	int* v2; // rax
	int* v3; // rdi
	int* v4; // rax
	__int64 v5; // rbx
	int* v6; // rax

	v2 = sub_14018B280(80i64, 0);
	v3 = v2;
	if (v2)
	{
		*((_QWORD*)v2 + 5) = 0i64;
		*((_QWORD*)v2 + 6) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*((_QWORD*)v3 + 5) = v4;
		*((_QWORD*)v3 + 6) = v4;
		*((_QWORD*)v3 + 7) = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
	}
	else
	{
		v3 = 0i64;
	}
	*v3 = 6;
	sub_1400F0A10(a1, 1, (__int64)"x", (float*)v3 + 4);
	sub_1400F0A10(a1, 1, (__int64)"y", (float*)v3 + 5);
	sub_1400F0A10(a1, 1, (__int64)"z", (float*)v3 + 6);
	v3[17] = 0;
	v5 = qword_140C7D5E8;
	v6 = sub_14018B280(24i64, 0);
	if (v6 != (int*)-16i64)
		*((_QWORD*)v6 + 2) = v3;
	*(_QWORD*)v6 = v5;
	*((_QWORD*)v6 + 1) = *(_QWORD*)(v5 + 8);
	**(_QWORD**)(v5 + 8) = v6;
	*(_QWORD*)(v5 + 8) = v6;
	return 0i64;
}
// 140C7D5E8: using guessed type __int64 qword_140C7D5E8;

