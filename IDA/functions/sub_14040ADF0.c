//----- (000000014040ADF0) ----------------------------------------------------
int* __fastcall sub_14040ADF0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int64 v6; // rbp
	int** v7; // rdi
	int* result; // rax
	int* v9; // rcx

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v6 = (*(__int64(__fastcall**)(_QWORD*))(a1 + 24))(a2);
	v7 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	result = sub_14018B280(32i64, 0);
	if (result)
	{
		v9 = *v7;
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 1) = v9;
		*((_QWORD*)result + 2) = *a2;
		*((_QWORD*)result + 3) = *a3;
		*v7 = result;
	}
	else
	{
		*v7 = 0i64;
	}
	++* (_QWORD*)a1;
	return result;
}

