//----- (00000001402E5CC0) ----------------------------------------------------
__int64 __fastcall sub_1402E5CC0(__int64* a1, int** a2)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int64 v7; // rdi
	unsigned __int64 v8; // r14
	__int64 v9; // r12
	int* v10; // rbx
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // r8
	_QWORD* v14; // rbp
	__int64* v15; // rsi
	int v16[4]; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v17; // [rsp+68h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *a1;
	v16[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 48))(a1, v16);
	v6 = a1[57];
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	if (v6)
	{
		v8 = (unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6) >> 2;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[57] + 24i64))(a1[57]);
	}
	v10 = sub_14018B280(32i64, 1u);
	if (!v10)
		return 2147942414i64;
	*(_QWORD*)v10 = off_140B787C0;
	v10[6] = 1;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 1) = v8;
	if (v8)
	{
		v11 = 8 * v8;
		if (!is_mul_ok(v8, 8ui64))
			v11 = -1i64;
		v12 = sub_14018B280(v11, 9u);
	}
	else
	{
		v12 = 0i64;
	}
	v13 = *((_QWORD*)v10 + 1);
	*((_QWORD*)v10 + 2) = v12;
	if (v13 && !v12)
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v10 + 32i64))(v10, 1i64);
		return 2147942414i64;
	}
	sub_1407E4830(v12, 0i64, 8 * v13);
	*((_QWORD*)v10 + 1) = 0i64;
	if (v8)
	{
		do
		{
			v14 = (_QWORD*)a1[2];
			v15 = (__int64*)(*((_QWORD*)v10 + 2) + 8i64 * *((_QWORD*)v10 + 1));
			if (v15
				&& (unsigned int)sub_1402DFF20((__int64*)a1[2], *(_DWORD*)(v9 + 4 * v7), &v17)
				&& (int)sub_1402E0020(v14, v17, v15) >= 0)
			{
				++* ((_QWORD*)v10 + 1);
			}
			++v7;
		} while (v7 < v8);
	}
	*a2 = v10;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 1402E5CC0: using guessed type int var_38[4];

