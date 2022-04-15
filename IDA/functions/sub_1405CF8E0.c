//----- (00000001405CF8E0) ----------------------------------------------------
__int64 __fastcall sub_1405CF8E0(__int64 a1, __int64 a2)
{
	int* v4; // rbx
	__int64 v5; // r8
	__int64 result; // rax
	__int64 v7; // rcx
	int** v8; // rcx
	int** v9; // rdx

	v4 = sub_14018B280(32i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = 0i64;
		v4[2] = 0;
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = *(unsigned int*)(a2 + 8);
	v4[2] = *(_DWORD*)(a2 + 4) + 500;
	result = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(
		qword_140C65848,
		v4,
		v5);
	v7 = *(_QWORD*)(a1 + 784);
	if (v7)
	{
		if (!*((_QWORD*)v4 + 2))
		{
			v8 = (int**)(v7 + 24);
			*((_QWORD*)v4 + 2) = v8;
			*((_QWORD*)v4 + 3) = *v8;
			*v8 = v4;
			result = *((_QWORD*)v4 + 3);
			if (result)
				*(_QWORD*)(result + 16) = v4 + 6;
		}
	}
	else
	{
		v9 = (int**)(a1 + 776);
		if (!*((_QWORD*)v4 + 2))
		{
			*((_QWORD*)v4 + 2) = v9;
			*((_QWORD*)v4 + 3) = *v9;
			*v9 = v4;
			result = *((_QWORD*)v4 + 3);
			if (result)
				*(_QWORD*)(result + 16) = v4 + 6;
		}
	}
	*(_QWORD*)(a1 + 784) = v4;
	return result;
}
// 140C65848: using guessed type __int64 qword_140C65848;

