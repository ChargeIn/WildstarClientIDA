//----- (00000001400F8CF0) ----------------------------------------------------
void __fastcall sub_1400F8CF0(__int64* a1, char* a2, __int64 a3)
{
	_QWORD* v3; // rax
	__int64 v7; // rbx
	int* v8; // r15
	int* v9; // rbp
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	int* v12; // r15
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rsi
	__int64 j; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // r12
	int* v20; // rbp
	_QWORD* v21; // rax
	_QWORD* v22; // rbx
	_QWORD* v23; // rax
	__int64 v24; // rsi
	__int64 v25; // rbx
	_QWORD* i; // r14
	__int64 v27; // rcx
	__int64 v28; // rcx
	char v29; // [rsp+20h] [rbp-38h] BYREF

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v17 = ((__int64)v3 - a1[1]) >> 5;
		v18 = 2 * v17;
		if (!v17)
			v18 = 1i64;
		v19 = sub_14018A3E0(32 * v18) & 0xFFFFFFFFFFFFFFE0ui64;
		v20 = sub_14018B280(v19, 0);
		v21 = sub_1400F9240(a1[1], (__int64)a2, v20);
		v22 = v21;
		if (v21)
		{
			v21[1] = 0i64;
			v21[2] = 0i64;
			v21[3] = 0i64;
			sub_14001C1B0(v21, *(int**)(a3 + 8), *(_QWORD*)(a3 + 16));
		}
		v23 = sub_1400F9240((__int64)a2, a1[2], v22 + 4);
		v24 = a1[2];
		v25 = a1[1];
		for (i = v23; v25 != v24; v25 += 32i64)
		{
			v27 = *(_QWORD*)(v25 + 8);
			if (v27)
				sub_14018B900(v27, 0);
		}
		v28 = a1[1];
		if (v28)
			sub_14018B900(v28, 0);
		a1[1] = (__int64)v20;
		a1[3] = (__int64)v20 + v19;
		a1[2] = (__int64)i;
	}
	else
	{
		if (v3)
		{
			v3[1] = 0i64;
			v3[2] = 0i64;
			v3[3] = 0i64;
			sub_14001C1B0(v3, (int*)*(v3 - 3), *(v3 - 2));
		}
		a1[2] += 32i64;
		v7 = *(_QWORD*)(a3 + 16);
		v8 = *(int**)(a3 + 8);
		v9 = 0i64;
		v10 = (v7 - (__int64)v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, v8, v11);
		v12 = (int*)((char*)v9 + v11);
		if ((int*)((char*)v9 + v11))
			*(_WORD*)v12 = 0;
		v13 = a1[2];
		v14 = v13 - 64;
		v15 = v13 - 32;
		for (j = (v13 - 64 - (__int64)a2) >> 5; j > 0; --j)
		{
			v14 -= 32i64;
			v15 -= 32i64;
			if (v14 != v15)
				sub_14001C480(v15, *(int**)(v14 + 8), *(int**)(v14 + 16));
		}
		if (&v29 != a2)
			sub_14001C480((__int64)a2, v9, v12);
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
}

