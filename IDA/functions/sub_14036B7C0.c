//----- (000000014036B7C0) ----------------------------------------------------
__int64 __fastcall sub_14036B7C0(__int64 a1, int** a2)
{
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned __int64 i; // rsi
	int* v8; // rdi
	__int64 v9; // rax
	__int64 j; // rdx
	_DWORD* v11; // rcx

	if (!a2)
		return 2147942487i64;
	v5 = *(_QWORD*)(a1 + 2336);
	v6 = 0i64;
	for (i = 0i64; v5; ++i)
		v5 = *(_QWORD*)(v5 + 1424);
	v8 = sub_14018B280(32i64, 0);
	if (v8)
	{
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = 0i64;
		*(_QWORD*)v8 = off_140B65FF8;
		*((_QWORD*)v8 + 3) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	*((_QWORD*)v8 + 2) = i;
	v9 = 8 * i;
	if (!is_mul_ok(i, 8ui64))
		v9 = -1i64;
	*((_QWORD*)v8 + 3) = sub_14018B280(v9, 0);
	for (j = *(_QWORD*)(a1 + 2336); j; j = *(_QWORD*)(j + 1424))
	{
		v11 = (_DWORD*)(v6 + *((_QWORD*)v8 + 3));
		v6 += 8i64;
		*v11 = *(_DWORD*)(j + 8);
		v11[1] = *(_DWORD*)(j + 12);
	}
	*a2 = v8;
	return 0i64;
}
// 140B65FF8: using guessed type __int64 (__fastcall *off_140B65FF8[4])();

