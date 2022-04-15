//----- (000000014079B630) ----------------------------------------------------
__int64 __fastcall sub_14079B630(__int64* a1, int* a2, __int64** a3, __int64 a4)
{
	__int64 v8; // r13
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // rdi
	_QWORD* v14; // rbx
	__int64 v15; // rax
	unsigned __int64 v16; // rdi
	int** v17; // rbx
	int* v18; // rax
	int* v19; // rcx
	__int64 v20; // rcx
	__int64 v22; // [rsp+20h] [rbp-38h] BYREF
	__int64 v23; // [rsp+28h] [rbp-30h]

	if (!a2 || !a3 || !a4)
		return 2147500035i64;
	v8 = *a1;
	v9 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v9;
		while (*((_WORD*)a2 + v9));
	}
	v10 = sub_14018B280(2 * v9 + 18, 0);
	if (v10)
	{
		*((_QWORD*)v10 + 1) = v9;
		*(_QWORD*)v10 = off_140B55060;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = v10 + 4;
	v12 = 2 * v9;
	sub_1407DB590(v10 + 4, a2, v12);
	*(_WORD*)((char*)v11 + v12) = 0;
	*a1 = (__int64)v11;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v22 = *a1;
	v23 = *(_QWORD*)(v22 - 8);
	v13 = (*(__int64(__fastcall**)(__int64*))(a4 + 24))(&v22);
	v14 = *(_QWORD**)(*(_QWORD*)(a4 + 16) + 8 * (v13 % *(_QWORD*)(a4 + 8)));
	if (v14)
	{
		while (v13 != *v14 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a4 + 32))(&v22, v14 + 2))
		{
			v14 = (_QWORD*)v14[1];
			if (!v14)
				goto LABEL_15;
		}
		if (v14 != (_QWORD*)-32i64)
			return 2147500036i64;
	}
LABEL_15:
	if (!a1[1])
	{
		a1[1] = (__int64)a3;
		a1[2] = (__int64)*a3;
		*a3 = a1;
		v15 = a1[2];
		if (v15)
			*(_QWORD*)(v15 + 8) = a1 + 2;
	}
	if (*(_QWORD*)a4 == *(_QWORD*)(a4 + 8))
		sub_1400290D0(a4);
	v16 = (*(__int64(__fastcall**)(__int64*))(a4 + 24))(&v22);
	v17 = (int**)(*(_QWORD*)(a4 + 16) + 8 * (v16 % *(_QWORD*)(a4 + 8)));
	v18 = sub_14018B280(40i64, 0);
	if (v18)
	{
		v19 = *v17;
		*(_QWORD*)v18 = v16;
		*((_QWORD*)v18 + 1) = v19;
		*((_QWORD*)v18 + 2) = v22;
		v20 = v23;
		*((_QWORD*)v18 + 4) = a1;
		*((_QWORD*)v18 + 3) = v20;
		*v17 = v18;
	}
	else
	{
		*v17 = 0i64;
	}
	++* (_QWORD*)a4;
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

