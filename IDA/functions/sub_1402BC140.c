//----- (00000001402BC140) ----------------------------------------------------
__int64 __fastcall sub_1402BC140(__int64 a1, void(__fastcall*** a2)(_QWORD), int* a3, __int64 a4, int a5)
{
	__int64 v5; // rbx
	__int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax

	v5 = a4;
	if (a4 == -1)
	{
		v5 = 0i64;
		if (a3)
		{
			if (*(_WORD*)a3)
			{
				do
					++v5;
				while (*((_WORD*)a3 + v5));
			}
		}
	}
	if (!a2 || !a3 && v5)
		return 2147942487i64;
	if (*(void(__fastcall****)(_QWORD))(a1 + 24) != a2)
	{
		(**a2)(a2);
		v9 = *(_QWORD*)(a1 + 24);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 24) = a2;
	}
	v10 = 2 * (v5 + 1);
	if (!is_mul_ok(v5 + 1, 2ui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 0);
	*(_QWORD*)(a1 + 32) = v11;
	sub_1407DB590(v11, a3, 2 * v5);
	*(_WORD*)(2 * v5 + *(_QWORD*)(a1 + 32)) = 0;
	*(_QWORD*)(a1 + 40) = v5;
	*(_DWORD*)(a1 + 56) = a5;
	return 0i64;
}

