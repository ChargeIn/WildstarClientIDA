#include "../winhttp.h"

//----- (000000014062E940) ----------------------------------------------------
void __fastcall sub_14062E940(__int64 a1, int a2)
{
	int v3; // edi
	unsigned __int64 v4; // rcx
	unsigned int v5; // ebp
	__int64 v6; // rax
	float v7; // xmm7_4
	__int64 v8; // rax
	int* v9; // rax
	unsigned int v10; // r14d
	int v11; // esi
	int* v12; // rbx
	__int64 v13; // rbp
	unsigned int v14; // xmm6_4
	__int64 v15; // rax
	float v16; // xmm7_4
	__int64 v17; // rax
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rsi
	double v21; // xmm6_8
	unsigned __int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rax

	sub_14018B900(qword_140C65BF8, 0);
	sub_14018B900(qword_140C65C00, 0);
	sub_14018B900(*(__int64*)((char*)&qword_140C65BCC + 4), 0);
	sub_14018B900(qword_140C65C08, 0);
	sub_14018B900(qword_140C65BF0, 0);
	sub_14018B900(qword_140C65BE8, 0);
	v3 = 0;
	qword_140C65BF8 = 0i64;
	v4 = 2 * ((unsigned int)(a2 + 1) >> 1);
	qword_140C65C00 = 0i64;
	*(__int64*)((char*)&qword_140C65BCC + 4) = 0i64;
	qword_140C65C08 = 0i64;
	qword_140C65BF0 = 0i64;
	qword_140C65BE8 = 0i64;
	qword_140C65BCC = v4;
	v5 = 2 * ((unsigned int)(a2 + 1) >> 1);
	dword_140C65C10 = v5;
	if (a2)
	{
		v6 = 8i64 * ((unsigned int)(a2 + 1) >> 1);
		if (!is_mul_ok(v4, 4ui64))
			v6 = -1i64;
		v7 = 6.2831855 / (float)(int)v4;
		qword_140C65BF8 = (__int64)sub_14018B280(v6, 0);
		v8 = 4i64 * (unsigned int)qword_140C65BCC;
		if (!is_mul_ok((unsigned int)qword_140C65BCC, 4ui64))
			v8 = -1i64;
		v9 = sub_14018B280(v8, 0);
		v10 = qword_140C65BCC;
		v11 = 0;
		v12 = v9;
		qword_140C65C00 = (__int64)v9;
		if ((_DWORD)qword_140C65BCC)
		{
			v13 = qword_140C65BF8 - (_QWORD)v9;
			do
			{
				*(float*)&v14 = (float)v11 * v7;
				*(float*)((char*)v12 + v13) = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v14));
				++v11;
				*((float*)++v12 - 1) = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v14));
			} while (v11 < v10);
		}
		v15 = 4i64 * (unsigned int)dword_140C65C10;
		if (!is_mul_ok((unsigned int)dword_140C65C10, 4ui64))
			v15 = -1i64;
		v16 = 6.2831855 / (float)dword_140C65C10;
		*(__int64*)((char*)&qword_140C65BCC + 4) = (__int64)sub_14018B280(v15, 0);
		v17 = 4i64 * (unsigned int)dword_140C65C10;
		if (!is_mul_ok((unsigned int)dword_140C65C10, 4ui64))
			v17 = -1i64;
		v18 = sub_14018B280(v17, 0);
		v5 = dword_140C65C10;
		v19 = v18;
		qword_140C65C08 = (__int64)v18;
		if (dword_140C65C10)
		{
			v20 = *(__int64*)((char*)&qword_140C65BCC + 4) - (_QWORD)v18;
			do
			{
				HIDWORD(v21) = 0;
				*(float*)&v21 = (float)v3 * v16;
				*(float*)((char*)v19 + v20) = sub_1408FE3D0(v21);
				++v3;
				*((float*)++v19 - 1) = sub_1408FC950(v21);
			} while (v3 < v5);
		}
		LODWORD(v4) = qword_140C65BCC;
	}
	if ((unsigned int)v4 < v5)
		LODWORD(v4) = v5;
	if ((unsigned int)v4 < dword_140C65BC8)
		LODWORD(v4) = dword_140C65BC8;
	if ((_DWORD)v4)
	{
		v22 = (unsigned int)v4;
		v23 = 16i64 * (unsigned int)v4;
		if (!is_mul_ok((unsigned int)v4, 0x10ui64))
			v23 = -1i64;
		qword_140C65BF0 = (__int64)sub_14018B280(v23, 0);
		v24 = 16 * v22;
		if (!is_mul_ok(v22, 0x10ui64))
			v24 = -1i64;
		qword_140C65BE8 = (__int64)sub_14018B280(v24, 0);
	}
}
// 140C65BC8: using guessed type int dword_140C65BC8;
// 140C65BCC: using guessed type __int64 qword_140C65BCC;
// 140C65BE8: using guessed type __int64 qword_140C65BE8;
// 140C65BF0: using guessed type __int64 qword_140C65BF0;
// 140C65BF8: using guessed type __int64 qword_140C65BF8;
// 140C65C00: using guessed type __int64 qword_140C65C00;
// 140C65C08: using guessed type __int64 qword_140C65C08;
// 140C65C10: using guessed type int dword_140C65C10;

