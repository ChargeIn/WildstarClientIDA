//----- (0000000140376C10) ----------------------------------------------------
__int64 __fastcall sub_140376C10(_QWORD* a1, _OWORD* a2, void(__fastcall*** a3)(_QWORD), _QWORD* a4, __int64 a5)
{
	int v8; // ecx
	int* v9; // rax
	int* v10; // rdi
	_QWORD* v11; // rcx
	__int64 v12; // rax
	_QWORD* v13; // rsi
	__int64 v14; // rax
	__int64 v16; // [rsp+28h] [rbp-10h]

	if (*a4)
	{
		if (a5)
			v8 = *(_DWORD*)(a5 + 96);
		else
			v8 = 0;
		a1[11] = *a4;
		LODWORD(v16) = v8;
		a1[12] = v16;
	}
	v9 = sub_14018B280(64i64, 0);
	v10 = v9;
	if (v9)
	{
		*((_QWORD*)v9 + 2) = 0i64;
		v9[7] = 0;
		*(_QWORD*)v9 = off_140B660C0;
		*((_OWORD*)v9 + 2) = 0i64;
		*((_OWORD*)v9 + 3) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	if (!a3)
		return 2147942487i64;
	*((_QWORD*)v10 + 1) = a1;
	*((_QWORD*)v10 + 2) = a3;
	(**a3)(a3);
	v10[6] &= ~1u;
	a1[6] = v10;
	sub_1403772E0((__int64)a1, a2);
	v11 = (_QWORD*)(a1[2] + 5080i64);
	if (!a1[162])
	{
		a1[162] = v11;
		a1[163] = *v11;
		*v11 = a1;
		v12 = a1[163];
		if (v12)
			*(_QWORD*)(v12 + 1296) = a1 + 163;
	}
	if (a5)
	{
		a1[5] = a5;
		v13 = (_QWORD*)(a5 + 64);
		if (!a1[150])
		{
			a1[150] = v13;
			a1[151] = *v13;
			*v13 = a1;
			v14 = a1[151];
			if (v14)
				*(_QWORD*)(v14 + 1200) = a1 + 151;
		}
	}
	return 0i64;
}
// 140376C59: variable 'v16' is possibly undefined
// 140B660C0: using guessed type __int64 (__fastcall *off_140B660C0[79])();

