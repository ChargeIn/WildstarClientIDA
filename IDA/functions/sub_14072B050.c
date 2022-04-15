//----- (000000014072B050) ----------------------------------------------------
int* __fastcall sub_14072B050(__int64 a1)
{
	unsigned int v2; // edx
	int* result; // rax
	__int64 v4; // rbx
	int* v5; // rax
	__int64 v6; // rbx

	v2 = 0;
	result = (int*)(a1 + 32);
	while (*result != 2)
	{
		++v2;
		++result;
		if (v2 >= 3)
			return result;
	}
	result = (int*)qword_140C4B308;
	if ((_DWORD)qword_140C4B308 && *(_DWORD*)(a1 + 1460) != (_DWORD)qword_140C4B308)
	{
		v4 = *(_QWORD*)(a1 + 1472);
		v5 = sub_14018B280(24i64, 0);
		if (v5 != (int*)-16i64)
			*((_QWORD*)v5 + 2) = 0i64;
		*(_QWORD*)v5 = v4;
		*((_QWORD*)v5 + 1) = *(_QWORD*)(v4 + 8);
		**(_QWORD**)(v4 + 8) = v5;
		*(_QWORD*)(v4 + 8) = v5;
		v6 = *(_QWORD*)(a1 + 1472);
		result = sub_14018B280(24i64, 0);
		if (result != (int*)-16i64)
			*((_QWORD*)result + 2) = qword_140C4B308;
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 1) = *(_QWORD*)(v6 + 8);
		**(_QWORD**)(v6 + 8) = result;
		*(_QWORD*)(v6 + 8) = result;
	}
	return result;
}
// 140C4B308: using guessed type __int64 qword_140C4B308;

