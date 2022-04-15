//----- (00000001407159B0) ----------------------------------------------------
__int64 __fastcall sub_1407159B0(__int64 a1, int a2, int* a3, _DWORD* a4)
{
	__int64 v5; // rcx
	int* v10; // rax
	int* v11; // rcx
	int v12; // eax
	int** i; // rax

	v5 = *(_QWORD*)(a1 + 40);
	if (v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5) == 20 && !*(_QWORD*)(a1 + 48))
		return 1i64;
	v10 = sub_14018B280(56i64, 0);
	v11 = v10;
	if (v10)
	{
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v10 + 4) = 0i64;
		*((_QWORD*)v10 + 5) = 0i64;
		*((_QWORD*)v10 + 6) = 0i64;
		*(_QWORD*)v10 = off_140B73BE0;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = *a3;
	v11[2] = a2;
	*((_QWORD*)v11 + 2) = 0i64;
	v11[3] = v12;
	if (a4 && *a3)
		*a4 = 1;
	if (!*((_QWORD*)v11 + 5))
	{
		for (i = (int**)(a1 + 48); *i; i = (int**)(*i + 12))
			;
		*((_QWORD*)v11 + 5) = i;
		*((_QWORD*)v11 + 6) = 0i64;
		*i = v11;
	}
	return 0i64;
}
// 140B73BE0: using guessed type __int64 (__fastcall *off_140B73BE0[29])();

