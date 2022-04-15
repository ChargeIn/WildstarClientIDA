//----- (00000001402E59B0) ----------------------------------------------------
__int64 __fastcall sub_1402E59B0(__int64 a1, unsigned __int64 a2, unsigned int* a3, void(__fastcall*** a4)(_QWORD))
{
	__int64 result; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rsi
	unsigned int* v13; // rdi
	unsigned __int64 v14; // rbx
	unsigned int* v15; // rcx
	unsigned __int64 v16; // rbx
	__int64 v17; // rdi
	unsigned __int64 v18; // r8
	__int64 v19; // rdx

	if (*(_QWORD*)(a1 + 488) || a2 < 4)
		return 2147500037i64;
	v9 = *a3;
	*(_QWORD*)(a1 + 480) = v9;
	v10 = 8 * v9;
	if (!is_mul_ok(v9, 8ui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 1u);
	*(_QWORD*)(a1 + 488) = v11;
	if (!v11)
		return 2147942414i64;
	sub_1407E4830(v11, 0i64, 8i64 * *(_QWORD*)(a1 + 480));
	v12 = 0i64;
	v13 = a3 + 1;
	v14 = a2 - 4;
	if (!*(_QWORD*)(a1 + 480))
		return v14 != 0 ? 0x80004005 : 0;
	while (v14 >= 4)
	{
		v15 = v13;
		v16 = v14 - 4;
		v17 = (__int64)(v13 + 1);
		v18 = 12i64 * *v15;
		if (v16 < v18)
			break;
		v19 = v17;
		v14 = v16 - v18;
		v13 = (unsigned int*)(v18 + v17);
		result = sub_1402DE460((__int64)v15, v19, a4, (int**)(*(_QWORD*)(a1 + 488) + 8 * v12));
		if ((int)result < 0)
			return result;
		if ((unsigned __int64)++v12 >= *(_QWORD*)(a1 + 480))
			return v14 != 0 ? 0x80004005 : 0;
	}
	return 2147500037i64;
}

