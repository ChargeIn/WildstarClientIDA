//----- (0000000140379B70) ----------------------------------------------------
__int64 __fastcall sub_140379B70(__int64 a1, int** a2)
{
	__int64 v5; // rax
	int* v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned __int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax
	_QWORD* i; // rdi
	void(__fastcall * **v13)(_QWORD); // rcx
	int v14[6]; // [rsp+20h] [rbp-18h] BYREF

	if (!a2)
		return 2147942487i64;
	if (!*(_DWORD*)(a1 + 1112))
	{
		v5 = *(_QWORD*)a1;
		v14[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(v5 + 32))(a1, v14);
		sub_140377F70(a1);
	}
	v6 = sub_14018B280(32i64, 0);
	if (v6)
	{
		*(_QWORD*)v6 = off_140B787C0;
		v6[6] = 1;
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 1120);
	if (v7)
	{
		v8 = *((_QWORD*)v6 + 1);
		do
		{
			*((_QWORD*)v6 + 1) = ++v8;
			v7 = *(_QWORD*)(v7 + 40);
		} while (v7);
	}
	v9 = *((_QWORD*)v6 + 1);
	if (v9)
	{
		v10 = 8 * v9;
		if (!is_mul_ok(v9, 8ui64))
			v10 = -1i64;
		v11 = sub_14018B280(v10, 0);
	}
	else
	{
		v11 = 0i64;
	}
	*((_QWORD*)v6 + 2) = v11;
	*((_QWORD*)v6 + 1) = 0i64;
	for (i = *(_QWORD**)(a1 + 1120); i; i = (_QWORD*)i[5])
	{
		v13 = *(void(__fastcall****)(_QWORD))(*i + 16i64);
		*(_QWORD*)(*((_QWORD*)v6 + 2) + 8i64 * (*((_QWORD*)v6 + 1))++) = v13;
		(**v13)(v13);
	}
	*a2 = v6;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 140379B70: using guessed type int var_18[6];

