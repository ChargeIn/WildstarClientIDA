//----- (000000014079A880) ----------------------------------------------------
__int64 __fastcall sub_14079A880(unsigned int* a1, unsigned int a2, int* a3, int* a4)
{
	unsigned int v4; // eax
	unsigned __int64 v7; // rbp
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // r14
	__int64 v12; // rax
	int* v13; // rsi
	__int64 v14; // rax
	int* v15; // rbx
	__int64 result; // rax

	v4 = a1[1];
	v7 = a2;
	if (*a1 == v4)
	{
		if (v4)
			v9 = 2 * v4;
		else
			v9 = 8i64;
		a1[1] = v9;
		*((_QWORD*)a1 + 2) = sub_14018C320(*((_QWORD*)a1 + 2), 72 * v9, 8u);
	}
	v10 = *a1;
	v11 = *((_QWORD*)a1 + 2) + 72 * v10;
	*a1 = v10 + 1;
	*(_DWORD*)v11 = 25;
	v12 = 4 * v7;
	if (!is_mul_ok(v7, 4ui64))
		v12 = -1i64;
	v13 = sub_14018B280(v12, 0);
	sub_1407DB590(v13, a3, 4 * v7);
	v14 = 4 * v7;
	if (!is_mul_ok(v7, 4ui64))
		v14 = -1i64;
	v15 = sub_14018B280(v14, 0);
	sub_1407DB590(v15, a4, 4 * v7);
	result = 255i64;
	*(_QWORD*)(v11 + 16) = v13;
	*(_QWORD*)(v11 + 24) = v15;
	if ((unsigned int)v7 > 0xFF)
		LODWORD(v7) = 255;
	*(_DWORD*)(v11 + 32) = 0;
	*(_DWORD*)(v11 + 8) = v7;
	return result;
}

