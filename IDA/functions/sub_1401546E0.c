#include "../winhttp.h"

//----- (00000001401546E0) ----------------------------------------------------
void __fastcall sub_1401546E0(__int64 a1, int* a2, int* a3, _DWORD* a4, __int64* a5)
{
	int* v9; // rax
	__int64 v10; // rax
	__int64* v11; // r15
	void(__fastcall * **v12)(_QWORD); // rcx
	__int64 v13; // rax
	int* v14; // rsi
	__int64 v15; // r14
	_WORD* v16; // rax
	__int64 v17; // rbx
	char v18[8]; // [rsp+30h] [rbp-48h] BYREF
	int* v19; // [rsp+38h] [rbp-40h]
	_WORD* v20; // [rsp+40h] [rbp-38h]
	__int64 v21; // [rsp+48h] [rbp-30h]
	void(__fastcall * **v22)(_QWORD); // [rsp+80h] [rbp+8h] BYREF

	v22 = 0i64;
	if (a3)
		(*(void(__fastcall**)(__int64, int*, void(__fastcall****)(_QWORD)))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			a3,
			&v22);
	v9 = sub_14018B280(144i64, 0);
	if (v9)
		v10 = sub_140152AA0((__int64)v9, a2, a3, a1, v22, a4);
	else
		v10 = 0i64;
	v11 = a5;
	v12 = v22;
	*a5 = v10;
	if (v12)
	{
		(*v12)[1](v12);
		v22 = 0i64;
	}
	v13 = 0i64;
	v14 = 0i64;
	v19 = 0i64;
	v21 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v13;
		while (*((_WORD*)a2 + v13));
	}
	v15 = (2 * v13) >> 1;
	if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v14 = sub_14018B280(2 * (v15 + 1), 0);
		v19 = v14;
		v21 = (__int64)v14 + 2 * v15 + 2;
	}
	sub_1407DB590(v14, a2, 2 * v15);
	v16 = (_WORD*)v14 + v15;
	v20 = v16;
	if (v16)
		*v16 = 0;
	v17 = *v11;
	*(_QWORD*)sub_1400EDA60(a1 + 8, (__int64)v18) = v17;
	if (v14)
		sub_14018B900((__int64)v14, 0);
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 1401546E0: using guessed type char var_48[8];

