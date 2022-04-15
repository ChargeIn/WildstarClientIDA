//----- (0000000140350A20) ----------------------------------------------------
__int64 __fastcall sub_140350A20(__int64 a1, __int64 a2, int a3, int** a4)
{
	__int64 result; // rax
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rcx
	int* v11; // rax
	int* v12; // rax
	int* v13; // rbx
	int v14; // esi

	if (!a4)
		return 2147942487i64;
	if (a3)
	{
		v7 = a1 + 8i64 * (int)a2;
		v8 = *(int**)(v7 + 688);
		if (v8)
		{
			*a4 = v8;
			(***(void(__fastcall****)(_QWORD))(v7 + 688))(*(_QWORD*)(v7 + 688));
			return 1i64;
		}
		else
		{
			result = sub_140350A20(a1, a2, 0i64, v7 + 688);
			if ((int)result >= 0)
			{
				*a4 = *(int**)(v7 + 688);
				(***(void(__fastcall****)(_QWORD))(v7 + 688))(*(_QWORD*)(v7 + 688));
				return 0i64;
			}
		}
		return result;
	}
	v9 = *(int*)(a1 + 4i64 * (int)a2 + 568);
	v10 = a1 + 8 * v9;
	v11 = *(int**)(v10 + 616);
	if (v11)
	{
		*a4 = v11;
		(***(void(__fastcall****)(_QWORD))(v10 + 616))(*(_QWORD*)(v10 + 616));
		return 0i64;
	}
	v12 = sub_14018B280(104i64, 0);
	v13 = v12;
	if (v12)
	{
		*(_QWORD*)v12 = off_140B65A50;
		*((_QWORD*)v12 + 7) = 0i64;
		*((_QWORD*)v12 + 8) = 0i64;
		*((_QWORD*)v12 + 9) = 0i64;
		*((_QWORD*)v12 + 10) = 0i64;
		*((_QWORD*)v12 + 5) = 0i64;
		v12[12] = 0;
		*((_QWORD*)v12 + 11) = 0i64;
		*((_QWORD*)v12 + 12) = 0i64;
		v12[2] = 1;
		*((_QWORD*)v12 + 2) = a1;
		++* (_DWORD*)(a1 + 12);
		*((_QWORD*)v12 + 4) = 0i64;
	}
	else
	{
		v13 = 0i64;
	}
	v14 = sub_1403722D0((__int64)v13, v9);
	if (v14 >= 0)
	{
		*a4 = v13;
		return 0i64;
	}
	if (v13)
	{
		sub_1403721F0(v13);
		sub_14018B900((__int64)v13, 0);
	}
	return (unsigned int)v14;
}
// 140B65A50: using guessed type __int64 (__fastcall *off_140B65A50[16])();

