//----- (00000001402E6640) ----------------------------------------------------
__int64 __fastcall sub_1402E6640(__int64* a1, int** a2)
{
	__int64 v5; // rax
	int* v6; // rax
	int* v7; // rbx
	unsigned int v8; // esi
	unsigned __int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rdx
	void(__fastcall * **v13)(_QWORD); // rcx
	int v14[6]; // [rsp+20h] [rbp-18h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *a1;
	v14[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 48))(a1, v14);
	v6 = sub_14018B280(32i64, 1u);
	v7 = v6;
	if (!v6)
		return 2147942414i64;
	v8 = 0;
	*(_QWORD*)v6 = off_140B787C0;
	v6[6] = 1;
	*((_QWORD*)v6 + 1) = 0i64;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 1) = a1[62];
	v9 = a1[62];
	if (v9)
	{
		v10 = 8 * v9;
		if (!is_mul_ok(v9, 8ui64))
			v10 = -1i64;
		v11 = sub_14018B280(v10, 1u);
	}
	else
	{
		v11 = 0i64;
	}
	*((_QWORD*)v7 + 2) = v11;
	if (!*((_QWORD*)v7 + 1) || v11)
	{
		if (a1[62])
		{
			v12 = 0i64;
			do
			{
				*(_QWORD*)(*((_QWORD*)v7 + 2) + 8 * v12) = *(_QWORD*)(a1[63] + 8 * v12);
				v13 = *(void(__fastcall****)(_QWORD))(a1[63] + 8 * v12);
				(**v13)(v13);
				v12 = ++v8;
			} while (v8 < (unsigned __int64)a1[62]);
		}
		*a2 = v7;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v7 + 32i64))(v7, 1i64);
		return 2147942414i64;
	}
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 1402E6640: using guessed type int var_18[6];

