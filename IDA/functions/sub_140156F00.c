//----- (0000000140156F00) ----------------------------------------------------
int* __fastcall sub_140156F00(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	int* v2; // r8
	int* result; // rax
	int* v6; // rcx
	__int64 v7; // rbx

	v2 = *(int**)(a1 + 56);
	result = *(int**)v2;
	if (*(int**)v2 == v2)
		goto LABEL_5;
	do
	{
		if (*((void(__fastcall****)(_QWORD))result + 2) == a2)
			break;
		result = *(int**)result;
	} while (result != v2);
	if (result == v2)
	{
	LABEL_5:
		v6 = *(int**)(a1 + 88);
		result = *(int**)v6;
		if (*(int**)v6 == v6)
			goto LABEL_9;
		do
		{
			if (*((void(__fastcall****)(_QWORD))result + 2) == a2)
				break;
			result = *(int**)result;
		} while (result != v6);
		if (result == v6)
		{
		LABEL_9:
			(**a2)(a2);
			v7 = *(_QWORD*)(a1 + 88);
			result = sub_14018B280(24i64, 0);
			if (result != (int*)-16i64)
				*((_QWORD*)result + 2) = a2;
			*(_QWORD*)result = v7;
			*((_QWORD*)result + 1) = *(_QWORD*)(v7 + 8);
			**(_QWORD**)(v7 + 8) = result;
			*(_QWORD*)(v7 + 8) = result;
		}
	}
	return result;
}

