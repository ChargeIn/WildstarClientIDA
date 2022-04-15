//----- (0000000140715350) ----------------------------------------------------
__int64 __fastcall sub_140715350(__int64 a1, unsigned int a2, _DWORD* a3, _DWORD* a4)
{
	__int64 v4; // rax
	int* v5; // rbx
	int** v6; // rdi
	__int64 i; // rax
	int* v11; // rax
	bool v12; // zf
	int v13; // eax
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 48);
	v5 = *(int**)(a1 + 40);
	v6 = (int**)(a1 + 48);
	if (v4)
	{
		v5 = *(int**)(a1 + 48);
		for (i = *(_QWORD*)(v4 + 48); i; i = *(_QWORD*)(i + 48))
			v5 = (int*)i;
	}
	if (!a3[3] || !v5 || (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5) != 13)
	{
		v11 = sub_14018B280(104i64, 0);
		v5 = v11;
		if (v11)
		{
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 4) = 0i64;
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 6) = 0i64;
			*(_QWORD*)v11 = off_140B73BF8;
			*((_QWORD*)v11 + 7) = 0i64;
			v11[16] = 0;
			*((_QWORD*)v11 + 9) = 0i64;
			*((_QWORD*)v11 + 10) = 0i64;
		}
		else
		{
			v5 = 0i64;
		}
		v12 = *((_QWORD*)v5 + 5) == 0i64;
		v13 = a3[3];
		v5[2] = a2;
		v5[3] = v13;
		*((_QWORD*)v5 + 2) = 0i64;
		if (v12)
		{
			for (; *v6; v6 = (int**)(*v6 + 12))
				;
			*((_QWORD*)v5 + 5) = v6;
			*((_QWORD*)v5 + 6) = 0i64;
			*v6 = v5;
		}
	}
	sub_140785050((unsigned int*)v5 + 14, a2, a3);
	result = 0i64;
	if (a4)
	{
		if (a3[3])
			*a4 = 1;
	}
	return result;
}
// 140B73BF8: using guessed type __int64 (__fastcall *off_140B73BF8[26])();

