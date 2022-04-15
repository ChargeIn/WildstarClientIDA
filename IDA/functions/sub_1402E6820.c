//----- (00000001402E6820) ----------------------------------------------------
__int64 __fastcall sub_1402E6820(__int64 a1, __int64 a2, __int64 a3, void(__fastcall*** a4)(_QWORD))
{
	_QWORD* v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned __int64 v8; // rbp
	int** v9; // rsi
	int* v10; // rax
	int* v11; // rcx
	__int64 v12; // rcx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	__int64 v15; // [rsp+28h] [rbp-10h]

	*(_QWORD*)a1 = off_140B635C0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
	*(_QWORD*)(a1 + 24) = a3;
	if (a3)
		_InterlockedIncrement((volatile signed __int32*)(a3 + 12));
	*(_QWORD*)(a1 + 32) = a4;
	(**a4)(a4);
	v5 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 80i64);
	if (!*(_QWORD*)(a1 + 40))
	{
		*(_QWORD*)(a1 + 40) = v5;
		*(_QWORD*)(a1 + 48) = *v5;
		*v5 = a1;
		v6 = *(_QWORD*)(a1 + 48);
		if (v6)
			*(_QWORD*)(v6 + 40) = a1 + 48;
	}
	v7 = *(_QWORD*)(a1 + 16);
	v14 = *(_QWORD*)(a1 + 24);
	v15 = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(v7 + 88) == *(_QWORD*)(v7 + 96))
		sub_1400290D0(v7 + 88);
	v8 = (*(__int64(__fastcall**)(__int64*))(v7 + 112))(&v14);
	v9 = (int**)(*(_QWORD*)(v7 + 104) + 8 * (v8 % *(_QWORD*)(v7 + 96)));
	v10 = sub_14018B280(40i64, 0);
	if (v10)
	{
		v11 = *v9;
		*(_QWORD*)v10 = v8;
		*((_QWORD*)v10 + 1) = v11;
		*((_QWORD*)v10 + 2) = v14;
		v12 = v15;
		*((_QWORD*)v10 + 4) = a1;
		*((_QWORD*)v10 + 3) = v12;
	}
	*v9 = v10;
	++* (_QWORD*)(v7 + 88);
	return a1;
}
// 140B635C0: using guessed type __int64 (__fastcall *off_140B635C0[53])();

