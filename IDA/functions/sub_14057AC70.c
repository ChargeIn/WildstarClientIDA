#include "../winhttp.h"

//----- (000000014057AC70) ----------------------------------------------------
void __fastcall sub_14057AC70(_QWORD* a1)
{
	_QWORD* v1; // rdx
	_QWORD* v2; // rdx
	__int64 v3; // r8

	v1 = (_QWORD*)a1[19];
	a1[8] = 0i64;
	if (v1)
		*v1 = a1[20];
	v2 = a1 + 20;
	v3 = a1[20];
	if (v3)
		*(_QWORD*)(v3 + 152) = a1[19];
	*v2 = 0i64;
	a1[19] = &qword_140C7DDE0;
	*v2 = qword_140C7DDE0;
	qword_140C7DDE0 = (__int64)a1;
	if (*v2)
		*(_QWORD*)(*v2 + 152i64) = v2;
	sub_140195D70((__int64)(a1 + 9));
}
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;

