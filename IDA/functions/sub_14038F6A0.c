//----- (000000014038F6A0) ----------------------------------------------------
__int64 __fastcall sub_14038F6A0(__int64 a1, __int64 a2, _DWORD* a3)
{
	_QWORD* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rbp
	int** v8; // r14
	int* v9; // rax
	int* v10; // rcx

	*(_QWORD*)a1 = off_140B65F70;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 24) = *a3;
	*(_DWORD*)(a1 + 28) = a3[1];
	*(_QWORD*)(a1 + 32) = 0i64;
	v4 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 2352i64);
	if (!*(_QWORD*)(a1 + 96))
	{
		*(_QWORD*)(a1 + 96) = v4;
		*(_QWORD*)(a1 + 104) = *v4;
		*v4 = a1;
		v5 = *(_QWORD*)(a1 + 104);
		if (v5)
			*(_QWORD*)(v5 + 96) = a1 + 104;
	}
	v6 = *(_QWORD*)(a1 + 16) + 2360i64;
	if (*(_QWORD*)v6 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 2368i64))
		sub_1400290D0(*(_QWORD*)(a1 + 16) + 2360i64);
	v7 = (*(__int64(__fastcall**)(__int64))(v6 + 24))(a1 + 24);
	v8 = (int**)(*(_QWORD*)(v6 + 16) + 8 * (v7 % *(_QWORD*)(v6 + 8)));
	v9 = sub_14018B280(32i64, 0);
	if (v9)
	{
		v10 = *v8;
		*(_QWORD*)v9 = v7;
		*((_QWORD*)v9 + 1) = v10;
		v9[4] = *(_DWORD*)(a1 + 24);
		v9[5] = *(_DWORD*)(a1 + 28);
		*((_QWORD*)v9 + 3) = a1;
	}
	else
	{
		v9 = 0i64;
	}
	*v8 = v9;
	++* (_QWORD*)v6;
	return a1;
}
// 140B65F70: using guessed type __int64 (__fastcall *off_140B65F70[21])();

