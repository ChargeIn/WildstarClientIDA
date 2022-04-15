//----- (0000000140282490) ----------------------------------------------------
int* __fastcall sub_140282490(__int64 a1, int* a2, __int64* a3)
{
	unsigned __int64 v6; // rbp
	int** v7; // r14
	int* result; // rax
	int* v9; // rdi
	int* v10; // rcx
	__int64 v11; // rcx

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v6 = (*(__int64(__fastcall**)(int*))(a1 + 24))(a2);
	v7 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	result = sub_14018B280(64i64, 0);
	v9 = result;
	if (result)
	{
		v10 = *v7;
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 1) = v10;
		result[4] = *a2;
		result[5] = a2[1];
		result[6] = a2[2];
		result[7] = a2[3];
		result[8] = a2[4];
		result[9] = a2[5];
		result[10] = a2[6];
		result[11] = a2[7];
		result[12] = a2[8];
		result = (int*)(unsigned int)a2[9];
		v9[13] = (int)result;
		v11 = *a3;
		*((_QWORD*)v9 + 7) = *a3;
		if (v11)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*v7 = v9;
	}
	else
	{
		*v7 = 0i64;
	}
	++* (_QWORD*)a1;
	return result;
}

