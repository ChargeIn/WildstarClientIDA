//----- (00000001400D2E90) ----------------------------------------------------
__int64 __fastcall sub_1400D2E90(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rbp
	int* v6; // rax
	int v7; // r8d
	__int64 v8; // rdx
	__int64 v9; // rsi
	int* v10; // rax
	int* v11; // rdi
	__int64 v12; // rcx
	__int64* v13; // rcx
	int* v14; // rax
	__int64 v15; // rbx
	int* v16; // rax

	v5 = a3;
	v6 = sub_14018B280(224i64, 0);
	if (v6)
	{
		v7 = *(_DWORD*)(a1 + 352);
		v8 = *(_QWORD*)(a1 + 32);
		*(_DWORD*)(a1 + 352) = v7 + 1;
		v9 = sub_14014FEA0((__int64)v6, v8, v7, a2);
	}
	else
	{
		v9 = 0i64;
	}
	v10 = sub_14018B280(72i64, 0);
	v11 = v10;
	if (v10)
	{
		*(_QWORD*)v10 = 0i64;
		*((_QWORD*)v10 + 1) = v9;
		v10[4] = v5;
		sub_1401095E0((__int64)(v10 + 6));
	}
	else
	{
		v11 = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 312);
	if (v12)
	{
		v13 = *(__int64**)(v12 + 8 * v5);
		if (v13)
			sub_1400C6AB0(v13);
	}
	if (!*(_QWORD*)(a1 + 312))
	{
		v14 = sub_14018B280(64i64, 0);
		*(_QWORD*)(a1 + 312) = v14;
		*(_QWORD*)v14 = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 16i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 24i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 32i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 40i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 48i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 312) + 56i64) = 0i64;
	}
	*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8 * v5) = v11;
	v15 = *(_QWORD*)(a1 + 304);
	v16 = sub_14018B280(24i64, 0);
	if (v16 != (int*)-16i64)
		*((_QWORD*)v16 + 2) = v11;
	*(_QWORD*)v16 = v15;
	*((_QWORD*)v16 + 1) = *(_QWORD*)(v15 + 8);
	**(_QWORD**)(v15 + 8) = v16;
	*(_QWORD*)(v15 + 8) = v16;
	return *(unsigned int*)(v9 + 4);
}

