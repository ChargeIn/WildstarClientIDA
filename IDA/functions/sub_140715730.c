//----- (0000000140715730) ----------------------------------------------------
__int64 __fastcall sub_140715730(__int64 a1, int a2, int* a3, _DWORD* a4)
{
	int* v8; // rax
	int* v9; // r10
	int v10; // eax
	bool v11; // zf
	int** i; // rax

	v8 = sub_14018B280(64i64, 0);
	v9 = v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*(_QWORD*)v8 = off_140B73B98;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = a3[1];
	v9[2] = a2;
	*((_QWORD*)v9 + 2) = 0i64;
	v9[3] = v10;
	if (a4 && a3[1])
		*a4 = 1;
	v11 = *((_QWORD*)v9 + 5) == 0i64;
	v9[14] = *a3;
	if (v11)
	{
		for (i = (int**)(a1 + 48); *i; i = (int**)(*i + 12))
			;
		*((_QWORD*)v9 + 5) = i;
		*((_QWORD*)v9 + 6) = 0i64;
		*i = v9;
	}
	return 0i64;
}
// 140B73B98: using guessed type __int64 (__fastcall *off_140B73B98[38])();

