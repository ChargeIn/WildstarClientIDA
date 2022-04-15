//----- (0000000140297180) ----------------------------------------------------
__int64 __fastcall sub_140297180(__int64 a1, int* a2)
{
	__int64 result; // rax
	volatile signed __int32* v4; // rcx
	__int64 v5; // rdi
	unsigned __int64 v6; // rbp
	int** v7; // r14
	int* v8; // rax
	int* v9; // rcx
	__int64 v10; // rcx
	__int64* v11; // rcx
	__int64 v12; // rax

	*(_QWORD*)(a1 + 24) = sub_14018E9C0(a2);
	result = sub_140297290(a1, 2);
	if ((int)result >= 0)
	{
		v4 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 1012i64);
		_InterlockedIncrement(v4);
		_InterlockedExchangeAdd(v4 + 1, *(_DWORD*)(a1 + 56));
		_InterlockedIncrement(v4 + 2);
		_InterlockedExchangeAdd(v4 + 3, *(_DWORD*)(a1 + 56));
		v5 = *(_QWORD*)(a1 + 16) + 7488i64;
		if (*(_QWORD*)v5 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 7496i64))
			sub_1400290D0(*(_QWORD*)(a1 + 16) + 7488i64);
		v6 = (*(__int64(__fastcall**)(__int64))(v5 + 24))(a1 + 24);
		v7 = (int**)(*(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8)));
		v8 = sub_14018B280(32i64, 0);
		if (v8)
		{
			v9 = *v7;
			*(_QWORD*)v8 = v6;
			*((_QWORD*)v8 + 1) = v9;
			v10 = *(_QWORD*)(a1 + 24);
			*((_QWORD*)v8 + 3) = a1;
			*((_QWORD*)v8 + 2) = v10;
		}
		*v7 = v8;
		++* (_QWORD*)v5;
		v11 = (__int64*)(*(_QWORD*)(a1 + 16) + 7256i64);
		if (!*(_QWORD*)(a1 + 120))
		{
			*(_QWORD*)(a1 + 120) = v11;
			*(_QWORD*)(a1 + 128) = *v11;
			*v11 = a1;
			v12 = *(_QWORD*)(a1 + 128);
			if (v12)
				*(_QWORD*)(v12 + 120) = a1 + 128;
		}
		return 0i64;
	}
	return result;
}

