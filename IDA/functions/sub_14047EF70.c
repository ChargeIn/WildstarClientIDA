//----- (000000014047EF70) ----------------------------------------------------
__int64 __fastcall sub_14047EF70(__int64 a1, int a2)
{
	unsigned __int64 v3; // rcx
	__int64 result; // rax
	_DWORD* i; // r8
	unsigned __int64 v6; // rdi
	int* v7; // rbx
	unsigned __int64 v8; // rbp
	__int64 v9; // r15
	int* v10; // rdx
	__int64 v11; // rcx

	v3 = *(_QWORD*)(a1 + 13856);
	result = 0i64;
	if (!v3)
		return result;
	for (i = *(_DWORD**)(a1 + 13848); *i != a2; ++i)
	{
		if (++result >= v3)
			return result;
	}
	v6 = v3 - 1;
	result = (__int64)sub_1407DB590(
		(int*)(*(_QWORD*)(a1 + 13848) + 4 * result),
		(int*)(*(_QWORD*)(a1 + 13848) + 4 * result + 4),
		4 * (v3 - 1 - result));
	v7 = *(int**)(a1 + 13848);
	if (v6)
	{
		if (!v7)
		{
			v8 = v6;
			v9 = 4 * v6 + 16;
			goto LABEL_12;
		}
		if (v6 > *((_QWORD*)v7 - 1))
		{
			v8 = (unsigned __int64)(sub_14018A3E0(4 * v6 + 16) - 16) >> 2;
			v9 = 4 * v8 + 16;
			result = (**((__int64(__fastcall***)(__int64, __int64))v7 - 2))((__int64)(v7 - 4), v9);
			if ((_DWORD)result)
			{
				*((_QWORD*)v7 - 1) = v8;
				goto LABEL_15;
			}
		LABEL_12:
			result = (__int64)sub_14018B280(v9, 0);
			if (result)
			{
				*(_QWORD*)(result + 8) = v8;
				*(_QWORD*)result = off_140B55060;
			}
			v7 = (int*)(result + 16);
		}
	}
LABEL_15:
	v10 = *(int**)(a1 + 13848);
	if (v10 != v7)
	{
		result = (__int64)sub_1407DB590(v7, v10, 4 * v6);
		v11 = *(_QWORD*)(a1 + 13848);
		if (v11)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		*(_QWORD*)(a1 + 13848) = v7;
	}
	*(_QWORD*)(a1 + 13856) = v6;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

