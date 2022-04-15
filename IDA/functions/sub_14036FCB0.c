//----- (000000014036FCB0) ----------------------------------------------------
int* __fastcall sub_14036FCB0(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rbp
	int** v7; // rdi
	int* result; // rax
	int* v9; // rdx
	int* v10; // rcx

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v6 = (*(__int64(__fastcall**)(__int64))(a1 + 24))(a2);
	v7 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	result = sub_14018B280(48i64, 0);
	v9 = result;
	if (result)
	{
		v10 = *v7;
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 1) = v10;
		*((_QWORD*)result + 2) = *(_QWORD*)a2;
		result[6] = *(_DWORD*)(a2 + 8);
		*((_QWORD*)result + 4) = *a3;
		result = (int*)a3[1];
		*((_QWORD*)v9 + 5) = result;
		*v7 = v9;
	}
	else
	{
		*v7 = 0i64;
	}
	++* (_QWORD*)a1;
	return result;
}

