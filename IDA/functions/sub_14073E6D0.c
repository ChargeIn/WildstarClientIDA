//----- (000000014073E6D0) ----------------------------------------------------
__int64 __fastcall sub_14073E6D0(__int64 a1, int* a2)
{
	__int64 v5; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v10; // r15
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // rbx
	int* v16; // rax
	_WORD* v17; // rax

	if (*(_DWORD*)(a1 + 76))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 24);
	if (a2)
	{
		v6 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v6;
			while (*((_WORD*)a2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, a2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 24) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v10 = *(_QWORD*)(a1 + 48);
	if (a2)
	{
		v11 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v11;
			while (*((_WORD*)a2 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*(_QWORD*)v12 = off_140B55060;
			*((_QWORD*)v12 + 1) = v11;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		v14 = 2 * v11;
		sub_1407DB590(v12 + 4, a2, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		*(_QWORD*)(a1 + 48) = v13;
	}
	else
	{
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	v15 = *(_QWORD*)(a1 + 32);
	v16 = sub_14018B280(18i64, 0);
	if (v16)
	{
		*(_QWORD*)v16 = off_140B55060;
		*((_QWORD*)v16 + 1) = 0i64;
	}
	else
	{
		v16 = 0i64;
	}
	v17 = v16 + 4;
	*v17 = 0;
	*(_QWORD*)(a1 + 32) = v17;
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	*(_DWORD*)(a1 + 96) = 1;
	sub_14073E320(a1);
	return 1i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

