//----- (0000000140342E70) ----------------------------------------------------
__int64 __fastcall sub_140342E70(void(__fastcall*** a1)(_QWORD), __int64* a2, __int64 a3, __int64 a4)
{
	int* v9; // rax
	int* v10; // rdi
	int v11; // esi
	int* v12; // rax
	__int64 v13; // rbx
	int v14; // edi

	if (!a2)
		return 2147942487i64;
	if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 64i64))(a3) & 1) != 0)
	{
		v9 = sub_14018B280(32i64, 0);
		v10 = v9;
		if (v9)
		{
			*(_QWORD*)v9 = off_140B65260;
			v9[7] = 1;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 1) = 0i64;
			v9[6] = 0;
		}
		else
		{
			v10 = 0i64;
		}
		if (*((_QWORD*)v10 + 2) || !a1)
		{
			v11 = -2147024809;
		}
		else
		{
			v11 = sub_140349010((int**)v10 + 2, a3, a4);
			if (v11 >= 0)
			{
				(**a1)(a1);
				*((_QWORD*)v10 + 1) = a1;
				*a2 = (__int64)v10;
				return 0i64;
			}
		}
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v10 + 80i64))(v10, 1i64);
		return (unsigned int)v11;
	}
	else
	{
		v12 = sub_14018B280(184i64, 0);
		if (v12)
			v13 = sub_140348380((__int64)v12);
		else
			v13 = 0i64;
		v14 = sub_1403485A0(v13, a3, a4, a1);
		if (v14 < 0)
		{
			if (v13)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 80i64))(v13, 1i64);
		}
		else
		{
			*a2 = v13;
		}
		return (unsigned int)v14;
	}
}
// 140B65260: using guessed type __int64 (__fastcall *off_140B65260[38])();

