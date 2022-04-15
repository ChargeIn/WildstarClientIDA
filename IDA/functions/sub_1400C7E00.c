//----- (00000001400C7E00) ----------------------------------------------------
int* __fastcall sub_1400C7E00(__int64 a1, __int64 a2, char a3)
{
	int* result; // rax
	int* i; // rcx
	int* v8; // rdx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	int* v11; // rcx
	int* v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // rbx

	result = *(int**)(a1 + 560);
	for (i = *(int**)result; i != result; i = *(int**)i)
	{
		if (*((_QWORD*)i + 2) == a2)
			break;
	}
	if (i != result)
	{
		v8 = *(int**)i;
		v9 = (_QWORD*)*((_QWORD*)i + 1);
		*v9 = *(_QWORD*)i;
		*((_QWORD*)v8 + 1) = v9;
		sub_14018B900((__int64)i, 0);
		v10 = **(_QWORD**)(a1 + 560);
		result = sub_14018B280(24i64, 0);
		if (result != (int*)-16i64)
			*((_QWORD*)result + 2) = a2;
		*(_QWORD*)result = v10;
		*((_QWORD*)result + 1) = *(_QWORD*)(v10 + 8);
		**(_QWORD**)(v10 + 8) = result;
		*(_QWORD*)(v10 + 8) = result;
	}
	if (a3)
	{
		result = *(int**)(a1 + 576);
		v11 = *(int**)result;
		if (*(int**)result != result)
		{
			do
			{
				if (*((_QWORD*)v11 + 2) == a2)
					break;
				v11 = *(int**)v11;
			} while (v11 != result);
			if (v11 != result)
			{
				v12 = *(int**)v11;
				v13 = (_QWORD*)*((_QWORD*)v11 + 1);
				*v13 = *(_QWORD*)v11;
				*((_QWORD*)v12 + 1) = v13;
				sub_14018B900((__int64)v11, 0);
				v14 = *(_QWORD*)(a1 + 576);
				result = sub_14018B280(24i64, 0);
				if (result != (int*)-16i64)
					*((_QWORD*)result + 2) = a2;
				*(_QWORD*)result = v14;
				*((_QWORD*)result + 1) = *(_QWORD*)(v14 + 8);
				**(_QWORD**)(v14 + 8) = result;
				*(_QWORD*)(v14 + 8) = result;
			}
		}
	}
	return result;
}

