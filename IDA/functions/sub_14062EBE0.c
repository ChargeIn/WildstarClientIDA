//----- (000000014062EBE0) ----------------------------------------------------
void __fastcall sub_14062EBE0(__int64 a1, int a2)
{
	int v3; // edi
	unsigned int v4; // esi
	__int64 v5; // rax
	float v6; // xmm7_4
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // rbx
	char* v10; // rbp
	double v11; // xmm6_8
	unsigned int v12; // ecx
	unsigned __int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rax

	sub_14018B900(qword_140C65BE0, 0);
	sub_14018B900(qword_140C65BD8, 0);
	sub_14018B900(qword_140C65BF0, 0);
	sub_14018B900(qword_140C65BE8, 0);
	v3 = 0;
	qword_140C65BE0 = 0i64;
	v4 = 2 * ((unsigned int)(a2 + 1) >> 1);
	qword_140C65BD8 = 0i64;
	qword_140C65BF0 = 0i64;
	qword_140C65BE8 = 0i64;
	dword_140C65BC8 = v4;
	if (a2)
	{
		v5 = 4i64 * v4;
		if (!is_mul_ok(v4, 4ui64))
			v5 = -1i64;
		v6 = 6.2831855 / (float)(int)v4;
		qword_140C65BE0 = (__int64)sub_14018B280(v5, 0);
		v7 = 4i64 * (unsigned int)dword_140C65BC8;
		if (!is_mul_ok((unsigned int)dword_140C65BC8, 4ui64))
			v7 = -1i64;
		v8 = sub_14018B280(v7, 0);
		v4 = dword_140C65BC8;
		qword_140C65BD8 = (__int64)v8;
		if (dword_140C65BC8)
		{
			v9 = qword_140C65BE0;
			v10 = (char*)v8 - qword_140C65BE0;
			do
			{
				HIDWORD(v11) = 0;
				*(float*)&v11 = (float)v3 * v6;
				*(float*)&v10[v9] = sub_1408FE3D0(v11);
				++v3;
				v9 += 4i64;
				*(float*)(v9 - 4) = sub_1408FC950(v11);
			} while (v3 < v4);
		}
	}
	v12 = qword_140C65BCC;
	if ((unsigned int)qword_140C65BCC < dword_140C65C10)
		v12 = dword_140C65C10;
	if (v12 < v4)
		v12 = v4;
	if (v12)
	{
		v13 = v12;
		v14 = 16i64 * v12;
		if (!is_mul_ok(v12, 0x10ui64))
			v14 = -1i64;
		qword_140C65BF0 = (__int64)sub_14018B280(v14, 0);
		v15 = 16 * v13;
		if (!is_mul_ok(v13, 0x10ui64))
			v15 = -1i64;
		qword_140C65BE8 = (__int64)sub_14018B280(v15, 0);
	}
}
// 140C65BC8: using guessed type int dword_140C65BC8;
// 140C65BCC: using guessed type __int64 qword_140C65BCC;
// 140C65BD8: using guessed type __int64 qword_140C65BD8;
// 140C65BE0: using guessed type __int64 qword_140C65BE0;
// 140C65BE8: using guessed type __int64 qword_140C65BE8;
// 140C65BF0: using guessed type __int64 qword_140C65BF0;
// 140C65C10: using guessed type int dword_140C65C10;

