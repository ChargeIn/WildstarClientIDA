#include "../winhttp.h"

//----- (00000001404CBAF0) ----------------------------------------------------
__int64 sub_1404CBAF0()
{
	__int64 v1; // rcx
	int* v2; // rdi
	int* v3; // rax

	if (qword_140C65A00)
		return 0i64;
	v2 = sub_14018B280(144i64, 0);
	if (v2)
	{
		v3 = sub_14018B280(48i64, 0);
		qword_140C65A00 = (__int64)v2;
		*((_QWORD*)v2 + 1) = v3;
		*((_QWORD*)v2 + 2) = 0i64;
		*(_BYTE*)v3 = 0;
		v1 = *((_QWORD*)v2 + 1);
		*(_QWORD*)(v1 + 8) = 0i64;
		*(_QWORD*)(*((_QWORD*)v2 + 1) + 16i64) = *((_QWORD*)v2 + 1);
		*(_QWORD*)(*((_QWORD*)v2 + 1) + 24i64) = *((_QWORD*)v2 + 1);
		*((_QWORD*)v2 + 5) = 0i64;
		*((_QWORD*)v2 + 6) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		*((_QWORD*)v2 + 10) = 0i64;
		*((_QWORD*)v2 + 11) = 0i64;
		*((_QWORD*)v2 + 13) = 0i64;
		*((_QWORD*)v2 + 14) = 0i64;
		v2[16] = 1414420037;
		v2[33] = 0;
	}
	else
	{
		qword_140C65A00 = 0i64;
	}
	if ((int)sub_1404CBC60(v1) >= 0)
		return 0i64;
	sub_1404CBED0();
	if (qword_140C65A00)
		sub_1404CBBE0(qword_140C65A00);
	qword_140C65A00 = 0i64;
	return 2147500037i64;
}
// 1404CBB8C: variable 'v1' is possibly undefined
// 140C65A00: using guessed type __int64 qword_140C65A00;

